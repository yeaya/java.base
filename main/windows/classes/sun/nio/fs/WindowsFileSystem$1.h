#ifndef _sun_nio_fs_WindowsFileSystem$1_h_
#define _sun_nio_fs_WindowsFileSystem$1_h_
//$ class sun.nio.fs.WindowsFileSystem$1
//$ extends java.lang.Iterable

#include <java/lang/Iterable.h>

namespace java {
	namespace util {
		class Iterator;
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

class WindowsFileSystem$1 : public ::java::lang::Iterable {
	$class(WindowsFileSystem$1, $NO_CLASS_INIT, ::java::lang::Iterable)
public:
	WindowsFileSystem$1();
	void init$(::sun::nio::fs::WindowsFileSystem* this$0);
	virtual ::java::util::Iterator* iterator() override;
	::sun::nio::fs::WindowsFileSystem* this$0 = nullptr;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_WindowsFileSystem$1_h_