#ifndef _sun_security_provider_DigestBase_h_
#define _sun_security_provider_DigestBase_h_
//$ class sun.security.provider.DigestBase
//$ extends java.security.MessageDigestSpi
//$ implements java.lang.Cloneable

#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>
#include <java/security/MessageDigestSpi.h>

namespace sun {
	namespace security {
		namespace provider {

class $import DigestBase : public ::java::security::MessageDigestSpi, public ::java::lang::Cloneable {
	$class(DigestBase, 0, ::java::security::MessageDigestSpi, ::java::lang::Cloneable)
public:
	DigestBase();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::java::security::MessageDigestSpi::engineUpdate;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* algorithm, int32_t digestLength, int32_t blockSize);
	virtual $Object* clone() override;
	virtual $bytes* engineDigest() override;
	virtual int32_t engineDigest($bytes* out, int32_t ofs, int32_t len) override;
	virtual int32_t engineGetDigestLength() override;
	virtual void engineReset() override;
	virtual void engineUpdate(int8_t b) override;
	virtual void engineUpdate($bytes* b, int32_t ofs, int32_t len) override;
	virtual void implCompress($bytes* b, int32_t ofs) {}
	int32_t implCompressMultiBlock($bytes* b, int32_t ofs, int32_t limit);
	int32_t implCompressMultiBlock0($bytes* b, int32_t ofs, int32_t limit);
	void implCompressMultiBlockCheck($bytes* b, int32_t ofs, int32_t limit);
	virtual void implDigest($bytes* out, int32_t ofs) {}
	virtual void implReset() {}
	virtual $String* toString() override;
	$bytes* oneByte = nullptr;
	$String* algorithm = nullptr;
	int32_t digestLength = 0;
	int32_t blockSize = 0;
	$bytes* buffer = nullptr;
	int32_t bufOfs = 0;
	int64_t bytesProcessed = 0;
	static $bytes* padding;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_DigestBase_h_