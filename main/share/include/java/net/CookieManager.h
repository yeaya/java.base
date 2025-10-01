#ifndef _java_net_CookieManager_h_
#define _java_net_CookieManager_h_
//$ class java.net.CookieManager
//$ extends java.net.CookieHandler

#include <java/net/CookieHandler.h>

namespace java {
	namespace net {
		class CookiePolicy;
		class CookieStore;
		class HttpCookie;
		class URI;
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
	}
}

namespace java {
	namespace net {

class $import CookieManager : public ::java::net::CookieHandler {
	$class(CookieManager, $NO_CLASS_INIT, ::java::net::CookieHandler)
public:
	CookieManager();
	void init$();
	void init$(::java::net::CookieStore* store, ::java::net::CookiePolicy* cookiePolicy);
	virtual ::java::util::Map* get(::java::net::URI* uri, ::java::util::Map* requestHeaders) override;
	virtual ::java::net::CookieStore* getCookieStore();
	static bool isInPortList($String* lst, int32_t port);
	bool pathMatches($String* path, $String* pathToMatchWith);
	virtual void put(::java::net::URI* uri, ::java::util::Map* responseHeaders) override;
	virtual void setCookiePolicy(::java::net::CookiePolicy* cookiePolicy);
	bool shouldAcceptInternal(::java::net::URI* uri, ::java::net::HttpCookie* cookie);
	static ::java::util::List* sortByPathAndAge(::java::util::List* cookies);
	::java::net::CookiePolicy* policyCallback = nullptr;
	::java::net::CookieStore* cookieJar = nullptr;
};

	} // net
} // java

#endif // _java_net_CookieManager_h_