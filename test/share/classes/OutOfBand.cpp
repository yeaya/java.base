#include <OutOfBand.h>

#include <OutOfBand$1.h>
#include <OutOfBand$2.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/ServerSocket.h>
#include <java/net/Socket.h>
#include <java/net/SocketAddress.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/NetworkChannel.h>
#include <java/nio/channels/ServerSocketChannel.h>
#include <java/nio/channels/SocketChannel.h>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.h>
#include <java/util/Random.h>
#include <jcpp.h>

#undef STOP

using $OutOfBand$1 = ::OutOfBand$1;
using $OutOfBand$2 = ::OutOfBand$2;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $ServerSocket = ::java::net::ServerSocket;
using $Socket = ::java::net::Socket;
using $SocketAddress = ::java::net::SocketAddress;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ServerSocketChannel = ::java::nio::channels::ServerSocketChannel;
using $SocketChannel = ::java::nio::channels::SocketChannel;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;
using $Random = ::java::util::Random;

$FieldInfo _OutOfBand_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(OutOfBand, $assertionsDisabled)},
	{"rand", "Ljava/util/Random;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(OutOfBand, rand)},
	{}
};

$MethodInfo _OutOfBand_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(OutOfBand::*)()>(&OutOfBand::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&OutOfBand::main)), "java.lang.Exception"},
	{"test1", "(Ljava/nio/channels/SocketChannel;Ljava/nio/channels/SocketChannel;)V", nullptr, $STATIC, $method(static_cast<void(*)($SocketChannel*,$SocketChannel*)>(&OutOfBand::test1)), "java.lang.Exception"},
	{"test2", "(Ljava/nio/channels/SocketChannel;Ljava/nio/channels/SocketChannel;)V", nullptr, $STATIC, $method(static_cast<void(*)($SocketChannel*,$SocketChannel*)>(&OutOfBand::test2)), "java.lang.Exception"},
	{"test3", "(Ljava/nio/channels/SocketChannel;Ljava/nio/channels/SocketChannel;)V", nullptr, $STATIC, $method(static_cast<void(*)($SocketChannel*,$SocketChannel*)>(&OutOfBand::test3)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _OutOfBand_InnerClassesInfo_[] = {
	{"OutOfBand$2", nullptr, nullptr, 0},
	{"OutOfBand$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _OutOfBand_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"OutOfBand",
	"java.lang.Object",
	nullptr,
	_OutOfBand_FieldInfo_,
	_OutOfBand_MethodInfo_,
	nullptr,
	nullptr,
	_OutOfBand_InnerClassesInfo_,
	nullptr,
	nullptr,
	"OutOfBand$2,OutOfBand$1"
};

$Object* allocate$OutOfBand($Class* clazz) {
	return $of($alloc(OutOfBand));
}

bool OutOfBand::$assertionsDisabled = false;
$Random* OutOfBand::rand = nullptr;

void OutOfBand::init$() {
}

void OutOfBand::main($StringArray* args) {
	$init(OutOfBand);
	$var($ServerSocketChannel, ssc, nullptr);
	$var($SocketChannel, sc1, nullptr);
	$var($SocketChannel, sc2, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$assign(ssc, $cast($ServerSocketChannel, $nc($($ServerSocketChannel::open()))->bind($$new($InetSocketAddress, 0))));
			$var($InetAddress, lh, $InetAddress::getLocalHost());
			$var($SocketAddress, remote, $new($InetSocketAddress, lh, $nc($($nc(ssc)->socket()))->getLocalPort()));
			$assign(sc1, $SocketChannel::open(remote));
			$assign(sc2, $nc(ssc)->accept());
			$nc($($nc(sc2)->socket()))->setOOBInline(true);
			test1(sc1, sc2);
			test2(sc1, sc2);
			test3(sc1, sc2);
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			if (sc1 != nullptr) {
				sc1->close();
			}
			if (sc2 != nullptr) {
				sc2->close();
			}
			if (ssc != nullptr) {
				ssc->close();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void OutOfBand::test1($SocketChannel* client, $SocketChannel* server) {
	$init(OutOfBand);
	if (!OutOfBand::$assertionsDisabled && !$nc($($nc(server)->socket()))->getOOBInline()) {
		$throwNew($AssertionError);
	}
	$var($ByteBuffer, bb, $ByteBuffer::allocate(100));
	for (int32_t i = 0; i < 1000; ++i) {
		int32_t b1 = -127 + $nc(OutOfBand::rand)->nextInt(384);
		$nc($($nc(client)->socket()))->sendUrgentData(b1);
		$nc(bb)->clear();
		if ($nc(server)->read(bb) != 1) {
			$throwNew($RuntimeException, "One byte expected"_s);
		}
		bb->flip();
		int8_t b2 = bb->get();
		if ((int8_t)b1 != b2) {
			$throwNew($RuntimeException, "Unexpected byte"_s);
		}
	}
}

void OutOfBand::test2($SocketChannel* client, $SocketChannel* server) {
	$init(OutOfBand);
	if (!OutOfBand::$assertionsDisabled && !$nc($($nc(server)->socket()))->getOOBInline()) {
		$throwNew($AssertionError);
	}
	$var($Runnable, sender, $new($OutOfBand$1, client));
	$var($Thread, thr, $new($Thread, sender));
	thr->start();
	$var($ByteBuffer, bb, $ByteBuffer::allocate(256));
	while ($nc(bb)->hasRemaining()) {
		if ($nc(server)->read(bb) < 0) {
			$throwNew($RuntimeException, "Unexpected EOF"_s);
		}
	}
	$nc(bb)->flip();
	int8_t expect = (int8_t)0;
	while (bb->hasRemaining()) {
		if (bb->get() != expect) {
			$throwNew($RuntimeException, "Unexpected byte"_s);
		}
		++expect;
	}
	thr->join();
}

void OutOfBand::test3($SocketChannel* client, $SocketChannel* server) {
	$init(OutOfBand);
	int32_t STOP = $nc(OutOfBand::rand)->nextInt(256);
	if (!OutOfBand::$assertionsDisabled && !$nc($($nc(server)->socket()))->getOOBInline()) {
		$throwNew($AssertionError);
	}
	$var($Runnable, reader, $new($OutOfBand$2, server, STOP));
	$var($Thread, thr, $new($Thread, reader));
	thr->start();
	$nc($($nc(client)->socket()))->sendUrgentData(STOP);
	$var($ByteBuffer, bb, $ByteBuffer::allocate(100));
	int32_t n = client->read(bb);
	if (n != 1) {
		$throwNew($RuntimeException, "Unexpected number of bytes"_s);
	}
	$nc(bb)->flip();
	if (bb->get() != (int8_t)STOP) {
		$throwNew($RuntimeException, "Unexpected reply"_s);
	}
	thr->join();
}

void clinit$OutOfBand($Class* class$) {
	OutOfBand::$assertionsDisabled = !OutOfBand::class$->desiredAssertionStatus();
	$assignStatic(OutOfBand::rand, $new($Random));
}

OutOfBand::OutOfBand() {
}

$Class* OutOfBand::load$($String* name, bool initialize) {
	$loadClass(OutOfBand, name, initialize, &_OutOfBand_ClassInfo_, clinit$OutOfBand, allocate$OutOfBand);
	return class$;
}

$Class* OutOfBand::class$ = nullptr;