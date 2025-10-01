#ifndef _jdk_internal_loader_BootLoader$1_h_
#define _jdk_internal_loader_BootLoader$1_h_
//$ class jdk.internal.loader.BootLoader$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace jdk {
	namespace internal {
		namespace loader {

class BootLoader$1 : public ::java::security::PrivilegedAction {
	$class(BootLoader$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	BootLoader$1();
	void init$($String* val$name);
	virtual $Object* run() override;
	$String* val$name = nullptr;
};

		} // loader
	} // internal
} // jdk

#endif // _jdk_internal_loader_BootLoader$1_h_