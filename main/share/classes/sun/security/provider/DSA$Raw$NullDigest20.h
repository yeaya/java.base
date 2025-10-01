#ifndef _sun_security_provider_DSA$Raw$NullDigest20_h_
#define _sun_security_provider_DSA$Raw$NullDigest20_h_
//$ class sun.security.provider.DSA$Raw$NullDigest20
//$ extends java.security.MessageDigest

#include <java/lang/Array.h>
#include <java/security/MessageDigest.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}

namespace sun {
	namespace security {
		namespace provider {

class DSA$Raw$NullDigest20 : public ::java::security::MessageDigest {
	$class(DSA$Raw$NullDigest20, $NO_CLASS_INIT, ::java::security::MessageDigest)
public:
	DSA$Raw$NullDigest20();
	void init$();
	virtual $bytes* engineDigest() override;
	virtual int32_t engineDigest($bytes* buf, int32_t offset, int32_t len) override;
	virtual int32_t engineGetDigestLength() override;
	virtual void engineReset() override;
	virtual void engineUpdate(int8_t input) override;
	virtual void engineUpdate($bytes* input, int32_t offset, int32_t len) override;
	virtual void engineUpdate(::java::nio::ByteBuffer* input) override;
	$bytes* digestBuffer = nullptr;
	int32_t ofs = 0;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_DSA$Raw$NullDigest20_h_