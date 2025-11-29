#include <NotBound.h>

#include <NotBound$1.h>
#include <java/lang/Runnable.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/SocketAddress.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/DatagramChannel.h>
#include <java/nio/channels/NetworkChannel.h>
#include <java/nio/channels/SelectableChannel.h>
#include <jcpp.h>

using $NotBound$1 = ::NotBound$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $SocketAddress = ::java::net::SocketAddress;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $DatagramChannel = ::java::nio::channels::DatagramChannel;

$MethodInfo _NotBound_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NotBound::*)()>(&NotBound::init$))},
	{"checkBound", "(Ljava/nio/channels/DatagramChannel;)V", nullptr, $STATIC, $method(static_cast<void(*)($DatagramChannel*)>(&NotBound::checkBound)), "java.io.IOException"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&NotBound::main)), "java.io.IOException"},
	{"wakeupWhenBound", "(Ljava/nio/channels/DatagramChannel;)V", nullptr, $STATIC, $method(static_cast<void(*)($DatagramChannel*)>(&NotBound::wakeupWhenBound))},
	{}
};

$InnerClassInfo _NotBound_InnerClassesInfo_[] = {
	{"NotBound$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _NotBound_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"NotBound",
	"java.lang.Object",
	nullptr,
	nullptr,
	_NotBound_MethodInfo_,
	nullptr,
	nullptr,
	_NotBound_InnerClassesInfo_,
	nullptr,
	nullptr,
	"NotBound$1"
};

$Object* allocate$NotBound($Class* clazz) {
	return $of($alloc(NotBound));
}

void NotBound::init$() {
}

void NotBound::checkBound($DatagramChannel* dc) {
	if ($nc(dc)->getLocalAddress() == nullptr) {
		$throwNew($RuntimeException, "Not bound??"_s);
	}
}

void NotBound::wakeupWhenBound($DatagramChannel* dc) {
	$useLocalCurrentObjectStackCache();
	$var($Runnable, wakeupTask, $new($NotBound$1, dc));
	$$new($Thread, wakeupTask)->start();
}

void NotBound::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($DatagramChannel, dc, nullptr);
	$assign(dc, $DatagramChannel::open());
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($DatagramChannel, peer, $cast($DatagramChannel, $nc($($DatagramChannel::open()))->bind($$new($InetSocketAddress, 0))));
			int32_t peerPort = $nc((($cast($InetSocketAddress, $($nc(peer)->getLocalAddress())))))->getPort();
			{
				$var($Throwable, var$1, nullptr);
				try {
					$nc(dc)->connect($$new($InetSocketAddress, $($InetAddress::getLocalHost()), peerPort));
					checkBound(dc);
				} catch ($Throwable& var$2) {
					$assign(var$1, var$2);
				} /*finally*/ {
					peer->close();
				}
				if (var$1 != nullptr) {
					$throw(var$1);
				}
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} /*finally*/ {
			$nc(dc)->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	$assign(dc, $DatagramChannel::open());
	{
		$var($Throwable, var$4, nullptr);
		try {
			$var($ByteBuffer, bb, $ByteBuffer::wrap($("ignore this"_s->getBytes())));
			$var($SocketAddress, target, $new($InetSocketAddress, $($InetAddress::getLocalHost()), 5000));
			dc->send(bb, target);
			checkBound(dc);
		} catch ($Throwable& var$5) {
			$assign(var$4, var$5);
		} /*finally*/ {
			dc->close();
		}
		if (var$4 != nullptr) {
			$throw(var$4);
		}
	}
	$assign(dc, $DatagramChannel::open());
	{
		$var($Throwable, var$6, nullptr);
		try {
			$var($ByteBuffer, bb, $ByteBuffer::allocateDirect(128));
			wakeupWhenBound(dc);
			$var($SocketAddress, sender, dc->receive(bb));
			if (sender == nullptr) {
				$throwNew($RuntimeException, "Sender should not be null"_s);
			}
			checkBound(dc);
		} catch ($Throwable& var$7) {
			$assign(var$6, var$7);
		} /*finally*/ {
			dc->close();
		}
		if (var$6 != nullptr) {
			$throw(var$6);
		}
	}
	$assign(dc, $DatagramChannel::open());
	{
		$var($Throwable, var$8, nullptr);
		try {
			dc->configureBlocking(false);
			$var($ByteBuffer, bb, $ByteBuffer::allocateDirect(128));
			$var($SocketAddress, sender, dc->receive(bb));
			if (sender != nullptr) {
				$throwNew($RuntimeException, "Sender should be null"_s);
			}
			checkBound(dc);
		} catch ($Throwable& var$9) {
			$assign(var$8, var$9);
		} /*finally*/ {
			dc->close();
		}
		if (var$8 != nullptr) {
			$throw(var$8);
		}
	}
}

NotBound::NotBound() {
}

$Class* NotBound::load$($String* name, bool initialize) {
	$loadClass(NotBound, name, initialize, &_NotBound_ClassInfo_, allocate$NotBound);
	return class$;
}

$Class* NotBound::class$ = nullptr;