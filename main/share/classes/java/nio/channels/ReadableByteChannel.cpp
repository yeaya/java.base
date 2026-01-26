#include <java/nio/channels/ReadableByteChannel.h>

#include <java/nio/ByteBuffer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;

namespace java {
	namespace nio {
		namespace channels {

$MethodInfo _ReadableByteChannel_MethodInfo_[] = {
	{"read", "(Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ReadableByteChannel, read, int32_t, $ByteBuffer*), "java.io.IOException"},
	{}
};

$ClassInfo _ReadableByteChannel_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.nio.channels.ReadableByteChannel",
	nullptr,
	"java.nio.channels.Channel",
	nullptr,
	_ReadableByteChannel_MethodInfo_
};

$Object* allocate$ReadableByteChannel($Class* clazz) {
	return $of($alloc(ReadableByteChannel));
}

$Class* ReadableByteChannel::load$($String* name, bool initialize) {
	$loadClass(ReadableByteChannel, name, initialize, &_ReadableByteChannel_ClassInfo_, allocate$ReadableByteChannel);
	return class$;
}

$Class* ReadableByteChannel::class$ = nullptr;

		} // channels
	} // nio
} // java