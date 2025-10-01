#ifndef _java_net_NetworkInterface$1_h_
#define _java_net_NetworkInterface$1_h_
//$ class java.net.NetworkInterface$1
//$ extends java.util.Enumeration

#include <java/lang/Array.h>
#include <java/util/Enumeration.h>

namespace java {
	namespace net {

class NetworkInterface$1 : public ::java::util::Enumeration {
	$class(NetworkInterface$1, $NO_CLASS_INIT, ::java::util::Enumeration)
public:
	NetworkInterface$1();
	void init$($ObjectArray* val$a);
	virtual bool hasMoreElements() override;
	virtual $Object* nextElement() override;
	$ObjectArray* val$a = nullptr;
	int32_t i = 0;
};

	} // net
} // java

#endif // _java_net_NetworkInterface$1_h_