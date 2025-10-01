#ifndef _javax_security_auth_login_LoginContext_h_
#define _javax_security_auth_login_LoginContext_h_
//$ class javax.security.auth.login.LoginContext
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("OTHER")
#undef OTHER
#pragma push_macro("LOGIN_METHOD")
#undef LOGIN_METHOD
#pragma push_macro("ABORT_METHOD")
#undef ABORT_METHOD
#pragma push_macro("COMMIT_METHOD")
#undef COMMIT_METHOD
#pragma push_macro("LOGOUT_METHOD")
#undef LOGOUT_METHOD
#pragma push_macro("DEFAULT_HANDLER")
#undef DEFAULT_HANDLER

namespace java {
	namespace lang {
		class ClassLoader;
	}
}
namespace java {
	namespace security {
		class AccessControlContext;
	}
}
namespace java {
	namespace util {
		class Map;
		class ServiceLoader;
	}
}
namespace javax {
	namespace security {
		namespace auth {
			class Subject;
		}
	}
}
namespace javax {
	namespace security {
		namespace auth {
			namespace callback {
				class CallbackHandler;
			}
		}
	}
}
namespace javax {
	namespace security {
		namespace auth {
			namespace login {
				class Configuration;
				class LoginContext$ModuleInfo;
				class LoginException;
			}
		}
	}
}
namespace sun {
	namespace security {
		namespace util {
			class Debug;
		}
	}
}

namespace javax {
	namespace security {
		namespace auth {
			namespace login {

class $export LoginContext : public ::java::lang::Object {
	$class(LoginContext, 0, ::java::lang::Object)
public:
	LoginContext();
	void init$($String* name);
	void init$($String* name, ::javax::security::auth::Subject* subject);
	void init$($String* name, ::javax::security::auth::callback::CallbackHandler* callbackHandler);
	void init$($String* name, ::javax::security::auth::Subject* subject, ::javax::security::auth::callback::CallbackHandler* callbackHandler);
	void init$($String* name, ::javax::security::auth::Subject* subject, ::javax::security::auth::callback::CallbackHandler* callbackHandler, ::javax::security::auth::login::Configuration* config);
	void clearState();
	virtual ::javax::security::auth::Subject* getSubject();
	void init($String* name);
	void invoke($String* methodName);
	void invokePriv($String* methodName);
	::java::util::ServiceLoader* lambda$invoke$0();
	void loadDefaultCallbackHandler();
	virtual void login();
	virtual void logout();
	void throwException(::javax::security::auth::login::LoginException* originalError, ::javax::security::auth::login::LoginException* le);
	static $String* LOGIN_METHOD;
	static $String* COMMIT_METHOD;
	static $String* ABORT_METHOD;
	static $String* LOGOUT_METHOD;
	static $String* OTHER;
	static $String* DEFAULT_HANDLER;
	::javax::security::auth::Subject* subject = nullptr;
	bool subjectProvided = false;
	bool loginSucceeded = false;
	::javax::security::auth::callback::CallbackHandler* callbackHandler = nullptr;
	::java::util::Map* state = nullptr;
	::javax::security::auth::login::Configuration* config = nullptr;
	::java::security::AccessControlContext* creatorAcc = nullptr;
	$Array<::javax::security::auth::login::LoginContext$ModuleInfo>* moduleStack = nullptr;
	::java::lang::ClassLoader* contextClassLoader = nullptr;
	int32_t moduleIndex = 0;
	::javax::security::auth::login::LoginException* firstError = nullptr;
	::javax::security::auth::login::LoginException* firstRequiredError = nullptr;
	bool success = false;
	static ::sun::security::util::Debug* debug;
};

			} // login
		} // auth
	} // security
} // javax

#pragma pop_macro("OTHER")
#pragma pop_macro("LOGIN_METHOD")
#pragma pop_macro("ABORT_METHOD")
#pragma pop_macro("COMMIT_METHOD")
#pragma pop_macro("LOGOUT_METHOD")
#pragma pop_macro("DEFAULT_HANDLER")

#endif // _javax_security_auth_login_LoginContext_h_