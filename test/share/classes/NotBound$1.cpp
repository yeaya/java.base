#include <NotBound$1.h>
#include <NotBound.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/SocketAddress.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/DatagramChannel.h>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $SocketAddress = ::java::net::SocketAddress;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $DatagramChannel = ::java::nio::channels::DatagramChannel;

void NotBound$1::init$($DatagramChannel* val$dc) {
	$set(this, val$dc, val$dc);
}

void NotBound$1::run() {
	$useLocalObjectStack();
	try {
		$var($InetSocketAddress, local, nullptr);
		do {
			$Thread::sleep(50);
			$assign(local, $cast($InetSocketAddress, $nc(this->val$dc)->getLocalAddress()));
		} while (local == nullptr);
		$var($DatagramChannel, sender, $DatagramChannel::open());
		$var($Throwable, var$0, nullptr);
		try {
			$var($ByteBuffer, bb, $ByteBuffer::wrap($("hello"_s->getBytes())));
			$var($InetAddress, lh, $InetAddress::getLocalHost());
			$var($SocketAddress, target, $new($InetSocketAddress, lh, $nc(local)->getPort()));
			$nc(sender)->send(bb, target);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(sender)->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	} catch ($Exception& x) {
		x->printStackTrace();
	}
}

NotBound$1::NotBound$1() {
}

$Class* NotBound$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$dc", "Ljava/nio/channels/DatagramChannel;", nullptr, $FINAL | $SYNTHETIC, $field(NotBound$1, val$dc)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/channels/DatagramChannel;)V", "()V", 0, $method(NotBound$1, init$, void, $DatagramChannel*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(NotBound$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"NotBound",
		"wakeupWhenBound",
		"(Ljava/nio/channels/DatagramChannel;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"NotBound$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"NotBound$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"NotBound"
	};
	$loadClass(NotBound$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NotBound$1);
	});
	return class$;
}

$Class* NotBound$1::class$ = nullptr;