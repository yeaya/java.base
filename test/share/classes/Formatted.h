#ifndef _Formatted_h_
#define _Formatted_h_
//$ class Formatted
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export Formatted : public ::java::lang::Object {
	$class(Formatted, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Formatted();
	void init$();
	static void check($String* test, $String* output, $String* expected);
	static void main($StringArray* args);
	static void test1();
};

#endif // _Formatted_h_