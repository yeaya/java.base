#ifndef _javax_crypto_JceSecurity$IdentityWrapper_h_
#define _javax_crypto_JceSecurity$IdentityWrapper_h_
//$ class javax.crypto.JceSecurity$IdentityWrapper
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace security {
		class Provider;
	}
}

namespace javax {
	namespace crypto {

class JceSecurity$IdentityWrapper : public ::java::lang::Object {
	$class(JceSecurity$IdentityWrapper, $NO_CLASS_INIT, ::java::lang::Object)
public:
	JceSecurity$IdentityWrapper();
	void init$(::java::security::Provider* obj);
	virtual bool equals(Object$* o) override;
	virtual int32_t hashCode() override;
	::java::security::Provider* obj = nullptr;
};

	} // crypto
} // javax

#endif // _javax_crypto_JceSecurity$IdentityWrapper_h_