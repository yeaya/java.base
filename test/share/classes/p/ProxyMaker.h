#ifndef _p_ProxyMaker_h_
#define _p_ProxyMaker_h_
//$ class p.ProxyMaker
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace reflect {
			class InvocationHandler;
			class Method;
		}
	}
}

namespace p {

class $export ProxyMaker : public ::java::lang::Object {
	$class(ProxyMaker, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ProxyMaker();
	void init$();
	static ::java::lang::reflect::InvocationHandler* getInvocationHandler(Object$* proxy);
	static $Object* invoke(Object$* proxy, ::java::lang::reflect::Method* method, $ObjectArray* args);
};

} // p

#endif // _p_ProxyMaker_h_