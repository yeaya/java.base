#ifndef _sun_security_ssl_StatusResponseManager$OCSPFetchCall_h_
#define _sun_security_ssl_StatusResponseManager$OCSPFetchCall_h_
//$ class sun.security.ssl.StatusResponseManager$OCSPFetchCall
//$ extends java.util.concurrent.Callable

#include <java/util/concurrent/Callable.h>

namespace java {
	namespace util {
		class Date;
		class List;
	}
}
namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {
				class CertId;
			}
		}
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class CertStatusExtension$OCSPStatusRequest;
			class StatusResponseManager;
			class StatusResponseManager$ResponseCacheEntry;
			class StatusResponseManager$StatusInfo;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class StatusResponseManager$OCSPFetchCall : public ::java::util::concurrent::Callable {
	$class(StatusResponseManager$OCSPFetchCall, $NO_CLASS_INIT, ::java::util::concurrent::Callable)
public:
	StatusResponseManager$OCSPFetchCall();
	void init$(::sun::security::ssl::StatusResponseManager* this$0, ::sun::security::ssl::StatusResponseManager$StatusInfo* info, ::sun::security::ssl::CertStatusExtension$OCSPStatusRequest* request);
	void addToCache(::sun::security::provider::certpath::CertId* certId, ::sun::security::ssl::StatusResponseManager$ResponseCacheEntry* entry);
	virtual $Object* call() override;
	int64_t getNextTaskDelay(::java::util::Date* nextUpdate);
	::sun::security::ssl::StatusResponseManager* this$0 = nullptr;
	::sun::security::ssl::StatusResponseManager$StatusInfo* statInfo = nullptr;
	::sun::security::ssl::CertStatusExtension$OCSPStatusRequest* ocspRequest = nullptr;
	::java::util::List* extensions = nullptr;
	::java::util::List* responderIds = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_StatusResponseManager$OCSPFetchCall_h_