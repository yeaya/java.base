#ifndef _java_nio_channels_spi_AbstractSelector$1_h_
#define _java_nio_channels_spi_AbstractSelector$1_h_
//$ class java.nio.channels.spi.AbstractSelector$1
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
				class AbstractSelector;
			}
		}
	}
}

namespace java {
	namespace nio {
		namespace channels {
			namespace spi {

class AbstractSelector$1 : public ::sun::nio::ch::Interruptible {
	$class(AbstractSelector$1, $NO_CLASS_INIT, ::sun::nio::ch::Interruptible)
public:
	AbstractSelector$1();
	void init$(::java::nio::channels::spi::AbstractSelector* this$0);
	virtual void interrupt($Thread* ignore) override;
	::java::nio::channels::spi::AbstractSelector* this$0 = nullptr;
};

			} // spi
		} // channels
	} // nio
} // java

#endif // _java_nio_channels_spi_AbstractSelector$1_h_