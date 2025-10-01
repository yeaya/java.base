#ifndef _java_security_KeyStore$PasswordProtection_h_
#define _java_security_KeyStore$PasswordProtection_h_
//$ class java.security.KeyStore$PasswordProtection
//$ extends java.security.KeyStore$ProtectionParameter
//$ implements javax.security.auth.Destroyable

#include <java/lang/Array.h>
#include <java/security/KeyStore$ProtectionParameter.h>
#include <javax/security/auth/Destroyable.h>

namespace java {
	namespace security {
		namespace spec {
			class AlgorithmParameterSpec;
		}
	}
}

namespace java {
	namespace security {

class $export KeyStore$PasswordProtection : public ::java::security::KeyStore$ProtectionParameter, public ::javax::security::auth::Destroyable {
	$class(KeyStore$PasswordProtection, $NO_CLASS_INIT, ::java::security::KeyStore$ProtectionParameter, ::javax::security::auth::Destroyable)
public:
	KeyStore$PasswordProtection();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($chars* password);
	void init$($chars* password, $String* protectionAlgorithm, ::java::security::spec::AlgorithmParameterSpec* protectionParameters);
	virtual void destroy() override;
	virtual $chars* getPassword();
	virtual $String* getProtectionAlgorithm();
	virtual ::java::security::spec::AlgorithmParameterSpec* getProtectionParameters();
	virtual bool isDestroyed() override;
	virtual $String* toString() override;
	$chars* password = nullptr;
	$String* protectionAlgorithm = nullptr;
	::java::security::spec::AlgorithmParameterSpec* protectionParameters = nullptr;
	$volatile(bool) destroyed = false;
};

	} // security
} // java

#endif // _java_security_KeyStore$PasswordProtection_h_