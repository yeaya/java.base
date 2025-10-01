#ifndef _java_util_ServiceLoader_h_
#define _java_util_ServiceLoader_h_
//$ class java.util.ServiceLoader
//$ extends java.lang.Iterable

#include <java/lang/Iterable.h>

#pragma push_macro("LANG_ACCESS")
#undef LANG_ACCESS

namespace java {
	namespace lang {
		class ClassLoader;
		class Module;
		class ModuleLayer;
		class Throwable;
		class Void;
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Constructor;
			class Method;
		}
	}
}
namespace java {
	namespace net {
		class URL;
	}
}
namespace java {
	namespace security {
		class AccessControlContext;
	}
}
namespace java {
	namespace util {
		class Iterator;
		class List;
		class Optional;
		class ServiceLoader$Provider;
	}
}
namespace java {
	namespace util {
		namespace stream {
			class Stream;
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
		namespace module {
			class ServicesCatalog$ServiceProvider;
		}
	}
}

namespace java {
	namespace util {

class $export ServiceLoader : public ::java::lang::Iterable {
	$class(ServiceLoader, 0, ::java::lang::Iterable)
public:
	ServiceLoader();
	void init$($Class* caller, ::java::lang::ModuleLayer* layer, $Class* svc);
	void init$($Class* caller, $Class* svc, ::java::lang::ClassLoader* cl);
	void init$(::java::lang::Module* callerModule, $Class* svc, ::java::lang::ClassLoader* cl);
	static void checkCaller($Class* caller, $Class* svc);
	static void fail($Class* service, $String* msg, $Throwable* cause);
	static void fail($Class* service, $String* msg);
	static void fail($Class* service, ::java::net::URL* u, int32_t line, $String* msg);
	::java::util::Optional* findFirst();
	::java::lang::reflect::Method* findStaticProviderMethod($Class* clazz);
	::java::lang::reflect::Constructor* getConstructor($Class* clazz);
	bool inExplicitModule($Class* clazz);
	virtual ::java::util::Iterator* iterator() override;
	static ::java::lang::Void* lambda$findStaticProviderMethod$0(::java::lang::reflect::Method* m);
	static $Class* lambda$loadProvider$1(::java::lang::Module* module, $String* cn);
	static ::java::util::ServiceLoader* load($Class* service, ::java::lang::ClassLoader* loader, ::java::lang::Module* callerModule);
	static ::java::util::ServiceLoader* load($Class* service, ::java::lang::ClassLoader* loader);
	static ::java::util::ServiceLoader* load($Class* service);
	static ::java::util::ServiceLoader* load(::java::lang::ModuleLayer* layer, $Class* service);
	static ::java::util::ServiceLoader* loadInstalled($Class* service);
	::java::util::ServiceLoader$Provider* loadProvider(::jdk::internal::module::ServicesCatalog$ServiceProvider* provider);
	::java::util::Iterator* newLookupIterator();
	void reload();
	::java::util::stream::Stream* stream();
	virtual $String* toString() override;
	static bool $assertionsDisabled;
	$Class* service = nullptr;
	$String* serviceName = nullptr;
	::java::lang::ModuleLayer* layer = nullptr;
	::java::lang::ClassLoader* loader = nullptr;
	::java::security::AccessControlContext* acc = nullptr;
	::java::util::Iterator* lookupIterator1 = nullptr;
	::java::util::List* instantiatedProviders = nullptr;
	::java::util::Iterator* lookupIterator2 = nullptr;
	::java::util::List* loadedProviders = nullptr;
	bool loadedAllProviders = false;
	int32_t reloadCount = 0;
	static ::jdk::internal::access::JavaLangAccess* LANG_ACCESS;
};

	} // util
} // java

#pragma pop_macro("LANG_ACCESS")

#endif // _java_util_ServiceLoader_h_