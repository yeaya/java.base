#ifndef _javax_crypto_SecretKey_h_
#define _javax_crypto_SecretKey_h_
//$ interface javax.crypto.SecretKey
//$ extends java.security.Key,javax.security.auth.Destroyable

#include <java/security/Key.h>
#include <javax/security/auth/Destroyable.h>

namespace javax {
	namespace crypto {

class $export SecretKey : public ::java::security::Key, public ::javax::security::auth::Destroyable {
	$interface(SecretKey, $NO_CLASS_INIT, ::java::security::Key, ::javax::security::auth::Destroyable)
public:
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0xBD719DB928B8F538;
};

	} // crypto
} // javax

#endif // _javax_crypto_SecretKey_h_