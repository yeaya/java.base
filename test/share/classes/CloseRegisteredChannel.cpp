#include <CloseRegisteredChannel.h>

#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/ServerSocket.h>
#include <java/net/SocketAddress.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/SelectableChannel.h>
#include <java/nio/channels/SelectionKey.h>
#include <java/nio/channels/Selector.h>
#include <java/nio/channels/ServerSocketChannel.h>
#include <java/nio/channels/SocketChannel.h>
#include <jcpp.h>

#undef OP_READ

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $ServerSocket = ::java::net::ServerSocket;
using $SocketAddress = ::java::net::SocketAddress;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $SelectableChannel = ::java::nio::channels::SelectableChannel;
using $SelectionKey = ::java::nio::channels::SelectionKey;
using $Selector = ::java::nio::channels::Selector;
using $ServerSocketChannel = ::java::nio::channels::ServerSocketChannel;
using $SocketChannel = ::java::nio::channels::SocketChannel;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;
using $AbstractSelectableChannel = ::java::nio::channels::spi::AbstractSelectableChannel;

$MethodInfo _CloseRegisteredChannel_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CloseRegisteredChannel::*)()>(&CloseRegisteredChannel::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&CloseRegisteredChannel::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _CloseRegisteredChannel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"CloseRegisteredChannel",
	"java.lang.Object",
	nullptr,
	nullptr,
	_CloseRegisteredChannel_MethodInfo_
};

$Object* allocate$CloseRegisteredChannel($Class* clazz) {
	return $of($alloc(CloseRegisteredChannel));
}

void CloseRegisteredChannel::init$() {
}

void CloseRegisteredChannel::main($StringArray* args) {
	$var($ServerSocketChannel, server, $ServerSocketChannel::open());
	$var($ServerSocket, s, $nc(server)->socket());
	$nc(s)->bind($$new($InetSocketAddress, 0));
	int32_t port = s->getLocalPort();
	$var($SocketChannel, client, $SocketChannel::open());
	$nc(client)->connect($$new($InetSocketAddress, $($InetAddress::getLoopbackAddress()), port));
	$var($SocketChannel, peer, server->accept());
	$nc(peer)->configureBlocking(true);
	$var($Selector, selector, $Selector::open());
	client->configureBlocking(false);
	$var($SelectionKey, key, client->register$(selector, $SelectionKey::OP_READ, nullptr));
	client->close();
	$init($System);
	$nc($System::out)->println("Will hang here..."_s);
	int32_t nb = peer->read($($ByteBuffer::allocate(1024)));
	$nc(selector)->close();
	server->close();
}

CloseRegisteredChannel::CloseRegisteredChannel() {
}

$Class* CloseRegisteredChannel::load$($String* name, bool initialize) {
	$loadClass(CloseRegisteredChannel, name, initialize, &_CloseRegisteredChannel_ClassInfo_, allocate$CloseRegisteredChannel);
	return class$;
}

$Class* CloseRegisteredChannel::class$ = nullptr;