#ifndef _jdk_internal_loader_BuiltinClassLoader$3_h_
#define _jdk_internal_loader_BuiltinClassLoader$3_h_
//$ class jdk.internal.loader.BuiltinClassLoader$3
//$ extends java.security.PrivilegedExceptionAction

#include <java/security/PrivilegedExceptionAction.h>

namespace java {
	namespace lang {
		namespace module {
			class ModuleReference;
		}
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

class BuiltinClassLoader$3 : public ::java::security::PrivilegedExceptionAction {
	$class(BuiltinClassLoader$3, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	BuiltinClassLoader$3();
	void init$(::jdk::internal::loader::BuiltinClassLoader* this$0, ::java::lang::module::ModuleReference* val$mref, $String* val$name);
	virtual $Object* run() override;
	::jdk::internal::loader::BuiltinClassLoader* this$0 = nullptr;
	$String* val$name = nullptr;
	::java::lang::module::ModuleReference* val$mref = nullptr;
};

		} // loader
	} // internal
} // jdk

#endif // _jdk_internal_loader_BuiltinClassLoader$3_h_