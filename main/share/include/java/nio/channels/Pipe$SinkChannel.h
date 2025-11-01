#ifndef _java_nio_channels_Pipe$SinkChannel_h_
#define _java_nio_channels_Pipe$SinkChannel_h_
//$ class java.nio.channels.Pipe$SinkChannel
//$ extends java.nio.channels.spi.AbstractSelectableChannel
//$ implements java.nio.channels.GatheringByteChannel

#include <java/nio/channels/GatheringByteChannel.h>
#include <java/nio/channels/spi/AbstractSelectableChannel.h>

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

class $import Pipe$SinkChannel : public ::java::nio::channels::spi::AbstractSelectableChannel, public ::java::nio::channels::GatheringByteChannel {
	$class(Pipe$SinkChannel, $NO_CLASS_INIT, ::java::nio::channels::spi::AbstractSelectableChannel, ::java::nio::channels::GatheringByteChannel)
public:
	Pipe$SinkChannel();
	virtual $Object* clone() override;
	virtual void close() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::nio::channels::spi::SelectorProvider* provider);
	using ::java::nio::channels::spi::AbstractSelectableChannel::register$;
	virtual bool isOpen() override;
	virtual $String* toString() override;
	virtual int32_t validOps() override;
	using ::java::nio::channels::GatheringByteChannel::write;
};

		} // channels
	} // nio
} // java

#endif // _java_nio_channels_Pipe$SinkChannel_h_