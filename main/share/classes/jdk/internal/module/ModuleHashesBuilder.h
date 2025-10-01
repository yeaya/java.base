#ifndef _jdk_internal_module_ModuleHashesBuilder_h_
#define _jdk_internal_module_ModuleHashesBuilder_h_
//$ class jdk.internal.module.ModuleHashesBuilder
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		namespace module {
			class Configuration;
			class ResolvedModule;
		}
	}
}
namespace java {
	namespace util {
		class Map;
		class Set;
	}
}
namespace jdk {
	namespace internal {
		namespace module {
			class ModuleHashesBuilder$Graph;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace module {

class $export ModuleHashesBuilder : public ::java::lang::Object {
	$class(ModuleHashesBuilder, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ModuleHashesBuilder();
	void init$(::java::lang::module::Configuration* config, ::java::util::Set* modules);
	virtual ::java::util::Map* computeHashes(::java::util::Set* roots);
	static bool lambda$computeHashes$0(::java::util::Set* roots, ::java::util::Set* mods, $String* mn);
	bool lambda$computeHashes$1($String* mn, $String* n);
	::java::lang::module::ResolvedModule* lambda$computeHashes$2($String* name);
	void lambda$computeHashes$3(::jdk::internal::module::ModuleHashesBuilder$Graph* transposedGraph, ::java::util::Set* mods, ::java::util::Map* hashes, $String* mn);
	::java::lang::module::Configuration* configuration = nullptr;
	::java::util::Set* hashModuleCandidates = nullptr;
};

		} // module
	} // internal
} // jdk

#endif // _jdk_internal_module_ModuleHashesBuilder_h_