#ifndef _sun_security_rsa_PSSParameters_h_
#define _sun_security_rsa_PSSParameters_h_
//$ class sun.security.rsa.PSSParameters
//$ extends java.security.AlgorithmParametersSpi

#include <java/lang/Array.h>
#include <java/security/AlgorithmParametersSpi.h>

namespace java {
	namespace security {
		namespace spec {
			class AlgorithmParameterSpec;
			class PSSParameterSpec;
		}
	}
}

namespace sun {
	namespace security {
		namespace rsa {

class $import PSSParameters : public ::java::security::AlgorithmParametersSpi {
	$class(PSSParameters, $NO_CLASS_INIT, ::java::security::AlgorithmParametersSpi)
public:
	PSSParameters();
	void init$();
	virtual $bytes* engineGetEncoded() override;
	virtual $bytes* engineGetEncoded($String* encMethod) override;
	virtual ::java::security::spec::AlgorithmParameterSpec* engineGetParameterSpec($Class* paramSpec) override;
	virtual void engineInit(::java::security::spec::AlgorithmParameterSpec* paramSpec) override;
	virtual void engineInit($bytes* encoded) override;
	virtual void engineInit($bytes* encoded, $String* decodingMethod) override;
	virtual $String* engineToString() override;
	static $bytes* getEncoded(::java::security::spec::PSSParameterSpec* spec);
	::java::security::spec::PSSParameterSpec* spec = nullptr;
};

		} // rsa
	} // security
} // sun

#endif // _sun_security_rsa_PSSParameters_h_