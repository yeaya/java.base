#ifndef _jdk_internal_module_Checks_h_
#define _jdk_internal_module_Checks_h_
//$ class jdk.internal.module.Checks
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("RESERVED")
#undef RESERVED

namespace java {
	namespace util {
		class Set;
	}
}

namespace jdk {
	namespace internal {
		namespace module {

class $export Checks : public ::java::lang::Object {
	$class(Checks, $PRELOAD, ::java::lang::Object)
public:
	Checks();
	void init$();
	static bool isClassName($String* name);
	static bool isJavaIdentifier($String* str);
	static bool isPackageName($String* name);
	static bool isTypeName($String* name);
	static $String* requireModuleName($String* name);
	static $String* requirePackageName($String* name);
	static $String* requireQualifiedClassName($String* what, $String* name);
	static $String* requireServiceProviderName($String* name);
	static $String* requireServiceTypeName($String* name);
	static $String* requireTypeName($String* what, $String* name);
	static ::java::util::Set* RESERVED;
};

		} // module
	} // internal
} // jdk

#pragma pop_macro("RESERVED")

#endif // _jdk_internal_module_Checks_h_