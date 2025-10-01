#ifndef _java_lang_RuntimePermission_h_
#define _java_lang_RuntimePermission_h_
//$ class java.lang.RuntimePermission
//$ extends java.security.BasicPermission

#include <java/security/BasicPermission.h>

namespace java {
	namespace lang {

class $import RuntimePermission : public ::java::security::BasicPermission {
	$class(RuntimePermission, $NO_CLASS_INIT, ::java::security::BasicPermission)
public:
	RuntimePermission();
	void init$($String* name);
	void init$($String* name, $String* actions);
	static const int64_t serialVersionUID = (int64_t)0x66AF2F85D3B9D84F;
};

	} // lang
} // java

#endif // _java_lang_RuntimePermission_h_