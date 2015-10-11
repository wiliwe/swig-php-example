/* File : helloswigcpp.cpp */

#include <php/Zend/zend.h>

char const* showHelloSwigCpp(void)
{
   zend_printf("<br/> Call showHelloSwigCpp() <br/>");

   return "Hello, SWIG --- C++!";
}

char const* showPassedStrCpp(char const* str)
{
   zend_printf("<br/> Call showPassedStrCpp() <br/>");

   if(str != nullptr)
     return str;
   else
     //return "Default C++!";
    return "";  
}

