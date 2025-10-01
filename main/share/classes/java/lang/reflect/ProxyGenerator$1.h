#ifndef _java_lang_reflect_ProxyGenerator$1_h_
#define _java_lang_reflect_ProxyGenerator$1_h_
//$ class java.lang.reflect.ProxyGenerator$1
//$ extends java.security.PrivilegedAction

#include <java/lang/Array.h>
#include <java/security/PrivilegedAction.h>

namespace java {
	namespace lang {
		namespace reflect {

class ProxyGenerator$1 : public ::java::security::PrivilegedAction {
	$class(ProxyGenerator$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	ProxyGenerator$1();
	void init$($String* val$name, $bytes* val$classFile);
	virtual $Object* run() override;
	$bytes* val$classFile = nullptr;
	$String* val$name = nullptr;
};

		} // reflect
	} // lang
} // java

#endif // _java_lang_reflect_ProxyGenerator$1_h_