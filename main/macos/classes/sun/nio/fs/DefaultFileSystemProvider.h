#ifndef _sun_nio_fs_DefaultFileSystemProvider_h_
#define _sun_nio_fs_DefaultFileSystemProvider_h_
//$ class sun.nio.fs.DefaultFileSystemProvider
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("INSTANCE")
#undef INSTANCE

namespace java {
	namespace nio {
		namespace file {
			class FileSystem;
		}
	}
}
namespace sun {
	namespace nio {
		namespace fs {
			class MacOSXFileSystemProvider;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class $export DefaultFileSystemProvider : public ::java::lang::Object {
	$class(DefaultFileSystemProvider, 0, ::java::lang::Object)
public:
	DefaultFileSystemProvider();
	void init$();
	static ::sun::nio::fs::MacOSXFileSystemProvider* instance();
	static ::java::nio::file::FileSystem* theFileSystem();
	static ::sun::nio::fs::MacOSXFileSystemProvider* INSTANCE;
};

		} // fs
	} // nio
} // sun

#pragma pop_macro("INSTANCE")

#endif // _sun_nio_fs_DefaultFileSystemProvider_h_