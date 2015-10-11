%module helloswigcpp

#define TEST  "Hello - C++"
#define Test  "World - C++"

%{
   extern char const* showHelloSwigCpp(void);
   extern char const* showPassedStrCpp(char const* str);
%}

extern char const* showHelloSwigCpp(void);
extern char const* showPassedStrCpp(char const* str);



