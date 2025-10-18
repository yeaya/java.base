#ifndef _sun_nio_fs_UnixFileAttributeViews$Basic_h_
#define _sun_nio_fs_UnixFileAttributeViews$Basic_h_
//$ class sun.nio.fs.UnixFileAttributeViews$Basic
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
			class UnixPath;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class UnixFileAttributeViews$Basic : public ::sun::nio::fs::AbstractBasicFileAttributeView {
	$class(UnixFileAttributeViews$Basic, $NO_CLASS_INIT, ::sun::nio::fs::AbstractBasicFileAttributeView)
public:
	UnixFileAttributeViews$Basic();
	void init$(::sun::nio::fs::UnixPath* file, bool followLinks);
	using ::sun::nio::fs::AbstractBasicFileAttributeView::readAttributes;
	virtual ::java::nio::file::attribute::BasicFileAttributes* readAttributes() override;
	virtual void setTimes(::java::nio::file::attribute::FileTime* lastModifiedTime, ::java::nio::file::attribute::FileTime* lastAccessTime, ::java::nio::file::attribute::FileTime* createTime) override;
	::sun::nio::fs::UnixPath* file = nullptr;
	bool followLinks = false;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_UnixFileAttributeViews$Basic_h_