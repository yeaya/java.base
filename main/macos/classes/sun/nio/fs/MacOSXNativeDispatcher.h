#ifndef _sun_nio_fs_MacOSXNativeDispatcher_h_
#define _sun_nio_fs_MacOSXNativeDispatcher_h_
//$ class sun.nio.fs.MacOSXNativeDispatcher
//$ extends sun.nio.fs.BsdNativeDispatcher

#include <java/lang/Array.h>
#include <sun/nio/fs/BsdNativeDispatcher.h>

namespace sun {
	namespace nio {
		namespace fs {

class MacOSXNativeDispatcher : public ::sun::nio::fs::BsdNativeDispatcher {
	$class(MacOSXNativeDispatcher, $NO_CLASS_INIT, ::sun::nio::fs::BsdNativeDispatcher)
public:
	MacOSXNativeDispatcher();
	void init$();
	static $chars* normalizepath($chars* path, int32_t form);
	static const int32_t kCFStringNormalizationFormC = 2;
	static const int32_t kCFStringNormalizationFormD = 0;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_MacOSXNativeDispatcher_h_