#ifndef _java_security_KeyStore$Builder_h_
#define _java_security_KeyStore$Builder_h_
//$ class java.security.KeyStore$Builder
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("MAX_CALLBACK_TRIES")
#undef MAX_CALLBACK_TRIES

namespace java {
	namespace io {
		class File;
	}
}
namespace java {
	namespace security {
		class KeyStore;
		class KeyStore$ProtectionParameter;
		class Provider;
	}
}

namespace java {
	namespace security {

class $export KeyStore$Builder : public ::java::lang::Object {
	$class(KeyStore$Builder, $NO_CLASS_INIT, ::java::lang::Object)
public:
	KeyStore$Builder();
	void init$();
	virtual ::java::security::KeyStore* getKeyStore() {return nullptr;}
	virtual ::java::security::KeyStore$ProtectionParameter* getProtectionParameter($String* alias) {return nullptr;}
	static ::java::security::KeyStore$Builder* newInstance(::java::security::KeyStore* keyStore, ::java::security::KeyStore$ProtectionParameter* protectionParameter);
	static ::java::security::KeyStore$Builder* newInstance($String* type, ::java::security::Provider* provider, ::java::io::File* file, ::java::security::KeyStore$ProtectionParameter* protection);
	static ::java::security::KeyStore$Builder* newInstance(::java::io::File* file, ::java::security::KeyStore$ProtectionParameter* protection);
	static ::java::security::KeyStore$Builder* newInstance($String* type, ::java::security::Provider* provider, ::java::security::KeyStore$ProtectionParameter* protection);
	static const int32_t MAX_CALLBACK_TRIES = 3;
};

	} // security
} // java

#pragma pop_macro("MAX_CALLBACK_TRIES")

#endif // _java_security_KeyStore$Builder_h_