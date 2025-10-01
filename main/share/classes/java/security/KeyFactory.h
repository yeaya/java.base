#ifndef _java_security_KeyFactory_h_
#define _java_security_KeyFactory_h_
//$ class java.security.KeyFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace security {
		class Key;
		class KeyFactorySpi;
		class PrivateKey;
		class Provider;
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
	namespace util {
		class Iterator;
	}
}
namespace sun {
	namespace security {
		namespace util {
			class Debug;
		}
	}
}

namespace java {
	namespace security {

class $export KeyFactory : public ::java::lang::Object {
	$class(KeyFactory, 0, ::java::lang::Object)
public:
	KeyFactory();
	void init$(::java::security::KeyFactorySpi* keyFacSpi, ::java::security::Provider* provider, $String* algorithm);
	void init$($String* algorithm);
	::java::security::PrivateKey* generatePrivate(::java::security::spec::KeySpec* keySpec);
	::java::security::PublicKey* generatePublic(::java::security::spec::KeySpec* keySpec);
	$String* getAlgorithm();
	static ::java::security::KeyFactory* getInstance($String* algorithm);
	static ::java::security::KeyFactory* getInstance($String* algorithm, $String* provider);
	static ::java::security::KeyFactory* getInstance($String* algorithm, ::java::security::Provider* provider);
	::java::security::spec::KeySpec* getKeySpec(::java::security::Key* key, $Class* keySpec);
	::java::security::Provider* getProvider();
	::java::security::KeyFactorySpi* nextSpi(::java::security::KeyFactorySpi* oldSpi);
	::java::security::Key* translateKey(::java::security::Key* key);
	static ::sun::security::util::Debug* debug;
	$String* algorithm = nullptr;
	::java::security::Provider* provider = nullptr;
	$volatile(::java::security::KeyFactorySpi*) spi = nullptr;
	$Object* lock = nullptr;
	::java::util::Iterator* serviceIterator = nullptr;
};

	} // security
} // java

#endif // _java_security_KeyFactory_h_