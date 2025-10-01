#ifndef _sun_nio_fs_WindowsFileCopy_h_
#define _sun_nio_fs_WindowsFileCopy_h_
//$ class sun.nio.fs.WindowsFileCopy
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
			class WindowsPath;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class WindowsFileCopy : public ::java::lang::Object {
	$class(WindowsFileCopy, 0, ::java::lang::Object)
public:
	WindowsFileCopy();
	void init$();
	static $String* asWin32Path(::sun::nio::fs::WindowsPath* path);
	static void copy(::sun::nio::fs::WindowsPath* source, ::sun::nio::fs::WindowsPath* target, $Array<::java::nio::file::CopyOption>* options);
	static void copySecurityAttributes(::sun::nio::fs::WindowsPath* source, ::sun::nio::fs::WindowsPath* target, bool followLinks);
	static void ensureEmptyDir(::sun::nio::fs::WindowsPath* dir);
	static bool lambda$ensureEmptyDir$0(::java::nio::file::Path* e);
	static void move(::sun::nio::fs::WindowsPath* source, ::sun::nio::fs::WindowsPath* target, $Array<::java::nio::file::CopyOption>* options);
	static bool $assertionsDisabled;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_WindowsFileCopy_h_