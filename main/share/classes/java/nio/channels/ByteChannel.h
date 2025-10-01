#ifndef _java_nio_channels_ByteChannel_h_
#define _java_nio_channels_ByteChannel_h_
//$ interface java.nio.channels.ByteChannel
//$ extends java.nio.channels.ReadableByteChannel,java.nio.channels.WritableByteChannel

#include <java/nio/channels/ReadableByteChannel.h>
#include <java/nio/channels/WritableByteChannel.h>

namespace java {
	namespace nio {
		namespace channels {

class $export ByteChannel : public ::java::nio::channels::ReadableByteChannel, public ::java::nio::channels::WritableByteChannel {
	$interface(ByteChannel, $NO_CLASS_INIT, ::java::nio::channels::ReadableByteChannel, ::java::nio::channels::WritableByteChannel)
public:
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void close() override {}
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	virtual bool isOpen() override {return false;}
	virtual $String* toString() override;
};

		} // channels
	} // nio
} // java

#endif // _java_nio_channels_ByteChannel_h_