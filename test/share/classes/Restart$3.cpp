#include <Restart$3.h>

#include <Restart.h>
#include <java/io/IOException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/Error.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/Void.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $AsynchronousChannel = ::java::nio::channels::AsynchronousChannel;
using $AsynchronousSocketChannel = ::java::nio::channels::AsynchronousSocketChannel;
using $CompletionHandler = ::java::nio::channels::CompletionHandler;
using $Random = ::java::util::Random;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;

$FieldInfo _Restart$3_FieldInfo_[] = {
	{"val$latch", "Ljava/util/concurrent/CountDownLatch;", nullptr, $FINAL | $SYNTHETIC, $field(Restart$3, val$latch)},
	{}
};

$MethodInfo _Restart$3_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/CountDownLatch;)V", "()V", 0, $method(static_cast<void(Restart$3::*)($CountDownLatch*)>(&Restart$3::init$))},
	{"completed", "(Ljava/nio/channels/AsynchronousSocketChannel;Ljava/lang/Void;)V", nullptr, $PUBLIC},
	{"completed", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"failed", "(Ljava/lang/Throwable;Ljava/lang/Void;)V", nullptr, $PUBLIC},
	{"failed", "(Ljava/lang/Throwable;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _Restart$3_EnclosingMethodInfo_ = {
	"Restart",
	"testRestart",
	"(Ljava/nio/channels/AsynchronousChannelGroup;I)V"
};

$InnerClassInfo _Restart$3_InnerClassesInfo_[] = {
	{"Restart$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Restart$3_ClassInfo_ = {
	$ACC_SUPER,
	"Restart$3",
	"java.lang.Object",
	"java.nio.channels.CompletionHandler",
	_Restart$3_FieldInfo_,
	_Restart$3_MethodInfo_,
	"Ljava/lang/Object;Ljava/nio/channels/CompletionHandler<Ljava/nio/channels/AsynchronousSocketChannel;Ljava/lang/Void;>;",
	&_Restart$3_EnclosingMethodInfo_,
	_Restart$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Restart"
};

$Object* allocate$Restart$3($Class* clazz) {
	return $of($alloc(Restart$3));
}

void Restart$3::init$($CountDownLatch* val$latch) {
	$set(this, val$latch, val$latch);
}

void Restart$3::completed($AsynchronousSocketChannel* ch, $Void* att) {
	try {
		$nc(ch)->close();
	} catch ($IOException&) {
		$catch();
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
	$loadClass(Restart$3, name, initialize, &_Restart$3_ClassInfo_, allocate$Restart$3);
	return class$;
}

$Class* Restart$3::class$ = nullptr;