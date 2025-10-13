#ifndef _sun_security_ssl_SignatureScheme$SigAlgParamSpec_h_
#define _sun_security_ssl_SignatureScheme$SigAlgParamSpec_h_
//$ class sun.security.ssl.SignatureScheme$SigAlgParamSpec
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("RSA_PSS_SHA256")
#undef RSA_PSS_SHA256
#pragma push_macro("RSA_PSS_SHA384")
#undef RSA_PSS_SHA384
#pragma push_macro("RSA_PSS_SHA512")
#undef RSA_PSS_SHA512

namespace java {
	namespace security {
		class AlgorithmParameters;
	}
}
namespace java {
	namespace security {
		namespace spec {
			class AlgorithmParameterSpec;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SignatureScheme$SigAlgParamSpec : public ::java::lang::Enum {
	$class(SignatureScheme$SigAlgParamSpec, 0, ::java::lang::Enum)
public:
	SignatureScheme$SigAlgParamSpec();
	static $Array<::sun::security::ssl::SignatureScheme$SigAlgParamSpec>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* hash, int32_t saltLength);
	static ::sun::security::ssl::SignatureScheme$SigAlgParamSpec* valueOf($String* name);
	static $Array<::sun::security::ssl::SignatureScheme$SigAlgParamSpec>* values();
	static ::sun::security::ssl::SignatureScheme$SigAlgParamSpec* RSA_PSS_SHA256;
	static ::sun::security::ssl::SignatureScheme$SigAlgParamSpec* RSA_PSS_SHA384;
	static ::sun::security::ssl::SignatureScheme$SigAlgParamSpec* RSA_PSS_SHA512;
	static $Array<::sun::security::ssl::SignatureScheme$SigAlgParamSpec>* $VALUES;
	::java::security::spec::AlgorithmParameterSpec* parameterSpec = nullptr;
	::java::security::AlgorithmParameters* parameters = nullptr;
	bool isAvailable = false;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("RSA_PSS_SHA256")
#pragma pop_macro("RSA_PSS_SHA384")
#pragma pop_macro("RSA_PSS_SHA512")

#endif // _sun_security_ssl_SignatureScheme$SigAlgParamSpec_h_