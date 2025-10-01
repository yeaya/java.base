#ifndef _sun_nio_fs_WindowsFileSystem$2_h_
#define _sun_nio_fs_WindowsFileSystem$2_h_
//$ class sun.nio.fs.WindowsFileSystem$2
//$ extends java.nio.file.PathMatcher

#include <java/nio/file/PathMatcher.h>

namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
	}
}
namespace java {
	namespace util {
		namespace regex {
			class Pattern;
		}
	}
}
namespace sun {
	namespace nio {
		namespace fs {
			class WindowsFileSystem;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class WindowsFileSystem$2 : public ::java::nio::file::PathMatcher {
	$class(WindowsFileSystem$2, $NO_CLASS_INIT, ::java::nio::file::PathMatcher)
public:
	WindowsFileSystem$2();
	void init$(::sun::nio::fs::WindowsFileSystem* this$0, ::java::util::regex::Pattern* val$pattern);
	virtual bool matches(::java::nio::file::Path* path) override;
	::sun::nio::fs::WindowsFileSystem* this$0 = nullptr;
	::java::util::regex::Pattern* val$pattern = nullptr;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_WindowsFileSystem$2_h_