#ifndef _javax_security_auth_callback_LanguageCallback_h_
#define _javax_security_auth_callback_LanguageCallback_h_
//$ class javax.security.auth.callback.LanguageCallback
//$ extends javax.security.auth.callback.Callback
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <javax/security/auth/callback/Callback.h>

namespace java {
	namespace util {
		class Locale;
	}
}

namespace javax {
	namespace security {
		namespace auth {
			namespace callback {

class $export LanguageCallback : public ::javax::security::auth::callback::Callback, public ::java::io::Serializable {
	$class(LanguageCallback, $NO_CLASS_INIT, ::javax::security::auth::callback::Callback, ::java::io::Serializable)
public:
	LanguageCallback();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual ::java::util::Locale* getLocale();
	virtual void setLocale(::java::util::Locale* locale);
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x1C051BABFF1BC5AD;
	::java::util::Locale* locale = nullptr;
};

			} // callback
		} // auth
	} // security
} // javax

#endif // _javax_security_auth_callback_LanguageCallback_h_