#ifndef _java_lang_invoke_MethodHandleProxies$1_h_
#define _java_lang_invoke_MethodHandleProxies$1_h_
//$ class java.lang.invoke.MethodHandleProxies$1
//$ extends java.lang.reflect.InvocationHandler

#include <java/lang/Array.h>
#include <java/lang/reflect/InvocationHandler.h>

namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandle;
		}
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Method;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentHashMap;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class MethodHandleProxies$1 : public ::java::lang::reflect::InvocationHandler {
	$class(MethodHandleProxies$1, $NO_CLASS_INIT, ::java::lang::reflect::InvocationHandler)
public:
	MethodHandleProxies$1();
	void init$(::java::lang::invoke::MethodHandle* val$target, $Class* val$intfc, $Array<::java::lang::reflect::Method>* val$methods, $Array<::java::lang::invoke::MethodHandle>* val$vaTargets, ::java::util::concurrent::ConcurrentHashMap* val$defaultMethodMap);
	$Object* getArg($String* name);
	virtual $Object* invoke(Object$* proxy, ::java::lang::reflect::Method* method, $ObjectArray* args) override;
	::java::util::concurrent::ConcurrentHashMap* val$defaultMethodMap = nullptr;
	$Array<::java::lang::invoke::MethodHandle>* val$vaTargets = nullptr;
	$Array<::java::lang::reflect::Method>* val$methods = nullptr;
	$Class* val$intfc = nullptr;
	::java::lang::invoke::MethodHandle* val$target = nullptr;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_MethodHandleProxies$1_h_