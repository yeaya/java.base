#ifndef _Boxing$TestHandler_h_
#define _Boxing$TestHandler_h_
//$ class Boxing$TestHandler
//$ extends java.lang.reflect.InvocationHandler

#include <java/lang/Array.h>
#include <java/lang/reflect/InvocationHandler.h>

class Boxing;
namespace java {
	namespace lang {
		namespace reflect {
			class Method;
		}
	}
}

class Boxing$TestHandler : public ::java::lang::reflect::InvocationHandler {
	$class(Boxing$TestHandler, $NO_CLASS_INIT, ::java::lang::reflect::InvocationHandler)
public:
	Boxing$TestHandler();
	void init$(::Boxing* this$0);
	virtual $Object* invoke(Object$* proxy, ::java::lang::reflect::Method* method, $ObjectArray* args) override;
	::Boxing* this$0 = nullptr;
};

#endif // _Boxing$TestHandler_h_