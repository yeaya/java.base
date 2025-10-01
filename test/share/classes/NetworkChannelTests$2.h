#ifndef _NetworkChannelTests$2_h_
#define _NetworkChannelTests$2_h_
//$ class NetworkChannelTests$2
//$ extends NetworkChannelTests$ChannelFactory

#include <NetworkChannelTests$ChannelFactory.h>

namespace java {
	namespace nio {
		namespace channels {
			class NetworkChannel;
		}
	}
}

class NetworkChannelTests$2 : public ::NetworkChannelTests$ChannelFactory {
	$class(NetworkChannelTests$2, $NO_CLASS_INIT, ::NetworkChannelTests$ChannelFactory)
public:
	NetworkChannelTests$2();
	void init$();
	virtual ::java::nio::channels::NetworkChannel* open() override;
};

#endif // _NetworkChannelTests$2_h_