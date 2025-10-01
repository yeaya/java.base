#ifndef _sun_security_util_ECParameters_h_
#define _sun_security_util_ECParameters_h_
//$ class sun.security.util.ECParameters
//$ extends java.security.AlgorithmParametersSpi

#include <java/lang/Array.h>
#include <java/security/AlgorithmParametersSpi.h>

namespace java {
	namespace security {
		class AlgorithmParameters;
	}
}
namespace java {
	namespace security {
		namespace spec {
			class AlgorithmParameterSpec;
			class ECParameterSpec;
		}
	}
}
namespace sun {
	namespace security {
		namespace util {
			class NamedCurve;
		}
	}
}

namespace sun {
	namespace security {
		namespace util {

class $export ECParameters : public ::java::security::AlgorithmParametersSpi {
	$class(ECParameters, $NO_CLASS_INIT, ::java::security::AlgorithmParametersSpi)
public:
	ECParameters();
	void init$();
	virtual $bytes* engineGetEncoded() override;
	virtual $bytes* engineGetEncoded($String* encodingMethod) override;
	virtual ::java::security::spec::AlgorithmParameterSpec* engineGetParameterSpec($Class* spec) override;
	virtual void engineInit(::java::security::spec::AlgorithmParameterSpec* paramSpec) override;
	virtual void engineInit($bytes* params) override;
	virtual void engineInit($bytes* params, $String* decodingMethod) override;
	virtual $String* engineToString() override;
	static ::java::security::AlgorithmParameters* getAlgorithmParameters(::java::security::spec::ECParameterSpec* spec);
	::sun::security::util::NamedCurve* namedCurve = nullptr;
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_ECParameters_h_