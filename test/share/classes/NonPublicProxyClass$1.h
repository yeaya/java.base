#ifndef _NonPublicProxyClass$1_h_
#define _NonPublicProxyClass$1_h_
//$ class NonPublicProxyClass$1
//$ extends java.lang.reflect.InvocationHandler

#include <java/lang/Array.h>
#include <java/lang/reflect/InvocationHandler.h>

namespace java {
	namespace lang {
		namespace reflect {
			class Method;
		}
	}
}

class NonPublicProxyClass$1 : public ::java::lang::reflect::InvocationHandler {
	$class(NonPublicProxyClass$1, $NO_CLASS_INIT, ::java::lang::reflect::InvocationHandler)
public:
	NonPublicProxyClass$1();
	void init$();
	virtual $Object* invoke(Object$* proxy, ::java::lang::reflect::Method* method, $ObjectArray* args) override;
};

#endif // _NonPublicProxyClass$1_h_