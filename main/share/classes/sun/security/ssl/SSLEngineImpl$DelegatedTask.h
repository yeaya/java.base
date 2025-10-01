#ifndef _sun_security_ssl_SSLEngineImpl$DelegatedTask_h_
#define _sun_security_ssl_SSLEngineImpl$DelegatedTask_h_
//$ class sun.security.ssl.SSLEngineImpl$DelegatedTask
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace sun {
	namespace security {
		namespace ssl {
			class SSLEngineImpl;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SSLEngineImpl$DelegatedTask : public ::java::lang::Runnable {
	$class(SSLEngineImpl$DelegatedTask, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	SSLEngineImpl$DelegatedTask();
	void init$(::sun::security::ssl::SSLEngineImpl* engineInstance);
	virtual void run() override;
	::sun::security::ssl::SSLEngineImpl* engine = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLEngineImpl$DelegatedTask_h_