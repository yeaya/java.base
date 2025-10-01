#ifndef _javax_security_auth_login_Configuration_h_
#define _javax_security_auth_login_Configuration_h_
//$ class javax.security.auth.login.Configuration
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace security {
		class AccessControlContext;
		class NoSuchAlgorithmException;
		class Provider;
	}
}
namespace javax {
	namespace security {
		namespace auth {
			namespace login {
				class AppConfigurationEntry;
				class Configuration$Parameters;
			}
		}
	}
}

namespace javax {
	namespace security {
		namespace auth {
			namespace login {

class $export Configuration : public ::java::lang::Object {
	$class(Configuration, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Configuration();
	void init$();
	static void checkPermission($String* type);
	virtual $Array<::javax::security::auth::login::AppConfigurationEntry>* getAppConfigurationEntry($String* name) {return nullptr;}
	static ::javax::security::auth::login::Configuration* getConfiguration();
	static ::javax::security::auth::login::Configuration* getInstance($String* type, ::javax::security::auth::login::Configuration$Parameters* params);
	static ::javax::security::auth::login::Configuration* getInstance($String* type, ::javax::security::auth::login::Configuration$Parameters* params, $String* provider);
	static ::javax::security::auth::login::Configuration* getInstance($String* type, ::javax::security::auth::login::Configuration$Parameters* params, ::java::security::Provider* provider);
	virtual ::javax::security::auth::login::Configuration$Parameters* getParameters();
	virtual ::java::security::Provider* getProvider();
	virtual $String* getType();
	static ::javax::security::auth::login::Configuration* handleException(::java::security::NoSuchAlgorithmException* nsae);
	virtual void refresh();
	static void setConfiguration(::javax::security::auth::login::Configuration* configuration);
	static ::javax::security::auth::login::Configuration* configuration;
	::java::security::AccessControlContext* acc = nullptr;
};

			} // login
		} // auth
	} // security
} // javax

#endif // _javax_security_auth_login_Configuration_h_