#ifndef _jdk_internal_access_JavaSecuritySignatureAccess_h_
#define _jdk_internal_access_JavaSecuritySignatureAccess_h_
//$ interface jdk.internal.access.JavaSecuritySignatureAccess
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

namespace jdk {
	namespace internal {
		namespace access {

class $import JavaSecuritySignatureAccess : public ::java::lang::Object {
	$interface(JavaSecuritySignatureAccess, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void initSign(::java::security::Signature* s, ::java::security::PrivateKey* privateKey, ::java::security::spec::AlgorithmParameterSpec* params, ::java::security::SecureRandom* random) {}
	virtual void initVerify(::java::security::Signature* s, ::java::security::PublicKey* publicKey, ::java::security::spec::AlgorithmParameterSpec* params) {}
	virtual void initVerify(::java::security::Signature* s, ::java::security::cert::Certificate* certificate, ::java::security::spec::AlgorithmParameterSpec* params) {}
};

		} // access
	} // internal
} // jdk

#endif // _jdk_internal_access_JavaSecuritySignatureAccess_h_