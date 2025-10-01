#ifndef _java_lang_reflect_Proxy$ProxyBuilder$1_h_
#define _java_lang_reflect_Proxy$ProxyBuilder$1_h_
//$ class java.lang.reflect.Proxy$ProxyBuilder$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace lang {
		namespace reflect {
			class Constructor;
			class Proxy$ProxyBuilder;
		}
	}
}

namespace java {
	namespace lang {
		namespace reflect {

class Proxy$ProxyBuilder$1 : public ::java::security::PrivilegedAction {
	$class(Proxy$ProxyBuilder$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	Proxy$ProxyBuilder$1();
	void init$(::java::lang::reflect::Proxy$ProxyBuilder* this$0, ::java::lang::reflect::Constructor* val$cons);
	virtual $Object* run() override;
	::java::lang::reflect::Proxy$ProxyBuilder* this$0 = nullptr;
	::java::lang::reflect::Constructor* val$cons = nullptr;
};

		} // reflect
	} // lang
} // java

#endif // _java_lang_reflect_Proxy$ProxyBuilder$1_h_