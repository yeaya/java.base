#ifndef _sun_security_internal_spec_TlsRsaPremasterSecretParameterSpec_h_
#define _sun_security_internal_spec_TlsRsaPremasterSecretParameterSpec_h_
//$ class sun.security.internal.spec.TlsRsaPremasterSecretParameterSpec
//$ extends java.security.spec.AlgorithmParameterSpec

#include <java/lang/Array.h>
#include <java/security/spec/AlgorithmParameterSpec.h>

namespace sun {
	namespace security {
		namespace internal {
			namespace spec {

class $import TlsRsaPremasterSecretParameterSpec : public ::java::security::spec::AlgorithmParameterSpec {
	$class(TlsRsaPremasterSecretParameterSpec, 0, ::java::security::spec::AlgorithmParameterSpec)
public:
	TlsRsaPremasterSecretParameterSpec();
	void init$(int32_t clientVersion, int32_t serverVersion);
	void init$(int32_t clientVersion, int32_t serverVersion, $bytes* encodedSecret);
	int32_t checkVersion(int32_t version);
	virtual int32_t getClientVersion();
	virtual $bytes* getEncodedSecret();
	virtual int32_t getMajorVersion();
	virtual int32_t getMinorVersion();
	virtual int32_t getServerVersion();
	$bytes* encodedSecret = nullptr;
	static bool rsaPreMasterSecretFix;
	int32_t clientVersion = 0;
	int32_t serverVersion = 0;
};

			} // spec
		} // internal
	} // security
} // sun

#endif // _sun_security_internal_spec_TlsRsaPremasterSecretParameterSpec_h_