#ifndef _jdk_internal_module_SystemModuleFinders$3_h_
#define _jdk_internal_module_SystemModuleFinders$3_h_
//$ class jdk.internal.module.SystemModuleFinders$3
//$ extends jdk.internal.module.ModuleHashes$HashSupplier

#include <java/lang/Array.h>
#include <jdk/internal/module/ModuleHashes$HashSupplier.h>

namespace jdk {
	namespace internal {
		namespace module {

class SystemModuleFinders$3 : public ::jdk::internal::module::ModuleHashes$HashSupplier {
	$class(SystemModuleFinders$3, $NO_CLASS_INIT, ::jdk::internal::module::ModuleHashes$HashSupplier)
public:
	SystemModuleFinders$3();
	void init$($bytes* val$hash);
	virtual $bytes* generate($String* algorithm) override;
	$bytes* val$hash = nullptr;
};

		} // module
	} // internal
} // jdk

#endif // _jdk_internal_module_SystemModuleFinders$3_h_