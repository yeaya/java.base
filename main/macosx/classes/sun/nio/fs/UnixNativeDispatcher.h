#ifndef _sun_nio_fs_UnixNativeDispatcher_h_
#define _sun_nio_fs_UnixNativeDispatcher_h_
//$ class sun.nio.fs.UnixNativeDispatcher
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("SUPPORTS_BIRTHTIME")
#undef SUPPORTS_BIRTHTIME
#pragma push_macro("SUPPORTS_FUTIMENS")
#undef SUPPORTS_FUTIMENS
#pragma push_macro("SUPPORTS_FUTIMES")
#undef SUPPORTS_FUTIMES
#pragma push_macro("SUPPORTS_OPENAT")
#undef SUPPORTS_OPENAT
#pragma push_macro("SUPPORTS_LUTIMES")
#undef SUPPORTS_LUTIMES
#pragma push_macro("SUPPORTS_XATTR")
#undef SUPPORTS_XATTR

namespace sun {
	namespace nio {
		namespace fs {
			class NativeBuffer;
			class UnixFileAttributes;
			class UnixFileStoreAttributes;
			class UnixPath;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class UnixNativeDispatcher : public ::java::lang::Object {
	$class(UnixNativeDispatcher, 0, ::java::lang::Object)
public:
	UnixNativeDispatcher();
	void init$();
	static void access(::sun::nio::fs::UnixPath* path, int32_t amode);
	static void access0(int64_t pathAddress, int32_t amode);
	static bool birthtimeSupported();
	static void chmod(::sun::nio::fs::UnixPath* path, int32_t mode);
	static void chmod0(int64_t pathAddress, int32_t mode);
	static void chown(::sun::nio::fs::UnixPath* path, int32_t uid, int32_t gid);
	static void chown0(int64_t pathAddress, int32_t uid, int32_t gid);
	static void close(int32_t fd);
	static void close0(int32_t fd);
	static void closedir(int64_t dir);
	static ::sun::nio::fs::NativeBuffer* copyToNativeBuffer(::sun::nio::fs::UnixPath* path);
	static int32_t dup(int32_t filedes);
	static bool exists(::sun::nio::fs::UnixPath* path);
	static bool exists0(int64_t pathAddress);
	static void fchmod(int32_t fd, int32_t mode);
	static void fchown(int32_t fd, int32_t uid, int32_t gid);
	static int64_t fdopendir(int32_t dfd);
	static int32_t fgetxattr(int32_t filedes, $bytes* name, int64_t valueAddress, int32_t valueLen);
	static int32_t fgetxattr0(int32_t filedes, int64_t nameAddress, int64_t valueAddress, int32_t valueLen);
	static int32_t flistxattr(int32_t filedes, int64_t listAddress, int32_t size);
	static void fremovexattr(int32_t filedes, $bytes* name);
	static void fremovexattr0(int32_t filedes, int64_t nameAddress);
	static void fsetxattr(int32_t filedes, $bytes* name, int64_t valueAddress, int32_t valueLen);
	static void fsetxattr0(int32_t filedes, int64_t nameAddress, int64_t valueAddress, int32_t valueLen);
	static void fstat(int32_t fd, ::sun::nio::fs::UnixFileAttributes* attrs);
	static void fstatat(int32_t dfd, $bytes* path, int32_t flag, ::sun::nio::fs::UnixFileAttributes* attrs);
	static void fstatat0(int32_t dfd, int64_t pathAddress, int32_t flag, ::sun::nio::fs::UnixFileAttributes* attrs);
	static void futimens(int32_t fd, int64_t times0, int64_t times1);
	static bool futimensSupported();
	static void futimes(int32_t fd, int64_t times0, int64_t times1);
	static bool futimesSupported();
	static $bytes* getcwd();
	static $bytes* getgrgid(int32_t gid);
	static int32_t getgrnam($String* name);
	static int32_t getgrnam0(int64_t nameAddress);
	static int32_t getlinelen(int64_t stream);
	static int32_t getpwnam($String* name);
	static int32_t getpwnam0(int64_t nameAddress);
	static $bytes* getpwuid(int32_t uid);
	static int32_t init();
	static void lchown(::sun::nio::fs::UnixPath* path, int32_t uid, int32_t gid);
	static void lchown0(int64_t pathAddress, int32_t uid, int32_t gid);
	static void link(::sun::nio::fs::UnixPath* existing, ::sun::nio::fs::UnixPath* newfile);
	static void link0(int64_t existingAddress, int64_t newAddress);
	static void lstat(::sun::nio::fs::UnixPath* path, ::sun::nio::fs::UnixFileAttributes* attrs);
	static void lstat0(int64_t pathAddress, ::sun::nio::fs::UnixFileAttributes* attrs);
	static void lutimes(::sun::nio::fs::UnixPath* path, int64_t times0, int64_t times1);
	static void lutimes0(int64_t pathAddress, int64_t times0, int64_t times1);
	static bool lutimesSupported();
	static void mkdir(::sun::nio::fs::UnixPath* path, int32_t mode);
	static void mkdir0(int64_t pathAddress, int32_t mode);
	static void mknod(::sun::nio::fs::UnixPath* path, int32_t mode, int64_t dev);
	static void mknod0(int64_t pathAddress, int32_t mode, int64_t dev);
	static int32_t open(::sun::nio::fs::UnixPath* path, int32_t flags, int32_t mode);
	static int32_t open0(int64_t pathAddress, int32_t flags, int32_t mode);
	static int32_t openat(int32_t dfd, $bytes* path, int32_t flags, int32_t mode);
	static int32_t openat0(int32_t dfd, int64_t pathAddress, int32_t flags, int32_t mode);
	static bool openatSupported();
	static int64_t opendir(::sun::nio::fs::UnixPath* path);
	static int64_t opendir0(int64_t pathAddress);
	static int32_t read(int32_t fildes, int64_t buf, int32_t nbyte);
	static $bytes* readdir(int64_t dir);
	static $bytes* readlink(::sun::nio::fs::UnixPath* path);
	static $bytes* readlink0(int64_t pathAddress);
	static $bytes* realpath(::sun::nio::fs::UnixPath* path);
	static $bytes* realpath0(int64_t pathAddress);
	static void rename(::sun::nio::fs::UnixPath* from, ::sun::nio::fs::UnixPath* to);
	static void rename0(int64_t fromAddress, int64_t toAddress);
	static void renameat(int32_t fromfd, $bytes* from, int32_t tofd, $bytes* to);
	static void renameat0(int32_t fromfd, int64_t fromAddress, int32_t tofd, int64_t toAddress);
	static void rewind(int64_t stream);
	static void rmdir(::sun::nio::fs::UnixPath* path);
	static void rmdir0(int64_t pathAddress);
	static void stat(::sun::nio::fs::UnixPath* path, ::sun::nio::fs::UnixFileAttributes* attrs);
	static int32_t stat(::sun::nio::fs::UnixPath* path);
	static void stat0(int64_t pathAddress, ::sun::nio::fs::UnixFileAttributes* attrs);
	static int32_t stat1(int64_t pathAddress);
	static void statvfs(::sun::nio::fs::UnixPath* path, ::sun::nio::fs::UnixFileStoreAttributes* attrs);
	static void statvfs0(int64_t pathAddress, ::sun::nio::fs::UnixFileStoreAttributes* attrs);
	static $bytes* strerror(int32_t errnum);
	static void symlink($bytes* name1, ::sun::nio::fs::UnixPath* name2);
	static void symlink0(int64_t name1, int64_t name2);
	static void unlink(::sun::nio::fs::UnixPath* path);
	static void unlink0(int64_t pathAddress);
	static void unlinkat(int32_t dfd, $bytes* path, int32_t flag);
	static void unlinkat0(int32_t dfd, int64_t pathAddress, int32_t flag);
	static void utimes(::sun::nio::fs::UnixPath* path, int64_t times0, int64_t times1);
	static void utimes0(int64_t pathAddress, int64_t times0, int64_t times1);
	static int32_t write(int32_t fildes, int64_t buf, int32_t nbyte);
	static bool xattrSupported();
	static const int32_t SUPPORTS_OPENAT = 2; // 1 << 1
	static const int32_t SUPPORTS_FUTIMES = 4; // 1 << 2
	static const int32_t SUPPORTS_FUTIMENS = 8; // 1 << 3
	static const int32_t SUPPORTS_LUTIMES = 16; // 1 << 4
	static const int32_t SUPPORTS_XATTR = 32; // 1 << 5
	static const int32_t SUPPORTS_BIRTHTIME = 65536; // 1 << 16
	static int32_t capabilities;
};

		} // fs
	} // nio
} // sun

#pragma pop_macro("SUPPORTS_BIRTHTIME")
#pragma pop_macro("SUPPORTS_FUTIMENS")
#pragma pop_macro("SUPPORTS_FUTIMES")
#pragma pop_macro("SUPPORTS_OPENAT")
#pragma pop_macro("SUPPORTS_LUTIMES")
#pragma pop_macro("SUPPORTS_XATTR")

#endif // _sun_nio_fs_UnixNativeDispatcher_h_