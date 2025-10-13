#ifndef _sun_security_util_MemoryCache_h_
#define _sun_security_util_MemoryCache_h_
//$ class sun.security.util.MemoryCache
//$ extends sun.security.util.Cache

#include <sun/security/util/Cache.h>

#pragma push_macro("DEBUG")
#undef DEBUG
#pragma push_macro("LOAD_FACTOR")
#undef LOAD_FACTOR

namespace java {
	namespace lang {
		namespace ref {
			class ReferenceQueue;
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace sun {
	namespace security {
		namespace util {
			class Cache$CacheVisitor;
			class MemoryCache$CacheEntry;
		}
	}
}

namespace sun {
	namespace security {
		namespace util {

class MemoryCache : public ::sun::security::util::Cache {
	$class(MemoryCache, 0, ::sun::security::util::Cache)
public:
	MemoryCache();
	void init$(bool soft, int32_t maxSize);
	void init$(bool soft, int32_t maxSize, int32_t lifetime);
	virtual void accept(::sun::security::util::Cache$CacheVisitor* visitor) override;
	virtual void clear() override;
	void emptyQueue();
	void expungeExpiredEntries();
	virtual $Object* get(Object$* key) override;
	::java::util::Map* getCachedEntries();
	virtual ::sun::security::util::MemoryCache$CacheEntry* newEntry(Object$* key, Object$* value, int64_t expirationTime, ::java::lang::ref::ReferenceQueue* queue);
	virtual $Object* pull(Object$* key) override;
	virtual void put(Object$* key, Object$* value) override;
	virtual void remove(Object$* key) override;
	virtual void setCapacity(int32_t size) override;
	virtual void setTimeout(int32_t timeout) override;
	virtual int32_t size() override;
	static float LOAD_FACTOR;
	static const bool DEBUG = false;
	::java::util::Map* cacheMap = nullptr;
	int32_t maxSize = 0;
	int64_t lifetime = 0;
	int64_t nextExpirationTime = 0;
	::java::lang::ref::ReferenceQueue* queue = nullptr;
};

		} // util
	} // security
} // sun

#pragma pop_macro("DEBUG")
#pragma pop_macro("LOAD_FACTOR")

#endif // _sun_security_util_MemoryCache_h_