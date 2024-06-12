#https://habr.com/ru/articles/155467/
cmake_minimum_required(VERSION 3.16) # Проверка версии CMake.
									# Если версия установленой программы
									# старее указаной, произайдёт аварийный выход.
project(containerArray)			# Название проекта

#set(SOURCE_EXE main.cpp)		# Установка переменной со списком исходников для исполняемого файла
#set(SOURCE_LIB foo.cpp)			# Тоже самое, но для библиотеки

#add_library(foo STATIC ${SOURCE_LIB})	# Создание статической библиотеки с именем foo

#add_executable(main ${SOURCE_EXE})	# Создает исполняемый файл с именем main
add_executable(main main.cpp)		# Создает исполняемый файл с именем main
									# из исходника main.cpp

#target_link_libraries(main foo)		# Линковка программы с библиотекой

#include_directories(include)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED on)
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror")

#add_executable(main src/Main.cpp src/HttpServer.cpp)
#target_link_libraries(main ${PTHREAD_LIBRARY} ${PCRE_LIBRARY})