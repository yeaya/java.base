#include <Basic2.h>

#include <Basic2$Reader.h>
#include <Basic2$Writer.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/Runnable.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/SocketAddress.h>
#include <java/nio/channels/AsynchronousByteChannel.h>
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
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $SocketAddress = ::java::net::SocketAddress;
using $AsynchronousByteChannel = ::java::nio::channels::AsynchronousByteChannel;
using $AsynchronousServerSocketChannel = ::java::nio::channels::AsynchronousServerSocketChannel;
using $AsynchronousSocketChannel = ::java::nio::channels::AsynchronousSocketChannel;
using $Channels = ::java::nio::channels::Channels;
using $Random = ::java::util::Random;
using $Future = ::java::util::concurrent::Future;

$FieldInfo _Basic2_FieldInfo_[] = {
	{"rand", "Ljava/util/Random;", nullptr, $STATIC | $FINAL, $staticField(Basic2, rand)},
	{}
};

$MethodInfo _Basic2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Basic2::*)()>(&Basic2::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Basic2::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _Basic2_InnerClassesInfo_[] = {
	{"Basic2$Writer", "Basic2", "Writer", $STATIC},
	{"Basic2$Reader", "Basic2", "Reader", $STATIC},
	{}
};

$ClassInfo _Basic2_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Basic2",
	"java.lang.Object",
	nullptr,
	_Basic2_FieldInfo_,
	_Basic2_MethodInfo_,
	nullptr,
	nullptr,
	_Basic2_InnerClassesInfo_,
	nullptr,
	nullptr,
	"Basic2$Writer,Basic2$Reader"
};

$Object* allocate$Basic2($Class* clazz) {
	return $of($alloc(Basic2));
}

$Random* Basic2::rand = nullptr;

void Basic2::init$() {
}

void Basic2::main($StringArray* args) {
	$init(Basic2);
	$useLocalCurrentObjectStackCache();
	$var($AsynchronousServerSocketChannel, listener, $cast($AsynchronousServerSocketChannel, $nc($($AsynchronousServerSocketChannel::open()))->bind($$new($InetSocketAddress, 0))));
	int32_t port = $nc((($cast($InetSocketAddress, $($nc(listener)->getLocalAddress())))))->getPort();
	$var($InetSocketAddress, isa, $new($InetSocketAddress, $($InetAddress::getLocalHost()), port));
	$var($AsynchronousSocketChannel, ch1, $AsynchronousSocketChannel::open());
	$nc($($nc(ch1)->connect(isa)))->get();
	$var($AsynchronousSocketChannel, ch2, $cast($AsynchronousSocketChannel, $nc($(listener->accept()))->get()));
	$var($Basic2$Writer, writer, $new($Basic2$Writer, $($Channels::newOutputStream(static_cast<$AsynchronousByteChannel*>(ch1)))));
	$var($Thread, writerThread, $new($Thread, static_cast<$Runnable*>(writer)));
	writerThread->start();
	$var($Basic2$Reader, reader, $new($Basic2$Reader, $($Channels::newInputStream(static_cast<$AsynchronousByteChannel*>(ch2)))));
	$var($Thread, readerThread, $new($Thread, static_cast<$Runnable*>(reader)));
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

void clinit$Basic2($Class* class$) {
	$assignStatic(Basic2::rand, $new($Random));
}

Basic2::Basic2() {
}

$Class* Basic2::load$($String* name, bool initialize) {
	$loadClass(Basic2, name, initialize, &_Basic2_ClassInfo_, clinit$Basic2, allocate$Basic2);
	return class$;
}

$Class* Basic2::class$ = nullptr;