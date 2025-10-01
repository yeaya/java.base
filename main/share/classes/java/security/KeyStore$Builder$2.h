#ifndef _java_security_KeyStore$Builder$2_h_
#define _java_security_KeyStore$Builder$2_h_
//$ class java.security.KeyStore$Builder$2
//$ extends java.security.KeyStore$Builder

#include <java/security/KeyStore$Builder.h>

namespace java {
	namespace io {
		class IOException;
	}
}
namespace java {
	namespace security {
		class AccessControlContext;
		class KeyStore;
		class KeyStore$ProtectionParameter;
		class PrivilegedExceptionAction;
		class Provider;
	}
}

namespace java {
	namespace security {

class KeyStore$Builder$2 : public ::java::security::KeyStore$Builder {
	$class(KeyStore$Builder$2, $NO_CLASS_INIT, ::java::security::KeyStore$Builder)
public:
	KeyStore$Builder$2();
	void init$(::java::security::Provider* val$provider, $String* val$type, ::java::security::KeyStore$ProtectionParameter* val$protection, ::java::security::AccessControlContext* val$context);
	virtual ::java::security::KeyStore* getKeyStore() override;
	virtual ::java::security::KeyStore$ProtectionParameter* getProtectionParameter($String* alias) override;
	::java::security::AccessControlContext* val$context = nullptr;
	::java::security::KeyStore$ProtectionParameter* val$protection = nullptr;
	$String* val$type = nullptr;
	::java::security::Provider* val$provider = nullptr;
	$volatile(bool) getCalled = false;
	::java::io::IOException* oldException = nullptr;
	::java::security::PrivilegedExceptionAction* action = nullptr;
};

	} // security
} // java

#endif // _java_security_KeyStore$Builder$2_h_