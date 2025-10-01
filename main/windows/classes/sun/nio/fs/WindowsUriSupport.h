#ifndef _sun_nio_fs_WindowsUriSupport_h_
#define _sun_nio_fs_WindowsUriSupport_h_
//$ class sun.nio.fs.WindowsUriSupport
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("IPV6_LITERAL_SUFFIX")
#undef IPV6_LITERAL_SUFFIX

namespace java {
	namespace net {
		class URI;
	}
}
namespace sun {
	namespace nio {
		namespace fs {
			class WindowsFileSystem;
			class WindowsPath;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class WindowsUriSupport : public ::java::lang::Object {
	$class(WindowsUriSupport, 0, ::java::lang::Object)
public:
	WindowsUriSupport();
	void init$();
	static ::sun::nio::fs::WindowsPath* fromUri(::sun::nio::fs::WindowsFileSystem* fs, ::java::net::URI* uri);
	static ::java::net::URI* toUri($String* path, bool isUnc, bool addSlash);
	static ::java::net::URI* toUri(::sun::nio::fs::WindowsPath* path);
	static $String* IPV6_LITERAL_SUFFIX;
};

		} // fs
	} // nio
} // sun

#pragma pop_macro("IPV6_LITERAL_SUFFIX")

#endif // _sun_nio_fs_WindowsUriSupport_h_