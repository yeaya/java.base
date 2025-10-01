#ifndef _StripIndent_h_
#define _StripIndent_h_
//$ class StripIndent
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export StripIndent : public ::java::lang::Object {
	$class(StripIndent, $NO_CLASS_INIT, ::java::lang::Object)
public:
	StripIndent();
	void init$();
	static void main($StringArray* arg);
	static void test1();
	static void verify($String* a, $String* b);
};

#endif // _StripIndent_h_