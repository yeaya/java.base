#ifndef _jdk_internal_loader_Loader$LoadedModule_h_
#define _jdk_internal_loader_Loader$LoadedModule_h_
//$ class jdk.internal.loader.Loader$LoadedModule
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		namespace module {
			class ModuleReference;
		}
	}
}
namespace java {
	namespace net {
		class URL;
	}
}
namespace java {
	namespace security {
		class CodeSource;
	}
}

namespace jdk {
	namespace internal {
		namespace loader {

class Loader$LoadedModule : public ::java::lang::Object {
	$class(Loader$LoadedModule, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Loader$LoadedModule();
	void init$(::java::lang::module::ModuleReference* mref);
	virtual ::java::security::CodeSource* codeSource();
	virtual ::java::net::URL* location();
	virtual ::java::lang::module::ModuleReference* mref();
	virtual $String* name();
	::java::lang::module::ModuleReference* mref$ = nullptr;
	::java::net::URL* url = nullptr;
	::java::security::CodeSource* cs = nullptr;
};

		} // loader
	} // internal
} // jdk

#endif // _jdk_internal_loader_Loader$LoadedModule_h_