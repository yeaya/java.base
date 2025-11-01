#ifndef _javax_security_auth_callback_NameCallback_h_
#define _javax_security_auth_callback_NameCallback_h_
//$ class javax.security.auth.callback.NameCallback
//$ extends javax.security.auth.callback.Callback
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <javax/security/auth/callback/Callback.h>

namespace javax {
	namespace security {
		namespace auth {
			namespace callback {

class $export NameCallback : public ::javax::security::auth::callback::Callback, public ::java::io::Serializable {
	$class(NameCallback, $NO_CLASS_INIT, ::javax::security::auth::callback::Callback, ::java::io::Serializable)
public:
	NameCallback();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* prompt);
	void init$($String* prompt, $String* defaultName);
	virtual $String* getDefaultName();
	virtual $String* getName();
	virtual $String* getPrompt();
	virtual void setName($String* name);
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x345510DB07EB277D;
	$String* prompt = nullptr;
	$String* defaultName = nullptr;
	$String* inputName = nullptr;
};

			} // callback
		} // auth
	} // security
} // javax

#endif // _javax_security_auth_callback_NameCallback_h_