#ifndef _sun_nio_ch_Iocp$EventHandlerTask_h_
#define _sun_nio_ch_Iocp$EventHandlerTask_h_
//$ class sun.nio.ch.Iocp$EventHandlerTask
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace sun {
	namespace nio {
		namespace ch {
			class Iocp;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class Iocp$EventHandlerTask : public ::java::lang::Runnable {
	$class(Iocp$EventHandlerTask, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	Iocp$EventHandlerTask();
	void init$(::sun::nio::ch::Iocp* this$0);
	virtual void run() override;
	::sun::nio::ch::Iocp* this$0 = nullptr;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_Iocp$EventHandlerTask_h_