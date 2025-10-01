#ifndef _java_security_spec_DSAGenParameterSpec_h_
#define _java_security_spec_DSAGenParameterSpec_h_
//$ class java.security.spec.DSAGenParameterSpec
//$ extends java.security.spec.AlgorithmParameterSpec

#include <java/security/spec/AlgorithmParameterSpec.h>

namespace java {
	namespace security {
		namespace spec {

class $export DSAGenParameterSpec : public ::java::security::spec::AlgorithmParameterSpec {
	$class(DSAGenParameterSpec, $NO_CLASS_INIT, ::java::security::spec::AlgorithmParameterSpec)
public:
	DSAGenParameterSpec();
	void init$(int32_t primePLen, int32_t subprimeQLen);
	void init$(int32_t primePLen, int32_t subprimeQLen, int32_t seedLen);
	int32_t getPrimePLength();
	int32_t getSeedLength();
	int32_t getSubprimeQLength();
	int32_t pLen = 0;
	int32_t qLen = 0;
	int32_t seedLen = 0;
};

		} // spec
	} // security
} // java

#endif // _java_security_spec_DSAGenParameterSpec_h_