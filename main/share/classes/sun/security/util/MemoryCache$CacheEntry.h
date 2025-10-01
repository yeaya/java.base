#ifndef _sun_security_util_MemoryCache$CacheEntry_h_
#define _sun_security_util_MemoryCache$CacheEntry_h_
//$ interface sun.security.util.MemoryCache$CacheEntry
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace security {
		namespace util {

class MemoryCache$CacheEntry : public ::java::lang::Object {
	$interface(MemoryCache$CacheEntry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int64_t getExpirationTime() {return 0;}
	virtual $Object* getKey() {return nullptr;}
	virtual $Object* getValue() {return nullptr;}
	virtual void invalidate() {}
	virtual bool isValid(int64_t currentTime) {return false;}
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_MemoryCache$CacheEntry_h_