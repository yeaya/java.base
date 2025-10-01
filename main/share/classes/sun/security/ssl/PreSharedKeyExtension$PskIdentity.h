#ifndef _sun_security_ssl_PreSharedKeyExtension$PskIdentity_h_
#define _sun_security_ssl_PreSharedKeyExtension$PskIdentity_h_
//$ class sun.security.ssl.PreSharedKeyExtension$PskIdentity
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class PreSharedKeyExtension$PskIdentity : public ::java::lang::Object {
	$class(PreSharedKeyExtension$PskIdentity, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PreSharedKeyExtension$PskIdentity();
	void init$($bytes* identity, int32_t obfuscatedAge);
	int32_t getEncodedLength();
	virtual $String* toString() override;
	void writeEncoded(::java::nio::ByteBuffer* m);
	$bytes* identity = nullptr;
	int32_t obfuscatedAge = 0;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_PreSharedKeyExtension$PskIdentity_h_