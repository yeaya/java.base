#ifndef _sun_nio_fs_PollingWatchService$PollingWatchKey$1_h_
#define _sun_nio_fs_PollingWatchService$PollingWatchKey$1_h_
//$ class sun.nio.fs.PollingWatchService$PollingWatchKey$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace sun {
	namespace nio {
		namespace fs {
			class PollingWatchService$PollingWatchKey;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class PollingWatchService$PollingWatchKey$1 : public ::java::lang::Runnable {
	$class(PollingWatchService$PollingWatchKey$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	PollingWatchService$PollingWatchKey$1();
	void init$(::sun::nio::fs::PollingWatchService$PollingWatchKey* this$1);
	virtual void run() override;
	::sun::nio::fs::PollingWatchService$PollingWatchKey* this$1 = nullptr;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_PollingWatchService$PollingWatchKey$1_h_