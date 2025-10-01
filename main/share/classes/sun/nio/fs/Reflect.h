#ifndef _sun_nio_fs_Reflect_h_
#define _sun_nio_fs_Reflect_h_
//$ class sun.nio.fs.Reflect
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		namespace reflect {
			class AccessibleObject;
			class Field;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class Reflect : public ::java::lang::Object {
	$class(Reflect, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Reflect();
	void init$();
	static ::java::lang::reflect::Field* lookupField($String* className, $String* fieldName);
	static void setAccessible(::java::lang::reflect::AccessibleObject* ao);
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_Reflect_h_