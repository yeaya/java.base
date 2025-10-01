#ifndef _sun_nio_ch_PendingIoCache$1_h_
#define _sun_nio_ch_PendingIoCache$1_h_
//$ class sun.nio.ch.PendingIoCache$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace sun {
	namespace nio {
		namespace ch {
			class Iocp$ResultHandler;
			class PendingIoCache;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class PendingIoCache$1 : public ::java::lang::Runnable {
	$class(PendingIoCache$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	PendingIoCache$1();
	void init$(::sun::nio::ch::PendingIoCache* this$0, ::sun::nio::ch::Iocp$ResultHandler* val$rh);
	virtual void run() override;
	::sun::nio::ch::PendingIoCache* this$0 = nullptr;
	::sun::nio::ch::Iocp$ResultHandler* val$rh = nullptr;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_PendingIoCache$1_h_