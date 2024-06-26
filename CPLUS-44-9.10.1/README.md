Мы изучили с вами механизмы выделения и освобождения памяти: поговорили о том, как можно сделать эту работу более безопасной при помощи умных указателей и идиомы *RAII*, а также как можно сократить издержки, реализовав семантику сдвига. Но даже всего этого иногда оказывается недостаточно для того, чтобы избежать ошибок.

Любая программа после создания требует тестирования и отладки. Не бывает безошибочных программ — программисты люди, а люди совершают ошибки. Для того чтобы отлаживать программы, необходимы *инструменты отладки*.

К счастью для нас, разработчиков, — таких инструментов много и на любой вкус. Однако прежде чем перейти к отладке, необходимо посмотреть, как же работают инструменты отладки.

Любая программа после компиляции представляет собой набор машинных команд. Как же среди этих команд найти исполняемые инструкции в режиме отладки? Для этого необходима дополнительная информация, которая хранится в отладочных символах.

`Отладочные символы (файлы идентификаторов, символы отладки, debug-символы или symbol files) — это специальный блок данных, генерируемый компилятором языка программирования на основе исходного кода программы на этапе сборки (линковки), который содержит в себе информацию о том, какие элементы (имена переменных, функций) и где располагаются в соответствующем бинарном исполняемом модуле. Другими словами, это карта, которая сопоставляет информацию между исходным кодом и бинарным исполняемым файлом. По умолчанию отладочные символы не генерируются при сборке, ведь они нужны именно для отладки программистами. Чтобы генерировать символы необходимо задать дополнительные флаги компиляции.`

Например, в операционной системе *Linux* для генерации отладочной информации компилятором `gcc` необходимо использовать флаги `-g`.

Причём данный флаг компиляции имеет разные уровни:
- -g0 no debug information
- -g1 minimal debug information
- -g default debug information
- -g3 maximal debug information

Тогда `gcc` генерирует дополнительную отладочную информацию по умолчанию в формате <a src=https://en.wikipedia.org/wiki/Stabs>stabs</a>.

И отладочные символы можно будет использовать в отладчике *gdb* (переносимый отладчик проекта *GNU*, который работает на многих *UNIX*-подобных системах и умеет производить отладку многих языков программирования,)

*Gdb* — это консольный отладчик, который можно подключить ко внешним *IDE* для графического интерфейса. Однако сам по себе *gdb* также может использоваться как мощный инструмент отладки.

В ОС *Linux*, чтобы скомпилировать программу с отладочной информацией, необходимо вызвать *gcc* с именем бинарного файла, затем компилируемого файла и флагами `-g`, если вы хотите скомпилировать файл *main.cpp* и назвать программу *main*, тогда вам необходимо написать в консоли: `gcc -g -o main main.cpp`.

После этого, чтобы запустить программу в режиме отладки с помощью отладчика *gdb*, выполните: `gdb main`.

Вы попадаете в меню отладчика, где вам доступны команды отладчика:
- help — gdb предоставляет онлайн-документацию. Набрав help, вы получите список тем. Затем вы можете ввести help topic, чтобы получить информацию по этой теме.
- quit — для выхода из отладчика.
- run — команда run запустит программу в режиме отладки.
- break — команда break устанавливает точку остановы вашей программы. Это место в вашей программе, где вы хотели бы временно остановить выполнение, чтобы проверить значения переменных или попытаться выяснить, где происходит сбой программы.
- delete — delete удаляет точки остановы, которые вы поставили.
- step — выполняет одну строчку кода и снова останавливает программу.
- next — как step, только без захода внутрь других методов и процедур.
- until — выполняет программу до указанной точки.

Проприетарный компилятор *Microsoft MSVC* использует флаги <a src="https://docs.microsoft.com/en-us/cpp/build/reference/debug-generate-debug-info?view=msvc-160">/debug</a> для генерации отладочной информации, тогда *MSVC* генерирует отладочные символы *pdb (program database)*, которые в свою очередь могут быть уточнены флагами <a src="https://docs.microsoft.com/en-us/cpp/build/reference/z7-zi-zi-debug-information-format?view=msvc-160">/Z</a>.

Когда отладочные символы сгенерированы, их можно использовать при отладке программ, чтобы иметь возможность ставить точки остановы и перемещаться по колстеку программы. *IDE Visual Studio* предоставляет разработчику визуальный интерфейс отладки, в котором вы можете ставить точки остановы, передвигаться по программе шагами и смотреть колстек.

# Задание 9.10.1

С помощью отладчика *gdb* на *Linux* или с помощью онлайн-компилятора *gdbonline* запустите программу в режиме отладки и найдите ошибки в коде

```
#include <climits>
#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
    cout << INT_MAX;
    int n = INT_MAX;
    int A[n];
    int i = 0;
    while (i < n)
        A[i] = rand() % 10;

    return 0;
}
```


`int A[n];`