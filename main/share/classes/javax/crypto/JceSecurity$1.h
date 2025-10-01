#ifndef _javax_crypto_JceSecurity$1_h_
#define _javax_crypto_JceSecurity$1_h_
//$ class javax.crypto.JceSecurity$1
//$ extends java.security.PrivilegedExceptionAction

#include <java/security/PrivilegedExceptionAction.h>

namespace javax {
	namespace crypto {

class JceSecurity$1 : public ::java::security::PrivilegedExceptionAction {
	$class(JceSecurity$1, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	JceSecurity$1();
	void init$();
	virtual $Object* run() override;
};

	} // crypto
} // javax

#endif // _javax_crypto_JceSecurity$1_h_