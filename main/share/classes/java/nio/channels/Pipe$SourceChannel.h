#ifndef _java_nio_channels_Pipe$SourceChannel_h_
#define _java_nio_channels_Pipe$SourceChannel_h_
//$ class java.nio.channels.Pipe$SourceChannel
//$ extends java.nio.channels.spi.AbstractSelectableChannel
//$ implements java.nio.channels.ScatteringByteChannel

#include <java/nio/channels/ScatteringByteChannel.h>
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

class $export Pipe$SourceChannel : public ::java::nio::channels::spi::AbstractSelectableChannel, public ::java::nio::channels::ScatteringByteChannel {
	$class(Pipe$SourceChannel, $NO_CLASS_INIT, ::java::nio::channels::spi::AbstractSelectableChannel, ::java::nio::channels::ScatteringByteChannel)
public:
	Pipe$SourceChannel();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void close() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::nio::channels::spi::SelectorProvider* provider);
	using ::java::nio::channels::spi::AbstractSelectableChannel::register$;
	using ::java::nio::channels::ScatteringByteChannel::read;
	virtual bool isOpen() override;
	virtual $String* toString() override;
	virtual int32_t validOps() override;
};

		} // channels
	} // nio
} // java

#endif // _java_nio_channels_Pipe$SourceChannel_h_