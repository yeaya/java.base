#ifndef _java_lang_ModuleLayer$Controller_h_
#define _java_lang_ModuleLayer$Controller_h_
//$ class java.lang.ModuleLayer$Controller
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class Module;
		class ModuleLayer;
	}
}

namespace java {
	namespace lang {

class $export ModuleLayer$Controller : public ::java::lang::Object {
	$class(ModuleLayer$Controller, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Object)
public:
	ModuleLayer$Controller();
	void init$(::java::lang::ModuleLayer* layer);
	::java::lang::ModuleLayer$Controller* addExports(::java::lang::Module* source, $String* pn, ::java::lang::Module* target);
	::java::lang::ModuleLayer$Controller* addOpens(::java::lang::Module* source, $String* pn, ::java::lang::Module* target);
	::java::lang::ModuleLayer$Controller* addReads(::java::lang::Module* source, ::java::lang::Module* target);
	void ensureInLayer(::java::lang::Module* source);
	::java::lang::ModuleLayer* layer();
	::java::lang::ModuleLayer* layer$ = nullptr;
};

	} // lang
} // java

#endif // _java_lang_ModuleLayer$Controller_h_