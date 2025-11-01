#ifndef _javax_security_auth_callback_PasswordCallback_h_
#define _javax_security_auth_callback_PasswordCallback_h_
//$ class javax.security.auth.callback.PasswordCallback
//$ extends javax.security.auth.callback.Callback
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <javax/security/auth/callback/Callback.h>

namespace javax {
	namespace security {
		namespace auth {
			namespace callback {

class $export PasswordCallback : public ::javax::security::auth::callback::Callback, public ::java::io::Serializable {
	$class(PasswordCallback, $NO_CLASS_INIT, ::javax::security::auth::callback::Callback, ::java::io::Serializable)
public:
	PasswordCallback();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* prompt, bool echoOn);
	virtual void clearPassword();
	virtual $chars* getPassword();
	virtual $String* getPrompt();
	virtual bool isEchoOn();
	virtual void setPassword($chars* password);
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x1F7780E27139C5E6;
	$String* prompt = nullptr;
	bool echoOn = false;
	$chars* inputPassword = nullptr;
};

			} // callback
		} // auth
	} // security
} // javax

#endif // _javax_security_auth_callback_PasswordCallback_h_