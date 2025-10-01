#ifndef _java_nio_channels_spi_AbstractInterruptibleChannel_h_
#define _java_nio_channels_spi_AbstractInterruptibleChannel_h_
//$ class java.nio.channels.spi.AbstractInterruptibleChannel
//$ extends java.nio.channels.InterruptibleChannel

#include <java/nio/channels/InterruptibleChannel.h>

namespace java {
	namespace lang {
		class Thread;
	}
}
namespace sun {
	namespace nio {
		namespace ch {
			class Interruptible;
		}
	}
}

namespace java {
	namespace nio {
		namespace channels {
			namespace spi {

class $export AbstractInterruptibleChannel : public ::java::nio::channels::InterruptibleChannel {
	$class(AbstractInterruptibleChannel, $NO_CLASS_INIT, ::java::nio::channels::InterruptibleChannel)
public:
	AbstractInterruptibleChannel();
	void init$();
	void begin();
	static void blockedOn(::sun::nio::ch::Interruptible* intr);
	virtual void close() override;
	void end(bool completed);
	virtual void implCloseChannel() {}
	virtual bool isOpen() override;
	$Object* closeLock = nullptr;
	$volatile(bool) closed = false;
	::sun::nio::ch::Interruptible* interruptor = nullptr;
	$volatile($Thread*) interrupted = nullptr;
};

			} // spi
		} // channels
	} // nio
} // java

#endif // _java_nio_channels_spi_AbstractInterruptibleChannel_h_