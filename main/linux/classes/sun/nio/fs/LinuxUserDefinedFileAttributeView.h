#ifndef _sun_nio_fs_LinuxUserDefinedFileAttributeView_h_
#define _sun_nio_fs_LinuxUserDefinedFileAttributeView_h_
//$ class sun.nio.fs.LinuxUserDefinedFileAttributeView
//$ extends sun.nio.fs.UnixUserDefinedFileAttributeView

#include <sun/nio/fs/UnixUserDefinedFileAttributeView.h>

namespace sun {
	namespace nio {
		namespace fs {
			class UnixPath;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class LinuxUserDefinedFileAttributeView : public ::sun::nio::fs::UnixUserDefinedFileAttributeView {
	$class(LinuxUserDefinedFileAttributeView, $NO_CLASS_INIT, ::sun::nio::fs::UnixUserDefinedFileAttributeView)
public:
	LinuxUserDefinedFileAttributeView();
	void init$(::sun::nio::fs::UnixPath* file, bool followLinks);
	virtual int32_t maxNameLength() override;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_LinuxUserDefinedFileAttributeView_h_