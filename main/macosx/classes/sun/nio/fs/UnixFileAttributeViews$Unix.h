#ifndef _sun_nio_fs_UnixFileAttributeViews$Unix_h_
#define _sun_nio_fs_UnixFileAttributeViews$Unix_h_
//$ class sun.nio.fs.UnixFileAttributeViews$Unix
//$ extends sun.nio.fs.UnixFileAttributeViews$Posix

#include <java/lang/Array.h>
#include <sun/nio/fs/UnixFileAttributeViews$Posix.h>

#pragma push_macro("MODE_NAME")
#undef MODE_NAME
#pragma push_macro("NLINK_NAME")
#undef NLINK_NAME
#pragma push_macro("DEV_NAME")
#undef DEV_NAME
#pragma push_macro("INO_NAME")
#undef INO_NAME
#pragma push_macro("UID_NAME")
#undef UID_NAME
#pragma push_macro("CTIME_NAME")
#undef CTIME_NAME
#pragma push_macro("GID_NAME")
#undef GID_NAME
#pragma push_macro("RDEV_NAME")
#undef RDEV_NAME

namespace java {
	namespace util {
		class Map;
		class Set;
	}
}
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

class UnixFileAttributeViews$Unix : public ::sun::nio::fs::UnixFileAttributeViews$Posix {
	$class(UnixFileAttributeViews$Unix, 0, ::sun::nio::fs::UnixFileAttributeViews$Posix)
public:
	UnixFileAttributeViews$Unix();
	void init$(::sun::nio::fs::UnixPath* file, bool followLinks);
	virtual $String* name() override;
	using ::sun::nio::fs::UnixFileAttributeViews$Posix::readAttributes;
	virtual ::java::util::Map* readAttributes($StringArray* requested) override;
	virtual void setAttribute($String* attribute, Object$* value) override;
	static $String* MODE_NAME;
	static $String* INO_NAME;
	static $String* DEV_NAME;
	static $String* RDEV_NAME;
	static $String* NLINK_NAME;
	static $String* UID_NAME;
	static $String* GID_NAME;
	static $String* CTIME_NAME;
	static ::java::util::Set* unixAttributeNames;
};

		} // fs
	} // nio
} // sun

#pragma pop_macro("MODE_NAME")
#pragma pop_macro("NLINK_NAME")
#pragma pop_macro("DEV_NAME")
#pragma pop_macro("INO_NAME")
#pragma pop_macro("UID_NAME")
#pragma pop_macro("CTIME_NAME")
#pragma pop_macro("GID_NAME")
#pragma pop_macro("RDEV_NAME")

#endif // _sun_nio_fs_UnixFileAttributeViews$Unix_h_