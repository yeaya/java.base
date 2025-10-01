#ifndef _java_security_spec_PKCS8EncodedKeySpec_h_
#define _java_security_spec_PKCS8EncodedKeySpec_h_
//$ class java.security.spec.PKCS8EncodedKeySpec
//$ extends java.security.spec.EncodedKeySpec

#include <java/lang/Array.h>
#include <java/security/spec/EncodedKeySpec.h>

namespace java {
	namespace security {
		namespace spec {

class $export PKCS8EncodedKeySpec : public ::java::security::spec::EncodedKeySpec {
	$class(PKCS8EncodedKeySpec, $NO_CLASS_INIT, ::java::security::spec::EncodedKeySpec)
public:
	PKCS8EncodedKeySpec();
	void init$($bytes* encodedKey);
	void init$($bytes* encodedKey, $String* algorithm);
	virtual $bytes* getEncoded() override;
	virtual $String* getFormat() override;
};

		} // spec
	} // security
} // java

#endif // _java_security_spec_PKCS8EncodedKeySpec_h_