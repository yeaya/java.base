#ifndef _sun_security_util_NullCache_h_
#define _sun_security_util_NullCache_h_
//$ class sun.security.util.NullCache
//$ extends sun.security.util.Cache

#include <sun/security/util/Cache.h>

#pragma push_macro("INSTANCE")
#undef INSTANCE

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

class NullCache : public ::sun::security::util::Cache {
	$class(NullCache, 0, ::sun::security::util::Cache)
public:
	NullCache();
	void init$();
	virtual void accept(::sun::security::util::Cache$CacheVisitor* visitor) override;
	virtual void clear() override;
	virtual $Object* get(Object$* key) override;
	virtual $Object* pull(Object$* key) override;
	virtual void put(Object$* key, Object$* value) override;
	virtual void remove(Object$* key) override;
	virtual void setCapacity(int32_t size) override;
	virtual void setTimeout(int32_t timeout) override;
	virtual int32_t size() override;
	static ::sun::security::util::Cache* INSTANCE;
};

		} // util
	} // security
} // sun

#pragma pop_macro("INSTANCE")

#endif // _sun_security_util_NullCache_h_