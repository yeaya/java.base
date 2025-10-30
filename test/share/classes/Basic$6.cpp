#include <Basic$6.h>

#include <Basic.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/AsynchronousFileChannel.h>
#include <java/nio/channels/CompletionHandler.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <jcpp.h>

using $Basic = ::Basic;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $AsynchronousFileChannel = ::java::nio::channels::AsynchronousFileChannel;
using $CompletionHandler = ::java::nio::channels::CompletionHandler;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;

$FieldInfo _Basic$6_FieldInfo_[] = {
	{"val$latch", "Ljava/util/concurrent/CountDownLatch;", nullptr, $FINAL | $SYNTHETIC, $field(Basic$6, val$latch)},
	{"val$ch", "Ljava/nio/channels/AsynchronousFileChannel;", nullptr, $FINAL | $SYNTHETIC, $field(Basic$6, val$ch)},
	{"val$src", "Ljava/nio/ByteBuffer;", nullptr, $FINAL | $SYNTHETIC, $field(Basic$6, val$src)},
	{}
};

$MethodInfo _Basic$6_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/ByteBuffer;Ljava/nio/channels/AsynchronousFileChannel;Ljava/util/concurrent/CountDownLatch;)V", "()V", 0, $method(static_cast<void(Basic$6::*)($ByteBuffer*,$AsynchronousFileChannel*,$CountDownLatch*)>(&Basic$6::init$))},
	{"completed", "(Ljava/lang/Integer;Ljava/lang/Long;)V", nullptr, $PUBLIC},
	{"completed", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"failed", "(Ljava/lang/Throwable;Ljava/lang/Long;)V", nullptr, $PUBLIC},
	{"failed", "(Ljava/lang/Throwable;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _Basic$6_EnclosingMethodInfo_ = {
	"Basic",
	"writeFully",
	"(Ljava/nio/channels/AsynchronousFileChannel;Ljava/nio/ByteBuffer;J)V"
};

$InnerClassInfo _Basic$6_InnerClassesInfo_[] = {
	{"Basic$6", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Basic$6_ClassInfo_ = {
	$ACC_SUPER,
	"Basic$6",
	"java.lang.Object",
	"java.nio.channels.CompletionHandler",
	_Basic$6_FieldInfo_,
	_Basic$6_MethodInfo_,
	"Ljava/lang/Object;Ljava/nio/channels/CompletionHandler<Ljava/lang/Integer;Ljava/lang/Long;>;",
	&_Basic$6_EnclosingMethodInfo_,
	_Basic$6_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Basic"
};

$Object* allocate$Basic$6($Class* clazz) {
	return $of($alloc(Basic$6));
}

void Basic$6::init$($ByteBuffer* val$src, $AsynchronousFileChannel* val$ch, $CountDownLatch* val$latch) {
	$set(this, val$src, val$src);
	$set(this, val$ch, val$ch);
	$set(this, val$latch, val$latch);
}

void Basic$6::completed($Integer* result, $Long* position) {
	int32_t n = $nc(result)->intValue();
	if ($nc(this->val$src)->hasRemaining()) {
		int64_t p = $nc(position)->longValue() + n;
		$nc(this->val$ch)->write(this->val$src, p, $($Long::valueOf(p)), this);
	} else {
		$nc(this->val$latch)->countDown();
	}
}

void Basic$6::failed($Throwable* exc, $Long* position) {
}

void Basic$6::failed($Throwable* exc, Object$* position) {
	this->failed(exc, $cast($Long, position));
}

void Basic$6::completed(Object$* result, Object$* position) {
	this->completed($cast($Integer, result), $cast($Long, position));
}

Basic$6::Basic$6() {
}

$Class* Basic$6::load$($String* name, bool initialize) {
	$loadClass(Basic$6, name, initialize, &_Basic$6_ClassInfo_, allocate$Basic$6);
	return class$;
}

$Class* Basic$6::class$ = nullptr;