#ifndef _sun_security_provider_certpath_CertId_h_
#define _sun_security_provider_certpath_CertId_h_
//$ class sun.security.provider.certpath.CertId
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("SHA1_ALGID")
#undef SHA1_ALGID

namespace java {
	namespace math {
		class BigInteger;
	}
}
namespace java {
	namespace security {
		class PublicKey;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class X509Certificate;
		}
	}
}
namespace javax {
	namespace security {
		namespace auth {
			namespace x500 {
				class X500Principal;
			}
		}
	}
}
namespace sun {
	namespace security {
		namespace util {
			class DerInputStream;
			class DerOutputStream;
		}
	}
}
namespace sun {
	namespace security {
		namespace x509 {
			class AlgorithmId;
			class SerialNumber;
		}
	}
}

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

class $import CertId : public ::java::lang::Object {
	$class(CertId, 0, ::java::lang::Object)
public:
	CertId();
	void init$(::java::security::cert::X509Certificate* issuerCert, ::sun::security::x509::SerialNumber* serialNumber);
	void init$(::javax::security::auth::x500::X500Principal* issuerName, ::java::security::PublicKey* issuerKey, ::sun::security::x509::SerialNumber* serialNumber);
	void init$(::sun::security::util::DerInputStream* derIn);
	virtual void encode(::sun::security::util::DerOutputStream* out);
	virtual bool equals(Object$* other) override;
	virtual ::sun::security::x509::AlgorithmId* getHashAlgorithm();
	virtual $bytes* getIssuerKeyHash();
	virtual $bytes* getIssuerNameHash();
	virtual ::java::math::BigInteger* getSerialNumber();
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	static const bool debug = false;
	static ::sun::security::x509::AlgorithmId* SHA1_ALGID;
	::sun::security::x509::AlgorithmId* hashAlgId = nullptr;
	$bytes* issuerNameHash = nullptr;
	$bytes* issuerKeyHash = nullptr;
	::sun::security::x509::SerialNumber* certSerialNumber = nullptr;
	int32_t myhash = 0;
};

			} // certpath
		} // provider
	} // security
} // sun

#pragma pop_macro("SHA1_ALGID")

#endif // _sun_security_provider_certpath_CertId_h_