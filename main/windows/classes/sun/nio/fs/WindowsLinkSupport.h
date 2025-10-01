#ifndef _sun_nio_fs_WindowsLinkSupport_h_
#define _sun_nio_fs_WindowsLinkSupport_h_
//$ class sun.nio.fs.WindowsLinkSupport
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace misc {
			class Unsafe;
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

class WindowsLinkSupport : public ::java::lang::Object {
	$class(WindowsLinkSupport, 0, ::java::lang::Object)
public:
	WindowsLinkSupport();
	void init$();
	static $String* getFinalPath(::sun::nio::fs::WindowsPath* input);
	static $String* getFinalPath(::sun::nio::fs::WindowsPath* input, bool followLinks);
	static $String* getRealPath(::sun::nio::fs::WindowsPath* input, bool resolveLinks);
	static $String* readLink(::sun::nio::fs::WindowsPath* path);
	static $String* readLinkImpl(int64_t handle);
	static ::sun::nio::fs::WindowsPath* resolveAllLinks(::sun::nio::fs::WindowsPath* path);
	static $String* stripPrefix($String* path);
	static bool $assertionsDisabled;
	static ::jdk::internal::misc::Unsafe* unsafe;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_WindowsLinkSupport_h_