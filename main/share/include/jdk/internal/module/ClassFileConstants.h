#ifndef _jdk_internal_module_ClassFileConstants_h_
#define _jdk_internal_module_ClassFileConstants_h_
//$ class jdk.internal.module.ClassFileConstants
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("ACC_MANDATED")
#undef ACC_MANDATED
#pragma push_macro("WARN_INCUBATING")
#undef WARN_INCUBATING
#pragma push_macro("SOURCE_FILE")
#undef SOURCE_FILE
#pragma push_macro("MODULE_TARGET")
#undef MODULE_TARGET
#pragma push_macro("ACC_MODULE")
#undef ACC_MODULE
#pragma push_macro("MODULE_RESOLUTION")
#undef MODULE_RESOLUTION
#pragma push_macro("MODULE_HASHES")
#undef MODULE_HASHES
#pragma push_macro("ACC_OPEN")
#undef ACC_OPEN
#pragma push_macro("DO_NOT_RESOLVE_BY_DEFAULT")
#undef DO_NOT_RESOLVE_BY_DEFAULT
#pragma push_macro("ACC_SYNTHETIC")
#undef ACC_SYNTHETIC
#pragma push_macro("MODULE")
#undef MODULE
#pragma push_macro("ACC_STATIC_PHASE")
#undef ACC_STATIC_PHASE
#pragma push_macro("SDE")
#undef SDE
#pragma push_macro("MODULE_MAIN_CLASS")
#undef MODULE_MAIN_CLASS
#pragma push_macro("MODULE_PACKAGES")
#undef MODULE_PACKAGES
#pragma push_macro("WARN_DEPRECATED")
#undef WARN_DEPRECATED
#pragma push_macro("WARN_DEPRECATED_FOR_REMOVAL")
#undef WARN_DEPRECATED_FOR_REMOVAL
#pragma push_macro("ACC_TRANSITIVE")
#undef ACC_TRANSITIVE

namespace jdk {
	namespace internal {
		namespace module {

class $import ClassFileConstants : public ::java::lang::Object {
	$class(ClassFileConstants, 0, ::java::lang::Object)
public:
	ClassFileConstants();
	void init$();
	static $String* MODULE;
	static $String* SOURCE_FILE;
	static $String* SDE;
	static $String* MODULE_PACKAGES;
	static $String* MODULE_MAIN_CLASS;
	static $String* MODULE_TARGET;
	static $String* MODULE_HASHES;
	static $String* MODULE_RESOLUTION;
	static const int32_t ACC_MODULE = 32768;
	static const int32_t ACC_OPEN = 32;
	static const int32_t ACC_TRANSITIVE = 32;
	static const int32_t ACC_STATIC_PHASE = 64;
	static const int32_t ACC_SYNTHETIC = 4096;
	static const int32_t ACC_MANDATED = 32768;
	static const int32_t DO_NOT_RESOLVE_BY_DEFAULT = 1;
	static const int32_t WARN_DEPRECATED = 2;
	static const int32_t WARN_DEPRECATED_FOR_REMOVAL = 4;
	static const int32_t WARN_INCUBATING = 8;
};

		} // module
	} // internal
} // jdk

#pragma pop_macro("ACC_MANDATED")
#pragma pop_macro("WARN_INCUBATING")
#pragma pop_macro("SOURCE_FILE")
#pragma pop_macro("MODULE_TARGET")
#pragma pop_macro("ACC_MODULE")
#pragma pop_macro("MODULE_RESOLUTION")
#pragma pop_macro("MODULE_HASHES")
#pragma pop_macro("ACC_OPEN")
#pragma pop_macro("DO_NOT_RESOLVE_BY_DEFAULT")
#pragma pop_macro("ACC_SYNTHETIC")
#pragma pop_macro("MODULE")
#pragma pop_macro("ACC_STATIC_PHASE")
#pragma pop_macro("SDE")
#pragma pop_macro("MODULE_MAIN_CLASS")
#pragma pop_macro("MODULE_PACKAGES")
#pragma pop_macro("WARN_DEPRECATED")
#pragma pop_macro("WARN_DEPRECATED_FOR_REMOVAL")
#pragma pop_macro("ACC_TRANSITIVE")

#endif // _jdk_internal_module_ClassFileConstants_h_