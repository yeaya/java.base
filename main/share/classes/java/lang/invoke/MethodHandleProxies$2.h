#ifndef _java_lang_invoke_MethodHandleProxies$2_h_
#define _java_lang_invoke_MethodHandleProxies$2_h_
//$ class java.lang.invoke.MethodHandleProxies$2
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace lang {
		class ClassLoader;
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class InvocationHandler;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class MethodHandleProxies$2 : public ::java::security::PrivilegedAction {
	$class(MethodHandleProxies$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	MethodHandleProxies$2();
	void init$(::java::lang::ClassLoader* val$loader, $Class* val$intfc, ::java::lang::reflect::InvocationHandler* val$ih);
	virtual $Object* run() override;
	::java::lang::reflect::InvocationHandler* val$ih = nullptr;
	$Class* val$intfc = nullptr;
	::java::lang::ClassLoader* val$loader = nullptr;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_MethodHandleProxies$2_h_