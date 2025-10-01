#ifndef _javax_crypto_JceSecurityManager$1_h_
#define _javax_crypto_JceSecurityManager$1_h_
//$ class javax.crypto.JceSecurityManager$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace javax {
	namespace crypto {

class JceSecurityManager$1 : public ::java::security::PrivilegedAction {
	$class(JceSecurityManager$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	JceSecurityManager$1();
	void init$();
	virtual $Object* run() override;
};

	} // crypto
} // javax

#endif // _javax_crypto_JceSecurityManager$1_h_