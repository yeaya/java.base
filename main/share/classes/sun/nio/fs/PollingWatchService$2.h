#ifndef _sun_nio_fs_PollingWatchService$2_h_
#define _sun_nio_fs_PollingWatchService$2_h_
//$ class sun.nio.fs.PollingWatchService$2
//$ extends java.security.PrivilegedExceptionAction

#include <java/security/PrivilegedExceptionAction.h>

namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
	}
}
namespace java {
	namespace util {
		class Set;
	}
}
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

class PollingWatchService$2 : public ::java::security::PrivilegedExceptionAction {
	$class(PollingWatchService$2, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	PollingWatchService$2();
	void init$(::sun::nio::fs::PollingWatchService* this$0, ::java::nio::file::Path* val$path, ::java::util::Set* val$eventSet, int32_t val$value);
	virtual $Object* run() override;
	::sun::nio::fs::PollingWatchService* this$0 = nullptr;
	int32_t val$value = 0;
	::java::util::Set* val$eventSet = nullptr;
	::java::nio::file::Path* val$path = nullptr;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_PollingWatchService$2_h_