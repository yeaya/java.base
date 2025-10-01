#ifndef _sun_security_ssl_SSLSessionContextImpl_h_
#define _sun_security_ssl_SSLSessionContextImpl_h_
//$ class sun.security.ssl.SSLSessionContextImpl
//$ extends javax.net.ssl.SSLSessionContext

#include <java/lang/Array.h>
#include <javax/net/ssl/SSLSessionContext.h>

#pragma push_macro("DEFAULT_MAX_CACHE_SIZE")
#undef DEFAULT_MAX_CACHE_SIZE
#pragma push_macro("DEFAULT_SESSION_TIMEOUT")
#undef DEFAULT_SESSION_TIMEOUT

namespace java {
	namespace util {
		class Enumeration;
	}
}
namespace javax {
	namespace net {
		namespace ssl {
			class SSLSession;
		}
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class SSLSessionImpl;
			class SessionId;
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

class SSLSessionContextImpl : public ::javax::net::ssl::SSLSessionContext {
	$class(SSLSessionContextImpl, $NO_CLASS_INIT, ::javax::net::ssl::SSLSessionContext)
public:
	SSLSessionContextImpl();
	void init$(bool server);
	::sun::security::ssl::SSLSessionImpl* get($bytes* id);
	::sun::security::ssl::SSLSessionImpl* get($String* hostname, int32_t port);
	int32_t getDefaults(bool server);
	virtual ::java::util::Enumeration* getIds() override;
	static $String* getKey($String* hostname, int32_t port);
	virtual ::javax::net::ssl::SSLSession* getSession($bytes* sessionId) override;
	virtual int32_t getSessionCacheSize() override;
	virtual int32_t getSessionTimeout() override;
	bool isTimedout(::javax::net::ssl::SSLSession* sess);
	::sun::security::ssl::SSLSessionImpl* pull($bytes* id);
	void put(::sun::security::ssl::SSLSessionImpl* s);
	void remove(::sun::security::ssl::SessionId* key);
	virtual void setSessionCacheSize(int32_t size) override;
	virtual void setSessionTimeout(int32_t seconds) override;
	bool statelessEnabled();
	static const int32_t DEFAULT_MAX_CACHE_SIZE = 20480;
	static const int32_t DEFAULT_SESSION_TIMEOUT = 0x00015180;
	::sun::security::util::Cache* sessionCache = nullptr;
	::sun::security::util::Cache* sessionHostPortCache = nullptr;
	int32_t cacheLimit = 0;
	int32_t timeout = 0;
	bool statelessSession = false;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("DEFAULT_MAX_CACHE_SIZE")
#pragma pop_macro("DEFAULT_SESSION_TIMEOUT")

#endif // _sun_security_ssl_SSLSessionContextImpl_h_