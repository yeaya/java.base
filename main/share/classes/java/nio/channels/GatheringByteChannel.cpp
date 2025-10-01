#include <java/nio/channels/GatheringByteChannel.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <jcpp.h>

using $ByteBufferArray = $Array<::java::nio::ByteBuffer>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WritableByteChannel = ::java::nio::channels::WritableByteChannel;

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