#ifndef _sun_security_util_MemoryCache$HardCacheEntry_h_
#define _sun_security_util_MemoryCache$HardCacheEntry_h_
//$ class sun.security.util.MemoryCache$HardCacheEntry
//$ extends sun.security.util.MemoryCache$CacheEntry

#include <sun/security/util/MemoryCache$CacheEntry.h>

namespace sun {
	namespace security {
		namespace util {

class MemoryCache$HardCacheEntry : public ::sun::security::util::MemoryCache$CacheEntry {
	$class(MemoryCache$HardCacheEntry, $NO_CLASS_INIT, ::sun::security::util::MemoryCache$CacheEntry)
public:
	MemoryCache$HardCacheEntry();
	void init$(Object$* key, Object$* value, int64_t expirationTime);
	virtual int64_t getExpirationTime() override;
	virtual $Object* getKey() override;
	virtual $Object* getValue() override;
	virtual void invalidate() override;
	virtual bool isValid(int64_t currentTime) override;
	$Object* key = nullptr;
	$Object* value = nullptr;
	int64_t expirationTime = 0;
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_MemoryCache$HardCacheEntry_h_