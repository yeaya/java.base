#ifndef _sun_nio_fs_UnixChannelFactory$Flags_h_
#define _sun_nio_fs_UnixChannelFactory$Flags_h_
//$ class sun.nio.fs.UnixChannelFactory$Flags
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

class UnixChannelFactory$Flags : public ::java::lang::Object {
	$class(UnixChannelFactory$Flags, $NO_CLASS_INIT, ::java::lang::Object)
public:
	UnixChannelFactory$Flags();
	void init$();
	static ::sun::nio::fs::UnixChannelFactory$Flags* toFlags(::java::util::Set* options);
	bool read = false;
	bool write = false;
	bool append = false;
	bool truncateExisting = false;
	bool noFollowLinks = false;
	bool create = false;
	bool createNew = false;
	bool deleteOnClose = false;
	bool sync = false;
	bool dsync = false;
	bool direct = false;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_UnixChannelFactory$Flags_h_