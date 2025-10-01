#ifndef _sun_nio_fs_WindowsDirectoryStream_h_
#define _sun_nio_fs_WindowsDirectoryStream_h_
//$ class sun.nio.fs.WindowsDirectoryStream
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
namespace sun {
	namespace nio {
		namespace fs {
			class NativeBuffer;
			class WindowsPath;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class WindowsDirectoryStream : public ::java::nio::file::DirectoryStream {
	$class(WindowsDirectoryStream, $NO_CLASS_INIT, ::java::nio::file::DirectoryStream)
public:
	WindowsDirectoryStream();
	void init$(::sun::nio::fs::WindowsPath* dir, ::java::nio::file::DirectoryStream$Filter* filter);
	virtual void close() override;
	virtual ::java::util::Iterator* iterator() override;
	::sun::nio::fs::WindowsPath* dir = nullptr;
	::java::nio::file::DirectoryStream$Filter* filter = nullptr;
	int64_t handle = 0;
	$String* firstName = nullptr;
	::sun::nio::fs::NativeBuffer* findDataBuffer = nullptr;
	$Object* closeLock = nullptr;
	bool isOpen = false;
	::java::util::Iterator* iterator$ = nullptr;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_WindowsDirectoryStream_h_