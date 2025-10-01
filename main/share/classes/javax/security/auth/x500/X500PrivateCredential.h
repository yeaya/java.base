#ifndef _javax_security_auth_x500_X500PrivateCredential_h_
#define _javax_security_auth_x500_X500PrivateCredential_h_
//$ class javax.security.auth.x500.X500PrivateCredential
//$ extends javax.security.auth.Destroyable

#include <javax/security/auth/Destroyable.h>

namespace java {
	namespace security {
		class PrivateKey;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class X509Certificate;
		}
	}
}

namespace javax {
	namespace security {
		namespace auth {
			namespace x500 {

class $export X500PrivateCredential : public ::javax::security::auth::Destroyable {
	$class(X500PrivateCredential, $NO_CLASS_INIT, ::javax::security::auth::Destroyable)
public:
	X500PrivateCredential();
	void init$(::java::security::cert::X509Certificate* cert, ::java::security::PrivateKey* key);
	void init$(::java::security::cert::X509Certificate* cert, ::java::security::PrivateKey* key, $String* alias);
	virtual void destroy() override;
	$String* getAlias();
	::java::security::cert::X509Certificate* getCertificate();
	::java::security::PrivateKey* getPrivateKey();
	virtual bool isDestroyed() override;
	::java::security::cert::X509Certificate* cert = nullptr;
	::java::security::PrivateKey* key = nullptr;
	$String* alias = nullptr;
};

			} // x500
		} // auth
	} // security
} // javax

#endif // _javax_security_auth_x500_X500PrivateCredential_h_