#ifndef _RegAfterPreClose$Closer_h_
#define _RegAfterPreClose$Closer_h_
//$ class RegAfterPreClose$Closer
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace nio {
		namespace channels {
			class Channel;
		}
	}
}

class $export RegAfterPreClose$Closer : public ::java::lang::Runnable {
	$class(RegAfterPreClose$Closer, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	RegAfterPreClose$Closer();
	void init$(::java::nio::channels::Channel* sc);
	virtual void run() override;
	::java::nio::channels::Channel* channel = nullptr;
};

#endif // _RegAfterPreClose$Closer_h_