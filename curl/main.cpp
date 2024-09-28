#include <stdio.h>
#include <curl/curl.h>
//#pragma comment(lib,"curllib-bcb.lib") // Для C++Builder
//#pragma comment(lib,"curllib.lib")    // для VC++
//---------------------------------------------------------------------------
int main()
{
    CURL*  curl_handle = curl_easy_init();
    if(curl_handle)
    {
        // задаем  url адрес
        curl_easy_setopt(curl_handle, CURLOPT_URL, "https://www.cyberforum.ru");
        curl_easy_setopt(curl_handle, CURLOPT_USERAGENT,"Mozilla/5.0 (Windows NT 6.1; rv:16.0) Gecko/20100101 Firefox/16.0");

        // выполняем запрос
        //CURLcode res = 
        curl_easy_perform(curl_handle);
        // закрываем дескриптор curl
        curl_easy_cleanup(curl_handle);
    }
 
    getchar();
    return 0;
}
//---------------------------------------------------------------------------