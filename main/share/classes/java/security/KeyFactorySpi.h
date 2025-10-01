#ifndef _java_security_KeyFactorySpi_h_
#define _java_security_KeyFactorySpi_h_
//$ class java.security.KeyFactorySpi
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace security {
		class Key;
		class PrivateKey;
		class PublicKey;
	}
}
namespace java {
	namespace security {
		namespace spec {
			class KeySpec;
		}
	}
}

namespace java {
	namespace security {

class $export KeyFactorySpi : public ::java::lang::Object {
	$class(KeyFactorySpi, $NO_CLASS_INIT, ::java::lang::Object)
public:
	KeyFactorySpi();
	void init$();
	virtual ::java::security::PrivateKey* engineGeneratePrivate(::java::security::spec::KeySpec* keySpec) {return nullptr;}
	virtual ::java::security::PublicKey* engineGeneratePublic(::java::security::spec::KeySpec* keySpec) {return nullptr;}
	virtual ::java::security::spec::KeySpec* engineGetKeySpec(::java::security::Key* key, $Class* keySpec) {return nullptr;}
	virtual ::java::security::Key* engineTranslateKey(::java::security::Key* key) {return nullptr;}
};

	} // security
} // java

#endif // _java_security_KeyFactorySpi_h_