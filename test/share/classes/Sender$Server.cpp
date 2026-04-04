#include <Sender$Server.h>
#include <Sender.h>
#include <java/net/DatagramSocket.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/SocketAddress.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/DatagramChannel.h>
#include <java/nio/channels/NetworkChannel.h>
#include <java/nio/channels/SelectableChannel.h>
#include <jcpp.h>

using $Sender = ::Sender;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $SocketAddress = ::java::net::SocketAddress;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $DatagramChannel = ::java::nio::channels::DatagramChannel;

void Sender$Server::init$() {
	$useLocalObjectStack();
	$set(this, e, nullptr);
	$set(this, dc, $cast($DatagramChannel, $$nc($DatagramChannel::open())->bind($$new($InetSocketAddress, 0))));
}

int32_t Sender$Server::port() {
	return $$nc($nc(this->dc)->socket())->getLocalPort();
}

void Sender$Server::throwException() {
	if (this->e != nullptr) {
		$throw(this->e);
	}
}

void Sender$Server::showBuffer($String* s, $ByteBuffer* bb) {
	$init($Sender);
	$nc($Sender::log)->println(s);
	$nc(bb)->rewind();
	for (int32_t i = 0; i < bb->limit(); ++i) {
		int8_t element = bb->get();
		$nc($Sender::log)->print((int32_t)element);
	}
	$nc($Sender::log)->println();
}

void Sender$Server::run() {
	$useLocalObjectStack();
	$var($SocketAddress, sa, nullptr);
	try {
		$var($ByteBuffer, bb, $ByteBuffer::allocateDirect(12));
		$nc(bb)->clear();
		$nc(this->dc)->configureBlocking(false);
		while (sa == nullptr) {
			$assign(sa, this->dc->receive(bb));
			$init($Sender);
			if (sa != nullptr && $Sender::clientISA != nullptr && !$nc($Sender::clientISA)->equals(sa)) {
				$nc($Sender::log)->println($$str({"Ignore a possible stray diagram from "_s, sa}));
				$assign(sa, nullptr);
			}
		}
		showBuffer("Received:"_s, bb);
		$assign(sa, nullptr);
		for (int32_t i = 0; i < 100; ++i) {
			bb->clear();
			$assign(sa, this->dc->receive(bb));
			if (sa != nullptr) {
				$throwNew($RuntimeException, "Test failed"_s);
			}
		}
		this->dc->close();
	} catch ($Exception& ex) {
		$set(this, e, ex);
	}
}

Sender$Server::Sender$Server() {
}

$Class* Sender$Server::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"dc", "Ljava/nio/channels/DatagramChannel;", nullptr, $FINAL, $field(Sender$Server, dc)},
		{"e", "Ljava/lang/Exception;", nullptr, 0, $field(Sender$Server, e)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Sender$Server, init$, void), "java.io.IOException"},
		{"port", "()I", nullptr, 0, $virtualMethod(Sender$Server, port, int32_t)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Sender$Server, run, void)},
		{"showBuffer", "(Ljava/lang/String;Ljava/nio/ByteBuffer;)V", nullptr, 0, $virtualMethod(Sender$Server, showBuffer, void, $String*, $ByteBuffer*)},
		{"throwException", "()V", nullptr, 0, $virtualMethod(Sender$Server, throwException, void), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Sender$Server", "Sender", "Server", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Sender$Server",
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
	$loadClass(Sender$Server, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Sender$Server);
	});
	return class$;
}

$Class* Sender$Server::class$ = nullptr;