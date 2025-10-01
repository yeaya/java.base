#ifndef _java_lang_reflect_Proxy$ProxyBuilder_h_
#define _java_lang_reflect_Proxy$ProxyBuilder_h_
//$ class java.lang.reflect.Proxy$ProxyBuilder
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("DEBUG")
#undef DEBUG
#pragma push_macro("JLA")
#undef JLA

namespace java {
	namespace lang {
		class ClassLoader;
		class Module;
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Constructor;
		}
	}
}
namespace java {
	namespace util {
		class HashSet;
		class List;
		class Set;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicInteger;
				class AtomicLong;
			}
		}
	}
}
namespace jdk {
	namespace internal {
		namespace access {
			class JavaLangAccess;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace loader {
			class ClassLoaderValue;
		}
	}
}

namespace java {
	namespace lang {
		namespace reflect {

class Proxy$ProxyBuilder : public ::java::lang::Object {
	$class(Proxy$ProxyBuilder, 0, ::java::lang::Object)
public:
	Proxy$ProxyBuilder();
	void init$(::java::lang::ClassLoader* loader, ::java::util::List* interfaces);
	void init$(::java::lang::ClassLoader* loader, $Class* intf);
	static void addElementType(::java::util::HashSet* types, $Class* cls);
	static void addElementTypes(::java::util::HashSet* types, $ClassArray* classes);
	::java::lang::reflect::Constructor* build();
	static $Class* defineProxyClass(::java::lang::Module* m, ::java::util::List* interfaces);
	static void ensureAccess(::java::lang::Module* target, $Class* c);
	static void ensureVisible(::java::lang::ClassLoader* ld, $Class* c);
	static ::java::lang::Module* getDynamicModule(::java::lang::ClassLoader* loader);
	static $Class* getElementType($Class* type);
	static bool isDebug();
	static bool isDebug($String* flag);
	static bool isExportedType($Class* c);
	static bool isPackagePrivateType($Class* c);
	static bool isProxyClass($Class* c);
	static ::java::lang::Module* lambda$getDynamicModule$1(::java::lang::ClassLoader* ld, ::jdk::internal::loader::ClassLoaderValue* clv);
	static void lambda$trace$0($Class* c);
	static ::java::lang::Module* mapToModule(::java::lang::ClassLoader* loader, ::java::util::List* interfaces, ::java::util::Set* refTypes);
	static ::java::util::Set* referencedTypes(::java::lang::ClassLoader* loader, ::java::util::List* interfaces);
	static $String* toDetails($Class* c);
	static void trace($String* cn, ::java::lang::Module* module, ::java::lang::ClassLoader* loader, ::java::util::List* interfaces);
	static void validateProxyInterfaces(::java::lang::ClassLoader* loader, ::java::util::List* interfaces, ::java::util::Set* refTypes);
	static bool $assertionsDisabled;
	static ::jdk::internal::access::JavaLangAccess* JLA;
	static $String* proxyClassNamePrefix;
	static ::java::util::concurrent::atomic::AtomicLong* nextUniqueNumber;
	static ::jdk::internal::loader::ClassLoaderValue* reverseProxyCache;
	static $String* DEBUG;
	::java::util::List* interfaces = nullptr;
	::java::lang::Module* module = nullptr;
	static ::jdk::internal::loader::ClassLoaderValue* dynProxyModules;
	static ::java::util::concurrent::atomic::AtomicInteger* counter;
};

		} // reflect
	} // lang
} // java

#pragma pop_macro("DEBUG")
#pragma pop_macro("JLA")

#endif // _java_lang_reflect_Proxy$ProxyBuilder_h_