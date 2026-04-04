#include <java/nio/channels/SeekableByteChannel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace channels {

$Class* SeekableByteChannel::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"position", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SeekableByteChannel, position, int64_t), "java.io.IOException"},
		{"position", "(J)Ljava/nio/channels/SeekableByteChannel;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SeekableByteChannel, position, SeekableByteChannel*, int64_t), "java.io.IOException"},
		{"read", "(Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC | $ABSTRACT},
		{"size", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SeekableByteChannel, size, int64_t), "java.io.IOException"},
		{"truncate", "(J)Ljava/nio/channels/SeekableByteChannel;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SeekableByteChannel, truncate, SeekableByteChannel*, int64_t), "java.io.IOException"},
		{"write", "(Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.nio.channels.SeekableByteChannel",
		nullptr,
		"java.nio.channels.ByteChannel",
		nullptr,
		methodInfos$$
	};
	$loadClass(SeekableByteChannel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SeekableByteChannel));
	});
	return class$;
}

$Class* SeekableByteChannel::class$ = nullptr;

		} // channels
	} // nio
} // java