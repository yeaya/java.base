#ifndef _java_net_InetAddress$InetAddressHolder_h_
#define _java_net_InetAddress$InetAddressHolder_h_
//$ class java.net.InetAddress$InetAddressHolder
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace net {

class $export InetAddress$InetAddressHolder : public ::java::lang::Object {
	$class(InetAddress$InetAddressHolder, $NO_CLASS_INIT, ::java::lang::Object)
public:
	InetAddress$InetAddressHolder();
	void init$();
	void init$($String* hostName, int32_t address, int32_t family);
	virtual int32_t getAddress();
	virtual int32_t getFamily();
	virtual $String* getHostName();
	virtual $String* getOriginalHostName();
	virtual void init($String* hostName, int32_t family);
	$String* originalHostName = nullptr;
	$String* hostName = nullptr;
	int32_t address = 0;
	int32_t family = 0;
};

	} // net
} // java

#endif // _java_net_InetAddress$InetAddressHolder_h_