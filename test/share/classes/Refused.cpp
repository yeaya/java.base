#include <Refused.h>

#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/DatagramSocket.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/PortUnreachableException.h>
#include <java/net/SocketAddress.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/DatagramChannel.h>
#include <java/nio/channels/SelectableChannel.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DatagramSocket = ::java::net::DatagramSocket;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $PortUnreachableException = ::java::net::PortUnreachableException;
using $SocketAddress = ::java::net::SocketAddress;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $DatagramChannel = ::java::nio::channels::DatagramChannel;
using $SelectableChannel = ::java::nio::channels::SelectableChannel;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;
using $AbstractSelectableChannel = ::java::nio::channels::spi::AbstractSelectableChannel;

$FieldInfo _Refused_FieldInfo_[] = {
	{"outBuf", "Ljava/nio/ByteBuffer;", nullptr, $STATIC, $staticField(Refused, outBuf)},
	{"inBuf", "Ljava/nio/ByteBuffer;", nullptr, $STATIC, $staticField(Refused, inBuf)},
	{"client", "Ljava/nio/channels/DatagramChannel;", nullptr, $STATIC, $staticField(Refused, client)},
	{"server", "Ljava/nio/channels/DatagramChannel;", nullptr, $STATIC, $staticField(Refused, server)},
	{"isa", "Ljava/net/InetSocketAddress;", nullptr, $STATIC, $staticField(Refused, isa)},
	{}
};

$MethodInfo _Refused_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Refused::*)()>(&Refused::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Refused::main)), "java.lang.Exception"},
	{"setup", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&Refused::setup)), "java.lang.Exception"},
	{"test1", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&Refused::test1)), "java.lang.Exception"},
	{"test2", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&Refused::test2)), "java.lang.Exception"},
	{}
};

$ClassInfo _Refused_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Refused",
	"java.lang.Object",
	nullptr,
	_Refused_FieldInfo_,
	_Refused_MethodInfo_
};

$Object* allocate$Refused($Class* clazz) {
	return $of($alloc(Refused));
}

$ByteBuffer* Refused::outBuf = nullptr;
$ByteBuffer* Refused::inBuf = nullptr;
$DatagramChannel* Refused::client = nullptr;
$DatagramChannel* Refused::server = nullptr;
$InetSocketAddress* Refused::isa = nullptr;

void Refused::init$() {
}

void Refused::main($StringArray* args) {
	$init(Refused);
	$nc(Refused::outBuf)->put($("Blah Blah"_s->getBytes()));
	$nc(Refused::outBuf)->flip();
	test1();
	if (($nc(args)->length > 0) && ($nc(args->get(0))->equals("test2"_s))) {
		$nc(Refused::outBuf)->rewind();
		test2();
	}
}

void Refused::setup() {
	$init(Refused);
	$assignStatic(Refused::client, $DatagramChannel::open());
	$assignStatic(Refused::server, $DatagramChannel::open());
	$nc($($nc(Refused::client)->socket()))->bind(($SocketAddress*)nullptr);
	$nc($($nc(Refused::server)->socket()))->bind(($SocketAddress*)nullptr);
	$nc(Refused::client)->configureBlocking(false);
	$nc(Refused::server)->configureBlocking(false);
	$var($InetAddress, address, $InetAddress::getLocalHost());
	int32_t port = $nc($($nc(Refused::client)->socket()))->getLocalPort();
	$assignStatic(Refused::isa, $new($InetSocketAddress, address, port));
}

void Refused::test1() {
	$init(Refused);
	setup();
	$nc(Refused::server)->send(Refused::outBuf, Refused::isa);
	$nc(Refused::server)->receive(Refused::inBuf);
	$nc(Refused::client)->close();
	$nc(Refused::outBuf)->rewind();
	$nc(Refused::server)->send(Refused::outBuf, Refused::isa);
	$nc(Refused::server)->receive(Refused::inBuf);
	$nc(Refused::server)->close();
}

void Refused::test2() {
	$init(Refused);
	setup();
	$nc(Refused::server)->configureBlocking(true);
	$nc(Refused::server)->connect(Refused::isa);
	$nc(Refused::server)->configureBlocking(false);
	$nc(Refused::outBuf)->rewind();
	$nc(Refused::server)->write(Refused::outBuf);
	$nc(Refused::server)->receive(Refused::inBuf);
	$nc(Refused::client)->close();
	$Thread::sleep(2000);
	$nc(Refused::outBuf)->rewind();
	try {
		$nc(Refused::server)->write(Refused::outBuf);
		$Thread::sleep(2000);
		$nc(Refused::inBuf)->clear();
		$nc(Refused::server)->read(Refused::inBuf);
	} catch ($PortUnreachableException&) {
		$var($PortUnreachableException, pue, $catch());
		$init($System);
		$nc($System::err)->println("received PUE"_s);
	}
	$nc(Refused::server)->close();
}

void clinit$Refused($Class* class$) {
	$assignStatic(Refused::outBuf, $ByteBuffer::allocateDirect(100));
	$assignStatic(Refused::inBuf, $ByteBuffer::allocateDirect(100));
}

Refused::Refused() {
}

$Class* Refused::load$($String* name, bool initialize) {
	$loadClass(Refused, name, initialize, &_Refused_ClassInfo_, clinit$Refused, allocate$Refused);
	return class$;
}

$Class* Refused::class$ = nullptr;