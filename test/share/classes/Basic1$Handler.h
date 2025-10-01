#ifndef _Basic1$Handler_h_
#define _Basic1$Handler_h_
//$ class Basic1$Handler
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

class $export Basic1$Handler : public ::java::lang::reflect::InvocationHandler {
	$class(Basic1$Handler, $NO_CLASS_INIT, ::java::lang::reflect::InvocationHandler)
public:
	Basic1$Handler();
	void init$();
	virtual $Object* invoke(Object$* proxy, ::java::lang::reflect::Method* method, $ObjectArray* args) override;
	$Object* currentProxy = nullptr;
	::java::lang::reflect::Method* lastMethod = nullptr;
};

#endif // _Basic1$Handler_h_