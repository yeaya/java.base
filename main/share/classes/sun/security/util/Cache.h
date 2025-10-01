#ifndef _sun_security_util_Cache_h_
#define _sun_security_util_Cache_h_
//$ class sun.security.util.Cache
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace security {
		namespace util {
			class Cache$CacheVisitor;
		}
	}
}

namespace sun {
	namespace security {
		namespace util {

class $export Cache : public ::java::lang::Object {
	$class(Cache, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Cache();
	void init$();
	virtual void accept(::sun::security::util::Cache$CacheVisitor* visitor) {}
	virtual void clear() {}
	virtual $Object* get(Object$* key) {return nullptr;}
	static ::sun::security::util::Cache* newHardMemoryCache(int32_t size);
	static ::sun::security::util::Cache* newHardMemoryCache(int32_t size, int32_t timeout);
	static ::sun::security::util::Cache* newNullCache();
	static ::sun::security::util::Cache* newSoftMemoryCache(int32_t size);
	static ::sun::security::util::Cache* newSoftMemoryCache(int32_t size, int32_t timeout);
	virtual $Object* pull(Object$* key) {return nullptr;}
	virtual void put(Object$* key, Object$* value) {}
	virtual void remove(Object$* key) {}
	virtual void setCapacity(int32_t size) {}
	virtual void setTimeout(int32_t timeout) {}
	virtual int32_t size() {return 0;}
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_Cache_h_