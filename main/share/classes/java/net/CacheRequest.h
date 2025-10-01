#ifndef _java_net_CacheRequest_h_
#define _java_net_CacheRequest_h_
//$ class java.net.CacheRequest
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class OutputStream;
	}
}

namespace java {
	namespace net {

class $export CacheRequest : public ::java::lang::Object {
	$class(CacheRequest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CacheRequest();
	void init$();
	virtual void abort() {}
	virtual ::java::io::OutputStream* getBody() {return nullptr;}
};

	} // net
} // java

#endif // _java_net_CacheRequest_h_