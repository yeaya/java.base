#ifndef _jdk_internal_module_ModuleBootstrap_h_
#define _jdk_internal_module_ModuleBootstrap_h_
//$ class jdk.internal.module.ModuleBootstrap
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("ALL_SYSTEM")
#undef ALL_SYSTEM
#pragma push_macro("ALL_MODULE_PATH")
#undef ALL_MODULE_PATH
#pragma push_macro("ADD_READS")
#undef ADD_READS
#pragma push_macro("ENABLE_NATIVE_ACCESS")
#undef ENABLE_NATIVE_ACCESS
#pragma push_macro("ADD_MODULES")
#undef ADD_MODULES
#pragma push_macro("JLMA")
#undef JLMA
#pragma push_macro("ADD_EXPORTS")
#undef ADD_EXPORTS
#pragma push_macro("ALL_UNNAMED")
#undef ALL_UNNAMED
#pragma push_macro("ADD_OPENS")
#undef ADD_OPENS
#pragma push_macro("PATCH_MODULE")
#undef PATCH_MODULE
#pragma push_macro("ALL_DEFAULT")
#undef ALL_DEFAULT
#pragma push_macro("JLA")
#undef JLA
#pragma push_macro("JAVA_BASE")
#undef JAVA_BASE

namespace java {
	namespace lang {
		class ModuleLayer;
	}
}
namespace java {
	namespace lang {
		namespace module {
			class Configuration;
			class ModuleFinder;
			class ModuleReference;
		}
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
		class Set;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Function;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace access {
			class JavaLangAccess;
			class JavaLangModuleAccess;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace module {
			class ModulePatcher;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace module {

class $import ModuleBootstrap : public ::java::lang::Object {
	$class(ModuleBootstrap, $PRELOAD, ::java::lang::Object)
public:
	ModuleBootstrap();
	void init$();
	static void addEnableNativeAccess(::java::lang::ModuleLayer* layer);
	static bool addExtraExportsAndOpens(::java::lang::ModuleLayer* bootLayer);
	static void addExtraExportsOrOpens(::java::lang::ModuleLayer* bootLayer, ::java::util::Map* map, bool opens);
	static void addExtraReads(::java::lang::ModuleLayer* bootLayer);
	static ::java::util::Set* addModules();
	static ::java::lang::ModuleLayer* boot();
	static ::java::lang::ModuleLayer* boot2();
	static bool canUseArchivedBootLayer();
	static void checkIncubatingStatus(::java::lang::module::Configuration* cf);
	static void checkSplitPackages(::java::lang::module::Configuration* cf, ::java::util::function::Function* clf);
	static ::java::util::Map* decode($String* prefix, $String* regex, bool allowDuplicates);
	static ::java::util::Map* decode($String* prefix);
	static ::java::util::Set* decodeEnableNativeAccess();
	static void fail($String* m);
	static ::java::lang::module::ModuleFinder* finderFor($String* prop);
	static $String* getAndRemoveProperty($String* key);
	static $String* getProperty($String* key);
	static ::jdk::internal::module::ModulePatcher* initModulePatcher();
	static bool lambda$boot2$0(::java::lang::module::ModuleFinder* f, $String* mn);
	static void lambda$boot2$1(::java::util::Set* roots, $String* mn);
	static bool lambda$boot2$4(::java::lang::module::Configuration* cf, $String* mn);
	static void lambda$boot2$5($String* mn);
	static ::java::util::List* lambda$decode$8($String* k);
	static void lambda$limitFinder$6(::java::util::Map* map, ::java::lang::module::ModuleReference* mref);
	static void lambda$limitFinder$7(::java::util::Map* map, ::java::lang::module::ModuleReference* mref);
	static ::java::lang::module::ModuleFinder* limitFinder(::java::lang::module::ModuleFinder* finder, ::java::util::Set* roots, ::java::util::Set* otherMods);
	static ::java::util::Set* limitModules();
	static ::java::lang::module::ModuleFinder* limitedFinder();
	static void loadModules(::java::lang::module::Configuration* cf, ::java::util::function::Function* clf);
	static $String* option($String* prefix);
	static ::jdk::internal::module::ModulePatcher* patcher();
	static $String* unableToParse($String* option, $String* text, $String* value);
	static ::java::lang::module::ModuleFinder* unlimitedFinder();
	static void warn($String* m);
	static void warnUnknownModule($String* option, $String* mn);
	static bool $assertionsDisabled;
	static $String* JAVA_BASE;
	static $String* ALL_DEFAULT;
	static $String* ALL_UNNAMED;
	static $String* ALL_SYSTEM;
	static $String* ALL_MODULE_PATH;
	static ::jdk::internal::access::JavaLangAccess* JLA;
	static ::jdk::internal::access::JavaLangModuleAccess* JLMA;
	static ::jdk::internal::module::ModulePatcher* patcher$;
	static $volatile(::java::lang::module::ModuleFinder*) unlimitedFinder$;
	static $volatile(::java::lang::module::ModuleFinder*) limitedFinder$;
	static $String* ADD_MODULES;
	static $String* ADD_EXPORTS;
	static $String* ADD_OPENS;
	static $String* ADD_READS;
	static $String* PATCH_MODULE;
	static $String* ENABLE_NATIVE_ACCESS;
};

		} // module
	} // internal
} // jdk

#pragma pop_macro("ALL_SYSTEM")
#pragma pop_macro("ALL_MODULE_PATH")
#pragma pop_macro("ADD_READS")
#pragma pop_macro("ENABLE_NATIVE_ACCESS")
#pragma pop_macro("ADD_MODULES")
#pragma pop_macro("JLMA")
#pragma pop_macro("ADD_EXPORTS")
#pragma pop_macro("ALL_UNNAMED")
#pragma pop_macro("ADD_OPENS")
#pragma pop_macro("PATCH_MODULE")
#pragma pop_macro("ALL_DEFAULT")
#pragma pop_macro("JLA")
#pragma pop_macro("JAVA_BASE")

#endif // _jdk_internal_module_ModuleBootstrap_h_