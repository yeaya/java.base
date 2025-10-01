#ifndef _javax_security_auth_spi_LoginModule_h_
#define _javax_security_auth_spi_LoginModule_h_
//$ interface javax.security.auth.spi.LoginModule
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Map;
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
			namespace spi {

class $import LoginModule : public ::java::lang::Object {
	$interface(LoginModule, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool abort() {return false;}
	virtual bool commit() {return false;}
	virtual void initialize(::javax::security::auth::Subject* subject, ::javax::security::auth::callback::CallbackHandler* callbackHandler, ::java::util::Map* sharedState, ::java::util::Map* options) {}
	virtual bool login() {return false;}
	virtual bool logout() {return false;}
};

			} // spi
		} // auth
	} // security
} // javax

#endif // _javax_security_auth_spi_LoginModule_h_