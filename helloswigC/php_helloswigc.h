/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.7
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */

#ifndef PHP_HELLOSWIGC_H
#define PHP_HELLOSWIGC_H

extern zend_module_entry helloswigc_module_entry;
#define phpext_helloswigc_ptr &helloswigc_module_entry

#ifdef PHP_WIN32
# define PHP_HELLOSWIGC_API __declspec(dllexport)
#else
# define PHP_HELLOSWIGC_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(helloswigc);
PHP_MSHUTDOWN_FUNCTION(helloswigc);
PHP_RINIT_FUNCTION(helloswigc);
PHP_RSHUTDOWN_FUNCTION(helloswigc);
PHP_MINFO_FUNCTION(helloswigc);

ZEND_NAMED_FUNCTION(_wrap_showHelloSwigC);
ZEND_NAMED_FUNCTION(_wrap_echoStringC);
#endif /* PHP_HELLOSWIGC_H */
