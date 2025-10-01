#ifndef _sun_reflect_misc_Trampoline_h_
#define _sun_reflect_misc_Trampoline_h_
//$ class sun.reflect.misc.Trampoline
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace reflect {
			class Method;
		}
	}
}

namespace sun {
	namespace reflect {
		namespace misc {

class Trampoline : public ::java::lang::Object {
	$class(Trampoline, 0, ::java::lang::Object)
public:
	Trampoline();
	void init$();
	static void ensureInvocableMethod(::java::lang::reflect::Method* m);
	static $Object* invoke(::java::lang::reflect::Method* m, Object$* obj, $ObjectArray* params);
};

		} // misc
	} // reflect
} // sun

#endif // _sun_reflect_misc_Trampoline_h_