#ifndef _java_lang_module_ModuleFinder$2_h_
#define _java_lang_module_ModuleFinder$2_h_
//$ class java.lang.module.ModuleFinder$2
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
		class List;
		class Map;
		class Optional;
		class Set;
	}
}
namespace java {
	namespace util {
		namespace stream {
			class Stream;
		}
	}
}

namespace java {
	namespace lang {
		namespace module {

class ModuleFinder$2 : public ::java::lang::module::ModuleFinder {
	$class(ModuleFinder$2, $NO_CLASS_INIT, ::java::lang::module::ModuleFinder)
public:
	ModuleFinder$2();
	void init$(::java::util::List* val$finderList);
	virtual ::java::util::Optional* find($String* name) override;
	virtual ::java::util::Set* findAll() override;
	static ::java::util::Optional* lambda$find$0($String* name, ::java::lang::module::ModuleFinder* f);
	void lambda$find$1($String* name, ::java::lang::module::ModuleReference* m);
	static ::java::util::stream::Stream* lambda$findAll$2(::java::lang::module::ModuleFinder* f);
	void lambda$findAll$3(::java::util::Set* result, ::java::lang::module::ModuleReference* mref);
	::java::util::List* val$finderList = nullptr;
	::java::util::Map* nameToModule = nullptr;
	::java::util::Set* allModules = nullptr;
};

		} // module
	} // lang
} // java

#endif // _java_lang_module_ModuleFinder$2_h_