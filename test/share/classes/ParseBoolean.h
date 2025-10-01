#ifndef _ParseBoolean_h_
#define _ParseBoolean_h_
//$ class ParseBoolean
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export ParseBoolean : public ::java::lang::Object {
	$class(ParseBoolean, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ParseBoolean();
	void init$();
	static void checkFalse(bool b);
	static void checkTrue(bool b);
	static void main($StringArray* args);
};

#endif // _ParseBoolean_h_