#ifndef _sun_nio_fs_PollingWatchService$CacheEntry_h_
#define _sun_nio_fs_PollingWatchService$CacheEntry_h_
//$ class sun.nio.fs.PollingWatchService$CacheEntry
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace nio {
		namespace fs {

class PollingWatchService$CacheEntry : public ::java::lang::Object {
	$class(PollingWatchService$CacheEntry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PollingWatchService$CacheEntry();
	void init$(int64_t lastModified, int32_t lastTickCount);
	virtual int64_t lastModified();
	virtual int32_t lastTickCount();
	virtual void update(int64_t lastModified, int32_t tickCount);
	int64_t lastModified$ = 0;
	int32_t lastTickCount$ = 0;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_PollingWatchService$CacheEntry_h_