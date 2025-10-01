#ifndef _sun_reflect_misc_ConstructorUtil_h_
#define _sun_reflect_misc_ConstructorUtil_h_
//$ class sun.reflect.misc.ConstructorUtil
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace reflect {
			class Constructor;
		}
	}
}

namespace sun {
	namespace reflect {
		namespace misc {

class $export ConstructorUtil : public ::java::lang::Object {
	$class(ConstructorUtil, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ConstructorUtil();
	void init$();
	static ::java::lang::reflect::Constructor* getConstructor($Class* cls, $ClassArray* params);
	static $Array<::java::lang::reflect::Constructor>* getConstructors($Class* cls);
};

		} // misc
	} // reflect
} // sun

#endif // _sun_reflect_misc_ConstructorUtil_h_