/* File : helloswigcpp2.cpp */

//#include <string>
//#include <vector>

#include <string.h>
#include <stddef.h>

#include <php/Zend/zend.h>

#include "helloswigcpp2.h"

char const* HelloSwigCls::showHelloSwigCpp(void)
{
   zend_printf("<br/> Call HelloSwigCls::showHelloSwigCpp() <br/>");

   return "Hello, SWIG --- C++! 2nd Roud";
}

char const* HelloSwigCls::showPassedStrCpp(char const* str)
{
   zend_printf("<br/> Call HelloSwigCls::showPassedStrCpp() <br/>");

   if(str != nullptr)
     return str;
   else
     //return "Default C++!";
    return "";  
}

