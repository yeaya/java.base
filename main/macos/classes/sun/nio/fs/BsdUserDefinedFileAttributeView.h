#ifndef _sun_nio_fs_BsdUserDefinedFileAttributeView_h_
#define _sun_nio_fs_BsdUserDefinedFileAttributeView_h_
//$ class sun.nio.fs.BsdUserDefinedFileAttributeView
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

class BsdUserDefinedFileAttributeView : public ::sun::nio::fs::UnixUserDefinedFileAttributeView {
	$class(BsdUserDefinedFileAttributeView, $NO_CLASS_INIT, ::sun::nio::fs::UnixUserDefinedFileAttributeView)
public:
	BsdUserDefinedFileAttributeView();
	void init$(::sun::nio::fs::UnixPath* file, bool followLinks);
	virtual int32_t maxNameLength() override;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_BsdUserDefinedFileAttributeView_h_