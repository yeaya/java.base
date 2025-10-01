#ifndef _StackTraceSerialization_h_
#define _StackTraceSerialization_h_
//$ class StackTraceSerialization
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

class $export StackTraceSerialization : public ::java::lang::Object {
	$class(StackTraceSerialization, 0, ::java::lang::Object)
public:
	StackTraceSerialization();
	void init$();
	static void a();
	static void assertEmptyStackTrace($Throwable* t);
	static void b();
	static void c();
	static void check(::java::lang::StackTraceElement* e, $String* methodName, int32_t n);
	static void d();
	static void e();
	static bool equal($Throwable* t1, $Throwable* t2);
	static void main($StringArray* args);
	static $Throwable* reconstitute($Throwable* t);
	static void testWithFillInStackTrace();
	static void testWithSetStackTrace();
	static $String* OUR_CLASS;
	static $String* OUR_FILE_NAME;
};

#pragma pop_macro("OUR_CLASS")
#pragma pop_macro("OUR_FILE_NAME")

#endif // _StackTraceSerialization_h_