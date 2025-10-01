#ifndef _sun_security_util_GCMParameters_h_
#define _sun_security_util_GCMParameters_h_
//$ class sun.security.util.GCMParameters
//$ extends java.security.AlgorithmParametersSpi

#include <java/lang/Array.h>
#include <java/security/AlgorithmParametersSpi.h>

namespace java {
	namespace security {
		namespace spec {
			class AlgorithmParameterSpec;
		}
	}
}

namespace sun {
	namespace security {
		namespace util {

class $import GCMParameters : public ::java::security::AlgorithmParametersSpi {
	$class(GCMParameters, $NO_CLASS_INIT, ::java::security::AlgorithmParametersSpi)
public:
	GCMParameters();
	void init$();
	virtual $bytes* engineGetEncoded() override;
	virtual $bytes* engineGetEncoded($String* encodingMethod) override;
	virtual ::java::security::spec::AlgorithmParameterSpec* engineGetParameterSpec($Class* paramSpec) override;
	virtual void engineInit(::java::security::spec::AlgorithmParameterSpec* paramSpec) override;
	virtual void engineInit($bytes* encoded) override;
	virtual void engineInit($bytes* encoded, $String* decodingMethod) override;
	virtual $String* engineToString() override;
	$bytes* iv = nullptr;
	int32_t tLen = 0;
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_GCMParameters_h_