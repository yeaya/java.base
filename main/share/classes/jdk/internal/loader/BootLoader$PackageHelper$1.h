#ifndef _jdk_internal_loader_BootLoader$PackageHelper$1_h_
#define _jdk_internal_loader_BootLoader$PackageHelper$1_h_
//$ class jdk.internal.loader.BootLoader$PackageHelper$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace jdk {
	namespace internal {
		namespace loader {

class BootLoader$PackageHelper$1 : public ::java::security::PrivilegedAction {
	$class(BootLoader$PackageHelper$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	BootLoader$PackageHelper$1();
	void init$($String* val$location);
	virtual $Object* run() override;
	$String* val$location = nullptr;
};

		} // loader
	} // internal
} // jdk

#endif // _jdk_internal_loader_BootLoader$PackageHelper$1_h_