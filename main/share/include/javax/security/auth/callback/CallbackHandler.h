#ifndef _javax_security_auth_callback_CallbackHandler_h_
#define _javax_security_auth_callback_CallbackHandler_h_
//$ interface javax.security.auth.callback.CallbackHandler
//$ extends java.lang.Object

#include <java/lang/Array.h>

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

class $import CallbackHandler : public ::java::lang::Object {
	$interface(CallbackHandler, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void handle($Array<::javax::security::auth::callback::Callback>* callbacks) {}
};

			} // callback
		} // auth
	} // security
} // javax

#endif // _javax_security_auth_callback_CallbackHandler_h_