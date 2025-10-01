#ifndef _java_net_CacheResponse_h_
#define _java_net_CacheResponse_h_
//$ class java.net.CacheResponse
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace java {
	namespace net {

class $import CacheResponse : public ::java::lang::Object {
	$class(CacheResponse, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CacheResponse();
	void init$();
	virtual ::java::io::InputStream* getBody() {return nullptr;}
	virtual ::java::util::Map* getHeaders() {return nullptr;}
};

	} // net
} // java

#endif // _java_net_CacheResponse_h_