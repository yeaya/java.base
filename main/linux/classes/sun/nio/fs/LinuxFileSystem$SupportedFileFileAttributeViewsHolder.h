#ifndef _sun_nio_fs_LinuxFileSystem$SupportedFileFileAttributeViewsHolder_h_
#define _sun_nio_fs_LinuxFileSystem$SupportedFileFileAttributeViewsHolder_h_
//$ class sun.nio.fs.LinuxFileSystem$SupportedFileFileAttributeViewsHolder
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Set;
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class LinuxFileSystem$SupportedFileFileAttributeViewsHolder : public ::java::lang::Object {
	$class(LinuxFileSystem$SupportedFileFileAttributeViewsHolder, 0, ::java::lang::Object)
public:
	LinuxFileSystem$SupportedFileFileAttributeViewsHolder();
	void init$();
	static ::java::util::Set* supportedFileAttributeViews();
	static ::java::util::Set* supportedFileAttributeViews$;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_LinuxFileSystem$SupportedFileFileAttributeViewsHolder_h_