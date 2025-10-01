#ifndef _sun_nio_fs_UnixCopyFile_h_
#define _sun_nio_fs_UnixCopyFile_h_
//$ class sun.nio.fs.UnixCopyFile
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace nio {
		namespace file {
			class CopyOption;
			class Path;
		}
	}
}
namespace sun {
	namespace nio {
		namespace fs {
			class UnixCopyFile$Flags;
			class UnixFileAttributes;
			class UnixPath;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class UnixCopyFile : public ::java::lang::Object {
	$class(UnixCopyFile, 0, ::java::lang::Object)
public:
	UnixCopyFile();
	void init$();
	static void copy(::sun::nio::fs::UnixPath* source, ::sun::nio::fs::UnixPath* target, $Array<::java::nio::file::CopyOption>* options);
	static void copyDirectory(::sun::nio::fs::UnixPath* source, ::sun::nio::fs::UnixFileAttributes* attrs, ::sun::nio::fs::UnixPath* target, ::sun::nio::fs::UnixCopyFile$Flags* flags);
	static void copyFile(::sun::nio::fs::UnixPath* source, ::sun::nio::fs::UnixFileAttributes* attrs, ::sun::nio::fs::UnixPath* target, ::sun::nio::fs::UnixCopyFile$Flags* flags, int64_t addressToPollForCancel);
	static void copyLink(::sun::nio::fs::UnixPath* source, ::sun::nio::fs::UnixFileAttributes* attrs, ::sun::nio::fs::UnixPath* target, ::sun::nio::fs::UnixCopyFile$Flags* flags);
	static void copySpecial(::sun::nio::fs::UnixPath* source, ::sun::nio::fs::UnixFileAttributes* attrs, ::sun::nio::fs::UnixPath* target, ::sun::nio::fs::UnixCopyFile$Flags* flags);
	static void ensureEmptyDir(::sun::nio::fs::UnixPath* dir);
	static bool lambda$ensureEmptyDir$0(::java::nio::file::Path* e);
	static void move(::sun::nio::fs::UnixPath* source, ::sun::nio::fs::UnixPath* target, $Array<::java::nio::file::CopyOption>* options);
	static void transfer(int32_t dst, int32_t src, int64_t addressToPollForCancel);
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_UnixCopyFile_h_