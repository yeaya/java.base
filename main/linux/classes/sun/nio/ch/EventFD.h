#ifndef _sun_nio_ch_EventFD_h_
#define _sun_nio_ch_EventFD_h_
//$ class sun.nio.ch.EventFD
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace nio {
		namespace ch {

class EventFD : public ::java::lang::Object {
	$class(EventFD, 0, ::java::lang::Object)
public:
	EventFD();
	void init$();
	void close();
	int32_t efd();
	static int32_t eventfd0();
	void reset();
	void set();
	static int32_t set0(int32_t efd);
	int32_t efd$ = 0;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_EventFD_h_