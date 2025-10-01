#ifndef _java_lang_reflect_Proxy$2_h_
#define _java_lang_reflect_Proxy$2_h_
//$ class java.lang.reflect.Proxy$2
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandles$Lookup;
		}
	}
}

namespace java {
	namespace lang {
		namespace reflect {

class Proxy$2 : public ::java::security::PrivilegedAction {
	$class(Proxy$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	Proxy$2();
	void init$($Class* val$proxyClass, ::java::lang::invoke::MethodHandles$Lookup* val$caller);
	virtual $Object* run() override;
	::java::lang::invoke::MethodHandles$Lookup* val$caller = nullptr;
	$Class* val$proxyClass = nullptr;
};

		} // reflect
	} // lang
} // java

#endif // _java_lang_reflect_Proxy$2_h_