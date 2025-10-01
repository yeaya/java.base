#ifndef _java_net_URLConnection$1_h_
#define _java_net_URLConnection$1_h_
//$ class java.net.URLConnection$1
//$ extends java.net.FileNameMap

#include <java/net/FileNameMap.h>

namespace java {
	namespace net {

class URLConnection$1 : public ::java::net::FileNameMap {
	$class(URLConnection$1, $NO_CLASS_INIT, ::java::net::FileNameMap)
public:
	URLConnection$1();
	void init$();
	virtual $String* getContentTypeFor($String* fileName) override;
	::java::net::FileNameMap* internalMap = nullptr;
};

	} // net
} // java

#endif // _java_net_URLConnection$1_h_