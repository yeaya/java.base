#ifndef _java_nio_file_WatchService_h_
#define _java_nio_file_WatchService_h_
//$ interface java.nio.file.WatchService
//$ extends java.io.Closeable

#include <java/io/Closeable.h>

namespace java {
	namespace nio {
		namespace file {
			class WatchKey;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class TimeUnit;
		}
	}
}

namespace java {
	namespace nio {
		namespace file {

class $import WatchService : public ::java::io::Closeable {
	$interface(WatchService, $NO_CLASS_INIT, ::java::io::Closeable)
public:
	virtual void close() override {}
	virtual ::java::nio::file::WatchKey* poll() {return nullptr;}
	virtual ::java::nio::file::WatchKey* poll(int64_t timeout, ::java::util::concurrent::TimeUnit* unit) {return nullptr;}
	virtual ::java::nio::file::WatchKey* take() {return nullptr;}
};

		} // file
	} // nio
} // java

#endif // _java_nio_file_WatchService_h_