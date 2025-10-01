#ifndef _java_lang_reflect_ReflectPermission_h_
#define _java_lang_reflect_ReflectPermission_h_
//$ class java.lang.reflect.ReflectPermission
//$ extends java.security.BasicPermission

#include <java/security/BasicPermission.h>

namespace java {
	namespace lang {
		namespace reflect {

class $export ReflectPermission : public ::java::security::BasicPermission {
	$class(ReflectPermission, $PRELOAD | $NO_CLASS_INIT, ::java::security::BasicPermission)
public:
	ReflectPermission();
	void init$($String* name);
	void init$($String* name, $String* actions);
	static const int64_t serialVersionUID = (int64_t)0x66DF55209D4CF89D;
};

		} // reflect
	} // lang
} // java

#endif // _java_lang_reflect_ReflectPermission_h_