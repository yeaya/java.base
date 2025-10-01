#ifndef _java_lang_module_ModuleFinder$1_h_
#define _java_lang_module_ModuleFinder$1_h_
//$ class java.lang.module.ModuleFinder$1
//$ extends java.lang.module.ModuleFinder

#include <java/lang/module/ModuleFinder.h>

namespace java {
	namespace util {
		class Optional;
		class Set;
	}
}

namespace java {
	namespace lang {
		namespace module {

class ModuleFinder$1 : public ::java::lang::module::ModuleFinder {
	$class(ModuleFinder$1, $PRELOAD | $NO_CLASS_INIT, ::java::lang::module::ModuleFinder)
public:
	ModuleFinder$1();
	void init$();
	virtual ::java::util::Optional* find($String* name) override;
	virtual ::java::util::Set* findAll() override;
};

		} // module
	} // lang
} // java

#endif // _java_lang_module_ModuleFinder$1_h_