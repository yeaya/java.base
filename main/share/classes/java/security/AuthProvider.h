#ifndef _java_security_AuthProvider_h_
#define _java_security_AuthProvider_h_
//$ class java.security.AuthProvider
//$ extends java.security.Provider

#include <java/security/Provider.h>

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

namespace java {
	namespace security {

class $export AuthProvider : public ::java::security::Provider {
	$class(AuthProvider, $NO_CLASS_INIT, ::java::security::Provider)
public:
	AuthProvider();
	using ::java::security::Provider::getProperty;
	void init$($String* name, double version, $String* info);
	void init$($String* name, $String* versionStr, $String* info);
	using ::java::security::Provider::load;
	virtual void login(::javax::security::auth::Subject* subject, ::javax::security::auth::callback::CallbackHandler* handler) {}
	virtual void logout() {}
	virtual void setCallbackHandler(::javax::security::auth::callback::CallbackHandler* handler) {}
	static const int64_t serialVersionUID = (int64_t)0x3A41CA914C43159D;
};

	} // security
} // java

#endif // _java_security_AuthProvider_h_