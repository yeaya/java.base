#ifndef _java_lang_module_ModuleFinder_h_
#define _java_lang_module_ModuleFinder_h_
//$ interface java.lang.module.ModuleFinder
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
	}
}
namespace java {
	namespace util {
		class Optional;
		class Set;
	}
}

namespace java {
	namespace lang {
		namespace module {

class $export ModuleFinder : public ::java::lang::Object {
	$interface(ModuleFinder, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Object)
public:
	static ::java::lang::module::ModuleFinder* compose($Array<::java::lang::module::ModuleFinder>* finders);
	virtual ::java::util::Optional* find($String* name) {return nullptr;}
	virtual ::java::util::Set* findAll() {return nullptr;}
	static ::java::lang::module::ModuleFinder* of($Array<::java::nio::file::Path>* entries);
	static ::java::lang::module::ModuleFinder* ofSystem();
};

		} // module
	} // lang
} // java

#endif // _java_lang_module_ModuleFinder_h_