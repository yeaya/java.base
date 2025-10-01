#ifndef _java_lang_module_ModuleReference_h_
#define _java_lang_module_ModuleReference_h_
//$ class java.lang.module.ModuleReference
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		namespace module {
			class ModuleDescriptor;
			class ModuleReader;
		}
	}
}
namespace java {
	namespace net {
		class URI;
	}
}
namespace java {
	namespace util {
		class Optional;
	}
}

namespace java {
	namespace lang {
		namespace module {

class $export ModuleReference : public ::java::lang::Object {
	$class(ModuleReference, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Object)
public:
	ModuleReference();
	void init$(::java::lang::module::ModuleDescriptor* descriptor, ::java::net::URI* location);
	::java::lang::module::ModuleDescriptor* descriptor();
	::java::util::Optional* location();
	virtual ::java::lang::module::ModuleReader* open() {return nullptr;}
	::java::lang::module::ModuleDescriptor* descriptor$ = nullptr;
	::java::net::URI* location$ = nullptr;
};

		} // module
	} // lang
} // java

#endif // _java_lang_module_ModuleReference_h_