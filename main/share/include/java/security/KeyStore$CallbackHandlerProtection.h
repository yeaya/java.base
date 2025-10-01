#ifndef _java_security_KeyStore$CallbackHandlerProtection_h_
#define _java_security_KeyStore$CallbackHandlerProtection_h_
//$ class java.security.KeyStore$CallbackHandlerProtection
//$ extends java.security.KeyStore$ProtectionParameter

#include <java/security/KeyStore$ProtectionParameter.h>

namespace javax {
	namespace security {
		namespace auth {
			namespace callback {
				class CallbackHandler;
			}
		}
	}
}

namespace java {
	namespace security {

class $import KeyStore$CallbackHandlerProtection : public ::java::security::KeyStore$ProtectionParameter {
	$class(KeyStore$CallbackHandlerProtection, $NO_CLASS_INIT, ::java::security::KeyStore$ProtectionParameter)
public:
	KeyStore$CallbackHandlerProtection();
	void init$(::javax::security::auth::callback::CallbackHandler* handler);
	virtual ::javax::security::auth::callback::CallbackHandler* getCallbackHandler();
	::javax::security::auth::callback::CallbackHandler* handler = nullptr;
};

	} // security
} // java

#endif // _java_security_KeyStore$CallbackHandlerProtection_h_