#ifndef _java_net_SecureCacheResponse_h_
#define _java_net_SecureCacheResponse_h_
//$ class java.net.SecureCacheResponse
//$ extends java.net.CacheResponse

#include <java/net/CacheResponse.h>

namespace java {
	namespace security {
		class Principal;
	}
}
namespace java {
	namespace util {
		class List;
		class Optional;
	}
}

namespace java {
	namespace net {

class $import SecureCacheResponse : public ::java::net::CacheResponse {
	$class(SecureCacheResponse, $NO_CLASS_INIT, ::java::net::CacheResponse)
public:
	SecureCacheResponse();
	void init$();
	virtual $String* getCipherSuite() {return nullptr;}
	virtual ::java::util::List* getLocalCertificateChain() {return nullptr;}
	virtual ::java::security::Principal* getLocalPrincipal() {return nullptr;}
	virtual ::java::security::Principal* getPeerPrincipal() {return nullptr;}
	virtual ::java::util::Optional* getSSLSession();
	virtual ::java::util::List* getServerCertificateChain() {return nullptr;}
};

	} // net
} // java

#endif // _java_net_SecureCacheResponse_h_