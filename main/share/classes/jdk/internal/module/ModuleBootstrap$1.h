#ifndef _jdk_internal_module_ModuleBootstrap$1_h_
#define _jdk_internal_module_ModuleBootstrap$1_h_
//$ class jdk.internal.module.ModuleBootstrap$1
//$ extends java.lang.module.ModuleFinder

#include <java/lang/module/ModuleFinder.h>

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

class ModuleBootstrap$1 : public ::java::lang::module::ModuleFinder {
	$class(ModuleBootstrap$1, $NO_CLASS_INIT, ::java::lang::module::ModuleFinder)
public:
	ModuleBootstrap$1();
	void init$(::java::util::Map* val$map, ::java::util::Set* val$mrefs);
	virtual ::java::util::Optional* find($String* name) override;
	virtual ::java::util::Set* findAll() override;
	::java::util::Set* val$mrefs = nullptr;
	::java::util::Map* val$map = nullptr;
};

		} // module
	} // internal
} // jdk

#endif // _jdk_internal_module_ModuleBootstrap$1_h_