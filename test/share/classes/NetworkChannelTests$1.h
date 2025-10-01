#ifndef _NetworkChannelTests$1_h_
#define _NetworkChannelTests$1_h_
//$ class NetworkChannelTests$1
//$ extends NetworkChannelTests$ChannelFactory

#include <NetworkChannelTests$ChannelFactory.h>

namespace java {
	namespace nio {
		namespace channels {
			class NetworkChannel;
		}
	}
}

class NetworkChannelTests$1 : public ::NetworkChannelTests$ChannelFactory {
	$class(NetworkChannelTests$1, $NO_CLASS_INIT, ::NetworkChannelTests$ChannelFactory)
public:
	NetworkChannelTests$1();
	void init$();
	virtual ::java::nio::channels::NetworkChannel* open() override;
};

#endif // _NetworkChannelTests$1_h_