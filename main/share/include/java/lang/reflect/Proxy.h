#ifndef _java_lang_reflect_Proxy_h_
#define _java_lang_reflect_Proxy_h_
//$ class java.lang.reflect.Proxy
//$ extends java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <sun/reflect/misc/ReflectUtil.h>

#pragma push_macro("DEFAULT_METHODS_MAP")
#undef DEFAULT_METHODS_MAP
#pragma push_macro("EMPTY_ARGS")
#undef EMPTY_ARGS
#pragma push_macro("PROXY_PACKAGE_PREFIX")
#undef PROXY_PACKAGE_PREFIX

namespace java {
	namespace lang {
		class ClassLoader;
		class ClassValue;
		class Module;
	}
}
namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandle;
			class MethodHandles$Lookup;
			class MethodType;
		}
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Constructor;
			class InvocationHandler;
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
namespace jdk {
	namespace internal {
		namespace loader {
			class AbstractClassLoaderValue$Sub;
			class ClassLoaderValue;
		}
	}
}

namespace java {
	namespace lang {
		namespace reflect {

class $import Proxy : public ::java::io::Serializable {
	$class(Proxy, 0, ::java::io::Serializable)
public:
	Proxy();
	void init$();
	void init$(::java::lang::reflect::InvocationHandler* h);
	static void checkNewProxyPermission($Class* caller, $Class* proxyClass);
	static void checkProxyAccess($Class* caller, ::java::lang::ClassLoader* loader, $ClassArray* interfaces);
	static ::java::lang::invoke::MethodHandle* defaultMethodHandle($Class* proxyClass, ::java::lang::reflect::Method* method);
	static ::java::util::concurrent::ConcurrentHashMap* defaultMethodMap($Class* proxyClass);
	static $Class* findProxyInterfaceOrElseThrow($Class* proxyClass, ::java::lang::reflect::Method* method);
	static ::java::lang::reflect::InvocationHandler* getInvocationHandler(Object$* proxy);
	static ::java::lang::ClassLoader* getLoader(::java::lang::Module* m);
	static $Class* getProxyClass(::java::lang::ClassLoader* loader, $ClassArray* interfaces);
	static ::java::lang::reflect::Constructor* getProxyConstructor($Class* caller, ::java::lang::ClassLoader* loader, $ClassArray* interfaces);
	static bool isProxyClass($Class* cl);
	static bool lambda$defaultMethodHandle$2(::java::lang::invoke::MethodHandle* dmh, ::java::lang::invoke::MethodType* type, $Class* proxyClass);
	static ::java::lang::reflect::Constructor* lambda$getProxyConstructor$0(::java::lang::ClassLoader* ld, ::jdk::internal::loader::AbstractClassLoaderValue$Sub* clv);
	static ::java::lang::reflect::Constructor* lambda$getProxyConstructor$1(::java::lang::ClassLoader* ld, ::jdk::internal::loader::AbstractClassLoaderValue$Sub* clv);
	static $Object* newProxyInstance(::java::lang::ClassLoader* loader, $ClassArray* interfaces, ::java::lang::reflect::InvocationHandler* h);
	static $Object* newProxyInstance($Class* caller, ::java::lang::reflect::Constructor* cons, ::java::lang::reflect::InvocationHandler* h);
	static ::java::lang::invoke::MethodHandles$Lookup* proxyClassLookup(::java::lang::invoke::MethodHandles$Lookup* caller, $Class* proxyClass);
	static bool $assertionsDisabled;
	static const int64_t serialVersionUID = (int64_t)0xE127DA20CC1043CB;
	static $ClassArray* constructorParams;
	static ::jdk::internal::loader::ClassLoaderValue* proxyCache;
	::java::lang::reflect::InvocationHandler* h = nullptr;
	static $String* PROXY_PACKAGE_PREFIX;
	static ::java::lang::ClassValue* DEFAULT_METHODS_MAP;
	static $ObjectArray* EMPTY_ARGS;
};

		} // reflect
	} // lang
} // java

#pragma pop_macro("DEFAULT_METHODS_MAP")
#pragma pop_macro("EMPTY_ARGS")
#pragma pop_macro("PROXY_PACKAGE_PREFIX")

#endif // _java_lang_reflect_Proxy_h_