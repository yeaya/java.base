#include <java/nio/channels/WritableByteChannel.h>

#include <java/nio/ByteBuffer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace channels {

$MethodInfo _WritableByteChannel_MethodInfo_[] = {
	{"write", "(Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _WritableByteChannel_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.nio.channels.WritableByteChannel",
	nullptr,
	"java.nio.channels.Channel",
	nullptr,
	_WritableByteChannel_MethodInfo_
};

$Object* allocate$WritableByteChannel($Class* clazz) {
	return $of($alloc(WritableByteChannel));
}

$Class* WritableByteChannel::load$($String* name, bool initialize) {
	$loadClass(WritableByteChannel, name, initialize, &_WritableByteChannel_ClassInfo_, allocate$WritableByteChannel);
	return class$;
}

$Class* WritableByteChannel::class$ = nullptr;

		} // channels
	} // nio
} // java