/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.7
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */

#ifndef PHP_HELLOSWIGCPP_H
#define PHP_HELLOSWIGCPP_H

extern zend_module_entry helloswigcpp_module_entry;
#define phpext_helloswigcpp_ptr &helloswigcpp_module_entry

#ifdef PHP_WIN32
# define PHP_HELLOSWIGCPP_API __declspec(dllexport)
#else
# define PHP_HELLOSWIGCPP_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(helloswigcpp);
PHP_MSHUTDOWN_FUNCTION(helloswigcpp);
PHP_RINIT_FUNCTION(helloswigcpp);
PHP_RSHUTDOWN_FUNCTION(helloswigcpp);
PHP_MINFO_FUNCTION(helloswigcpp);

ZEND_NAMED_FUNCTION(_wrap_showHelloSwigCpp);
ZEND_NAMED_FUNCTION(_wrap_showPassedStrCpp);
#endif /* PHP_HELLOSWIGCPP_H */
