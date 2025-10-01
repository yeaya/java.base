#ifndef _java_security_KeyStore$Builder$FileBuilder_h_
#define _java_security_KeyStore$Builder$FileBuilder_h_
//$ class java.security.KeyStore$Builder$FileBuilder
//$ extends java.security.KeyStore$Builder

#include <java/security/KeyStore$Builder.h>

namespace java {
	namespace io {
		class File;
	}
}
namespace java {
	namespace lang {
		class Throwable;
	}
}
namespace java {
	namespace security {
		class AccessControlContext;
		class KeyStore;
		class KeyStore$ProtectionParameter;
		class Provider;
	}
}

namespace java {
	namespace security {

class KeyStore$Builder$FileBuilder : public ::java::security::KeyStore$Builder {
	$class(KeyStore$Builder$FileBuilder, $NO_CLASS_INIT, ::java::security::KeyStore$Builder)
public:
	KeyStore$Builder$FileBuilder();
	void init$($String* type, ::java::security::Provider* provider, ::java::io::File* file, ::java::security::KeyStore$ProtectionParameter* protection, ::java::security::AccessControlContext* context);
	virtual ::java::security::KeyStore* getKeyStore() override;
	virtual ::java::security::KeyStore$ProtectionParameter* getProtectionParameter($String* alias) override;
	$String* type = nullptr;
	::java::security::Provider* provider = nullptr;
	::java::io::File* file = nullptr;
	::java::security::KeyStore$ProtectionParameter* protection = nullptr;
	::java::security::KeyStore$ProtectionParameter* keyProtection = nullptr;
	::java::security::AccessControlContext* context = nullptr;
	::java::security::KeyStore* keyStore = nullptr;
	$Throwable* oldException = nullptr;
};

	} // security
} // java

#endif // _java_security_KeyStore$Builder$FileBuilder_h_