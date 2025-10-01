#ifndef _jdk_internal_module_SystemModuleFinders$SystemModuleFinder_h_
#define _jdk_internal_module_SystemModuleFinders$SystemModuleFinder_h_
//$ class jdk.internal.module.SystemModuleFinders$SystemModuleFinder
//$ extends java.lang.module.ModuleFinder

#include <java/lang/Array.h>
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
		class Map$Entry;
		class Optional;
		class Set;
	}
}

namespace jdk {
	namespace internal {
		namespace module {

class SystemModuleFinders$SystemModuleFinder : public ::java::lang::module::ModuleFinder {
	$class(SystemModuleFinders$SystemModuleFinder, $NO_CLASS_INIT, ::java::lang::module::ModuleFinder)
public:
	SystemModuleFinders$SystemModuleFinder();
	void init$($Array<::java::lang::module::ModuleReference>* array, $Array<::java::util::Map$Entry>* map);
	void init$(::java::util::Set* mrefs, ::java::util::Map* nameToModule);
	virtual ::java::util::Optional* find($String* name) override;
	virtual ::java::util::Set* findAll() override;
	::java::util::Set* mrefs = nullptr;
	::java::util::Map* nameToModule = nullptr;
};

		} // module
	} // internal
} // jdk

#endif // _jdk_internal_module_SystemModuleFinders$SystemModuleFinder_h_