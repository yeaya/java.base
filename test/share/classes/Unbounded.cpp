#include <Unbounded.h>
#include <Unbounded$1.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/SocketAddress.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/AsynchronousServerSocketChannel.h>
#include <java/nio/channels/AsynchronousSocketChannel.h>
#include <java/nio/channels/NetworkChannel.h>
#include <java/util/concurrent/CyclicBarrier.h>
#include <java/util/concurrent/Future.h>
#include <jcpp.h>

#undef CONCURRENCY_COUNT

using $Unbounded$1 = ::Unbounded$1;
using $AsynchronousSocketChannelArray = $Array<::java::nio::channels::AsynchronousSocketChannel>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $SocketAddress = ::java::net::SocketAddress;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $AsynchronousServerSocketChannel = ::java::nio::channels::AsynchronousServerSocketChannel;
using $AsynchronousSocketChannel = ::java::nio::channels::AsynchronousSocketChannel;
using $CyclicBarrier = ::java::util::concurrent::CyclicBarrier;
using $Future = ::java::util::concurrent::Future;

$volatile(bool) Unbounded::failed = false;
$volatile(bool) Unbounded::finished = false;

void Unbounded::init$() {
}

void Unbounded::main($StringArray* args) {
	$useLocalObjectStack();
	$var($AsynchronousServerSocketChannel, listener, $cast($AsynchronousServerSocketChannel, $$nc($AsynchronousServerSocketChannel::open())->bind($$new($InetSocketAddress, 0))));
	$var($AsynchronousSocketChannelArray, clients, $new($AsynchronousSocketChannelArray, Unbounded::CONCURRENCY_COUNT));
	$var($AsynchronousSocketChannelArray, peers, $new($AsynchronousSocketChannelArray, Unbounded::CONCURRENCY_COUNT));
	int32_t port = $$cast($InetSocketAddress, $nc(listener)->getLocalAddress())->getPort();
	$var($SocketAddress, sa, $new($InetSocketAddress, $($InetAddress::getLocalHost()), port));
	for (int32_t i = 0; i < Unbounded::CONCURRENCY_COUNT; ++i) {
		clients->set(i, $($AsynchronousSocketChannel::open()));
		$var($Future, result, $nc(clients->get(i))->connect(sa));
		peers->set(i, $$cast($AsynchronousSocketChannel, $$nc(listener->accept())->get()));
		$nc(result)->get();
	}
	$nc($System::out)->println("All connection established."_s);
	$var($CyclicBarrier, barrier, $new($CyclicBarrier, Unbounded::CONCURRENCY_COUNT + 1));
	{
		$var($AsynchronousSocketChannelArray, arr$, clients);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($AsynchronousSocketChannel, client, arr$->get(i$));
			{
				$var($ByteBuffer, buf, $ByteBuffer::allocateDirect(100));
				$nc(client)->read(buf, client, $$new($Unbounded$1, barrier));
			}
		}
	}
	$System::out->println("All read operations outstanding."_s);
	{
		$var($AsynchronousSocketChannelArray, arr$, peers);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($AsynchronousSocketChannel, peer, arr$->get(i$));
			{
				$$nc($nc(peer)->write($($ByteBuffer::wrap($("welcome"_s->getBytes())))))->get();
				peer->shutdownOutput();
				peer->close();
			}
		}
	}
	$System::out->println("Waiting for all threads to reach barrier"_s);
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
	$FieldInfo fieldInfos$$[] = {
		{"CONCURRENCY_COUNT", "I", nullptr, $STATIC | $FINAL, $constField(Unbounded, CONCURRENCY_COUNT)},
		{"failed", "Z", nullptr, $STATIC | $VOLATILE, $staticField(Unbounded, failed)},
		{"finished", "Z", nullptr, $STATIC | $VOLATILE, $staticField(Unbounded, finished)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Unbounded, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Unbounded, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Unbounded$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Unbounded",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"Unbounded$1"
	};
	$loadClass(Unbounded, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Unbounded);
	});
	return class$;
}

$Class* Unbounded::class$ = nullptr;