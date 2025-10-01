#ifndef _NetworkChannelTests$3_h_
#define _NetworkChannelTests$3_h_
//$ class NetworkChannelTests$3
//$ extends NetworkChannelTests$ChannelFactory

#include <NetworkChannelTests$ChannelFactory.h>

namespace java {
	namespace nio {
		namespace channels {
			class NetworkChannel;
		}
	}
}

class NetworkChannelTests$3 : public ::NetworkChannelTests$ChannelFactory {
	$class(NetworkChannelTests$3, $NO_CLASS_INIT, ::NetworkChannelTests$ChannelFactory)
public:
	NetworkChannelTests$3();
	void init$();
	virtual ::java::nio::channels::NetworkChannel* open() override;
};

#endif // _NetworkChannelTests$3_h_