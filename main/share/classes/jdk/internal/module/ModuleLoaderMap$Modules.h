#ifndef _jdk_internal_module_ModuleLoaderMap$Modules_h_
#define _jdk_internal_module_ModuleLoaderMap$Modules_h_
//$ class jdk.internal.module.ModuleLoaderMap$Modules
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Set;
	}
}

namespace jdk {
	namespace internal {
		namespace module {

class ModuleLoaderMap$Modules : public ::java::lang::Object {
	$class(ModuleLoaderMap$Modules, $PRELOAD, ::java::lang::Object)
public:
	ModuleLoaderMap$Modules();
	void init$();
	static ::java::util::Set* bootModules;
	static ::java::util::Set* platformModules;
};

		} // module
	} // internal
} // jdk

#endif // _jdk_internal_module_ModuleLoaderMap$Modules_h_