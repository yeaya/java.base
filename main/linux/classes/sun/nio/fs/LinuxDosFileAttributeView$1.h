#ifndef _sun_nio_fs_LinuxDosFileAttributeView$1_h_
#define _sun_nio_fs_LinuxDosFileAttributeView$1_h_
//$ class sun.nio.fs.LinuxDosFileAttributeView$1
//$ extends java.nio.file.attribute.DosFileAttributes

#include <java/nio/file/attribute/DosFileAttributes.h>

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
			class LinuxDosFileAttributeView;
			class UnixFileAttributes;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class LinuxDosFileAttributeView$1 : public ::java::nio::file::attribute::DosFileAttributes {
	$class(LinuxDosFileAttributeView$1, $NO_CLASS_INIT, ::java::nio::file::attribute::DosFileAttributes)
public:
	LinuxDosFileAttributeView$1();
	void init$(::sun::nio::fs::LinuxDosFileAttributeView* this$0, ::sun::nio::fs::UnixFileAttributes* val$attrs, int32_t val$dosAttribute);
	virtual ::java::nio::file::attribute::FileTime* creationTime() override;
	virtual $Object* fileKey() override;
	virtual bool isArchive() override;
	virtual bool isDirectory() override;
	virtual bool isHidden() override;
	virtual bool isOther() override;
	virtual bool isReadOnly() override;
	virtual bool isRegularFile() override;
	virtual bool isSymbolicLink() override;
	virtual bool isSystem() override;
	virtual ::java::nio::file::attribute::FileTime* lastAccessTime() override;
	virtual ::java::nio::file::attribute::FileTime* lastModifiedTime() override;
	virtual int64_t size() override;
	::sun::nio::fs::LinuxDosFileAttributeView* this$0 = nullptr;
	int32_t val$dosAttribute = 0;
	::sun::nio::fs::UnixFileAttributes* val$attrs = nullptr;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_LinuxDosFileAttributeView$1_h_