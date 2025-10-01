#ifndef _NetworkChannelTests$ChannelFactory_h_
#define _NetworkChannelTests$ChannelFactory_h_
//$ interface NetworkChannelTests$ChannelFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace nio {
		namespace channels {
			class NetworkChannel;
		}
	}
}

class $export NetworkChannelTests$ChannelFactory : public ::java::lang::Object {
	$interface(NetworkChannelTests$ChannelFactory, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::nio::channels::NetworkChannel* open() {return nullptr;}
};

#endif // _NetworkChannelTests$ChannelFactory_h_