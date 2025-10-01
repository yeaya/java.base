#ifndef _jdk_internal_module_ArchivedModuleGraph_h_
#define _jdk_internal_module_ArchivedModuleGraph_h_
//$ class jdk.internal.module.ArchivedModuleGraph
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		namespace module {
			class Configuration;
			class ModuleFinder;
		}
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
		namespace module {

class ArchivedModuleGraph : public ::java::lang::Object {
	$class(ArchivedModuleGraph, $PRELOAD, ::java::lang::Object)
public:
	ArchivedModuleGraph();
	void init$(bool hasSplitPackages, bool hasIncubatorModules, ::java::lang::module::ModuleFinder* finder, ::java::lang::module::Configuration* configuration, ::java::util::function::Function* classLoaderFunction);
	static void archive(bool hasSplitPackages, bool hasIncubatorModules, ::java::lang::module::ModuleFinder* finder, ::java::lang::module::Configuration* configuration, ::java::util::function::Function* classLoaderFunction);
	virtual ::java::util::function::Function* classLoaderFunction();
	virtual ::java::lang::module::Configuration* configuration();
	virtual ::java::lang::module::ModuleFinder* finder();
	static ::jdk::internal::module::ArchivedModuleGraph* get($String* mainModule);
	virtual bool hasIncubatorModules();
	virtual bool hasSplitPackages();
	static ::jdk::internal::module::ArchivedModuleGraph* archivedModuleGraph;
	bool hasSplitPackages$ = false;
	bool hasIncubatorModules$ = false;
	::java::lang::module::ModuleFinder* finder$ = nullptr;
	::java::lang::module::Configuration* configuration$ = nullptr;
	::java::util::function::Function* classLoaderFunction$ = nullptr;
};

		} // module
	} // internal
} // jdk

#endif // _jdk_internal_module_ArchivedModuleGraph_h_