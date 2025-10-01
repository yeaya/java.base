#include <DieBeforeComplete.h>

#include <DieBeforeComplete$1.h>
#include <DieBeforeComplete$2.h>
#include <DieBeforeComplete$3.h>
#include <DieBeforeComplete$4.h>
#include <DieBeforeComplete$Task.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/SocketAddress.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/AsynchronousServerSocketChannel.h>
#include <java/nio/channels/AsynchronousSocketChannel.h>
#include <java/nio/channels/NetworkChannel.h>
#include <java/nio/channels/SelectableChannel.h>
#include <java/nio/channels/SocketChannel.h>
#include <java/util/concurrent/Future.h>
#include <java/util/concurrent/TimeUnit.h>
#include <java/util/concurrent/TimeoutException.h>
#include <java/util/concurrent/atomic/AtomicReference.h>
#include <jcpp.h>

#undef SECONDS

using $DieBeforeComplete$1 = ::DieBeforeComplete$1;
using $DieBeforeComplete$2 = ::DieBeforeComplete$2;
using $DieBeforeComplete$3 = ::DieBeforeComplete$3;
using $DieBeforeComplete$4 = ::DieBeforeComplete$4;
using $DieBeforeComplete$Task = ::DieBeforeComplete$Task;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $SocketAddress = ::java::net::SocketAddress;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $AsynchronousServerSocketChannel = ::java::nio::channels::AsynchronousServerSocketChannel;
using $AsynchronousSocketChannel = ::java::nio::channels::AsynchronousSocketChannel;
using $SelectableChannel = ::java::nio::channels::SelectableChannel;
using $SocketChannel = ::java::nio::channels::SocketChannel;
using $AbstractSelectableChannel = ::java::nio::channels::spi::AbstractSelectableChannel;
using $Future = ::java::util::concurrent::Future;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $TimeoutException = ::java::util::concurrent::TimeoutException;
using $AtomicReference = ::java::util::concurrent::atomic::AtomicReference;

$MethodInfo _DieBeforeComplete_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DieBeforeComplete::*)()>(&DieBeforeComplete::init$))},
	{"initiateAndDie", "(LDieBeforeComplete$Task;)Ljava/util/concurrent/Future;", "<T:Ljava/lang/Object;>(LDieBeforeComplete$Task<TT;>;)Ljava/util/concurrent/Future<TT;>;", $STATIC, $method(static_cast<$Future*(*)($DieBeforeComplete$Task*)>(&DieBeforeComplete::initiateAndDie))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&DieBeforeComplete::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _DieBeforeComplete_InnerClassesInfo_[] = {
	{"DieBeforeComplete$Task", "DieBeforeComplete", "Task", $STATIC | $INTERFACE | $ABSTRACT},
	{"DieBeforeComplete$4", nullptr, nullptr, 0},
	{"DieBeforeComplete$3", nullptr, nullptr, 0},
	{"DieBeforeComplete$2", nullptr, nullptr, 0},
	{"DieBeforeComplete$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DieBeforeComplete_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"DieBeforeComplete",
	"java.lang.Object",
	nullptr,
	nullptr,
	_DieBeforeComplete_MethodInfo_,
	nullptr,
	nullptr,
	_DieBeforeComplete_InnerClassesInfo_,
	nullptr,
	nullptr,
	"DieBeforeComplete$Task,DieBeforeComplete$4,DieBeforeComplete$3,DieBeforeComplete$2,DieBeforeComplete$1"
};

$Object* allocate$DieBeforeComplete($Class* clazz) {
	return $of($alloc(DieBeforeComplete));
}

void DieBeforeComplete::init$() {
}

void DieBeforeComplete::main($StringArray* args) {
	$var($AsynchronousServerSocketChannel, listener, $cast($AsynchronousServerSocketChannel, $nc($($AsynchronousServerSocketChannel::open()))->bind($$new($InetSocketAddress, 0))));
	$var($InetAddress, lh, $InetAddress::getLocalHost());
	int32_t port = $nc((($cast($InetSocketAddress, $($nc(listener)->getLocalAddress())))))->getPort();
	$var($SocketAddress, sa, $new($InetSocketAddress, lh, port));
	$var($Future, r1, initiateAndDie($$new($DieBeforeComplete$1, listener)));
	$var($SocketChannel, peer, $SocketChannel::open(sa));
	$var($AsynchronousSocketChannel, channel, $cast($AsynchronousSocketChannel, $nc(r1)->get()));
	$var($ByteBuffer, dst, $ByteBuffer::allocate(100));
	$var($Future, r2, initiateAndDie($$new($DieBeforeComplete$2, channel, dst)));
	$nc(peer)->write($($ByteBuffer::wrap($("hello"_s->getBytes()))));
	int32_t nread = $nc(($cast($Integer, $($nc(r2)->get()))))->intValue();
	if (nread <= 0) {
		$throwNew($RuntimeException, "Should have read at least one byte"_s);
	}
	bool completedImmediately = false;
	$var($Future, r3, nullptr);
	do {
		$var($ByteBuffer, src, $ByteBuffer::wrap($$new($bytes, 10000)));
		$assign(r3, initiateAndDie($$new($DieBeforeComplete$3, channel, src)));
		try {
			$init($TimeUnit);
			int32_t nsent = $nc(($cast($Integer, $($nc(r3)->get(5, $TimeUnit::SECONDS)))))->intValue();
			if (nsent <= 0) {
				$throwNew($RuntimeException, "Should have wrote at least one byte"_s);
			}
			completedImmediately = true;
		} catch ($TimeoutException&) {
			$var($TimeoutException, x, $catch());
			completedImmediately = false;
		}
	} while (completedImmediately);
	peer->configureBlocking(false);
	$var($ByteBuffer, src, $ByteBuffer::allocateDirect(10000));
	do {
		$nc(src)->clear();
		nread = peer->read(src);
		if (nread == 0) {
			$Thread::sleep(100);
			nread = peer->read(src);
		}
	} while (nread > 0);
	int32_t nsent = $nc(($cast($Integer, $($nc(r3)->get()))))->intValue();
	if (nsent <= 0) {
		$throwNew($RuntimeException, "Should have wrote at least one byte"_s);
	}
}

$Future* DieBeforeComplete::initiateAndDie($DieBeforeComplete$Task* task) {
	$var($AtomicReference, result, $new($AtomicReference));
	$var($Runnable, r, $new($DieBeforeComplete$4, result, task));
	$var($Thread, t, $new($Thread, r));
	t->start();
	while (t->isAlive()) {
		try {
			t->join();
		} catch ($InterruptedException&) {
			$catch();
		}
	}
	return $cast($Future, result->get());
}

DieBeforeComplete::DieBeforeComplete() {
}

$Class* DieBeforeComplete::load$($String* name, bool initialize) {
	$loadClass(DieBeforeComplete, name, initialize, &_DieBeforeComplete_ClassInfo_, allocate$DieBeforeComplete);
	return class$;
}

$Class* DieBeforeComplete::class$ = nullptr;