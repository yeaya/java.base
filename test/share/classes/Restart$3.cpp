#include <Restart$3.h>
#include <Restart.h>
#include <java/io/IOException.h>
#include <java/lang/Error.h>
#include <java/nio/channels/AsynchronousChannel.h>
#include <java/nio/channels/AsynchronousSocketChannel.h>
#include <java/util/Random.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <jcpp.h>

using $Restart = ::Restart;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $AsynchronousSocketChannel = ::java::nio::channels::AsynchronousSocketChannel;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;

void Restart$3::init$($CountDownLatch* val$latch) {
	$set(this, val$latch, val$latch);
}

void Restart$3::completed($AsynchronousSocketChannel* ch, $Void* att) {
	try {
		$nc(ch)->close();
	} catch ($IOException& ignore) {
	}
	$nc(this->val$latch)->countDown();
	$init($Restart);
	if ($nc($Restart::rand)->nextBoolean()) {
		$throwNew($Error);
	} else {
		$throwNew($RuntimeException);
	}
}

void Restart$3::failed($Throwable* exc, $Void* att) {
}

void Restart$3::failed($Throwable* exc, Object$* att) {
	this->failed(exc, $cast($Void, att));
}

void Restart$3::completed(Object$* ch, Object$* att) {
	this->completed($cast($AsynchronousSocketChannel, ch), $cast($Void, att));
}

Restart$3::Restart$3() {
}

$Class* Restart$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$latch", "Ljava/util/concurrent/CountDownLatch;", nullptr, $FINAL | $SYNTHETIC, $field(Restart$3, val$latch)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/CountDownLatch;)V", "()V", 0, $method(Restart$3, init$, void, $CountDownLatch*)},
		{"completed", "(Ljava/nio/channels/AsynchronousSocketChannel;Ljava/lang/Void;)V", nullptr, $PUBLIC, $virtualMethod(Restart$3, completed, void, $AsynchronousSocketChannel*, $Void*)},
		{"completed", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Restart$3, completed, void, Object$*, Object$*)},
		{"failed", "(Ljava/lang/Throwable;Ljava/lang/Void;)V", nullptr, $PUBLIC, $virtualMethod(Restart$3, failed, void, $Throwable*, $Void*)},
		{"failed", "(Ljava/lang/Throwable;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Restart$3, failed, void, $Throwable*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Restart",
		"testRestart",
		"(Ljava/nio/channels/AsynchronousChannelGroup;I)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Restart$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Restart$3",
		"java.lang.Object",
		"java.nio.channels.CompletionHandler",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/nio/channels/CompletionHandler<Ljava/nio/channels/AsynchronousSocketChannel;Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Restart"
	};
	$loadClass(Restart$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Restart$3);
	});
	return class$;
}

$Class* Restart$3::class$ = nullptr;