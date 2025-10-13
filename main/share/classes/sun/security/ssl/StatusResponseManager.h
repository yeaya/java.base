#ifndef _sun_security_ssl_StatusResponseManager_h_
#define _sun_security_ssl_StatusResponseManager_h_
//$ class sun.security.ssl.StatusResponseManager
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("DEFAULT_CACHE_LIFETIME")
#undef DEFAULT_CACHE_LIFETIME
#pragma push_macro("DEFAULT_CACHE_SIZE")
#undef DEFAULT_CACHE_SIZE
#pragma push_macro("DEFAULT_CORE_THREADS")
#undef DEFAULT_CORE_THREADS

namespace java {
	namespace net {
		class URI;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class X509Certificate;
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ScheduledThreadPoolExecutor;
			class TimeUnit;
		}
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
			class CertStatusExtension$CertStatusRequest;
			class CertStatusExtension$CertStatusRequestType;
			class CertStatusExtension$OCSPStatusRequest;
			class ServerHandshakeContext;
			class StatusResponseManager$ResponseCacheEntry;
			class StatusResponseManager$StaplingParameters;
		}
	}
}
namespace sun {
	namespace security {
		namespace util {
			class Cache;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class StatusResponseManager : public ::java::lang::Object {
	$class(StatusResponseManager, $NO_CLASS_INIT, ::java::lang::Object)
public:
	StatusResponseManager();
	void init$();
	void clear();
	::java::util::Map* get(::sun::security::ssl::CertStatusExtension$CertStatusRequestType* type, ::sun::security::ssl::CertStatusExtension$CertStatusRequest* request, $Array<::java::security::cert::X509Certificate>* chain, int64_t delay, ::java::util::concurrent::TimeUnit* unit);
	int32_t getCacheCapacity();
	int32_t getCacheLifetime();
	::java::net::URI* getDefaultResponder();
	::sun::security::ssl::StatusResponseManager$ResponseCacheEntry* getFromCache(::sun::security::provider::certpath::CertId* cid, ::sun::security::ssl::CertStatusExtension$OCSPStatusRequest* ocspRequest);
	bool getIgnoreExtensions();
	::java::net::URI* getURI(::java::security::cert::X509Certificate* cert);
	bool getURIOverride();
	static ::sun::security::ssl::StatusResponseManager$StaplingParameters* processStapling(::sun::security::ssl::ServerHandshakeContext* shc);
	void shutdown();
	int32_t size();
	virtual $String* toString() override;
	static const int32_t DEFAULT_CORE_THREADS = 8;
	static const int32_t DEFAULT_CACHE_SIZE = 256;
	static const int32_t DEFAULT_CACHE_LIFETIME = 3600;
	::java::util::concurrent::ScheduledThreadPoolExecutor* threadMgr = nullptr;
	::sun::security::util::Cache* responseCache = nullptr;
	::java::net::URI* defaultResponder = nullptr;
	bool respOverride = false;
	int32_t cacheCapacity = 0;
	int32_t cacheLifetime = 0;
	bool ignoreExtensions = false;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("DEFAULT_CACHE_LIFETIME")
#pragma pop_macro("DEFAULT_CACHE_SIZE")
#pragma pop_macro("DEFAULT_CORE_THREADS")

#endif // _sun_security_ssl_StatusResponseManager_h_