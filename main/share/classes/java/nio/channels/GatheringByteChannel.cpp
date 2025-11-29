#include <java/nio/channels/GatheringByteChannel.h>

#include <java/nio/ByteBuffer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace channels {

$MethodInfo _GatheringByteChannel_MethodInfo_[] = {
	{"write", "([Ljava/nio/ByteBuffer;II)J", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"write", "([Ljava/nio/ByteBuffer;)J", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _GatheringByteChannel_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.nio.channels.GatheringByteChannel",
	nullptr,
	"java.nio.channels.WritableByteChannel",
	nullptr,
	_GatheringByteChannel_MethodInfo_
};

$Object* allocate$GatheringByteChannel($Class* clazz) {
	return $of($alloc(GatheringByteChannel));
}

$Class* GatheringByteChannel::load$($String* name, bool initialize) {
	$loadClass(GatheringByteChannel, name, initialize, &_GatheringByteChannel_ClassInfo_, allocate$GatheringByteChannel);
	return class$;
}

$Class* GatheringByteChannel::class$ = nullptr;

		} // channels
	} // nio
} // java