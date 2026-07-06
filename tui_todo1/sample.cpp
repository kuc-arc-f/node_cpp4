#include <windows.h>
#include <iostream>
#include <string>

#include "include/MyTodo.hpp"

// extern "C" でC言語リンクとし、__declspec(dllexport) でエクスポート
extern "C" {

    __declspec(dllexport) int todo_add(const char* input)
    {
        static std::string resp;
        std::string title = input;
        int ret = 0;
        
        MyTodo tLib("");
        tLib.add_handler(title);
       return 1;
    }

    __declspec(dllexport) const char* todo_list()
    {
        MyTodo todo_handler("");
        std::string result = todo_handler.todo_list_handler();

        static std::string msg;
        msg = result;
        return msg.c_str();        
    }

    __declspec(dllexport) int todo_delete(int id) {
        MyTodo todo_helper("");
        todo_helper.todo_delete_handler(id);
        return 1;
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