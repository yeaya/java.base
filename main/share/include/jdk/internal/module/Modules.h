#ifndef _jdk_internal_module_Modules_h_
#define _jdk_internal_module_Modules_h_
//$ class jdk.internal.module.Modules
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("JLA")
#undef JLA
#pragma push_macro("JLMA")
#undef JLMA

namespace java {
	namespace io {
		class PrintStream;
	}
}
namespace java {
	namespace lang {
		class ClassLoader;
		class InternalError;
		class Module;
		class ModuleLayer;
	}
}
namespace java {
	namespace lang {
		namespace module {
			class Configuration;
			class ModuleDescriptor;
			class ModuleDescriptor$Exports;
			class ModuleDescriptor$Opens;
			class ModuleFinder;
		}
	}
}
namespace java {
	namespace net {
		class URI;
	}
}
namespace java {
	namespace util {
		class Collection;
		class Map;
		class Optional;
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

class $import Modules : public ::java::lang::Object {
	$class(Modules, $PRELOAD, ::java::lang::Object)
public:
	Modules();
	void init$();
	static void addExports(::java::lang::Module* m1, $String* pn, ::java::lang::Module* m2);
	static void addExports(::java::lang::Module* m, $String* pn);
	static void addExportsToAllUnnamed(::java::lang::Module* m, $String* pn);
	static void addOpens(::java::lang::Module* m1, $String* pn, ::java::lang::Module* m2);
	static void addOpensToAllUnnamed(::java::lang::Module* m, $String* pn);
	static void addProvides(::java::lang::Module* m, $Class* service, $Class* impl);
	static void addReads(::java::lang::Module* m1, ::java::lang::Module* m2);
	static void addReadsAllUnnamed(::java::lang::Module* m);
	static void addUses(::java::lang::Module* m, $Class* service);
	static ::java::lang::Module* defineModule(::java::lang::ClassLoader* loader, ::java::lang::module::ModuleDescriptor* descriptor, ::java::net::URI* uri);
	static ::java::util::Optional* findLoadedModule($String* name);
	static void lambda$loadModule$0(::java::util::Map* map, ::java::lang::Module* m, ::java::lang::module::ModuleDescriptor$Exports* e, $String* target);
	static void lambda$loadModule$1(::java::util::Map* map, ::java::lang::Module* m, ::java::lang::module::ModuleDescriptor$Exports* e);
	static void lambda$loadModule$2(::java::util::Map* map, ::java::lang::Module* m, ::java::lang::module::ModuleDescriptor$Opens* o, $String* target);
	static void lambda$loadModule$3(::java::util::Map* map, ::java::lang::Module* m, ::java::lang::module::ModuleDescriptor$Opens* o);
	static ::java::lang::InternalError* lambda$loadModule$4();
	static ::java::lang::Module* loadModule($String* name);
	static ::java::lang::module::Configuration* newBootLayerConfiguration(::java::lang::module::ModuleFinder* finder, ::java::util::Collection* roots, ::java::io::PrintStream* traceOutput);
	static void transformedByAgent(::java::lang::Module* m);
	static bool $assertionsDisabled;
	static ::jdk::internal::access::JavaLangAccess* JLA;
	static ::jdk::internal::access::JavaLangModuleAccess* JLMA;
	static $volatile(::java::lang::ModuleLayer*) topLayer;
};

		} // module
	} // internal
} // jdk

#pragma pop_macro("JLA")
#pragma pop_macro("JLMA")

#endif // _jdk_internal_module_Modules_h_