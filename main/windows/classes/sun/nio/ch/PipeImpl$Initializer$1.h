#ifndef _sun_nio_ch_PipeImpl$Initializer$1_h_
#define _sun_nio_ch_PipeImpl$Initializer$1_h_
//$ class sun.nio.ch.PipeImpl$Initializer$1
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

namespace java {
	namespace lang {
		class Runnable;
	}
}
namespace sun {
	namespace nio {
		namespace ch {
			class PipeImpl$Initializer;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class PipeImpl$Initializer$1 : public ::java::lang::Thread {
	$class(PipeImpl$Initializer$1, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	PipeImpl$Initializer$1();
	void init$(::sun::nio::ch::PipeImpl$Initializer* this$0, ::java::lang::Runnable* target);
	virtual void interrupt() override;
	::sun::nio::ch::PipeImpl$Initializer* this$0 = nullptr;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_PipeImpl$Initializer$1_h_