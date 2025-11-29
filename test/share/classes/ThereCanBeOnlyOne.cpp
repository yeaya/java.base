#include <ThereCanBeOnlyOne.h>

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
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $DatagramSocket = ::java::net::DatagramSocket;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $PortUnreachableException = ::java::net::PortUnreachableException;
using $SocketAddress = ::java::net::SocketAddress;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $DatagramChannel = ::java::nio::channels::DatagramChannel;

$MethodInfo _ThereCanBeOnlyOne_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ThereCanBeOnlyOne::*)()>(&ThereCanBeOnlyOne::init$))},
	{"doTest", "(Ljava/net/InetAddress;Z)V", nullptr, $STATIC, $method(static_cast<void(*)($InetAddress*,bool)>(&ThereCanBeOnlyOne::doTest)), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ThereCanBeOnlyOne::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _ThereCanBeOnlyOne_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ThereCanBeOnlyOne",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ThereCanBeOnlyOne_MethodInfo_
};

$Object* allocate$ThereCanBeOnlyOne($Class* clazz) {
	return $of($alloc(ThereCanBeOnlyOne));
}

void ThereCanBeOnlyOne::init$() {
}

void ThereCanBeOnlyOne::doTest($InetAddress* ia, bool testSend) {
	$useLocalCurrentObjectStackCache();
	$var($DatagramChannel, dc1, $DatagramChannel::open());
	$nc($($nc(dc1)->socket()))->bind(($SocketAddress*)nullptr);
	int32_t port = $nc($(dc1->socket()))->getLocalPort();
	$var($InetSocketAddress, isa, $new($InetSocketAddress, ia, port));
	dc1->connect(isa);
	$var($ByteBuffer, bb, $ByteBuffer::allocateDirect(512));
	$nc(bb)->put($("hello"_s->getBytes()));
	bb->flip();
	int32_t outstanding = 0;
	for (int32_t i = 0; i < 20; ++i) {
		try {
			bb->rewind();
			dc1->write(bb);
			++outstanding;
		} catch ($PortUnreachableException& e) {
			outstanding = 0;
		}
		if (outstanding > 1) {
			break;
		}
	}
	if (outstanding < 1) {
		$nc($System::err)->println("Insufficient exceptions outstanding - Test Skipped (Passed)."_s);
		dc1->close();
		return;
	}
	$($Thread::currentThread())->sleep(5000);
	bool gotPUE = false;
	bool gotTimeout = false;
	dc1->configureBlocking(false);
	try {
		if (testSend) {
			bb->rewind();
			dc1->write(bb);
		} else {
			bb->clear();
			dc1->receive(bb);
		}
	} catch ($PortUnreachableException& pue) {
		$nc($System::err)->println("Got one PUE..."_s);
		gotPUE = true;
	}
	if (gotPUE) {
		try {
			dc1->receive(bb);
		} catch ($PortUnreachableException& pue) {
			$throwNew($Exception, "PUs should have been consumed"_s);
		}
	} else {
	}
	dc1->close();
}

void ThereCanBeOnlyOne::main($StringArray* args) {
	$var($InetAddress, ia, $InetAddress::getLocalHost());
	doTest(ia, true);
	doTest(ia, false);
}

ThereCanBeOnlyOne::ThereCanBeOnlyOne() {
}

$Class* ThereCanBeOnlyOne::load$($String* name, bool initialize) {
	$loadClass(ThereCanBeOnlyOne, name, initialize, &_ThereCanBeOnlyOne_ClassInfo_, allocate$ThereCanBeOnlyOne);
	return class$;
}

$Class* ThereCanBeOnlyOne::class$ = nullptr;