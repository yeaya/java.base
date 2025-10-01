#ifndef _jdk_internal_module_SystemModuleFinders$1_h_
#define _jdk_internal_module_SystemModuleFinders$1_h_
//$ class jdk.internal.module.SystemModuleFinders$1
//$ extends java.lang.module.ModuleFinder

#include <java/lang/module/ModuleFinder.h>

namespace java {
	namespace util {
		class Optional;
		class Set;
	}
}

namespace jdk {
	namespace internal {
		namespace module {

class SystemModuleFinders$1 : public ::java::lang::module::ModuleFinder {
	$class(SystemModuleFinders$1, $NO_CLASS_INIT, ::java::lang::module::ModuleFinder)
public:
	SystemModuleFinders$1();
	void init$(::java::lang::module::ModuleFinder* val$f);
	virtual ::java::util::Optional* find($String* name) override;
	virtual ::java::util::Set* findAll() override;
	static ::java::util::Optional* lambda$find$0(::java::lang::module::ModuleFinder* f, $String* name);
	::java::lang::module::ModuleFinder* val$f = nullptr;
};

		} // module
	} // internal
} // jdk

#endif // _jdk_internal_module_SystemModuleFinders$1_h_