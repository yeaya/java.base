#include <java/nio/channels/AsynchronousByteChannel.h>

#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/CompletionHandler.h>
#include <java/util/concurrent/Future.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace channels {

$MethodInfo _AsynchronousByteChannel_MethodInfo_[] = {
	{"read", "(Ljava/nio/ByteBuffer;Ljava/lang/Object;Ljava/nio/channels/CompletionHandler;)V", "<A:Ljava/lang/Object;>(Ljava/nio/ByteBuffer;TA;Ljava/nio/channels/CompletionHandler<Ljava/lang/Integer;-TA;>;)V", $PUBLIC | $ABSTRACT},
	{"read", "(Ljava/nio/ByteBuffer;)Ljava/util/concurrent/Future;", "(Ljava/nio/ByteBuffer;)Ljava/util/concurrent/Future<Ljava/lang/Integer;>;", $PUBLIC | $ABSTRACT},
	{"write", "(Ljava/nio/ByteBuffer;Ljava/lang/Object;Ljava/nio/channels/CompletionHandler;)V", "<A:Ljava/lang/Object;>(Ljava/nio/ByteBuffer;TA;Ljava/nio/channels/CompletionHandler<Ljava/lang/Integer;-TA;>;)V", $PUBLIC | $ABSTRACT},
	{"write", "(Ljava/nio/ByteBuffer;)Ljava/util/concurrent/Future;", "(Ljava/nio/ByteBuffer;)Ljava/util/concurrent/Future<Ljava/lang/Integer;>;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _AsynchronousByteChannel_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.nio.channels.AsynchronousByteChannel",
	nullptr,
	"java.nio.channels.AsynchronousChannel",
	nullptr,
	_AsynchronousByteChannel_MethodInfo_
};

$Object* allocate$AsynchronousByteChannel($Class* clazz) {
	return $of($alloc(AsynchronousByteChannel));
}

$Class* AsynchronousByteChannel::load$($String* name, bool initialize) {
	$loadClass(AsynchronousByteChannel, name, initialize, &_AsynchronousByteChannel_ClassInfo_, allocate$AsynchronousByteChannel);
	return class$;
}

$Class* AsynchronousByteChannel::class$ = nullptr;

		} // channels
	} // nio
} // java