#ifndef _java_nio_channels_spi_AbstractInterruptibleChannel$1_h_
#define _java_nio_channels_spi_AbstractInterruptibleChannel$1_h_
//$ class java.nio.channels.spi.AbstractInterruptibleChannel$1
//$ extends sun.nio.ch.Interruptible

#include <sun/nio/ch/Interruptible.h>

namespace java {
	namespace lang {
		class Thread;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			namespace spi {
				class AbstractInterruptibleChannel;
			}
		}
	}
}

namespace java {
	namespace nio {
		namespace channels {
			namespace spi {

class AbstractInterruptibleChannel$1 : public ::sun::nio::ch::Interruptible {
	$class(AbstractInterruptibleChannel$1, $NO_CLASS_INIT, ::sun::nio::ch::Interruptible)
public:
	AbstractInterruptibleChannel$1();
	void init$(::java::nio::channels::spi::AbstractInterruptibleChannel* this$0);
	virtual void interrupt($Thread* target) override;
	::java::nio::channels::spi::AbstractInterruptibleChannel* this$0 = nullptr;
};

			} // spi
		} // channels
	} // nio
} // java

#endif // _java_nio_channels_spi_AbstractInterruptibleChannel$1_h_