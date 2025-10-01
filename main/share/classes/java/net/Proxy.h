#ifndef _java_net_Proxy_h_
#define _java_net_Proxy_h_
//$ class java.net.Proxy
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("NO_PROXY")
#undef NO_PROXY

namespace java {
	namespace net {
		class Proxy$Type;
		class SocketAddress;
	}
}

namespace java {
	namespace net {

class $export Proxy : public ::java::lang::Object {
	$class(Proxy, 0, ::java::lang::Object)
public:
	Proxy();
	void init$();
	void init$(::java::net::Proxy$Type* type, ::java::net::SocketAddress* sa);
	virtual ::java::net::SocketAddress* address();
	virtual bool equals(Object$* obj) override;
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	virtual ::java::net::Proxy$Type* type();
	::java::net::Proxy$Type* type$ = nullptr;
	::java::net::SocketAddress* sa = nullptr;
	static ::java::net::Proxy* NO_PROXY;
};

	} // net
} // java

#pragma pop_macro("NO_PROXY")

#endif // _java_net_Proxy_h_