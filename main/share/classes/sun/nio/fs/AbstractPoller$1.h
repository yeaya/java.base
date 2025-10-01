#ifndef _sun_nio_fs_AbstractPoller$1_h_
#define _sun_nio_fs_AbstractPoller$1_h_
//$ class sun.nio.fs.AbstractPoller$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace lang {
		class Runnable;
	}
}
namespace sun {
	namespace nio {
		namespace fs {
			class AbstractPoller;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class AbstractPoller$1 : public ::java::security::PrivilegedAction {
	$class(AbstractPoller$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	AbstractPoller$1();
	void init$(::sun::nio::fs::AbstractPoller* this$0, ::java::lang::Runnable* val$thisRunnable);
	virtual $Object* run() override;
	::sun::nio::fs::AbstractPoller* this$0 = nullptr;
	::java::lang::Runnable* val$thisRunnable = nullptr;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_AbstractPoller$1_h_