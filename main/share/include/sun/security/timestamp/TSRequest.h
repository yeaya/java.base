#ifndef _sun_security_timestamp_TSRequest_h_
#define _sun_security_timestamp_TSRequest_h_
//$ class sun.security.timestamp.TSRequest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace math {
		class BigInteger;
	}
}
namespace java {
	namespace security {
		class MessageDigest;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class X509Extension;
		}
	}
}
namespace sun {
	namespace security {
		namespace x509 {
			class AlgorithmId;
		}
	}
}

namespace sun {
	namespace security {
		namespace timestamp {

class $import TSRequest : public ::java::lang::Object {
	$class(TSRequest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TSRequest();
	void init$($String* tSAPolicyID, $bytes* toBeTimeStamped, ::java::security::MessageDigest* messageDigest);
	virtual $bytes* encode();
	virtual $bytes* getHashedMessage();
	virtual void requestCertificate(bool returnCertificate);
	virtual void setExtensions($Array<::java::security::cert::X509Extension>* extensions);
	virtual void setNonce(::java::math::BigInteger* nonce);
	virtual void setPolicyId($String* policyId);
	virtual void setVersion(int32_t version);
	int32_t version = 0;
	::sun::security::x509::AlgorithmId* hashAlgorithmId = nullptr;
	$bytes* hashValue = nullptr;
	$String* policyId = nullptr;
	::java::math::BigInteger* nonce = nullptr;
	bool returnCertificate = false;
	$Array<::java::security::cert::X509Extension>* extensions = nullptr;
};

		} // timestamp
	} // security
} // sun

#endif // _sun_security_timestamp_TSRequest_h_