#ifndef _sun_security_provider_DomainKeyStore$KeyStoreBuilderComponents_h_
#define _sun_security_provider_DomainKeyStore$KeyStoreBuilderComponents_h_
//$ class sun.security.provider.DomainKeyStore$KeyStoreBuilderComponents
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class File;
	}
}
namespace java {
	namespace security {
		class KeyStore$ProtectionParameter;
		class Provider;
	}
}

namespace sun {
	namespace security {
		namespace provider {

class DomainKeyStore$KeyStoreBuilderComponents : public ::java::lang::Object {
	$class(DomainKeyStore$KeyStoreBuilderComponents, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DomainKeyStore$KeyStoreBuilderComponents();
	void init$($String* name, $String* type, ::java::security::Provider* provider, ::java::io::File* file, ::java::security::KeyStore$ProtectionParameter* protection);
	$String* name = nullptr;
	$String* type = nullptr;
	::java::security::Provider* provider = nullptr;
	::java::io::File* file = nullptr;
	::java::security::KeyStore$ProtectionParameter* protection = nullptr;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_DomainKeyStore$KeyStoreBuilderComponents_h_