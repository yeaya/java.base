#ifndef _sun_security_timestamp_TimestampToken_h_
#define _sun_security_timestamp_TimestampToken_h_
//$ class sun.security.timestamp.TimestampToken
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace math {
		class BigInteger;
	}
}
namespace java {
	namespace util {
		class Date;
	}
}
namespace sun {
	namespace security {
		namespace util {
			class ObjectIdentifier;
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

class $export TimestampToken : public ::java::lang::Object {
	$class(TimestampToken, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TimestampToken();
	void init$($bytes* timestampTokenInfo);
	virtual ::java::util::Date* getDate();
	virtual ::sun::security::x509::AlgorithmId* getHashAlgorithm();
	virtual $bytes* getHashedMessage();
	virtual ::java::math::BigInteger* getNonce();
	virtual $String* getPolicyID();
	virtual ::java::math::BigInteger* getSerialNumber();
	void parse($bytes* timestampTokenInfo);
	int32_t version = 0;
	::sun::security::util::ObjectIdentifier* policy = nullptr;
	::java::math::BigInteger* serialNumber = nullptr;
	::sun::security::x509::AlgorithmId* hashAlgorithm = nullptr;
	$bytes* hashedMessage = nullptr;
	::java::util::Date* genTime = nullptr;
	::java::math::BigInteger* nonce = nullptr;
};

		} // timestamp
	} // security
} // sun

#endif // _sun_security_timestamp_TimestampToken_h_