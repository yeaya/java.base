#ifndef _com_sun_crypto_provider_OAEPParameters_h_
#define _com_sun_crypto_provider_OAEPParameters_h_
//$ class com.sun.crypto.provider.OAEPParameters
//$ extends java.security.AlgorithmParametersSpi

#include <java/lang/Array.h>
#include <java/security/AlgorithmParametersSpi.h>

#pragma push_macro("OID_MGF1")
#undef OID_MGF1

namespace java {
	namespace security {
		namespace spec {
			class AlgorithmParameterSpec;
			class MGF1ParameterSpec;
		}
	}
}
namespace sun {
	namespace security {
		namespace util {
			class ObjectIdentifier;
		}
	}
}

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class $export OAEPParameters : public ::java::security::AlgorithmParametersSpi {
	$class(OAEPParameters, 0, ::java::security::AlgorithmParametersSpi)
public:
	OAEPParameters();
	void init$();
	virtual $bytes* engineGetEncoded() override;
	virtual $bytes* engineGetEncoded($String* encodingMethod) override;
	virtual ::java::security::spec::AlgorithmParameterSpec* engineGetParameterSpec($Class* paramSpec) override;
	virtual void engineInit(::java::security::spec::AlgorithmParameterSpec* paramSpec) override;
	virtual void engineInit($bytes* encoded) override;
	virtual void engineInit($bytes* encoded, $String* decodingMethod) override;
	virtual $String* engineToString() override;
	$String* mdName = nullptr;
	::java::security::spec::MGF1ParameterSpec* mgfSpec = nullptr;
	$bytes* p = nullptr;
	static ::sun::security::util::ObjectIdentifier* OID_MGF1;
	static ::sun::security::util::ObjectIdentifier* OID_PSpecified;
};

			} // provider
		} // crypto
	} // sun
} // com

#pragma pop_macro("OID_MGF1")

#endif // _com_sun_crypto_provider_OAEPParameters_h_