#ifndef _java_nio_channels_SelectableChannel_h_
#define _java_nio_channels_SelectableChannel_h_
//$ class java.nio.channels.SelectableChannel
//$ extends java.nio.channels.spi.AbstractInterruptibleChannel

#include <java/nio/channels/spi/AbstractInterruptibleChannel.h>

namespace java {
	namespace nio {
		namespace channels {
			class SelectionKey;
			class Selector;
		}
	}
}
namespace java {
	namespace nio {
		namespace channels {
			namespace spi {
				class SelectorProvider;
			}
		}
	}
}

namespace java {
	namespace nio {
		namespace channels {

class $import SelectableChannel : public ::java::nio::channels::spi::AbstractInterruptibleChannel {
	$class(SelectableChannel, $NO_CLASS_INIT, ::java::nio::channels::spi::AbstractInterruptibleChannel)
public:
	SelectableChannel();
	void init$();
	virtual $Object* blockingLock() {return nullptr;}
	virtual ::java::nio::channels::SelectableChannel* configureBlocking(bool block) {return nullptr;}
	virtual bool isBlocking() {return false;}
	virtual bool isRegistered() {return false;}
	virtual ::java::nio::channels::SelectionKey* keyFor(::java::nio::channels::Selector* sel) {return nullptr;}
	virtual ::java::nio::channels::spi::SelectorProvider* provider() {return nullptr;}
	virtual ::java::nio::channels::SelectionKey* register$(::java::nio::channels::Selector* sel, int32_t ops, Object$* att) {return nullptr;}
	::java::nio::channels::SelectionKey* register$(::java::nio::channels::Selector* sel, int32_t ops);
	virtual int32_t validOps() {return 0;}
};

		} // channels
	} // nio
} // java

#endif // _java_nio_channels_SelectableChannel_h_