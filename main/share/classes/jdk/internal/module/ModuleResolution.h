#ifndef _jdk_internal_module_ModuleResolution_h_
#define _jdk_internal_module_ModuleResolution_h_
//$ class jdk.internal.module.ModuleResolution
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		namespace module {
			class ModuleReference;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace module {

class $export ModuleResolution : public ::java::lang::Object {
	$class(ModuleResolution, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ModuleResolution();
	void init$(int32_t value);
	bool doNotResolveByDefault();
	static bool doNotResolveByDefault(::java::lang::module::ModuleReference* mref);
	static ::jdk::internal::module::ModuleResolution* empty();
	bool hasDeprecatedForRemovalWarning();
	bool hasDeprecatedWarning();
	bool hasIncubatingWarning();
	static bool hasIncubatingWarning(::java::lang::module::ModuleReference* mref);
	virtual $String* toString() override;
	int32_t value();
	::jdk::internal::module::ModuleResolution* withDeprecated();
	::jdk::internal::module::ModuleResolution* withDeprecatedForRemoval();
	::jdk::internal::module::ModuleResolution* withDoNotResolveByDefault();
	::jdk::internal::module::ModuleResolution* withIncubating();
	int32_t value$ = 0;
};

		} // module
	} // internal
} // jdk

#endif // _jdk_internal_module_ModuleResolution_h_