#ifndef _ReuseAddressTest_h_
#define _ReuseAddressTest_h_
//$ class ReuseAddressTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace net {
		class DatagramSocket;
		class InetSocketAddress;
	}
}

class $export ReuseAddressTest : public ::java::lang::Object {
	$class(ReuseAddressTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ReuseAddressTest();
	void init$();
	virtual void DatagramSocket0029();
	virtual void DatagramSocket0030();
	virtual void DatagramSocket0031();
	virtual void DatagramSocket0032();
	virtual void DatagramSocket0034();
	virtual void DatagramSocket0035();
	virtual void DatagramSocket2028();
	virtual void DatagramSocket2029();
	virtual void DatagramSocket2030();
	static ::java::net::InetSocketAddress* createSocketAddress(int32_t testMcastPort);
	virtual $String* getInfo(::java::net::DatagramSocket* soc);
	static void main($StringArray* argv);
};

#endif // _ReuseAddressTest_h_