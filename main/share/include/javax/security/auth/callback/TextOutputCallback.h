#ifndef _javax_security_auth_callback_TextOutputCallback_h_
#define _javax_security_auth_callback_TextOutputCallback_h_
//$ class javax.security.auth.callback.TextOutputCallback
//$ extends javax.security.auth.callback.Callback
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <javax/security/auth/callback/Callback.h>

#pragma push_macro("INFORMATION")
#undef INFORMATION
#pragma push_macro("ERROR")
#undef ERROR
#pragma push_macro("WARNING")
#undef WARNING

namespace javax {
	namespace security {
		namespace auth {
			namespace callback {

class $import TextOutputCallback : public ::javax::security::auth::callback::Callback, public ::java::io::Serializable {
	$class(TextOutputCallback, $NO_CLASS_INIT, ::javax::security::auth::callback::Callback, ::java::io::Serializable)
public:
	TextOutputCallback();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int32_t messageType, $String* message);
	virtual $String* getMessage();
	virtual int32_t getMessageType();
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x177251917C1BD1FE;
	static const int32_t INFORMATION = 0;
	static const int32_t WARNING = 1;
	static const int32_t ERROR = 2;
	int32_t messageType = 0;
	$String* message = nullptr;
};

			} // callback
		} // auth
	} // security
} // javax

#pragma pop_macro("INFORMATION")
#pragma pop_macro("ERROR")
#pragma pop_macro("WARNING")

#endif // _javax_security_auth_callback_TextOutputCallback_h_