#ifndef _jdk_internal_module_ModuleBootstrap$SafeModuleFinder_h_
#define _jdk_internal_module_ModuleBootstrap$SafeModuleFinder_h_
//$ class jdk.internal.module.ModuleBootstrap$SafeModuleFinder
//$ extends java.lang.module.ModuleFinder

#include <java/lang/module/ModuleFinder.h>

namespace java {
	namespace lang {
		namespace module {
			class ModuleReference;
		}
	}
}
namespace java {
	namespace util {
		class Map;
		class Optional;
		class Set;
	}
}

namespace jdk {
	namespace internal {
		namespace module {

class $import ModuleBootstrap$SafeModuleFinder : public ::java::lang::module::ModuleFinder {
	$class(ModuleBootstrap$SafeModuleFinder, $PRELOAD | $NO_CLASS_INIT, ::java::lang::module::ModuleFinder)
public:
	ModuleBootstrap$SafeModuleFinder();
	void init$(::java::lang::module::ModuleFinder* finder);
	virtual ::java::util::Optional* find($String* name) override;
	virtual ::java::util::Set* findAll() override;
	static $String* lambda$find$0(::java::lang::module::ModuleReference* m);
	::java::util::Set* mrefs = nullptr;
	$volatile(::java::util::Map*) nameToModule = nullptr;
};

		} // module
	} // internal
} // jdk

#endif // _jdk_internal_module_ModuleBootstrap$SafeModuleFinder_h_