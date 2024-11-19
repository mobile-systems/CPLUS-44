#include <stdio.h>
#include <curl/curl.h>
#include<iostream>

using namespace std;
//#pragma comment(lib,"curllib-bcb.lib") // Для C++Builder
//#pragma comment(lib,"curllib.lib")    // для VC++
//---------------------------------------------------------------------------
int main(int argc, char* argv[])
{
        //setlocale(LC_ALL, "ru_RU.UTF-8");
    setlocale(LC_ALL, "");
    if (argc != 3)
    {
        cout << "////" << endl;
        return 1;
    }
    string moexLogin = argv[1];
    string moexPassword = argv[2];
    
    CURLcode res;
    struct curl_slist *cookies;
    struct curl_slist *nc;
    int i;

    CURL*  curl_handle = curl_easy_init();
    if(curl_handle)
    {
        /* Set the username and password */
        cout << "Login: " << moexLogin << "Password: " << moexPassword << endl;
        curl_easy_setopt(curl_handle, CURLOPT_USERNAME, argv[1]); //moexLogin);
        curl_easy_setopt(curl_handle, CURLOPT_PASSWORD, argv[2]); //moexPassword);
        curl_easy_setopt(curl_handle, CURLOPT_URL, "https://passport.moex.com/authenticate");
        curl_easy_setopt(curl_handle, CURLOPT_VERBOSE, 1L);
        curl_easy_setopt(curl_handle, CURLOPT_COOKIEFILE, ""); /* start cookie engine */
        // выполняем запрос к порталу авторизации
        res = curl_easy_perform(curl_handle);
        if(res != CURLE_OK)
        {
            printf( "curl_easy_perform() failed: %s\n", curl_easy_strerror(res) );
            return -1;
        }
        else
        {
            cout << "Успешная авторизация!" << endl;
            printf("Cookies, curl knows:\n");
            res = curl_easy_getinfo(curl_handle, CURLINFO_COOKIELIST, &cookies);
            if(res != CURLE_OK) {
                fprintf(stderr, "Curl curl_easy_getinfo failed: %s\n",
                curl_easy_strerror(res));
                exit(1);
            }
            nc = cookies;
            i = 1;
            while(nc) {
                printf("[%d]: %s\n", i, nc->data);
                nc = nc->next;
                i++;
            }
            if(i == 1) {
                printf("(none)\n");
            }
            curl_slist_free_all(cookies);
        }

 
        /* Set the authorization identity (identity to act as) */
        //curl_easy_setopt(curl_handle, CURLOPT_SASL_AUTHZID, "shared-mailbox");
 
        /* Force PLAIN authentication */
        //curl_easy_setopt(curl_handle, CURLOPT_LOGIN_OPTIONS, "AUTH=PLAIN");
        // задаем  url адрес
        //curl_easy_setopt(curl_handle, CURLOPT_URL, "https://www.moex.ru");
        //curl_easy_setopt(curl_handle, CURLOPT_URL, "https://iss.moex.com/iss/apps/infogrid/stock/rates.json?_=1727681260480&lang=ru&iss.meta=off&sort_order=asc&sort_column=SECID&start=0&limit=100&bg=stock_tplus");
        curl_easy_setopt(curl_handle, CURLOPT_URL, "https://iss.moex.com/iss/analyticalproducts/futoi/securities/si.json?from=2024-11-18&till=2024-11-19");
        //curl_easy_setopt(curl_handle, CURLOPT_URL, "https://iss.moex.com/iss/analyticalproducts/futoi/securities");
        //curl_easy_setopt(curl_handle, CURLOPT_URL, "https://iss.moex.com/iss/analyticalproducts/futoi/securities");
        //curl_easy_setopt(curl_handle, CURLOPT_USERAGENT,"Mozilla/5.0 (Windows NT 6.1; rv:16.0) Gecko/20100101 Firefox/16.0");
        //curl_easy_setopt(curl_handle, CURLOPT_USERAGENT,"Mozilla/5.0 (X11; Ubuntu; Linux x86_64; rv:132.0) Gecko/20100101 Firefox/132.0"); // Firefox Kubuntu 24.04
        curl_easy_setopt(curl_handle, CURLOPT_USERAGENT,"Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/128.0.0.0 YaBrowser/24.10.0.0 Safari/537.36"); // Yandex Browser Kubuntu 24.04

        // выполняем запрос
        /*CURLcode*/ res = curl_easy_perform(curl_handle);
        if(res != CURLE_OK)
            printf( "curl_easy_perform() failed: %s\n", curl_easy_strerror(res) );

        // закрываем дескриптор curl
        curl_easy_cleanup(curl_handle);
    }
 
    getchar();
    return 0;
}
//---------------------------------------------------------------------------