#include <java/nio/channels/GatheringByteChannel.h>
#include <java/nio/ByteBuffer.h>
#include <jcpp.h>

using $ByteBufferArray = $Array<::java::nio::ByteBuffer>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace channels {

$Class* GatheringByteChannel::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"write", "([Ljava/nio/ByteBuffer;II)J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GatheringByteChannel, write, int64_t, $ByteBufferArray*, int32_t, int32_t), "java.io.IOException"},
		{"write", "([Ljava/nio/ByteBuffer;)J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GatheringByteChannel, write, int64_t, $ByteBufferArray*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.nio.channels.GatheringByteChannel",
		nullptr,
		"java.nio.channels.WritableByteChannel",
		nullptr,
		methodInfos$$
	};
	$loadClass(GatheringByteChannel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GatheringByteChannel);
	});
	return class$;
}

$Class* GatheringByteChannel::class$ = nullptr;

		} // channels
	} // nio
} // java