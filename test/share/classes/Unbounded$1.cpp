#include <Unbounded$1.h>
#include <Unbounded.h>
#include <java/lang/AssertionError.h>
#include <java/nio/channels/AsynchronousChannel.h>
#include <java/nio/channels/AsynchronousSocketChannel.h>
#include <java/util/concurrent/CyclicBarrier.h>
#include <jcpp.h>

using $Unbounded = ::Unbounded;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AsynchronousSocketChannel = ::java::nio::channels::AsynchronousSocketChannel;
using $CyclicBarrier = ::java::util::concurrent::CyclicBarrier;

void Unbounded$1::init$($CyclicBarrier* val$barrier) {
	$set(this, val$barrier, val$barrier);
}

void Unbounded$1::completed($Integer* bytesRead, $AsynchronousSocketChannel* ch) {
	try {
		$nc(ch)->close();
		$nc(this->val$barrier)->await();
	} catch ($Exception& x) {
		$throwNew($AssertionError, $of(x));
	}
}

void Unbounded$1::failed($Throwable* exc, $AsynchronousSocketChannel* ch) {
	$useLocalObjectStack();
	$init($Unbounded);
	$Unbounded::failed = true;
	$nc($System::err)->println($$str({"read failed: "_s, exc}));
	completed($($Integer::valueOf(0)), ch);
}

void Unbounded$1::failed($Throwable* exc, Object$* ch) {
	this->failed(exc, $cast($AsynchronousSocketChannel, ch));
}

void Unbounded$1::completed(Object$* bytesRead, Object$* ch) {
	this->completed($cast($Integer, bytesRead), $cast($AsynchronousSocketChannel, ch));
}

Unbounded$1::Unbounded$1() {
}

$Class* Unbounded$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$barrier", "Ljava/util/concurrent/CyclicBarrier;", nullptr, $FINAL | $SYNTHETIC, $field(Unbounded$1, val$barrier)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/CyclicBarrier;)V", "()V", 0, $method(Unbounded$1, init$, void, $CyclicBarrier*)},
		{"completed", "(Ljava/lang/Integer;Ljava/nio/channels/AsynchronousSocketChannel;)V", nullptr, $PUBLIC, $virtualMethod(Unbounded$1, completed, void, $Integer*, $AsynchronousSocketChannel*)},
		{"completed", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Unbounded$1, completed, void, Object$*, Object$*)},
		{"failed", "(Ljava/lang/Throwable;Ljava/nio/channels/AsynchronousSocketChannel;)V", nullptr, $PUBLIC, $virtualMethod(Unbounded$1, failed, void, $Throwable*, $AsynchronousSocketChannel*)},
		{"failed", "(Ljava/lang/Throwable;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Unbounded$1, failed, void, $Throwable*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Unbounded",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Unbounded$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Unbounded$1",
		"java.lang.Object",
		"java.nio.channels.CompletionHandler",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/nio/channels/CompletionHandler<Ljava/lang/Integer;Ljava/nio/channels/AsynchronousSocketChannel;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Unbounded"
	};
	$loadClass(Unbounded$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Unbounded$1);
	});
	return class$;
}

$Class* Unbounded$1::class$ = nullptr;