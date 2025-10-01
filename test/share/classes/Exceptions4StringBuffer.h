#ifndef _Exceptions4StringBuffer_h_
#define _Exceptions4StringBuffer_h_
//$ class Exceptions4StringBuffer
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class Runnable;
		class Throwable;
	}
}

class $export Exceptions4StringBuffer : public ::java::lang::Object {
	$class(Exceptions4StringBuffer, 0, ::java::lang::Object)
public:
	Exceptions4StringBuffer();
	void init$();
	static void fail($Throwable* ex, $String* s, $Throwable* got);
	static void main($StringArray* args);
	static void pass($String* s);
	static void tryCatch($String* s, $Throwable* ex, ::java::lang::Runnable* thunk);
	static bool ok;
};

#endif // _Exceptions4StringBuffer_h_