#ifndef _java_lang_invoke_MethodHandleProxies_h_
#define _java_lang_invoke_MethodHandleProxies_h_
//$ class java.lang.invoke.MethodHandleProxies
//$ extends java.lang.Object

#include <java/lang/Array.h>

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
namespace sun {
	namespace invoke {
		class WrapperInstance;
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class $export MethodHandleProxies : public ::java::lang::Object {
	$class(MethodHandleProxies, 0, ::java::lang::Object)
public:
	MethodHandleProxies();
	void init$();
	static $Object* asInterfaceInstance($Class* intfc, ::java::lang::invoke::MethodHandle* target);
	static ::sun::invoke::WrapperInstance* asWrapperInstance(Object$* x);
	static ::java::lang::invoke::MethodHandle* bindCaller(::java::lang::invoke::MethodHandle* target, $Class* hostClass);
	static $Object* callDefaultMethod(::java::util::concurrent::ConcurrentHashMap* defaultMethodMap, Object$* self, $Class* intfc, ::java::lang::reflect::Method* m, $ObjectArray* args);
	static $Object* callObjectMethod(Object$* self, ::java::lang::reflect::Method* m, $ObjectArray* args);
	static $Array<::java::lang::reflect::Method>* getSingleNameMethods($Class* intfc);
	static bool hasDefaultMethods($Class* intfc);
	static bool isDefaultMethod(::java::lang::reflect::Method* m);
	static bool isObjectMethod(::java::lang::reflect::Method* m);
	static bool isWrapperInstance(Object$* x);
	static ::java::lang::invoke::MethodHandle* lambda$callDefaultMethod$0($Class* intfc, Object$* self, ::java::lang::reflect::Method* mk);
	static ::java::lang::invoke::MethodHandle* wrapperInstanceTarget(Object$* x);
	static $Class* wrapperInstanceType(Object$* x);
	static bool $assertionsDisabled;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_MethodHandleProxies_h_