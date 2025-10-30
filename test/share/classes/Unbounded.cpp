#include <Unbounded.h>

#include <Unbounded$1.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/SocketAddress.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/AsynchronousServerSocketChannel.h>
#include <java/nio/channels/AsynchronousSocketChannel.h>
#include <java/nio/channels/CompletionHandler.h>
#include <java/nio/channels/NetworkChannel.h>
#include <java/util/concurrent/CyclicBarrier.h>
#include <java/util/concurrent/Future.h>
#include <jcpp.h>

#undef CONCURRENCY_COUNT

using $Unbounded$1 = ::Unbounded$1;
using $AsynchronousSocketChannelArray = $Array<::java::nio::channels::AsynchronousSocketChannel>;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $SocketAddress = ::java::net::SocketAddress;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $AsynchronousChannel = ::java::nio::channels::AsynchronousChannel;
using $AsynchronousServerSocketChannel = ::java::nio::channels::AsynchronousServerSocketChannel;
using $AsynchronousSocketChannel = ::java::nio::channels::AsynchronousSocketChannel;
using $CompletionHandler = ::java::nio::channels::CompletionHandler;
using $CyclicBarrier = ::java::util::concurrent::CyclicBarrier;
using $Future = ::java::util::concurrent::Future;

$FieldInfo _Unbounded_FieldInfo_[] = {
	{"CONCURRENCY_COUNT", "I", nullptr, $STATIC | $FINAL, $constField(Unbounded, CONCURRENCY_COUNT)},
	{"failed", "Z", nullptr, $STATIC | $VOLATILE, $staticField(Unbounded, failed)},
	{"finished", "Z", nullptr, $STATIC | $VOLATILE, $staticField(Unbounded, finished)},
	{}
};

$MethodInfo _Unbounded_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Unbounded::*)()>(&Unbounded::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Unbounded::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _Unbounded_InnerClassesInfo_[] = {
	{"Unbounded$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Unbounded_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Unbounded",
	"java.lang.Object",
	nullptr,
	_Unbounded_FieldInfo_,
	_Unbounded_MethodInfo_,
	nullptr,
	nullptr,
	_Unbounded_InnerClassesInfo_,
	nullptr,
	nullptr,
	"Unbounded$1"
};

$Object* allocate$Unbounded($Class* clazz) {
	return $of($alloc(Unbounded));
}

$volatile(bool) Unbounded::failed = false;
$volatile(bool) Unbounded::finished = false;

void Unbounded::init$() {
}

void Unbounded::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($AsynchronousServerSocketChannel, listener, $cast($AsynchronousServerSocketChannel, $nc($($AsynchronousServerSocketChannel::open()))->bind($$new($InetSocketAddress, 0))));
	$var($AsynchronousSocketChannelArray, clients, $new($AsynchronousSocketChannelArray, Unbounded::CONCURRENCY_COUNT));
	$var($AsynchronousSocketChannelArray, peers, $new($AsynchronousSocketChannelArray, Unbounded::CONCURRENCY_COUNT));
	int32_t port = $nc((($cast($InetSocketAddress, $($nc(listener)->getLocalAddress())))))->getPort();
	$var($SocketAddress, sa, $new($InetSocketAddress, $($InetAddress::getLocalHost()), port));
	for (int32_t i = 0; i < Unbounded::CONCURRENCY_COUNT; ++i) {
		clients->set(i, $($AsynchronousSocketChannel::open()));
		$var($Future, result, $nc(clients->get(i))->connect(sa));
		peers->set(i, $cast($AsynchronousSocketChannel, $($nc($(listener->accept()))->get())));
		$nc(result)->get();
	}
	$nc($System::out)->println("All connection established."_s);
	$var($CyclicBarrier, barrier, $new($CyclicBarrier, Unbounded::CONCURRENCY_COUNT + 1));
	{
		$var($AsynchronousSocketChannelArray, arr$, clients);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($AsynchronousSocketChannel, client, arr$->get(i$));
			{
				$var($ByteBuffer, buf, $ByteBuffer::allocateDirect(100));
				$nc(client)->read(buf, client, $$new($Unbounded$1, barrier));
			}
		}
	}
	$nc($System::out)->println("All read operations outstanding."_s);
	{
		$var($AsynchronousSocketChannelArray, arr$, peers);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($AsynchronousSocketChannel, peer, arr$->get(i$));
			{
				$nc($($nc(peer)->write($($ByteBuffer::wrap($("welcome"_s->getBytes()))))))->get();
				peer->shutdownOutput();
				peer->close();
			}
		}
	}
	$nc($System::out)->println("Waiting for all threads to reach barrier"_s);
	barrier->await();
	$init(Unbounded);
	Unbounded::finished = true;
	listener->close();
	if (Unbounded::failed) {
		$throwNew($RuntimeException, "I/O operation failed, see log for details"_s);
	}
}

Unbounded::Unbounded() {
}

$Class* Unbounded::load$($String* name, bool initialize) {
	$loadClass(Unbounded, name, initialize, &_Unbounded_ClassInfo_, allocate$Unbounded);
	return class$;
}

$Class* Unbounded::class$ = nullptr;