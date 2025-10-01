#ifndef _jdk_internal_module_ServicesCatalog_h_
#define _jdk_internal_module_ServicesCatalog_h_
//$ class jdk.internal.module.ServicesCatalog
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CLV")
#undef CLV

namespace java {
	namespace lang {
		class ClassLoader;
		class Module;
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
	}
}
namespace jdk {
	namespace internal {
		namespace loader {
			class ClassLoaderValue;
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

namespace jdk {
	namespace internal {
		namespace module {

class $export ServicesCatalog : public ::java::lang::Object {
	$class(ServicesCatalog, $PRELOAD, ::java::lang::Object)
public:
	ServicesCatalog();
	void init$();
	void addProvider(::java::lang::Module* module, $Class* service, $Class* impl);
	void addProviders($String* service, $Array<::jdk::internal::module::ServicesCatalog$ServiceProvider>* providers);
	static ::jdk::internal::module::ServicesCatalog* create();
	::java::util::List* findServices($String* service);
	static ::jdk::internal::module::ServicesCatalog* getServicesCatalog(::java::lang::ClassLoader* loader);
	static ::jdk::internal::module::ServicesCatalog* getServicesCatalogOrNull(::java::lang::ClassLoader* loader);
	static void putServicesCatalog(::java::lang::ClassLoader* loader, ::jdk::internal::module::ServicesCatalog* catalog);
	void register$(::java::lang::Module* module);
	::java::util::Map* map = nullptr;
	static ::jdk::internal::loader::ClassLoaderValue* CLV;
};

		} // module
	} // internal
} // jdk

#pragma pop_macro("CLV")

#endif // _jdk_internal_module_ServicesCatalog_h_