#include <java/nio/channels/SeekableByteChannel.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteChannel = ::java::nio::channels::ByteChannel;

namespace java {
	namespace nio {
		namespace channels {

$MethodInfo _SeekableByteChannel_MethodInfo_[] = {
	{"position", "()J", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"position", "(J)Ljava/nio/channels/SeekableByteChannel;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"read", "(Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"size", "()J", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"truncate", "(J)Ljava/nio/channels/SeekableByteChannel;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
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