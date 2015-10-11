/* File : helloswigc.c */

#include <stdio.h>
#include <string.h>
#include <stddef.h>

#include <php/Zend/zend.h>

#include "helloswigc.h"

char* showHelloSwigC(void)
{
  zend_printf("<br/> Call showHelloSwigC() <br/>");

  return "Hello, SWIG - C!";
}

char const* echoStringC(char const* str)
{
  char* emptyStr = "";

  zend_printf("<br/> Call echoStringC() <br/>");

  if ( (str!= NULL) && (memcmp(str, emptyStr, 1)!=0) )
     return str;

  return "Input empty/null string!";
}
