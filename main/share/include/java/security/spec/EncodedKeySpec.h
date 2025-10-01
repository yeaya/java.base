#ifndef _java_security_spec_EncodedKeySpec_h_
#define _java_security_spec_EncodedKeySpec_h_
//$ class java.security.spec.EncodedKeySpec
//$ extends java.security.spec.KeySpec

#include <java/lang/Array.h>
#include <java/security/spec/KeySpec.h>

namespace java {
	namespace security {
		namespace spec {

class $import EncodedKeySpec : public ::java::security::spec::KeySpec {
	$class(EncodedKeySpec, 0, ::java::security::spec::KeySpec)
public:
	EncodedKeySpec();
	void init$($bytes* encodedKey);
	void init$($bytes* encodedKey, $String* algorithm);
	virtual void clear();
	virtual $String* getAlgorithm();
	virtual $bytes* getEncoded();
	virtual $String* getFormat() {return nullptr;}
	$bytes* encodedKey = nullptr;
	$String* algorithmName = nullptr;
};

		} // spec
	} // security
} // java

#endif // _java_security_spec_EncodedKeySpec_h_