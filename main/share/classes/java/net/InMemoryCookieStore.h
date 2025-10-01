#ifndef _java_net_InMemoryCookieStore_h_
#define _java_net_InMemoryCookieStore_h_
//$ class java.net.InMemoryCookieStore
//$ extends java.net.CookieStore

#include <java/net/CookieStore.h>

namespace java {
	namespace lang {
		class Comparable;
	}
}
namespace java {
	namespace net {
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
	namespace util {
		namespace concurrent {
			namespace locks {
				class ReentrantLock;
			}
		}
	}
}

namespace java {
	namespace net {

class InMemoryCookieStore : public ::java::net::CookieStore {
	$class(InMemoryCookieStore, $NO_CLASS_INIT, ::java::net::CookieStore)
public:
	InMemoryCookieStore();
	void init$();
	virtual void add(::java::net::URI* uri, ::java::net::HttpCookie* cookie) override;
	void addIndex(::java::util::Map* indexStore, Object$* index, ::java::net::HttpCookie* cookie);
	virtual ::java::util::List* get(::java::net::URI* uri) override;
	virtual ::java::util::List* getCookies() override;
	::java::net::URI* getEffectiveURI(::java::net::URI* uri);
	void getInternal1(::java::util::List* cookies, ::java::util::Map* cookieIndex, $String* host, bool secureLink);
	void getInternal2(::java::util::List* cookies, ::java::util::Map* cookieIndex, ::java::lang::Comparable* comparator, bool secureLink);
	virtual ::java::util::List* getURIs() override;
	bool netscapeDomainMatches($String* domain, $String* host);
	virtual bool remove(::java::net::URI* uri, ::java::net::HttpCookie* ck) override;
	virtual bool removeAll() override;
	::java::util::List* cookieJar = nullptr;
	::java::util::Map* domainIndex = nullptr;
	::java::util::Map* uriIndex = nullptr;
	::java::util::concurrent::locks::ReentrantLock* lock = nullptr;
};

	} // net
} // java

#endif // _java_net_InMemoryCookieStore_h_