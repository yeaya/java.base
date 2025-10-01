#ifndef _sun_nio_fs_DynamicFileAttributeView_h_
#define _sun_nio_fs_DynamicFileAttributeView_h_
//$ interface sun.nio.fs.DynamicFileAttributeView
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Map;
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class DynamicFileAttributeView : public ::java::lang::Object {
	$interface(DynamicFileAttributeView, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::util::Map* readAttributes($StringArray* attributes) {return nullptr;}
	virtual void setAttribute($String* attribute, Object$* value) {}
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_DynamicFileAttributeView_h_