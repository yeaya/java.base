#include <Basic2.h>
#include <Basic2$Reader.h>
#include <Basic2$Writer.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/SocketAddress.h>
#include <java/nio/channels/AsynchronousServerSocketChannel.h>
#include <java/nio/channels/AsynchronousSocketChannel.h>
#include <java/nio/channels/Channel.h>
#include <java/nio/channels/Channels.h>
#include <java/nio/channels/NetworkChannel.h>
#include <java/util/Random.h>
#include <java/util/concurrent/Future.h>
#include <jcpp.h>

using $Basic2$Reader = ::Basic2$Reader;
using $Basic2$Writer = ::Basic2$Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $AsynchronousServerSocketChannel = ::java::nio::channels::AsynchronousServerSocketChannel;
using $AsynchronousSocketChannel = ::java::nio::channels::AsynchronousSocketChannel;
using $Channels = ::java::nio::channels::Channels;
using $Random = ::java::util::Random;

$Random* Basic2::rand = nullptr;

void Basic2::init$() {
}

void Basic2::main($StringArray* args) {
	$init(Basic2);
	$useLocalObjectStack();
	$var($AsynchronousServerSocketChannel, listener, $cast($AsynchronousServerSocketChannel, $$nc($AsynchronousServerSocketChannel::open())->bind($$new($InetSocketAddress, 0))));
	int32_t port = $$cast($InetSocketAddress, $nc(listener)->getLocalAddress())->getPort();
	$var($InetSocketAddress, isa, $new($InetSocketAddress, $($InetAddress::getLocalHost()), port));
	$var($AsynchronousSocketChannel, ch1, $AsynchronousSocketChannel::open());
	$$nc($nc(ch1)->connect(isa))->get();
	$var($AsynchronousSocketChannel, ch2, $cast($AsynchronousSocketChannel, $$nc(listener->accept())->get()));
	$var($Basic2$Writer, writer, $new($Basic2$Writer, $($Channels::newOutputStream(ch1))));
	$var($Thread, writerThread, $new($Thread, writer));
	writerThread->start();
	$var($Basic2$Reader, reader, $new($Basic2$Reader, $($Channels::newInputStream(ch2))));
	$var($Thread, readerThread, $new($Thread, reader));
	readerThread->start();
	writerThread->join();
	readerThread->join();
	listener->close();
	int32_t var$0 = reader->total();
	if (var$0 != writer->total()) {
		$throwNew($RuntimeException, "Unexpected number of bytes read"_s);
	}
	int32_t var$1 = reader->hash();
	if (var$1 != writer->hash()) {
		$throwNew($RuntimeException, "Hash incorrect for bytes read"_s);
	}
	bool var$2 = ch1->isOpen();
	if (var$2 || $nc(ch2)->isOpen()) {
		$throwNew($RuntimeException, "Channels should be closed"_s);
	}
}

void Basic2::clinit$($Class* clazz) {
	$assignStatic(Basic2::rand, $new($Random));
}

Basic2::Basic2() {
}

$Class* Basic2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"rand", "Ljava/util/Random;", nullptr, $STATIC | $FINAL, $staticField(Basic2, rand)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Basic2, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Basic2, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Basic2$Writer", "Basic2", "Writer", $STATIC},
		{"Basic2$Reader", "Basic2", "Reader", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Basic2",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"Basic2$Writer,Basic2$Reader"
	};
	$loadClass(Basic2, name, initialize, &classInfo$$, Basic2::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Basic2);
	});
	return class$;
}

$Class* Basic2::class$ = nullptr;