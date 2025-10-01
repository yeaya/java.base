#ifndef _jdk_internal_loader_BuiltinClassLoader$2_h_
#define _jdk_internal_loader_BuiltinClassLoader$2_h_
//$ class jdk.internal.loader.BuiltinClassLoader$2
//$ extends java.security.PrivilegedExceptionAction

#include <java/security/PrivilegedExceptionAction.h>

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

class BuiltinClassLoader$2 : public ::java::security::PrivilegedExceptionAction {
	$class(BuiltinClassLoader$2, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	BuiltinClassLoader$2();
	void init$(::jdk::internal::loader::BuiltinClassLoader* this$0, $String* val$name);
	virtual $Object* run() override;
	::jdk::internal::loader::BuiltinClassLoader* this$0 = nullptr;
	$String* val$name = nullptr;
};

		} // loader
	} // internal
} // jdk

#endif // _jdk_internal_loader_BuiltinClassLoader$2_h_