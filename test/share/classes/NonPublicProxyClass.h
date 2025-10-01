#ifndef _NonPublicProxyClass_h_
#define _NonPublicProxyClass_h_
//$ class NonPublicProxyClass
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("DEFAULT_POLICY")
#undef DEFAULT_POLICY
#pragma push_macro("NEW_PROXY_IN_PKG")
#undef NEW_PROXY_IN_PKG

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
	namespace security {
		class Policy;
	}
}

class $export NonPublicProxyClass : public ::java::lang::Object {
	$class(NonPublicProxyClass, 0, ::java::lang::Object)
public:
	NonPublicProxyClass();
	void init$(::java::lang::ClassLoader* loader, $ClassArray* intfs);
	bool hasAccess();
	static void main($StringArray* args);
	void newInstanceFromConstructor($Class* proxyClass);
	static ::java::lang::reflect::InvocationHandler* newInvocationHandler();
	void newProxyInstance();
	virtual void run();
	static ::java::security::Policy* DEFAULT_POLICY;
	::java::lang::ClassLoader* loader = nullptr;
	$ClassArray* interfaces = nullptr;
	::java::lang::reflect::InvocationHandler* handler = nullptr;
	$Class* proxyClass = nullptr;
	static $String* NEW_PROXY_IN_PKG;
};

#pragma pop_macro("DEFAULT_POLICY")
#pragma pop_macro("NEW_PROXY_IN_PKG")

#endif // _NonPublicProxyClass_h_