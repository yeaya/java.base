#ifndef _sun_security_ssl_X509KeyManagerImpl$SizedMap_h_
#define _sun_security_ssl_X509KeyManagerImpl$SizedMap_h_
//$ class sun.security.ssl.X509KeyManagerImpl$SizedMap
//$ extends java.util.LinkedHashMap

#include <java/util/LinkedHashMap.h>

namespace java {
	namespace util {
		class Map$Entry;
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class X509KeyManagerImpl$SizedMap : public ::java::util::LinkedHashMap {
	$class(X509KeyManagerImpl$SizedMap, $NO_CLASS_INIT, ::java::util::LinkedHashMap)
public:
	X509KeyManagerImpl$SizedMap();
	void init$();
	virtual bool removeEldestEntry(::java::util::Map$Entry* eldest) override;
	static const int64_t serialVersionUID = (int64_t)0x8E0BE07CD7140AB2;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_X509KeyManagerImpl$SizedMap_h_