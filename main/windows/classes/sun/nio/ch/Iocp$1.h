#ifndef _sun_nio_ch_Iocp$1_h_
#define _sun_nio_ch_Iocp$1_h_
//$ class sun.nio.ch.Iocp$1
//$ extends sun.nio.ch.Iocp$OverlappedChannel

#include <sun/nio/ch/Iocp$OverlappedChannel.h>

namespace java {
	namespace nio {
		namespace channels {
			class Channel;
		}
	}
}
namespace sun {
	namespace nio {
		namespace ch {
			class Iocp;
			class PendingFuture;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class Iocp$1 : public ::sun::nio::ch::Iocp$OverlappedChannel {
	$class(Iocp$1, $NO_CLASS_INIT, ::sun::nio::ch::Iocp$OverlappedChannel)
public:
	Iocp$1();
	void init$(::sun::nio::ch::Iocp* this$0, ::java::nio::channels::Channel* val$channel);
	virtual void close() override;
	virtual ::sun::nio::ch::PendingFuture* getByOverlapped(int64_t overlapped) override;
	::sun::nio::ch::Iocp* this$0 = nullptr;
	::java::nio::channels::Channel* val$channel = nullptr;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_Iocp$1_h_