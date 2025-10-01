#ifndef _java_net_URLPermission$Authority_h_
#define _java_net_URLPermission$Authority_h_
//$ class java.net.URLPermission$Authority
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace net {
		class HostPortrange;
	}
}

namespace java {
	namespace net {

class $export URLPermission$Authority : public ::java::lang::Object {
	$class(URLPermission$Authority, $NO_CLASS_INIT, ::java::lang::Object)
public:
	URLPermission$Authority();
	using ::java::lang::Object::equals;
	void init$($String* scheme, $String* authority);
	virtual bool equals(::java::net::URLPermission$Authority* that);
	virtual int32_t hashCode() override;
	virtual bool implies(::java::net::URLPermission$Authority* other);
	bool impliesHostrange(::java::net::URLPermission$Authority* that);
	bool impliesPortrange(::java::net::URLPermission$Authority* that);
	::java::net::HostPortrange* p = nullptr;
};

	} // net
} // java

#endif // _java_net_URLPermission$Authority_h_