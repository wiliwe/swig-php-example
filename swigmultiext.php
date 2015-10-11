<?php

// Here include multiple PHP extensions.

include("helloswig.php");
include("helloswigcpp2.php");

print TEST; 

print "<br/>";
print "<br/>";

print Test;

print "<br/>";
print "<br/>";

print "[Call C functions]";
print "<br/>";

$a = showHelloSwigC();
echo $a;

print "<br/>";
print "<br/>";

$str = "Test SWIG C/PHP";
$b = echoStringC($str);
echo $b;

print "<br/>";
print "<br/>";
print "=====================================";
print "<br/>";
print "<br/>";

print "[Call C++ methods]";
print "<br/>";


$cls = new HelloSwigCls();

$c = $cls->showHelloSwigCpp();
echo $c;

print "<br/>";
print "<br/>";

$str = "Input a string. \n";
$d = $cls->showPassedStrCpp($str);
echo $d;

?>
