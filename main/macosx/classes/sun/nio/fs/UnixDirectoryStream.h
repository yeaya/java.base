#ifndef _sun_nio_fs_UnixDirectoryStream_h_
#define _sun_nio_fs_UnixDirectoryStream_h_
//$ class sun.nio.fs.UnixDirectoryStream
//$ extends java.nio.file.DirectoryStream

#include <java/nio/file/DirectoryStream.h>

namespace java {
	namespace nio {
		namespace file {
			class DirectoryStream$Filter;
		}
	}
}
namespace java {
	namespace util {
		class Iterator;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {
				class Lock;
				class ReentrantReadWriteLock;
			}
		}
	}
}
namespace sun {
	namespace nio {
		namespace fs {
			class UnixPath;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class UnixDirectoryStream : public ::java::nio::file::DirectoryStream {
	$class(UnixDirectoryStream, $NO_CLASS_INIT, ::java::nio::file::DirectoryStream)
public:
	UnixDirectoryStream();
	void init$(::sun::nio::fs::UnixPath* dir, int64_t dp, ::java::nio::file::DirectoryStream$Filter* filter);
	virtual void close() override;
	bool closeImpl();
	::sun::nio::fs::UnixPath* directory();
	bool isOpen();
	::java::util::Iterator* iterator(::java::nio::file::DirectoryStream* ds);
	virtual ::java::util::Iterator* iterator() override;
	::java::util::concurrent::locks::Lock* readLock();
	::java::util::concurrent::locks::Lock* writeLock();
	::sun::nio::fs::UnixPath* dir = nullptr;
	int64_t dp = 0;
	::java::nio::file::DirectoryStream$Filter* filter = nullptr;
	::java::util::concurrent::locks::ReentrantReadWriteLock* streamLock = nullptr;
	$volatile(bool) isClosed = false;
	::java::util::Iterator* iterator$ = nullptr;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_UnixDirectoryStream_h_