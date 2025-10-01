#ifndef _jdk_internal_jrtfs_SystemImage$2_h_
#define _jdk_internal_jrtfs_SystemImage$2_h_
//$ class jdk.internal.jrtfs.SystemImage$2
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace jdk {
	namespace internal {
		namespace jrtfs {

class SystemImage$2 : public ::java::security::PrivilegedAction {
	$class(SystemImage$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	SystemImage$2();
	void init$();
	virtual $Object* run() override;
};

		} // jrtfs
	} // internal
} // jdk

#endif // _jdk_internal_jrtfs_SystemImage$2_h_