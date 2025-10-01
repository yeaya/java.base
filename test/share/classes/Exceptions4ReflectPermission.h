#ifndef _Exceptions4ReflectPermission_h_
#define _Exceptions4ReflectPermission_h_
//$ class Exceptions4ReflectPermission
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

class $export Exceptions4ReflectPermission : public ::java::lang::Object {
	$class(Exceptions4ReflectPermission, 0, ::java::lang::Object)
public:
	Exceptions4ReflectPermission();
	void init$();
	static void fail($String* fs, $Throwable* ex);
	static void main($StringArray* args);
	static void pass();
	static int32_t fail$;
	static int32_t pass$;
	static $Throwable* first;
};

#endif // _Exceptions4ReflectPermission_h_