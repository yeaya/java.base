#ifndef _sun_security_util_ConsoleCallbackHandler_h_
#define _sun_security_util_ConsoleCallbackHandler_h_
//$ class sun.security.util.ConsoleCallbackHandler
//$ extends javax.security.auth.callback.CallbackHandler

#include <java/lang/Array.h>
#include <javax/security/auth/callback/CallbackHandler.h>

namespace javax {
	namespace security {
		namespace auth {
			namespace callback {
				class Callback;
				class ConfirmationCallback;
			}
		}
	}
}

namespace sun {
	namespace security {
		namespace util {

class $export ConsoleCallbackHandler : public ::javax::security::auth::callback::CallbackHandler {
	$class(ConsoleCallbackHandler, $NO_CLASS_INIT, ::javax::security::auth::callback::CallbackHandler)
public:
	ConsoleCallbackHandler();
	void init$();
	void doConfirmation(::javax::security::auth::callback::ConfirmationCallback* confirmation);
	virtual void handle($Array<::javax::security::auth::callback::Callback>* callbacks) override;
	$String* readLine();
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_ConsoleCallbackHandler_h_