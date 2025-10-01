#ifndef _javax_security_auth_callback_ConfirmationCallback_h_
#define _javax_security_auth_callback_ConfirmationCallback_h_
//$ class javax.security.auth.callback.ConfirmationCallback
//$ extends javax.security.auth.callback.Callback
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <javax/security/auth/callback/Callback.h>

#pragma push_macro("NO")
#undef NO
#pragma push_macro("YES_NO_OPTION")
#undef YES_NO_OPTION
#pragma push_macro("YES_NO_CANCEL_OPTION")
#undef YES_NO_CANCEL_OPTION
#pragma push_macro("YES")
#undef YES
#pragma push_macro("INFORMATION")
#undef INFORMATION
#pragma push_macro("CANCEL")
#undef CANCEL
#pragma push_macro("OK_CANCEL_OPTION")
#undef OK_CANCEL_OPTION
#pragma push_macro("ERROR")
#undef ERROR
#pragma push_macro("UNSPECIFIED_OPTION")
#undef UNSPECIFIED_OPTION
#pragma push_macro("OK")
#undef OK
#pragma push_macro("WARNING")
#undef WARNING

namespace javax {
	namespace security {
		namespace auth {
			namespace callback {

class $export ConfirmationCallback : public ::javax::security::auth::callback::Callback, public ::java::io::Serializable {
	$class(ConfirmationCallback, $NO_CLASS_INIT, ::javax::security::auth::callback::Callback, ::java::io::Serializable)
public:
	ConfirmationCallback();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int32_t messageType, int32_t optionType, int32_t defaultOption);
	void init$(int32_t messageType, $StringArray* options, int32_t defaultOption);
	void init$($String* prompt, int32_t messageType, int32_t optionType, int32_t defaultOption);
	void init$($String* prompt, int32_t messageType, $StringArray* options, int32_t defaultOption);
	virtual int32_t getDefaultOption();
	virtual int32_t getMessageType();
	virtual int32_t getOptionType();
	virtual $StringArray* getOptions();
	virtual $String* getPrompt();
	virtual int32_t getSelectedIndex();
	virtual void setSelectedIndex(int32_t selection);
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x81C5BCAA11661D28;
	static const int32_t UNSPECIFIED_OPTION = (-1);
	static const int32_t YES_NO_OPTION = 0;
	static const int32_t YES_NO_CANCEL_OPTION = 1;
	static const int32_t OK_CANCEL_OPTION = 2;
	static const int32_t YES = 0;
	static const int32_t NO = 1;
	static const int32_t CANCEL = 2;
	static const int32_t OK = 3;
	static const int32_t INFORMATION = 0;
	static const int32_t WARNING = 1;
	static const int32_t ERROR = 2;
	$String* prompt = nullptr;
	int32_t messageType = 0;
	int32_t optionType = 0;
	int32_t defaultOption = 0;
	$StringArray* options = nullptr;
	int32_t selection = 0;
};

			} // callback
		} // auth
	} // security
} // javax

#pragma pop_macro("NO")
#pragma pop_macro("YES_NO_OPTION")
#pragma pop_macro("YES_NO_CANCEL_OPTION")
#pragma pop_macro("YES")
#pragma pop_macro("INFORMATION")
#pragma pop_macro("CANCEL")
#pragma pop_macro("OK_CANCEL_OPTION")
#pragma pop_macro("ERROR")
#pragma pop_macro("UNSPECIFIED_OPTION")
#pragma pop_macro("OK")
#pragma pop_macro("WARNING")

#endif // _javax_security_auth_callback_ConfirmationCallback_h_