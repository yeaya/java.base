#ifndef _javax_crypto_JceSecurity$2_h_
#define _javax_crypto_JceSecurity$2_h_
//$ class javax.crypto.JceSecurity$2
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace javax {
	namespace crypto {

class JceSecurity$2 : public ::java::security::PrivilegedAction {
	$class(JceSecurity$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	JceSecurity$2();
	void init$($Class* val$clazz);
	virtual $Object* run() override;
	$Class* val$clazz = nullptr;
};

	} // crypto
} // javax

#endif // _javax_crypto_JceSecurity$2_h_