#include <iostream>
#include <string> // 文字列を扱うために必要
#include <cstring>
#include "include/my_chat.hpp"

extern "C" {

__declspec(dllexport) char* chat_post(const char* input)
{
    std::string input_str(input);
    //std::cout << "todo_add.Received in C++: " << input_str << std::endl;
    MyChat cLib("");
    std::string result = cLib.chat_post(input_str);
    char* output = new char[result.length() + 1];
    strcpy(output, result.c_str());
    return output;    
}

/*
int add(int a, int b)
{
    return a + b;
}

const char* hello()
{
    return "Hello From C++";
}

const char* greet(const char* name)
{
    static std::string msg;
    msg = "Reply:";
    msg += name;
    return msg.c_str();
}
*/


}