#ifndef _java_security_MessageDigest$Delegate_h_
#define _java_security_MessageDigest$Delegate_h_
//$ class java.security.MessageDigest$Delegate
//$ extends java.security.MessageDigest
//$ implements sun.security.util.MessageDigestSpi2

#include <java/lang/Array.h>
#include <java/security/MessageDigest.h>
#include <sun/security/util/MessageDigestSpi2.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace security {
		class MessageDigestSpi;
		class Provider;
	}
}
namespace javax {
	namespace crypto {
		class SecretKey;
	}
}

namespace java {
	namespace security {

class MessageDigest$Delegate : public ::java::security::MessageDigest, public ::sun::security::util::MessageDigestSpi2 {
	$class(MessageDigest$Delegate, $NO_CLASS_INIT, ::java::security::MessageDigest, ::sun::security::util::MessageDigestSpi2)
public:
	MessageDigest$Delegate();
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::security::MessageDigestSpi* digestSpi, $String* algorithm, ::java::security::Provider* p);
	virtual $Object* clone() override;
	virtual $bytes* engineDigest() override;
	virtual int32_t engineDigest($bytes* buf, int32_t offset, int32_t len) override;
	virtual int32_t engineGetDigestLength() override;
	virtual void engineReset() override;
	virtual void engineUpdate(int8_t input) override;
	virtual void engineUpdate($bytes* input, int32_t offset, int32_t len) override;
	virtual void engineUpdate(::java::nio::ByteBuffer* input) override;
	virtual void engineUpdate(::javax::crypto::SecretKey* key) override;
	static ::java::security::MessageDigest$Delegate* of(::java::security::MessageDigestSpi* digestSpi, $String* algo, ::java::security::Provider* p);
	virtual $String* toString() override;
	::java::security::MessageDigestSpi* digestSpi = nullptr;
};

	} // security
} // java

#endif // _java_security_MessageDigest$Delegate_h_