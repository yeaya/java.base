#ifndef _sun_nio_fs_UnixFileAttributes_h_
#define _sun_nio_fs_UnixFileAttributes_h_
//$ class sun.nio.fs.UnixFileAttributes
//$ extends java.nio.file.attribute.PosixFileAttributes

#include <java/nio/file/attribute/PosixFileAttributes.h>

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {
				class BasicFileAttributes;
				class FileTime;
				class GroupPrincipal;
				class UserPrincipal;
			}
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
			class UnixFileKey;
			class UnixPath;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class UnixFileAttributes : public ::java::nio::file::attribute::PosixFileAttributes {
	$class(UnixFileAttributes, $NO_CLASS_INIT, ::java::nio::file::attribute::PosixFileAttributes)
public:
	UnixFileAttributes();
	void init$();
	virtual ::java::nio::file::attribute::BasicFileAttributes* asBasicFileAttributes();
	virtual ::java::nio::file::attribute::FileTime* creationTime() override;
	virtual ::java::nio::file::attribute::FileTime* ctime();
	virtual int64_t dev();
	virtual $Object* fileKey() override;
	static ::sun::nio::fs::UnixFileAttributes* get(::sun::nio::fs::UnixPath* path, bool followLinks);
	static ::sun::nio::fs::UnixFileAttributes* get(int32_t fd);
	static ::sun::nio::fs::UnixFileAttributes* get(int32_t dfd, ::sun::nio::fs::UnixPath* path, bool followLinks);
	virtual int32_t gid();
	virtual ::java::nio::file::attribute::GroupPrincipal* group() override;
	virtual int64_t ino();
	virtual bool isDevice();
	virtual bool isDirectory() override;
	virtual bool isOther() override;
	virtual bool isRegularFile() override;
	virtual bool isSameFile(::sun::nio::fs::UnixFileAttributes* attrs);
	virtual bool isSymbolicLink() override;
	virtual ::java::nio::file::attribute::FileTime* lastAccessTime() override;
	virtual ::java::nio::file::attribute::FileTime* lastModifiedTime() override;
	virtual int32_t mode();
	virtual int32_t nlink();
	virtual ::java::nio::file::attribute::UserPrincipal* owner() override;
	virtual ::java::util::Set* permissions() override;
	virtual int64_t rdev();
	virtual int64_t size() override;
	static ::java::nio::file::attribute::FileTime* toFileTime(int64_t sec, int64_t nsec);
	static ::sun::nio::fs::UnixFileAttributes* toUnixFileAttributes(::java::nio::file::attribute::BasicFileAttributes* attrs);
	virtual int32_t uid();
	int32_t st_mode = 0;
	int64_t st_ino = 0;
	int64_t st_dev = 0;
	int64_t st_rdev = 0;
	int32_t st_nlink = 0;
	int32_t st_uid = 0;
	int32_t st_gid = 0;
	int64_t st_size = 0;
	int64_t st_atime_sec = 0;
	int64_t st_atime_nsec = 0;
	int64_t st_mtime_sec = 0;
	int64_t st_mtime_nsec = 0;
	int64_t st_ctime_sec = 0;
	int64_t st_ctime_nsec = 0;
	int64_t st_birthtime_sec = 0;
	$volatile(::java::nio::file::attribute::UserPrincipal*) owner$ = nullptr;
	$volatile(::java::nio::file::attribute::GroupPrincipal*) group$ = nullptr;
	$volatile(::sun::nio::fs::UnixFileKey*) key = nullptr;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_UnixFileAttributes_h_