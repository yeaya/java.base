#ifndef _sun_nio_fs_UnixCopyFile$Flags_h_
#define _sun_nio_fs_UnixCopyFile$Flags_h_
//$ class sun.nio.fs.UnixCopyFile$Flags
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace nio {
		namespace file {
			class CopyOption;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class UnixCopyFile$Flags : public ::java::lang::Object {
	$class(UnixCopyFile$Flags, $NO_CLASS_INIT, ::java::lang::Object)
public:
	UnixCopyFile$Flags();
	void init$();
	static ::sun::nio::fs::UnixCopyFile$Flags* fromCopyOptions($Array<::java::nio::file::CopyOption>* options);
	static ::sun::nio::fs::UnixCopyFile$Flags* fromMoveOptions($Array<::java::nio::file::CopyOption>* options);
	bool replaceExisting = false;
	bool atomicMove = false;
	bool followLinks = false;
	bool interruptible = false;
	bool copyBasicAttributes = false;
	bool copyPosixAttributes = false;
	bool copyNonPosixAttributes = false;
	bool failIfUnableToCopyBasic = false;
	bool failIfUnableToCopyPosix = false;
	bool failIfUnableToCopyNonPosix = false;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_UnixCopyFile$Flags_h_