#include <java/nio/channels/ScatteringByteChannel.h>
#include <java/nio/ByteBuffer.h>
#include <jcpp.h>

using $ByteBufferArray = $Array<::java::nio::ByteBuffer>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace channels {

$Class* ScatteringByteChannel::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"read", "([Ljava/nio/ByteBuffer;II)J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScatteringByteChannel, read, int64_t, $ByteBufferArray*, int32_t, int32_t), "java.io.IOException"},
		{"read", "([Ljava/nio/ByteBuffer;)J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScatteringByteChannel, read, int64_t, $ByteBufferArray*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.nio.channels.ScatteringByteChannel",
		nullptr,
		"java.nio.channels.ReadableByteChannel",
		nullptr,
		methodInfos$$
	};
	$loadClass(ScatteringByteChannel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ScatteringByteChannel);
	});
	return class$;
}

$Class* ScatteringByteChannel::class$ = nullptr;

		} // channels
	} // nio
} // java