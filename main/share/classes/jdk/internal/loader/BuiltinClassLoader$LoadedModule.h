#ifndef _jdk_internal_loader_BuiltinClassLoader$LoadedModule_h_
#define _jdk_internal_loader_BuiltinClassLoader$LoadedModule_h_
//$ class jdk.internal.loader.BuiltinClassLoader$LoadedModule
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
		class URI;
		class URL;
	}
}
namespace jdk {
	namespace internal {
		namespace loader {
			class BuiltinClassLoader;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace loader {

class BuiltinClassLoader$LoadedModule : public ::java::lang::Object {
	$class(BuiltinClassLoader$LoadedModule, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Object)
public:
	BuiltinClassLoader$LoadedModule();
	void init$(::jdk::internal::loader::BuiltinClassLoader* loader, ::java::lang::module::ModuleReference* mref);
	virtual ::java::net::URL* codeSourceURL();
	::java::net::URL* createURL(::java::net::URI* uri);
	virtual ::jdk::internal::loader::BuiltinClassLoader* loader();
	virtual ::java::lang::module::ModuleReference* mref();
	virtual $String* name();
	::jdk::internal::loader::BuiltinClassLoader* loader$ = nullptr;
	::java::lang::module::ModuleReference* mref$ = nullptr;
	::java::net::URI* uri = nullptr;
	::java::net::URL* codeSourceURL$ = nullptr;
};

		} // loader
	} // internal
} // jdk

#endif // _jdk_internal_loader_BuiltinClassLoader$LoadedModule_h_