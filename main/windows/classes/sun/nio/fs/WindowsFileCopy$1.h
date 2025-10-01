#ifndef _sun_nio_fs_WindowsFileCopy$1_h_
#define _sun_nio_fs_WindowsFileCopy$1_h_
//$ class sun.nio.fs.WindowsFileCopy$1
//$ extends sun.nio.fs.Cancellable

#include <sun/nio/fs/Cancellable.h>

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

class WindowsFileCopy$1 : public ::sun::nio::fs::Cancellable {
	$class(WindowsFileCopy$1, $NO_CLASS_INIT, ::sun::nio::fs::Cancellable)
public:
	WindowsFileCopy$1();
	void init$($String* val$sourcePath, $String* val$targetPath, int32_t val$flags, ::sun::nio::fs::WindowsPath* val$source, ::sun::nio::fs::WindowsPath* val$target);
	virtual int32_t cancelValue() override;
	virtual void implRun() override;
	::sun::nio::fs::WindowsPath* val$target = nullptr;
	::sun::nio::fs::WindowsPath* val$source = nullptr;
	int32_t val$flags = 0;
	$String* val$targetPath = nullptr;
	$String* val$sourcePath = nullptr;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_WindowsFileCopy$1_h_