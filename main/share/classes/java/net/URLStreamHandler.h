#ifndef _java_net_URLStreamHandler_h_
#define _java_net_URLStreamHandler_h_
//$ class java.net.URLStreamHandler
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace net {
		class InetAddress;
		class Proxy;
		class URL;
		class URLConnection;
	}
}

namespace java {
	namespace net {

class $export URLStreamHandler : public ::java::lang::Object {
	$class(URLStreamHandler, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Object)
public:
	URLStreamHandler();
	using ::java::lang::Object::hashCode;
	using ::java::lang::Object::equals;
	void init$();
	virtual bool equals(::java::net::URL* u1, ::java::net::URL* u2);
	virtual int32_t getDefaultPort();
	virtual ::java::net::InetAddress* getHostAddress(::java::net::URL* u);
	virtual int32_t hashCode(::java::net::URL* u);
	virtual bool hostsEqual(::java::net::URL* u1, ::java::net::URL* u2);
	virtual ::java::net::URLConnection* openConnection(::java::net::URL* u) {return nullptr;}
	virtual ::java::net::URLConnection* openConnection(::java::net::URL* u, ::java::net::Proxy* p);
	virtual void parseURL(::java::net::URL* u, $String* spec, int32_t start, int32_t limit);
	virtual bool sameFile(::java::net::URL* u1, ::java::net::URL* u2);
	virtual void setURL(::java::net::URL* u, $String* protocol, $String* host, int32_t port, $String* authority, $String* userInfo, $String* path, $String* query, $String* ref);
	virtual void setURL(::java::net::URL* u, $String* protocol, $String* host, int32_t port, $String* file, $String* ref);
	virtual $String* toExternalForm(::java::net::URL* u);
};

	} // net
} // java

#endif // _java_net_URLStreamHandler_h_