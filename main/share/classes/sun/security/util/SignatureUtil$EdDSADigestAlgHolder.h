#ifndef _sun_security_util_SignatureUtil$EdDSADigestAlgHolder_h_
#define _sun_security_util_SignatureUtil$EdDSADigestAlgHolder_h_
//$ class sun.security.util.SignatureUtil$EdDSADigestAlgHolder
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace security {
		namespace x509 {
			class AlgorithmId;
		}
	}
}

namespace sun {
	namespace security {
		namespace util {

class $export SignatureUtil$EdDSADigestAlgHolder : public ::java::lang::Object {
	$class(SignatureUtil$EdDSADigestAlgHolder, 0, ::java::lang::Object)
public:
	SignatureUtil$EdDSADigestAlgHolder();
	void init$();
	static ::sun::security::x509::AlgorithmId* sha512;
	static ::sun::security::x509::AlgorithmId* shake256;
	static ::sun::security::x509::AlgorithmId* shake256$512;
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_SignatureUtil$EdDSADigestAlgHolder_h_