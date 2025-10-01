#ifndef _java_security_Signature$1_h_
#define _java_security_Signature$1_h_
//$ class java.security.Signature$1
//$ extends jdk.internal.access.JavaSecuritySignatureAccess

#include <jdk/internal/access/JavaSecuritySignatureAccess.h>

namespace java {
	namespace security {
		class PrivateKey;
		class PublicKey;
		class SecureRandom;
		class Signature;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class Certificate;
		}
	}
}
namespace java {
	namespace security {
		namespace spec {
			class AlgorithmParameterSpec;
		}
	}
}

namespace java {
	namespace security {

class Signature$1 : public ::jdk::internal::access::JavaSecuritySignatureAccess {
	$class(Signature$1, $NO_CLASS_INIT, ::jdk::internal::access::JavaSecuritySignatureAccess)
public:
	Signature$1();
	void init$();
	virtual void initSign(::java::security::Signature* s, ::java::security::PrivateKey* privateKey, ::java::security::spec::AlgorithmParameterSpec* params, ::java::security::SecureRandom* random) override;
	virtual void initVerify(::java::security::Signature* s, ::java::security::PublicKey* publicKey, ::java::security::spec::AlgorithmParameterSpec* params) override;
	virtual void initVerify(::java::security::Signature* s, ::java::security::cert::Certificate* certificate, ::java::security::spec::AlgorithmParameterSpec* params) override;
};

	} // security
} // java

#endif // _java_security_Signature$1_h_