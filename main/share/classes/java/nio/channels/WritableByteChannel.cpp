#include <java/nio/channels/WritableByteChannel.h>
#include <java/nio/ByteBuffer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;

namespace java {
	namespace nio {
		namespace channels {

$Class* WritableByteChannel::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"write", "(Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WritableByteChannel, write, int32_t, $ByteBuffer*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.nio.channels.WritableByteChannel",
		nullptr,
		"java.nio.channels.Channel",
		nullptr,
		methodInfos$$
	};
	$loadClass(WritableByteChannel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WritableByteChannel);
	});
	return class$;
}

$Class* WritableByteChannel::class$ = nullptr;

		} // channels
	} // nio
} // java