#ifndef _jdk_internal_loader_BuiltinClassLoader$4_h_
#define _jdk_internal_loader_BuiltinClassLoader$4_h_
//$ class jdk.internal.loader.BuiltinClassLoader$4
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

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

class BuiltinClassLoader$4 : public ::java::security::PrivilegedAction {
	$class(BuiltinClassLoader$4, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	BuiltinClassLoader$4();
	void init$(::jdk::internal::loader::BuiltinClassLoader* this$0, $String* val$path, $String* val$cn);
	virtual $Object* run() override;
	::jdk::internal::loader::BuiltinClassLoader* this$0 = nullptr;
	$String* val$cn = nullptr;
	$String* val$path = nullptr;
};

		} // loader
	} // internal
} // jdk

#endif // _jdk_internal_loader_BuiltinClassLoader$4_h_