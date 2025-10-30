#include <SelectWhenRefused.h>

#include <java/net/BindException.h>
#include <java/net/DatagramSocket.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/PortUnreachableException.h>
#include <java/net/SocketAddress.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/DatagramChannel.h>
#include <java/nio/channels/NetworkChannel.h>
#include <java/nio/channels/SelectableChannel.h>
#include <java/nio/channels/SelectionKey.h>
#include <java/nio/channels/Selector.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef OP_READ

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $BindException = ::java::net::BindException;
using $DatagramSocket = ::java::net::DatagramSocket;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $PortUnreachableException = ::java::net::PortUnreachableException;
using $SocketAddress = ::java::net::SocketAddress;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $DatagramChannel = ::java::nio::channels::DatagramChannel;
using $SelectableChannel = ::java::nio::channels::SelectableChannel;
using $SelectionKey = ::java::nio::channels::SelectionKey;
using $Selector = ::java::nio::channels::Selector;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;
using $AbstractSelectableChannel = ::java::nio::channels::spi::AbstractSelectableChannel;
using $Set = ::java::util::Set;

$MethodInfo _SelectWhenRefused_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SelectWhenRefused::*)()>(&SelectWhenRefused::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&SelectWhenRefused::main)), "java.io.IOException"},
	{"sendDatagram", "(Ljava/nio/channels/DatagramChannel;Ljava/net/SocketAddress;)V", nullptr, $STATIC, $method(static_cast<void(*)($DatagramChannel*,$SocketAddress*)>(&SelectWhenRefused::sendDatagram)), "java.io.IOException"},
	{}
};

$ClassInfo _SelectWhenRefused_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"SelectWhenRefused",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SelectWhenRefused_MethodInfo_
};

$Object* allocate$SelectWhenRefused($Class* clazz) {
	return $of($alloc(SelectWhenRefused));
}

void SelectWhenRefused::init$() {
}

void SelectWhenRefused::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($DatagramChannel, dc1, $cast($DatagramChannel, $nc($($DatagramChannel::open()))->bind($$new($InetSocketAddress, 0))));
	int32_t port = $nc($($nc(dc1)->socket()))->getLocalPort();
	$var($SocketAddress, refuser, $new($InetSocketAddress, $($InetAddress::getLocalHost()), port));
	$var($DatagramChannel, dc, $cast($DatagramChannel, $nc($($DatagramChannel::open()))->bind($$new($InetSocketAddress, 0))));
	dc1->close();
	$var($Selector, sel, $Selector::open());
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$nc(dc)->configureBlocking(false);
				dc->register$(sel, $SelectionKey::OP_READ);
				sendDatagram(dc, refuser);
				int32_t n = $nc(sel)->select((int64_t)2000);
				if (n > 0) {
					$nc($(sel->selectedKeys()))->clear();
					$nc($($cast($DatagramChannel, $nc($($DatagramChannel::open()))->bind(refuser))))->close();
					$throwNew($RuntimeException, "Unexpected wakeup"_s);
				}
				dc->connect(refuser);
				{
					$var($Throwable, var$1, nullptr);
					try {
						sendDatagram(dc, refuser);
						n = sel->select((int64_t)2000);
						if (n > 0) {
							$nc($(sel->selectedKeys()))->clear();
							try {
								n = dc->read($($ByteBuffer::allocate(100)));
								$throwNew($RuntimeException, "Unexpected datagram received"_s);
							} catch ($PortUnreachableException& pue) {
							}
						}
					} catch ($Throwable& var$2) {
						$assign(var$1, var$2);
					} /*finally*/ {
						dc->disconnect();
					}
					if (var$1 != nullptr) {
						$throw(var$1);
					}
				}
				sendDatagram(dc, refuser);
				n = sel->select((int64_t)2000);
				if (n > 0) {
					$throwNew($RuntimeException, "Unexpected wakeup after disconnect"_s);
				}
			} catch ($BindException& e) {
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} /*finally*/ {
			$nc(sel)->close();
			$nc(dc)->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void SelectWhenRefused::sendDatagram($DatagramChannel* dc, $SocketAddress* remote) {
	$useLocalCurrentObjectStackCache();
	$var($ByteBuffer, bb, $ByteBuffer::wrap($("Greetings!"_s->getBytes())));
	$nc(dc)->send(bb, remote);
}

SelectWhenRefused::SelectWhenRefused() {
}

$Class* SelectWhenRefused::load$($String* name, bool initialize) {
	$loadClass(SelectWhenRefused, name, initialize, &_SelectWhenRefused_ClassInfo_, allocate$SelectWhenRefused);
	return class$;
}

$Class* SelectWhenRefused::class$ = nullptr;