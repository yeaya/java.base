#ifndef _sun_nio_fs_UnixFileSystem$3_h_
#define _sun_nio_fs_UnixFileSystem$3_h_
//$ class sun.nio.fs.UnixFileSystem$3
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
			class UnixFileSystem;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class UnixFileSystem$3 : public ::java::nio::file::PathMatcher {
	$class(UnixFileSystem$3, $NO_CLASS_INIT, ::java::nio::file::PathMatcher)
public:
	UnixFileSystem$3();
	void init$(::sun::nio::fs::UnixFileSystem* this$0, ::java::util::regex::Pattern* val$pattern);
	virtual bool matches(::java::nio::file::Path* path) override;
	::sun::nio::fs::UnixFileSystem* this$0 = nullptr;
	::java::util::regex::Pattern* val$pattern = nullptr;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_UnixFileSystem$3_h_