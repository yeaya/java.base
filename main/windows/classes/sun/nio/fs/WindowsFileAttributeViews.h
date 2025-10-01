#ifndef _sun_nio_fs_WindowsFileAttributeViews_h_
#define _sun_nio_fs_WindowsFileAttributeViews_h_
//$ class sun.nio.fs.WindowsFileAttributeViews
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace nio {
		namespace fs {
			class WindowsFileAttributeViews$Basic;
			class WindowsFileAttributeViews$Dos;
			class WindowsPath;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class WindowsFileAttributeViews : public ::java::lang::Object {
	$class(WindowsFileAttributeViews, $NO_CLASS_INIT, ::java::lang::Object)
public:
	WindowsFileAttributeViews();
	void init$();
	static ::sun::nio::fs::WindowsFileAttributeViews$Basic* createBasicView(::sun::nio::fs::WindowsPath* file, bool followLinks);
	static ::sun::nio::fs::WindowsFileAttributeViews$Dos* createDosView(::sun::nio::fs::WindowsPath* file, bool followLinks);
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_WindowsFileAttributeViews_h_