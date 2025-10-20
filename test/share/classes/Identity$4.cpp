#include <Identity$4.h>

#include <Identity.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/ThreadLocal.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/AsynchronousSocketChannel.h>
#include <java/nio/channels/CompletionHandler.h>
#include <java/util/Random.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <jcpp.h>

using $Identity = ::Identity;
using $AsynchronousSocketChannelArray = $Array<::java::nio::channels::AsynchronousSocketChannel>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadLocal = ::java::lang::ThreadLocal;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $AsynchronousSocketChannel = ::java::nio::channels::AsynchronousSocketChannel;
using $CompletionHandler = ::java::nio::channels::CompletionHandler;
using $Random = ::java::util::Random;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;

$FieldInfo _Identity$4_FieldInfo_[] = {
	{"val$channels", "[Ljava/nio/channels/AsynchronousSocketChannel;", nullptr, $FINAL | $SYNTHETIC, $field(Identity$4, val$channels)},
	{"val$groupCount", "I", nullptr, $FINAL | $SYNTHETIC, $field(Identity$4, val$groupCount)},
	{"val$writeCount", "Ljava/util/concurrent/atomic/AtomicInteger;", nullptr, $FINAL | $SYNTHETIC, $field(Identity$4, val$writeCount)},
	{}
};

$MethodInfo _Identity$4_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/atomic/AtomicInteger;I[Ljava/nio/channels/AsynchronousSocketChannel;)V", "()V", 0, $method(static_cast<void(Identity$4::*)($AtomicInteger*,int32_t,$AsynchronousSocketChannelArray*)>(&Identity$4::init$))},
	{"completed", "(Ljava/lang/Integer;Ljava/lang/Integer;)V", nullptr, $PUBLIC},
	{"completed", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"failed", "(Ljava/lang/Throwable;Ljava/lang/Integer;)V", nullptr, $PUBLIC},
	{"failed", "(Ljava/lang/Throwable;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _Identity$4_EnclosingMethodInfo_ = {
	"Identity",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _Identity$4_InnerClassesInfo_[] = {
	{"Identity$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Identity$4_ClassInfo_ = {
	$ACC_SUPER,
	"Identity$4",
	"java.lang.Object",
	"java.nio.channels.CompletionHandler",
	_Identity$4_FieldInfo_,
	_Identity$4_MethodInfo_,
	"Ljava/lang/Object;Ljava/nio/channels/CompletionHandler<Ljava/lang/Integer;Ljava/lang/Integer;>;",
	&_Identity$4_EnclosingMethodInfo_,
	_Identity$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Identity"
};

$Object* allocate$Identity$4($Class* clazz) {
	return $of($alloc(Identity$4));
}

void Identity$4::init$($AtomicInteger* val$writeCount, int32_t val$groupCount, $AsynchronousSocketChannelArray* val$channels) {
	$set(this, val$writeCount, val$writeCount);
	this->val$groupCount = val$groupCount;
	$set(this, val$channels, val$channels);
}

void Identity$4::completed($Integer* bytesWritten, $Integer* groupId) {
	$useLocalCurrentObjectStackCache();
	if ($nc(bytesWritten)->intValue() != 1) {
		$Identity::fail("Expected 1 byte to be written"_s);
	}
	$init($Identity);
	if (!$nc(($cast($Integer, $($nc($Identity::myGroup)->get()))))->equals(groupId)) {
		$Identity::fail("Handler invoked by thread with the wrong identity"_s);
	}
	if ($nc(this->val$writeCount)->decrementAndGet() > 0) {
		int32_t id = $nc($Identity::rand)->nextInt(this->val$groupCount);
		$var($ByteBuffer, var$0, $Identity::getBuffer());
		$nc($nc(this->val$channels)->get(id))->write(var$0, $($Integer::valueOf(id)), this);
	} else {
		$nc($Identity::done)->countDown();
	}
}

void Identity$4::failed($Throwable* exc, $Integer* groupId) {
	$Identity::fail($($nc(exc)->getMessage()));
}

void Identity$4::failed($Throwable* exc, Object$* groupId) {
	this->failed(exc, $cast($Integer, groupId));
}

void Identity$4::completed(Object$* bytesWritten, Object$* groupId) {
	this->completed($cast($Integer, bytesWritten), $cast($Integer, groupId));
}

Identity$4::Identity$4() {
}

$Class* Identity$4::load$($String* name, bool initialize) {
	$loadClass(Identity$4, name, initialize, &_Identity$4_ClassInfo_, allocate$Identity$4);
	return class$;
}

$Class* Identity$4::class$ = nullptr;