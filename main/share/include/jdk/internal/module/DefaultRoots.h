#ifndef _jdk_internal_module_DefaultRoots_h_
#define _jdk_internal_module_DefaultRoots_h_
//$ class jdk.internal.module.DefaultRoots
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		namespace module {
			class ModuleDescriptor;
			class ModuleDescriptor$Exports;
			class ModuleFinder;
			class ModuleReference;
		}
	}
}
namespace java {
	namespace util {
		class Set;
	}
}

namespace jdk {
	namespace internal {
		namespace module {

class $import DefaultRoots : public ::java::lang::Object {
	$class(DefaultRoots, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DefaultRoots();
	void init$();
	static ::java::util::Set* compute(::java::lang::module::ModuleFinder* finder1, ::java::lang::module::ModuleFinder* finder2);
	static ::java::util::Set* compute(::java::lang::module::ModuleFinder* finder);
	static bool exportsAPI(::java::lang::module::ModuleDescriptor* descriptor);
	static bool lambda$compute$0(::java::lang::module::ModuleReference* mref);
	static bool lambda$compute$1(::java::lang::module::ModuleFinder* finder2, ::java::lang::module::ModuleDescriptor* descriptor);
	static bool lambda$exportsAPI$2(::java::lang::module::ModuleDescriptor$Exports* e);
};

		} // module
	} // internal
} // jdk

#endif // _jdk_internal_module_DefaultRoots_h_