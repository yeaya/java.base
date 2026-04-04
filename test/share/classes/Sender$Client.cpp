#include <Sender$Client.h>
#include <Sender.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/SocketAddress.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/channels/DatagramChannel.h>
#include <jcpp.h>

#undef BIG_ENDIAN

using $Sender = ::Sender;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ByteOrder = ::java::nio::ByteOrder;
using $DatagramChannel = ::java::nio::channels::DatagramChannel;

void Sender$Client::init$(int32_t port) {
	$set(this, e, nullptr);
	this->port = port;
}

void Sender$Client::throwException() {
	if (this->e != nullptr) {
		$throw(this->e);
	}
}

void Sender$Client::run() {
	$useLocalObjectStack();
	try {
		$var($DatagramChannel, dc, $DatagramChannel::open());
		$var($ByteBuffer, bb, $ByteBuffer::allocateDirect(12));
		$init($ByteOrder);
		$nc(bb)->order($ByteOrder::BIG_ENDIAN);
		$$nc(bb->putInt(1))->putLong(1);
		bb->flip();
		$var($InetAddress, address, $InetAddress::getLocalHost());
		$var($InetSocketAddress, isa, $new($InetSocketAddress, address, this->port));
		$nc(dc)->connect(isa);
		$init($Sender);
		$assignStatic($Sender::clientISA, dc->getLocalAddress());
		dc->write(bb);
	} catch ($Exception& ex) {
		$set(this, e, ex);
	}
}

Sender$Client::Sender$Client() {
}

$Class* Sender$Client::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"port", "I", nullptr, $FINAL, $field(Sender$Client, port)},
		{"e", "Ljava/lang/Exception;", nullptr, 0, $field(Sender$Client, e)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, 0, $method(Sender$Client, init$, void, int32_t)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Sender$Client, run, void)},
		{"throwException", "()V", nullptr, 0, $virtualMethod(Sender$Client, throwException, void), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Sender$Client", "Sender", "Client", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Sender$Client",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Sender"
	};
	$loadClass(Sender$Client, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Sender$Client);
	});
	return class$;
}

$Class* Sender$Client::class$ = nullptr;