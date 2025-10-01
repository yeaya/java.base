#ifndef _sun_nio_fs_WindowsChannelFactory$Flags_h_
#define _sun_nio_fs_WindowsChannelFactory$Flags_h_
//$ class sun.nio.fs.WindowsChannelFactory$Flags
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

class WindowsChannelFactory$Flags : public ::java::lang::Object {
	$class(WindowsChannelFactory$Flags, $NO_CLASS_INIT, ::java::lang::Object)
public:
	WindowsChannelFactory$Flags();
	void init$();
	static ::sun::nio::fs::WindowsChannelFactory$Flags* toFlags(::java::util::Set* options);
	bool read = false;
	bool write = false;
	bool append = false;
	bool truncateExisting = false;
	bool create = false;
	bool createNew = false;
	bool deleteOnClose = false;
	bool sparse = false;
	bool overlapped = false;
	bool sync = false;
	bool dsync = false;
	bool direct = false;
	bool shareRead = false;
	bool shareWrite = false;
	bool shareDelete = false;
	bool noFollowLinks = false;
	bool openReparsePoint = false;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_WindowsChannelFactory$Flags_h_