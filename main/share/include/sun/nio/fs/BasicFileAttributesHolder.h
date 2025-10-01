#ifndef _sun_nio_fs_BasicFileAttributesHolder_h_
#define _sun_nio_fs_BasicFileAttributesHolder_h_
//$ interface sun.nio.fs.BasicFileAttributesHolder
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {
				class BasicFileAttributes;
			}
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class $import BasicFileAttributesHolder : public ::java::lang::Object {
	$interface(BasicFileAttributesHolder, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::nio::file::attribute::BasicFileAttributes* get() {return nullptr;}
	virtual void invalidate() {}
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_BasicFileAttributesHolder_h_