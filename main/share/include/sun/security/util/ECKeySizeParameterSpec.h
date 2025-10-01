#ifndef _sun_security_util_ECKeySizeParameterSpec_h_
#define _sun_security_util_ECKeySizeParameterSpec_h_
//$ class sun.security.util.ECKeySizeParameterSpec
//$ extends java.security.spec.AlgorithmParameterSpec

#include <java/security/spec/AlgorithmParameterSpec.h>

namespace sun {
	namespace security {
		namespace util {

class $import ECKeySizeParameterSpec : public ::java::security::spec::AlgorithmParameterSpec {
	$class(ECKeySizeParameterSpec, $NO_CLASS_INIT, ::java::security::spec::AlgorithmParameterSpec)
public:
	ECKeySizeParameterSpec();
	void init$(int32_t keySize);
	virtual int32_t getKeySize();
	int32_t keySize = 0;
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_ECKeySizeParameterSpec_h_