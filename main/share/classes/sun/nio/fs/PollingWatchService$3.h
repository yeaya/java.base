#ifndef _sun_nio_fs_PollingWatchService$3_h_
#define _sun_nio_fs_PollingWatchService$3_h_
//$ class sun.nio.fs.PollingWatchService$3
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace nio {
		namespace fs {
			class PollingWatchService;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class PollingWatchService$3 : public ::java::security::PrivilegedAction {
	$class(PollingWatchService$3, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	PollingWatchService$3();
	void init$(::sun::nio::fs::PollingWatchService* this$0);
	virtual $Object* run() override;
	::sun::nio::fs::PollingWatchService* this$0 = nullptr;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_PollingWatchService$3_h_