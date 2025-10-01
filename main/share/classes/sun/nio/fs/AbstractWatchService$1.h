#ifndef _sun_nio_fs_AbstractWatchService$1_h_
#define _sun_nio_fs_AbstractWatchService$1_h_
//$ class sun.nio.fs.AbstractWatchService$1
//$ extends sun.nio.fs.AbstractWatchKey

#include <sun/nio/fs/AbstractWatchKey.h>

namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
	}
}
namespace sun {
	namespace nio {
		namespace fs {
			class AbstractWatchService;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class AbstractWatchService$1 : public ::sun::nio::fs::AbstractWatchKey {
	$class(AbstractWatchService$1, $NO_CLASS_INIT, ::sun::nio::fs::AbstractWatchKey)
public:
	AbstractWatchService$1();
	void init$(::sun::nio::fs::AbstractWatchService* this$0, ::java::nio::file::Path* dir, ::sun::nio::fs::AbstractWatchService* watcher);
	virtual void cancel() override;
	virtual bool isValid() override;
	::sun::nio::fs::AbstractWatchService* this$0 = nullptr;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_AbstractWatchService$1_h_