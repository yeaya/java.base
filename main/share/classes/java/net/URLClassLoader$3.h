#ifndef _java_net_URLClassLoader$3_h_
#define _java_net_URLClassLoader$3_h_
//$ class java.net.URLClassLoader$3
//$ extends java.util.Enumeration

#include <java/util/Enumeration.h>

namespace java {
	namespace net {
		class URL;
		class URLClassLoader;
	}
}

namespace java {
	namespace net {

class URLClassLoader$3 : public ::java::util::Enumeration {
	$class(URLClassLoader$3, $NO_CLASS_INIT, ::java::util::Enumeration)
public:
	URLClassLoader$3();
	void init$(::java::net::URLClassLoader* this$0, ::java::util::Enumeration* val$e);
	virtual bool hasMoreElements() override;
	bool next();
	virtual $Object* nextElement() override;
	::java::net::URLClassLoader* this$0 = nullptr;
	::java::util::Enumeration* val$e = nullptr;
	::java::net::URL* url = nullptr;
};

	} // net
} // java

#endif // _java_net_URLClassLoader$3_h_