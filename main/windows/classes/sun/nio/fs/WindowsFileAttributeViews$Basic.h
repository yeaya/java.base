#ifndef _sun_nio_fs_WindowsFileAttributeViews$Basic_h_
#define _sun_nio_fs_WindowsFileAttributeViews$Basic_h_
//$ class sun.nio.fs.WindowsFileAttributeViews$Basic
//$ extends sun.nio.fs.AbstractBasicFileAttributeView

#include <sun/nio/fs/AbstractBasicFileAttributeView.h>

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {
				class BasicFileAttributes;
				class FileTime;
			}
		}
	}
}
namespace sun {
	namespace nio {
		namespace fs {
			class WindowsPath;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class WindowsFileAttributeViews$Basic : public ::sun::nio::fs::AbstractBasicFileAttributeView {
	$class(WindowsFileAttributeViews$Basic, $NO_CLASS_INIT, ::sun::nio::fs::AbstractBasicFileAttributeView)
public:
	WindowsFileAttributeViews$Basic();
	void init$(::sun::nio::fs::WindowsPath* file, bool followLinks);
	int64_t adjustForFatEpoch(int64_t time);
	using ::sun::nio::fs::AbstractBasicFileAttributeView::readAttributes;
	virtual ::java::nio::file::attribute::BasicFileAttributes* readAttributes() override;
	virtual void setFileTimes(int64_t createTime, int64_t lastAccessTime, int64_t lastWriteTime);
	virtual void setTimes(::java::nio::file::attribute::FileTime* lastModifiedTime, ::java::nio::file::attribute::FileTime* lastAccessTime, ::java::nio::file::attribute::FileTime* createTime) override;
	::sun::nio::fs::WindowsPath* file = nullptr;
	bool followLinks = false;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_WindowsFileAttributeViews$Basic_h_