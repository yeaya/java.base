#ifndef _sun_invoke_util_VerifyAccess_h_
#define _sun_invoke_util_VerifyAccess_h_
//$ class sun.invoke.util.VerifyAccess
//$ extends java.lang.Object

#include <java/lang/invoke/MethodHandles$Lookup.h>

#pragma push_macro("ALL_ACCESS_MODES")
#undef ALL_ACCESS_MODES
#pragma push_macro("MODULE")
#undef MODULE
#pragma push_macro("MODULE_ALLOWED")
#undef MODULE_ALLOWED
#pragma push_macro("ORIGINAL")
#undef ORIGINAL
#pragma push_macro("ORIGINAL_ALLOWED")
#undef ORIGINAL_ALLOWED
#pragma push_macro("PACKAGE")
#undef PACKAGE
#pragma push_macro("PACKAGE_ALLOWED")
#undef PACKAGE_ALLOWED
#pragma push_macro("PACKAGE_ONLY")
#undef PACKAGE_ONLY
#pragma push_macro("PROTECTED_OR_PACKAGE_ALLOWED")
#undef PROTECTED_OR_PACKAGE_ALLOWED
#pragma push_macro("UNCONDITIONAL")
#undef UNCONDITIONAL
#pragma push_macro("UNCONDITIONAL_ALLOWED")
#undef UNCONDITIONAL_ALLOWED

namespace java {
	namespace lang {
		class ClassLoader;
		class Module;
	}
}
namespace java {
	namespace lang {
		namespace invoke {
			class MethodType;
		}
	}
}

namespace sun {
	namespace invoke {
		namespace util {

class $export VerifyAccess : public ::java::lang::Object {
	$class(VerifyAccess, $PRELOAD, ::java::lang::Object)
public:
	VerifyAccess();
	void init$();
	static bool classLoaderIsAncestor($Class* parentClass, $Class* childClass);
	static int32_t getClassModifiers($Class* c);
	static $Class* getOutermostEnclosingClass($Class* c);
	static bool isClassAccessible($Class* refc, $Class* lookupClass, $Class* prevLookupClass, int32_t allowedModes);
	static bool isMemberAccessible($Class* refc, $Class* defc, int32_t mods, $Class* lookupClass, $Class* prevLookupClass, int32_t allowedModes);
	static bool isModuleAccessible($Class* refc, ::java::lang::Module* m1, ::java::lang::Module* m2);
	static bool isRelatedClass($Class* refc, $Class* lookupClass);
	static bool isSameModule($Class* class1, $Class* class2);
	static bool isSamePackage($Class* class1, $Class* class2);
	static bool isSamePackageMember($Class* class1, $Class* class2);
	static bool isSubClass($Class* lookupClass, $Class* defc);
	static bool isTypeVisible($Class* type, $Class* refc);
	static bool isTypeVisible(::java::lang::invoke::MethodType* type, $Class* refc);
	static bool loadersAreRelated(::java::lang::ClassLoader* loader1, ::java::lang::ClassLoader* loader2, bool loader1MustBeParent);
	static bool $assertionsDisabled;
	static const int32_t UNCONDITIONAL_ALLOWED = java::lang::invoke::MethodHandles$Lookup::UNCONDITIONAL;
	static const int32_t ORIGINAL_ALLOWED = java::lang::invoke::MethodHandles$Lookup::ORIGINAL;
	static const int32_t MODULE_ALLOWED = java::lang::invoke::MethodHandles$Lookup::MODULE;
	static const int32_t PACKAGE_ONLY = 0;
	static const int32_t PACKAGE_ALLOWED = java::lang::invoke::MethodHandles$Lookup::PACKAGE;
	static const int32_t PROTECTED_OR_PACKAGE_ALLOWED = 12; // (PACKAGE_ALLOWED | 4)
	static const int32_t ALL_ACCESS_MODES = 7; // (1 | 2 | 4 | PACKAGE_ONLY)
};

		} // util
	} // invoke
} // sun

#pragma pop_macro("ALL_ACCESS_MODES")
#pragma pop_macro("MODULE")
#pragma pop_macro("MODULE_ALLOWED")
#pragma pop_macro("ORIGINAL")
#pragma pop_macro("ORIGINAL_ALLOWED")
#pragma pop_macro("PACKAGE")
#pragma pop_macro("PACKAGE_ALLOWED")
#pragma pop_macro("PACKAGE_ONLY")
#pragma pop_macro("PROTECTED_OR_PACKAGE_ALLOWED")
#pragma pop_macro("UNCONDITIONAL")
#pragma pop_macro("UNCONDITIONAL_ALLOWED")

#endif // _sun_invoke_util_VerifyAccess_h_