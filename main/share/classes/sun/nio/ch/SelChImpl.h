#ifndef _sun_nio_ch_SelChImpl_h_
#define _sun_nio_ch_SelChImpl_h_
//$ interface sun.nio.ch.SelChImpl
//$ extends java.nio.channels.Channel

#include <java/nio/channels/Channel.h>

namespace java {
	namespace io {
		class FileDescriptor;
	}
}
namespace sun {
	namespace nio {
		namespace ch {
			class SelectionKeyImpl;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class $export SelChImpl : public ::java::nio::channels::Channel {
	$interface(SelChImpl, $NO_CLASS_INIT, ::java::nio::channels::Channel)
public:
	virtual ::java::io::FileDescriptor* getFD() {return nullptr;}
	virtual int32_t getFDVal() {return 0;}
	virtual void kill() {}
	virtual void park(int32_t event, int64_t nanos);
	virtual void park(int32_t event);
	virtual bool translateAndSetReadyOps(int32_t ops, ::sun::nio::ch::SelectionKeyImpl* ski) {return false;}
	virtual bool translateAndUpdateReadyOps(int32_t ops, ::sun::nio::ch::SelectionKeyImpl* ski) {return false;}
	virtual int32_t translateInterestOps(int32_t ops) {return 0;}
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_SelChImpl_h_