#ifndef _sun_nio_fs_UnixSecureDirectoryStream$BasicFileAttributeViewImpl_h_
#define _sun_nio_fs_UnixSecureDirectoryStream$BasicFileAttributeViewImpl_h_
//$ class sun.nio.fs.UnixSecureDirectoryStream$BasicFileAttributeViewImpl
//$ extends java.nio.file.attribute.BasicFileAttributeView

#include <java/nio/file/attribute/BasicFileAttributeView.h>

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
			class UnixSecureDirectoryStream;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class UnixSecureDirectoryStream$BasicFileAttributeViewImpl : public ::java::nio::file::attribute::BasicFileAttributeView {
	$class(UnixSecureDirectoryStream$BasicFileAttributeViewImpl, $NO_CLASS_INIT, ::java::nio::file::attribute::BasicFileAttributeView)
public:
	UnixSecureDirectoryStream$BasicFileAttributeViewImpl();
	void init$(::sun::nio::fs::UnixSecureDirectoryStream* this$0, ::sun::nio::fs::UnixPath* file, bool followLinks);
	void checkWriteAccess();
	virtual $String* name() override;
	virtual int32_t open();
	virtual ::java::nio::file::attribute::BasicFileAttributes* readAttributes() override;
	virtual void setTimes(::java::nio::file::attribute::FileTime* lastModifiedTime, ::java::nio::file::attribute::FileTime* lastAccessTime, ::java::nio::file::attribute::FileTime* createTime) override;
	::sun::nio::fs::UnixSecureDirectoryStream* this$0 = nullptr;
	::sun::nio::fs::UnixPath* file = nullptr;
	bool followLinks = false;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_UnixSecureDirectoryStream$BasicFileAttributeViewImpl_h_