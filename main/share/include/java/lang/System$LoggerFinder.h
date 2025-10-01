#ifndef _java_lang_System$LoggerFinder_h_
#define _java_lang_System$LoggerFinder_h_
//$ class java.lang.System$LoggerFinder
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("LOGGERFINDER_PERMISSION")
#undef LOGGERFINDER_PERMISSION

namespace java {
	namespace lang {
		class Module;
		class RuntimePermission;
		class System$Logger;
		class Void;
	}
}
namespace java {
	namespace util {
		class ResourceBundle;
	}
}

namespace java {
	namespace lang {

class $import System$LoggerFinder : public ::java::lang::Object {
	$class(System$LoggerFinder, 0, ::java::lang::Object)
public:
	System$LoggerFinder();
	void init$();
	void init$(::java::lang::Void* unused);
	static ::java::lang::System$LoggerFinder* accessProvider();
	static ::java::lang::Void* checkPermission();
	virtual ::java::lang::System$Logger* getLocalizedLogger($String* name, ::java::util::ResourceBundle* bundle, ::java::lang::Module* module);
	virtual ::java::lang::System$Logger* getLogger($String* name, ::java::lang::Module* module) {return nullptr;}
	static ::java::lang::System$LoggerFinder* getLoggerFinder();
	static ::java::lang::System$LoggerFinder* lambda$accessProvider$0();
	static ::java::lang::RuntimePermission* LOGGERFINDER_PERMISSION;
	static $volatile(::java::lang::System$LoggerFinder*) service;
};

	} // lang
} // java

#pragma pop_macro("LOGGERFINDER_PERMISSION")

#endif // _java_lang_System$LoggerFinder_h_