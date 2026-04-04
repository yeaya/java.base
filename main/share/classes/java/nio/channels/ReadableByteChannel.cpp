#include <java/nio/channels/ReadableByteChannel.h>
#include <java/nio/ByteBuffer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;

namespace java {
	namespace nio {
		namespace channels {

$Class* ReadableByteChannel::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"read", "(Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ReadableByteChannel, read, int32_t, $ByteBuffer*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.nio.channels.ReadableByteChannel",
		nullptr,
		"java.nio.channels.Channel",
		nullptr,
		methodInfos$$
	};
	$loadClass(ReadableByteChannel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReadableByteChannel);
	});
	return class$;
}

$Class* ReadableByteChannel::class$ = nullptr;

		} // channels
	} // nio
} // java