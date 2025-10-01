#ifndef _sun_security_pkcs_EncryptedPrivateKeyInfo_h_
#define _sun_security_pkcs_EncryptedPrivateKeyInfo_h_
//$ class sun.security.pkcs.EncryptedPrivateKeyInfo
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace sun {
	namespace security {
		namespace x509 {
			class AlgorithmId;
		}
	}
}

namespace sun {
	namespace security {
		namespace pkcs {

class $export EncryptedPrivateKeyInfo : public ::java::lang::Object {
	$class(EncryptedPrivateKeyInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	EncryptedPrivateKeyInfo();
	void init$($bytes* encoded);
	void init$(::sun::security::x509::AlgorithmId* algid, $bytes* encryptedData);
	virtual bool equals(Object$* other) override;
	virtual ::sun::security::x509::AlgorithmId* getAlgorithm();
	virtual $bytes* getEncoded();
	virtual $bytes* getEncryptedData();
	virtual int32_t hashCode() override;
	::sun::security::x509::AlgorithmId* algid = nullptr;
	$bytes* encryptedData = nullptr;
	$bytes* encoded = nullptr;
};

		} // pkcs
	} // security
} // sun

#endif // _sun_security_pkcs_EncryptedPrivateKeyInfo_h_