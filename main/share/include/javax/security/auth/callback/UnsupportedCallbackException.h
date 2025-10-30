#ifndef _javax_security_auth_callback_UnsupportedCallbackException_h_
#define _javax_security_auth_callback_UnsupportedCallbackException_h_
//$ class javax.security.auth.callback.UnsupportedCallbackException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace javax {
	namespace security {
		namespace auth {
			namespace callback {
				class Callback;
			}
		}
	}
}

namespace javax {
	namespace security {
		namespace auth {
			namespace callback {

class $import UnsupportedCallbackException : public ::java::lang::Exception {
	$class(UnsupportedCallbackException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	UnsupportedCallbackException();
	void init$(::javax::security::auth::callback::Callback* callback);
	void init$(::javax::security::auth::callback::Callback* callback, $String* msg);
	virtual ::javax::security::auth::callback::Callback* getCallback();
	static const int64_t serialVersionUID = (int64_t)0xA09C38F00A720B69;
	::javax::security::auth::callback::Callback* callback = nullptr;
	UnsupportedCallbackException(const UnsupportedCallbackException& e);
	virtual void throw$() override;
	inline UnsupportedCallbackException* operator ->() {
		return (UnsupportedCallbackException*)throwing$;
	}
};

			} // callback
		} // auth
	} // security
} // javax

#endif // _javax_security_auth_callback_UnsupportedCallbackException_h_