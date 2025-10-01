#ifndef _sun_nio_fs_WindowsPathParser$Result_h_
#define _sun_nio_fs_WindowsPathParser$Result_h_
//$ class sun.nio.fs.WindowsPathParser$Result
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace nio {
		namespace fs {
			class WindowsPathType;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class WindowsPathParser$Result : public ::java::lang::Object {
	$class(WindowsPathParser$Result, $NO_CLASS_INIT, ::java::lang::Object)
public:
	WindowsPathParser$Result();
	void init$(::sun::nio::fs::WindowsPathType* type, $String* root, $String* path);
	virtual $String* path();
	virtual $String* root();
	virtual ::sun::nio::fs::WindowsPathType* type();
	::sun::nio::fs::WindowsPathType* type$ = nullptr;
	$String* root$ = nullptr;
	$String* path$ = nullptr;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_WindowsPathParser$Result_h_