#ifndef _jdk_internal_module_ModuleHashes$HashSupplier_h_
#define _jdk_internal_module_ModuleHashes$HashSupplier_h_
//$ interface jdk.internal.module.ModuleHashes$HashSupplier
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace jdk {
	namespace internal {
		namespace module {

class $import ModuleHashes$HashSupplier : public ::java::lang::Object {
	$interface(ModuleHashes$HashSupplier, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $bytes* generate($String* algorithm) {return nullptr;}
};

		} // module
	} // internal
} // jdk

#endif // _jdk_internal_module_ModuleHashes$HashSupplier_h_