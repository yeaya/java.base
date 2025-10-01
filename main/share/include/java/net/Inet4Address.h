#ifndef _java_net_Inet4Address_h_
#define _java_net_Inet4Address_h_
//$ class java.net.Inet4Address
//$ extends java.net.InetAddress

#include <java/lang/Array.h>
#include <java/net/InetAddress.h>

#pragma push_macro("INADDRSZ")
#undef INADDRSZ

namespace java {
	namespace net {

class $import Inet4Address : public ::java::net::InetAddress {
	$class(Inet4Address, 0, ::java::net::InetAddress)
public:
	Inet4Address();
	void init$();
	void init$($String* hostName, $bytes* addr);
	void init$($String* hostName, int32_t address);
	int32_t addressValue();
	virtual bool equals(Object$* obj) override;
	virtual $bytes* getAddress() override;
	virtual $String* getHostAddress() override;
	virtual int32_t hashCode() override;
	static void init();
	virtual bool isAnyLocalAddress() override;
	virtual bool isLinkLocalAddress() override;
	virtual bool isLoopbackAddress() override;
	virtual bool isMCGlobal() override;
	virtual bool isMCLinkLocal() override;
	virtual bool isMCNodeLocal() override;
	virtual bool isMCOrgLocal() override;
	virtual bool isMCSiteLocal() override;
	virtual bool isMulticastAddress() override;
	virtual bool isSiteLocalAddress() override;
	static $String* numericToTextFormat($bytes* src);
	$Object* writeReplace();
	static const int32_t INADDRSZ = 4;
	static const int64_t serialVersionUID = (int64_t)0x2D9B57AF9FE3EBDB;
};

	} // net
} // java

#pragma pop_macro("INADDRSZ")

#endif // _java_net_Inet4Address_h_