#ifndef _javax_security_auth_callback_TextInputCallback_h_
#define _javax_security_auth_callback_TextInputCallback_h_
//$ class javax.security.auth.callback.TextInputCallback
//$ extends javax.security.auth.callback.Callback
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <javax/security/auth/callback/Callback.h>

namespace javax {
	namespace security {
		namespace auth {
			namespace callback {

class $export TextInputCallback : public ::javax::security::auth::callback::Callback, public ::java::io::Serializable {
	$class(TextInputCallback, $NO_CLASS_INIT, ::javax::security::auth::callback::Callback, ::java::io::Serializable)
public:
	TextInputCallback();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* prompt);
	void init$($String* prompt, $String* defaultText);
	virtual $String* getDefaultText();
	virtual $String* getPrompt();
	virtual $String* getText();
	virtual void setText($String* text);
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x90162061AE4213E4;
	$String* prompt = nullptr;
	$String* defaultText = nullptr;
	$String* inputText = nullptr;
};

			} // callback
		} // auth
	} // security
} // javax

#endif // _javax_security_auth_callback_TextInputCallback_h_