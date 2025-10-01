#ifndef _NetworkChannelTests_h_
#define _NetworkChannelTests_h_
//$ class NetworkChannelTests
//$ extends java.lang.Object

#include <java/lang/Array.h>

class NetworkChannelTests$ChannelFactory;

class $export NetworkChannelTests : public ::java::lang::Object {
	$class(NetworkChannelTests, $NO_CLASS_INIT, ::java::lang::Object)
public:
	NetworkChannelTests();
	void init$();
	static void bindTests(::NetworkChannelTests$ChannelFactory* factory);
	static void connectedAddressTests();
	static void localAddressTests(::NetworkChannelTests$ChannelFactory* factory);
	static void main($StringArray* args);
};

#endif // _NetworkChannelTests_h_