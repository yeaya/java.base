#ifndef _jdk_internal_module_SystemModulesMap_h_
#define _jdk_internal_module_SystemModulesMap_h_
//$ class jdk.internal.module.SystemModulesMap
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace jdk {
	namespace internal {
		namespace module {
			class SystemModules;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace module {

class SystemModulesMap : public ::java::lang::Object {
	$class(SystemModulesMap, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SystemModulesMap();
	void init$();
	static ::jdk::internal::module::SystemModules* allSystemModules();
	static $StringArray* classNames();
	static ::jdk::internal::module::SystemModules* defaultSystemModules();
	static $StringArray* moduleNames();
};

		} // module
	} // internal
} // jdk

#endif // _jdk_internal_module_SystemModulesMap_h_