#ifndef _sun_security_ssl_StatusResponseManager$1_h_
#define _sun_security_ssl_StatusResponseManager$1_h_
//$ class sun.security.ssl.StatusResponseManager$1
//$ extends java.util.concurrent.ThreadFactory

#include <java/util/concurrent/ThreadFactory.h>

namespace java {
	namespace lang {
		class Runnable;
		class Thread;
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class StatusResponseManager;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class StatusResponseManager$1 : public ::java::util::concurrent::ThreadFactory {
	$class(StatusResponseManager$1, $NO_CLASS_INIT, ::java::util::concurrent::ThreadFactory)
public:
	StatusResponseManager$1();
	void init$(::sun::security::ssl::StatusResponseManager* this$0);
	virtual $Thread* newThread(::java::lang::Runnable* r) override;
	::sun::security::ssl::StatusResponseManager* this$0 = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_StatusResponseManager$1_h_