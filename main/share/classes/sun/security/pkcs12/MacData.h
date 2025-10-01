#ifndef _sun_security_pkcs12_MacData_h_
#define _sun_security_pkcs12_MacData_h_
//$ class sun.security.pkcs12.MacData
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace security {
		class AlgorithmParameters;
	}
}
namespace sun {
	namespace security {
		namespace util {
			class DerInputStream;
		}
	}
}

namespace sun {
	namespace security {
		namespace pkcs12 {

class MacData : public ::java::lang::Object {
	$class(MacData, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MacData();
	void init$(::sun::security::util::DerInputStream* derin);
	void init$($String* algName, $bytes* digest, $bytes* salt, int32_t iterations);
	void init$(::java::security::AlgorithmParameters* algParams, $bytes* digest, $bytes* salt, int32_t iterations);
	virtual $bytes* getDigest();
	virtual $String* getDigestAlgName();
	virtual $bytes* getEncoded();
	virtual int32_t getIterations();
	virtual $bytes* getSalt();
	$String* digestAlgorithmName = nullptr;
	::java::security::AlgorithmParameters* digestAlgorithmParams = nullptr;
	$bytes* digest = nullptr;
	$bytes* macSalt = nullptr;
	int32_t iterations = 0;
	$bytes* encoded = nullptr;
};

		} // pkcs12
	} // security
} // sun

#endif // _sun_security_pkcs12_MacData_h_