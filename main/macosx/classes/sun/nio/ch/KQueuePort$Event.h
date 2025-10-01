#ifndef _sun_nio_ch_KQueuePort$Event_h_
#define _sun_nio_ch_KQueuePort$Event_h_
//$ class sun.nio.ch.KQueuePort$Event
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace nio {
		namespace ch {
			class Port$PollableChannel;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class KQueuePort$Event : public ::java::lang::Object {
	$class(KQueuePort$Event, $NO_CLASS_INIT, ::java::lang::Object)
public:
	KQueuePort$Event();
	void init$(::sun::nio::ch::Port$PollableChannel* channel, int32_t events);
	virtual ::sun::nio::ch::Port$PollableChannel* channel();
	virtual int32_t events();
	::sun::nio::ch::Port$PollableChannel* channel$ = nullptr;
	int32_t events$ = 0;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_KQueuePort$Event_h_