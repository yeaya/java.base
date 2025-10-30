#include <java/nio/channels/ScatteringByteChannel.h>

#include <java/nio/ByteBuffer.h>
#include <jcpp.h>

using $ByteBufferArray = $Array<::java::nio::ByteBuffer>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReadableByteChannel = ::java::nio::channels::ReadableByteChannel;

namespace java {
	namespace nio {
		namespace channels {

$MethodInfo _ScatteringByteChannel_MethodInfo_[] = {
	{"read", "([Ljava/nio/ByteBuffer;II)J", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"read", "([Ljava/nio/ByteBuffer;)J", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _ScatteringByteChannel_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.nio.channels.ScatteringByteChannel",
	nullptr,
	"java.nio.channels.ReadableByteChannel",
	nullptr,
	_ScatteringByteChannel_MethodInfo_
};

$Object* allocate$ScatteringByteChannel($Class* clazz) {
	return $of($alloc(ScatteringByteChannel));
}

$Class* ScatteringByteChannel::load$($String* name, bool initialize) {
	$loadClass(ScatteringByteChannel, name, initialize, &_ScatteringByteChannel_ClassInfo_, allocate$ScatteringByteChannel);
	return class$;
}

$Class* ScatteringByteChannel::class$ = nullptr;

		} // channels
	} // nio
} // java