#include <java/nio/channels/SeekableByteChannel.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace channels {

$MethodInfo _SeekableByteChannel_MethodInfo_[] = {
	{"position", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SeekableByteChannel, position, int64_t), "java.io.IOException"},
	{"position", "(J)Ljava/nio/channels/SeekableByteChannel;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SeekableByteChannel, position, SeekableByteChannel*, int64_t), "java.io.IOException"},
	{"read", "(Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"size", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SeekableByteChannel, size, int64_t), "java.io.IOException"},
	{"truncate", "(J)Ljava/nio/channels/SeekableByteChannel;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SeekableByteChannel, truncate, SeekableByteChannel*, int64_t), "java.io.IOException"},
	{"write", "(Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SeekableByteChannel_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.nio.channels.SeekableByteChannel",
	nullptr,
	"java.nio.channels.ByteChannel",
	nullptr,
	_SeekableByteChannel_MethodInfo_
};

$Object* allocate$SeekableByteChannel($Class* clazz) {
	return $of($alloc(SeekableByteChannel));
}

$Class* SeekableByteChannel::load$($String* name, bool initialize) {
	$loadClass(SeekableByteChannel, name, initialize, &_SeekableByteChannel_ClassInfo_, allocate$SeekableByteChannel);
	return class$;
}

$Class* SeekableByteChannel::class$ = nullptr;

		} // channels
	} // nio
} // java