#ifndef _ExecEmptyString_h_
#define _ExecEmptyString_h_
//$ class ExecEmptyString
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export ExecEmptyString : public ::java::lang::Object {
	$class(ExecEmptyString, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ExecEmptyString();
	void init$();
	static void main($StringArray* args);
};

#endif // _ExecEmptyString_h_