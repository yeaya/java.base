#ifndef _jdk_internal_module_ModuleTarget_h_
#define _jdk_internal_module_ModuleTarget_h_
//$ class jdk.internal.module.ModuleTarget
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace module {

class $export ModuleTarget : public ::java::lang::Object {
	$class(ModuleTarget, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ModuleTarget();
	void init$($String* targetPlatform);
	$String* targetPlatform();
	$String* targetPlatform$ = nullptr;
};

		} // module
	} // internal
} // jdk

#endif // _jdk_internal_module_ModuleTarget_h_