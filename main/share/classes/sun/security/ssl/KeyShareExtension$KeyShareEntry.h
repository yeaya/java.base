#ifndef _sun_security_ssl_KeyShareExtension$KeyShareEntry_h_
#define _sun_security_ssl_KeyShareExtension$KeyShareEntry_h_
//$ class sun.security.ssl.KeyShareExtension$KeyShareEntry
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace sun {
	namespace security {
		namespace ssl {

class KeyShareExtension$KeyShareEntry : public ::java::lang::Object {
	$class(KeyShareExtension$KeyShareEntry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	KeyShareExtension$KeyShareEntry();
	void init$(int32_t namedGroupId, $bytes* keyExchange);
	$bytes* getEncoded();
	int32_t getEncodedSize();
	virtual $String* toString() override;
	int32_t namedGroupId = 0;
	$bytes* keyExchange = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_KeyShareExtension$KeyShareEntry_h_