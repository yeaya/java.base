#ifndef _sun_security_util_MemoryCache$SoftCacheEntry_h_
#define _sun_security_util_MemoryCache$SoftCacheEntry_h_
//$ class sun.security.util.MemoryCache$SoftCacheEntry
//$ extends java.lang.ref.SoftReference
//$ implements sun.security.util.MemoryCache$CacheEntry

#include <java/lang/ref/SoftReference.h>
#include <sun/security/util/MemoryCache$CacheEntry.h>

namespace java {
	namespace lang {
		namespace ref {
			class ReferenceQueue;
		}
	}
}

namespace sun {
	namespace security {
		namespace util {

class MemoryCache$SoftCacheEntry : public ::java::lang::ref::SoftReference, public ::sun::security::util::MemoryCache$CacheEntry {
	$class(MemoryCache$SoftCacheEntry, $NO_CLASS_INIT, ::java::lang::ref::SoftReference, ::sun::security::util::MemoryCache$CacheEntry)
public:
	MemoryCache$SoftCacheEntry();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(Object$* key, Object$* value, int64_t expirationTime, ::java::lang::ref::ReferenceQueue* queue);
	virtual int64_t getExpirationTime() override;
	virtual $Object* getKey() override;
	virtual $Object* getValue() override;
	virtual void invalidate() override;
	virtual bool isValid(int64_t currentTime) override;
	virtual $String* toString() override;
	$Object* key = nullptr;
	int64_t expirationTime = 0;
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_MemoryCache$SoftCacheEntry_h_