#ifndef _javax_security_auth_callback_ChoiceCallback_h_
#define _javax_security_auth_callback_ChoiceCallback_h_
//$ class javax.security.auth.callback.ChoiceCallback
//$ extends javax.security.auth.callback.Callback
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <javax/security/auth/callback/Callback.h>

namespace javax {
	namespace security {
		namespace auth {
			namespace callback {

class $import ChoiceCallback : public ::javax::security::auth::callback::Callback, public ::java::io::Serializable {
	$class(ChoiceCallback, $NO_CLASS_INIT, ::javax::security::auth::callback::Callback, ::java::io::Serializable)
public:
	ChoiceCallback();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* prompt, $StringArray* choices, int32_t defaultChoice, bool multipleSelectionsAllowed);
	virtual bool allowMultipleSelections();
	virtual $StringArray* getChoices();
	virtual int32_t getDefaultChoice();
	virtual $String* getPrompt();
	virtual $ints* getSelectedIndexes();
	virtual void setSelectedIndex(int32_t selection);
	virtual void setSelectedIndexes($ints* selections);
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0xC8D39A9743328639;
	$String* prompt = nullptr;
	$StringArray* choices = nullptr;
	int32_t defaultChoice = 0;
	bool multipleSelectionsAllowed = false;
	$ints* selections = nullptr;
};

			} // callback
		} // auth
	} // security
} // javax

#endif // _javax_security_auth_callback_ChoiceCallback_h_