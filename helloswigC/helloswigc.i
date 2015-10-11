/* File : helloswigc.i */

%module helloswigc

#define TEST  "Macro: Hello, Swig-C"

%{
#include "helloswigc.h"
%}

%include "helloswigc.h"
