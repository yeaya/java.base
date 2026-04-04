#ifndef _OpRead_h_
#define _OpRead_h_
//$ class OpRead
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export OpRead : public ::java::lang::Object {
	$class(OpRead, 0, ::java::lang::Object)
public:
	OpRead();
	static void clinit$(::java::lang::Class* clazz);
	void init$();
	static void main($StringArray* args);
	static void test();
	static bool $assertionsDisabled;
};

#endif // _OpRead_h_