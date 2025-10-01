#ifndef _sun_nio_fs_UnixFileAttributes$UnixAsBasicFileAttributes_h_
#define _sun_nio_fs_UnixFileAttributes$UnixAsBasicFileAttributes_h_
//$ class sun.nio.fs.UnixFileAttributes$UnixAsBasicFileAttributes
//$ extends java.nio.file.attribute.BasicFileAttributes

#include <java/nio/file/attribute/BasicFileAttributes.h>

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {
				class FileTime;
			}
		}
	}
}
namespace sun {
	namespace nio {
		namespace fs {
			class UnixFileAttributes;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class UnixFileAttributes$UnixAsBasicFileAttributes : public ::java::nio::file::attribute::BasicFileAttributes {
	$class(UnixFileAttributes$UnixAsBasicFileAttributes, $NO_CLASS_INIT, ::java::nio::file::attribute::BasicFileAttributes)
public:
	UnixFileAttributes$UnixAsBasicFileAttributes();
	void init$(::sun::nio::fs::UnixFileAttributes* attrs);
	virtual ::java::nio::file::attribute::FileTime* creationTime() override;
	virtual $Object* fileKey() override;
	virtual bool isDirectory() override;
	virtual bool isOther() override;
	virtual bool isRegularFile() override;
	virtual bool isSymbolicLink() override;
	virtual ::java::nio::file::attribute::FileTime* lastAccessTime() override;
	virtual ::java::nio::file::attribute::FileTime* lastModifiedTime() override;
	virtual int64_t size() override;
	virtual ::sun::nio::fs::UnixFileAttributes* unwrap();
	static ::sun::nio::fs::UnixFileAttributes$UnixAsBasicFileAttributes* wrap(::sun::nio::fs::UnixFileAttributes* attrs);
	::sun::nio::fs::UnixFileAttributes* attrs = nullptr;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_UnixFileAttributes$UnixAsBasicFileAttributes_h_