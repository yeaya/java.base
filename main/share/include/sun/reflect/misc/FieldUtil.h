#ifndef _sun_reflect_misc_FieldUtil_h_
#define _sun_reflect_misc_FieldUtil_h_
//$ class sun.reflect.misc.FieldUtil
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace reflect {
			class Field;
		}
	}
}

namespace sun {
	namespace reflect {
		namespace misc {

class $import FieldUtil : public ::java::lang::Object {
	$class(FieldUtil, $NO_CLASS_INIT, ::java::lang::Object)
public:
	FieldUtil();
	void init$();
	static ::java::lang::reflect::Field* getField($Class* cls, $String* name);
	static $Array<::java::lang::reflect::Field>* getFields($Class* cls);
};

		} // misc
	} // reflect
} // sun

#endif // _sun_reflect_misc_FieldUtil_h_