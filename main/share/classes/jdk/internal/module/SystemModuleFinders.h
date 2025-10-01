#ifndef _jdk_internal_module_SystemModuleFinders_h_
#define _jdk_internal_module_SystemModuleFinders_h_
//$ class jdk.internal.module.SystemModuleFinders
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("JNUA")
#undef JNUA
#pragma push_macro("USE_FAST_PATH")
#undef USE_FAST_PATH

namespace java {
	namespace lang {
		namespace module {
			class ModuleDescriptor;
			class ModuleFinder;
			class ModuleReference;
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace jdk {
	namespace internal {
		namespace access {
			class JavaNetUriAccess;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace module {
			class ModuleHashes;
			class ModuleHashes$HashSupplier;
			class ModuleResolution;
			class ModuleTarget;
			class SystemModules;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace module {

class $export SystemModuleFinders : public ::java::lang::Object {
	$class(SystemModuleFinders, $PRELOAD, ::java::lang::Object)
public:
	SystemModuleFinders();
	void init$();
	static ::jdk::internal::module::SystemModules* allSystemModules();
	static ::java::util::Map* generateNameToHash($Array<::jdk::internal::module::ModuleHashes>* recordedHashes);
	static ::jdk::internal::module::ModuleHashes$HashSupplier* hashSupplier(::java::util::Map* nameToHash, $String* name);
	static $bytes* lambda$ofModuleInfos$0(::jdk::internal::module::ModuleHashes* hashes, $String* name, $String* k);
	static ::java::lang::module::ModuleFinder* of(::jdk::internal::module::SystemModules* systemModules);
	static ::java::lang::module::ModuleFinder* ofModuleInfos();
	static ::java::lang::module::ModuleFinder* ofSystem();
	static ::jdk::internal::module::SystemModules* systemModules($String* initialModule);
	static ::java::lang::module::ModuleReference* toModuleReference(::java::lang::module::ModuleDescriptor* descriptor, ::jdk::internal::module::ModuleTarget* target, ::jdk::internal::module::ModuleHashes* recordedHashes, ::jdk::internal::module::ModuleHashes$HashSupplier* hasher, ::jdk::internal::module::ModuleResolution* mres);
	static ::jdk::internal::access::JavaNetUriAccess* JNUA;
	static bool USE_FAST_PATH;
	static $volatile(::java::lang::module::ModuleFinder*) cachedSystemModuleFinder;
};

		} // module
	} // internal
} // jdk

#pragma pop_macro("JNUA")
#pragma pop_macro("USE_FAST_PATH")

#endif // _jdk_internal_module_SystemModuleFinders_h_