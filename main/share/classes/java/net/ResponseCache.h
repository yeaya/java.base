#ifndef _java_net_ResponseCache_h_
#define _java_net_ResponseCache_h_
//$ class java.net.ResponseCache
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace net {
		class CacheRequest;
		class CacheResponse;
		class URI;
		class URLConnection;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace java {
	namespace net {

class $export ResponseCache : public ::java::lang::Object {
	$class(ResponseCache, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ResponseCache();
	void init$();
	virtual ::java::net::CacheResponse* get(::java::net::URI* uri, $String* rqstMethod, ::java::util::Map* rqstHeaders) {return nullptr;}
	static ::java::net::ResponseCache* getDefault();
	virtual ::java::net::CacheRequest* put(::java::net::URI* uri, ::java::net::URLConnection* conn) {return nullptr;}
	static void setDefault(::java::net::ResponseCache* responseCache);
	static ::java::net::ResponseCache* theResponseCache;
};

	} // net
} // java

#endif // _java_net_ResponseCache_h_