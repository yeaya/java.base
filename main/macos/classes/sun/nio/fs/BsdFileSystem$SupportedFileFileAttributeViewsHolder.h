#ifndef _sun_nio_fs_BsdFileSystem$SupportedFileFileAttributeViewsHolder_h_
#define _sun_nio_fs_BsdFileSystem$SupportedFileFileAttributeViewsHolder_h_
//$ class sun.nio.fs.BsdFileSystem$SupportedFileFileAttributeViewsHolder
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

class BsdFileSystem$SupportedFileFileAttributeViewsHolder : public ::java::lang::Object {
	$class(BsdFileSystem$SupportedFileFileAttributeViewsHolder, 0, ::java::lang::Object)
public:
	BsdFileSystem$SupportedFileFileAttributeViewsHolder();
	void init$();
	static ::java::util::Set* supportedFileAttributeViews();
	static ::java::util::Set* supportedFileAttributeViews$;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_BsdFileSystem$SupportedFileFileAttributeViewsHolder_h_