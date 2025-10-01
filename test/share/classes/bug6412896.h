#ifndef _bug6412896_h_
#define _bug6412896_h_
//$ class bug6412896
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export bug6412896 : public ::java::lang::Object {
	$class(bug6412896, 0, ::java::lang::Object)
public:
	bug6412896();
	void init$();
	static void main($StringArray* args);
	static $Array<::java::lang::String, 2>* zoneOK;
	static $Array<::java::lang::String, 2>* zoneNG;
};

#endif // _bug6412896_h_