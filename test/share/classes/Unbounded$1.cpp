#include <Unbounded$1.h>

#include <Unbounded.h>
#include <java/io/PrintStream.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/channels/AsynchronousChannel.h>
#include <java/nio/channels/AsynchronousSocketChannel.h>
#include <java/util/concurrent/CyclicBarrier.h>
#include <jcpp.h>

using $Unbounded = ::Unbounded;
using $PrintStream = ::java::io::PrintStream;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AsynchronousChannel = ::java::nio::channels::AsynchronousChannel;
using $AsynchronousSocketChannel = ::java::nio::channels::AsynchronousSocketChannel;
using $CompletionHandler = ::java::nio::channels::CompletionHandler;
using $CyclicBarrier = ::java::util::concurrent::CyclicBarrier;

$FieldInfo _Unbounded$1_FieldInfo_[] = {
	{"val$barrier", "Ljava/util/concurrent/CyclicBarrier;", nullptr, $FINAL | $SYNTHETIC, $field(Unbounded$1, val$barrier)},
	{}
};

$MethodInfo _Unbounded$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/CyclicBarrier;)V", "()V", 0, $method(static_cast<void(Unbounded$1::*)($CyclicBarrier*)>(&Unbounded$1::init$))},
	{"completed", "(Ljava/lang/Integer;Ljava/nio/channels/AsynchronousSocketChannel;)V", nullptr, $PUBLIC},
	{"completed", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"failed", "(Ljava/lang/Throwable;Ljava/nio/channels/AsynchronousSocketChannel;)V", nullptr, $PUBLIC},
	{"failed", "(Ljava/lang/Throwable;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _Unbounded$1_EnclosingMethodInfo_ = {
	"Unbounded",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _Unbounded$1_InnerClassesInfo_[] = {
	{"Unbounded$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Unbounded$1_ClassInfo_ = {
	$ACC_SUPER,
	"Unbounded$1",
	"java.lang.Object",
	"java.nio.channels.CompletionHandler",
	_Unbounded$1_FieldInfo_,
	_Unbounded$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/nio/channels/CompletionHandler<Ljava/lang/Integer;Ljava/nio/channels/AsynchronousSocketChannel;>;",
	&_Unbounded$1_EnclosingMethodInfo_,
	_Unbounded$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Unbounded"
};

$Object* allocate$Unbounded$1($Class* clazz) {
	return $of($alloc(Unbounded$1));
}

void Unbounded$1::init$($CyclicBarrier* val$barrier) {
	$set(this, val$barrier, val$barrier);
}

void Unbounded$1::completed($Integer* bytesRead, $AsynchronousSocketChannel* ch) {
	try {
		$nc(ch)->close();
		$nc(this->val$barrier)->await();
	} catch ($Exception&) {
		$var($Exception, x, $catch());
		$throwNew($AssertionError, $of(x));
	}
}

void Unbounded$1::failed($Throwable* exc, $AsynchronousSocketChannel* ch) {
	$useLocalCurrentObjectStackCache();
	$init($Unbounded);
	$Unbounded::failed = true;
	$init($System);
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
	$loadClass(Unbounded$1, name, initialize, &_Unbounded$1_ClassInfo_, allocate$Unbounded$1);
	return class$;
}

$Class* Unbounded$1::class$ = nullptr;