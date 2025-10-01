#ifndef _sun_nio_fs_UnixCopyFile$1_h_
#define _sun_nio_fs_UnixCopyFile$1_h_
//$ class sun.nio.fs.UnixCopyFile$1
//$ extends sun.nio.fs.Cancellable

#include <sun/nio/fs/Cancellable.h>

namespace sun {
	namespace nio {
		namespace fs {
			class UnixCopyFile$Flags;
			class UnixFileAttributes;
			class UnixPath;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class UnixCopyFile$1 : public ::sun::nio::fs::Cancellable {
	$class(UnixCopyFile$1, $NO_CLASS_INIT, ::sun::nio::fs::Cancellable)
public:
	UnixCopyFile$1();
	void init$(::sun::nio::fs::UnixPath* val$source, ::sun::nio::fs::UnixFileAttributes* val$attrsToCopy, ::sun::nio::fs::UnixPath* val$target, ::sun::nio::fs::UnixCopyFile$Flags* val$flags);
	virtual void implRun() override;
	::sun::nio::fs::UnixCopyFile$Flags* val$flags = nullptr;
	::sun::nio::fs::UnixPath* val$target = nullptr;
	::sun::nio::fs::UnixFileAttributes* val$attrsToCopy = nullptr;
	::sun::nio::fs::UnixPath* val$source = nullptr;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_UnixCopyFile$1_h_