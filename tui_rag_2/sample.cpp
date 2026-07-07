#include <windows.h>
#include <iostream>
#include <string>

#include "dotenv.h"
#include "my_rag.hpp"

// extern "C" でC言語リンクとし、__declspec(dllexport) でエクスポート
extern "C" {

    __declspec(dllexport) const char* rag_search(const char* input)
    {
        dotenv env(".env"); 
        static std::string resp;
        std::string api_key = env.get("GEMINI_API_KEY", "key123");
        if(api_key == ""){
            resp="error , GEMINI_API_KEY none.";
        }
        std::string query = input;
        MyRag rLib("");
        resp = rLib.rag_search(query,  api_key);
        return resp.c_str();
    }

    __declspec(dllexport) int add(int a, int b) {
        return a + b;
    }

    __declspec(dllexport) double multiply(double a, double b) {
        return a * b;
    }

    __declspec(dllexport) const char* get_message()
    {
        return "Hello World";
    }

    __declspec(dllexport) const char* greet(const char* name)
    {
        static std::string msg;
        msg = "Hello ";
        msg += name;
        return msg.c_str();
    }

}