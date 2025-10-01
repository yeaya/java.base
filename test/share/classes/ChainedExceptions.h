#ifndef _ChainedExceptions_h_
#define _ChainedExceptions_h_
//$ class ChainedExceptions
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("OUR_CLASS")
#undef OUR_CLASS
#pragma push_macro("OUR_FILE_NAME")
#undef OUR_FILE_NAME

namespace java {
	namespace lang {
		class StackTraceElement;
		class Throwable;
	}
}

class $export ChainedExceptions : public ::java::lang::Object {
	$class(ChainedExceptions, 0, ::java::lang::Object)
public:
	ChainedExceptions();
	void init$();
	static void a();
	static void b();
	static void c();
	static void check($Throwable* t, ::java::lang::StackTraceElement* e, $String* methodName, int32_t n);
	static void d();
	static void e();
	static void main($StringArray* args);
	static $String* OUR_CLASS;
	static $String* OUR_FILE_NAME;
};

#pragma pop_macro("OUR_CLASS")
#pragma pop_macro("OUR_FILE_NAME")

#endif // _ChainedExceptions_h_