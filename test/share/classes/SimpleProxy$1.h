#ifndef _SimpleProxy$1_h_
#define _SimpleProxy$1_h_
//$ class SimpleProxy$1
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

class SimpleProxy$1 : public ::java::lang::reflect::InvocationHandler {
	$class(SimpleProxy$1, $NO_CLASS_INIT, ::java::lang::reflect::InvocationHandler)
public:
	SimpleProxy$1();
	void init$();
	virtual $Object* invoke(Object$* proxy, ::java::lang::reflect::Method* method, $ObjectArray* args) override;
};

#endif // _SimpleProxy$1_h_