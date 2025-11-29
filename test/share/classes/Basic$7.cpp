#include <Basic$7.h>

#include <Basic.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/AsynchronousFileChannel.h>
#include <java/nio/channels/CompletionHandler.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $AsynchronousFileChannel = ::java::nio::channels::AsynchronousFileChannel;
using $CompletionHandler = ::java::nio::channels::CompletionHandler;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;

$FieldInfo _Basic$7_FieldInfo_[] = {
	{"val$latch", "Ljava/util/concurrent/CountDownLatch;", nullptr, $FINAL | $SYNTHETIC, $field(Basic$7, val$latch)},
	{"val$dst", "Ljava/nio/ByteBuffer;", nullptr, $FINAL | $SYNTHETIC, $field(Basic$7, val$dst)},
	{"val$ch", "Ljava/nio/channels/AsynchronousFileChannel;", nullptr, $FINAL | $SYNTHETIC, $field(Basic$7, val$ch)},
	{}
};

$MethodInfo _Basic$7_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/channels/AsynchronousFileChannel;Ljava/nio/ByteBuffer;Ljava/util/concurrent/CountDownLatch;)V", "()V", 0, $method(static_cast<void(Basic$7::*)($AsynchronousFileChannel*,$ByteBuffer*,$CountDownLatch*)>(&Basic$7::init$))},
	{"completed", "(Ljava/lang/Integer;Ljava/lang/Long;)V", nullptr, $PUBLIC},
	{"completed", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"failed", "(Ljava/lang/Throwable;Ljava/lang/Long;)V", nullptr, $PUBLIC},
	{"failed", "(Ljava/lang/Throwable;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _Basic$7_EnclosingMethodInfo_ = {
	"Basic",
	"readAll",
	"(Ljava/nio/channels/AsynchronousFileChannel;Ljava/nio/ByteBuffer;J)V"
};

$InnerClassInfo _Basic$7_InnerClassesInfo_[] = {
	{"Basic$7", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Basic$7_ClassInfo_ = {
	$ACC_SUPER,
	"Basic$7",
	"java.lang.Object",
	"java.nio.channels.CompletionHandler",
	_Basic$7_FieldInfo_,
	_Basic$7_MethodInfo_,
	"Ljava/lang/Object;Ljava/nio/channels/CompletionHandler<Ljava/lang/Integer;Ljava/lang/Long;>;",
	&_Basic$7_EnclosingMethodInfo_,
	_Basic$7_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Basic"
};

$Object* allocate$Basic$7($Class* clazz) {
	return $of($alloc(Basic$7));
}

void Basic$7::init$($AsynchronousFileChannel* val$ch, $ByteBuffer* val$dst, $CountDownLatch* val$latch) {
	$set(this, val$ch, val$ch);
	$set(this, val$dst, val$dst);
	$set(this, val$latch, val$latch);
}

void Basic$7::completed($Integer* result, $Long* position) {
	int32_t n = $nc(result)->intValue();
	if (n > 0) {
		int64_t p = $nc(position)->longValue() + n;
		$nc(this->val$ch)->read(this->val$dst, p, $($Long::valueOf(p)), this);
	} else {
		$nc(this->val$latch)->countDown();
	}
}

void Basic$7::failed($Throwable* exc, $Long* position) {
}

void Basic$7::failed($Throwable* exc, Object$* position) {
	this->failed(exc, $cast($Long, position));
}

void Basic$7::completed(Object$* result, Object$* position) {
	this->completed($cast($Integer, result), $cast($Long, position));
}

Basic$7::Basic$7() {
}

$Class* Basic$7::load$($String* name, bool initialize) {
	$loadClass(Basic$7, name, initialize, &_Basic$7_ClassInfo_, allocate$Basic$7);
	return class$;
}

$Class* Basic$7::class$ = nullptr;