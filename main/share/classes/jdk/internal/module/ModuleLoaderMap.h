#ifndef _jdk_internal_module_ModuleLoaderMap_h_
#define _jdk_internal_module_ModuleLoaderMap_h_
//$ class jdk.internal.module.ModuleLoaderMap
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		namespace module {
			class Configuration;
		}
	}
}
namespace java {
	namespace util {
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
		namespace module {

class $export ModuleLoaderMap : public ::java::lang::Object {
	$class(ModuleLoaderMap, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ModuleLoaderMap();
	void init$();
	static ::java::util::Set* bootModules();
	static bool isBuiltinMapper(::java::util::function::Function* clf);
	static ::java::util::function::Function* mappingFunction(::java::lang::module::Configuration* cf);
	static ::java::util::Set* platformModules();
};

		} // module
	} // internal
} // jdk

#endif // _jdk_internal_module_ModuleLoaderMap_h_