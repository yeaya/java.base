#ifndef _sun_nio_ch_Iocp$OverlappedChannel_h_
#define _sun_nio_ch_Iocp$OverlappedChannel_h_
//$ interface sun.nio.ch.Iocp$OverlappedChannel
//$ extends java.io.Closeable

#include <java/io/Closeable.h>

namespace sun {
	namespace nio {
		namespace ch {
			class PendingFuture;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class $export Iocp$OverlappedChannel : public ::java::io::Closeable {
	$interface(Iocp$OverlappedChannel, $NO_CLASS_INIT, ::java::io::Closeable)
public:
	virtual ::sun::nio::ch::PendingFuture* getByOverlapped(int64_t overlapped) {return nullptr;}
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_Iocp$OverlappedChannel_h_