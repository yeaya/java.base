#include <NotBound$1.h>

#include <NotBound.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/SocketAddress.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/DatagramChannel.h>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.h>
#include <jcpp.h>

using $NotBound = ::NotBound;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $SocketAddress = ::java::net::SocketAddress;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $DatagramChannel = ::java::nio::channels::DatagramChannel;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;

$FieldInfo _NotBound$1_FieldInfo_[] = {
	{"val$dc", "Ljava/nio/channels/DatagramChannel;", nullptr, $FINAL | $SYNTHETIC, $field(NotBound$1, val$dc)},
	{}
};

$MethodInfo _NotBound$1_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/channels/DatagramChannel;)V", "()V", 0, $method(static_cast<void(NotBound$1::*)($DatagramChannel*)>(&NotBound$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _NotBound$1_EnclosingMethodInfo_ = {
	"NotBound",
	"wakeupWhenBound",
	"(Ljava/nio/channels/DatagramChannel;)V"
};

$InnerClassInfo _NotBound$1_InnerClassesInfo_[] = {
	{"NotBound$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _NotBound$1_ClassInfo_ = {
	$ACC_SUPER,
	"NotBound$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_NotBound$1_FieldInfo_,
	_NotBound$1_MethodInfo_,
	nullptr,
	&_NotBound$1_EnclosingMethodInfo_,
	_NotBound$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"NotBound"
};

$Object* allocate$NotBound$1($Class* clazz) {
	return $of($alloc(NotBound$1));
}

void NotBound$1::init$($DatagramChannel* val$dc) {
	$set(this, val$dc, val$dc);
}

void NotBound$1::run() {
	$useLocalCurrentObjectStackCache();
	try {
		$var($InetSocketAddress, local, nullptr);
		do {
			$Thread::sleep(50);
			$assign(local, $cast($InetSocketAddress, $nc(this->val$dc)->getLocalAddress()));
		} while (local == nullptr);
		$var($DatagramChannel, sender, $DatagramChannel::open());
		{
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
		}
	} catch ($Exception& x) {
		x->printStackTrace();
	}
}

NotBound$1::NotBound$1() {
}

$Class* NotBound$1::load$($String* name, bool initialize) {
	$loadClass(NotBound$1, name, initialize, &_NotBound$1_ClassInfo_, allocate$NotBound$1);
	return class$;
}

$Class* NotBound$1::class$ = nullptr;