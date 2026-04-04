#include <AddressNotSet.h>
#include <java/lang/AssertionError.h>
#include <java/net/DatagramPacket.h>
#include <java/net/DatagramSocket.h>
#include <java/net/InetAddress.h>
#include <java/net/MulticastSocket.h>
#include <java/net/SocketAddress.h>
#include <java/nio/channels/DatagramChannel.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $DatagramPacket = ::java::net::DatagramPacket;
using $DatagramSocket = ::java::net::DatagramSocket;
using $InetAddress = ::java::net::InetAddress;
using $MulticastSocket = ::java::net::MulticastSocket;
using $SocketAddress = ::java::net::SocketAddress;
using $DatagramChannel = ::java::nio::channels::DatagramChannel;

void AddressNotSet::init$() {
	$set(this, loopbackAddress, $InetAddress::getLoopbackAddress());
	$set(this, serversock, $new($DatagramSocket, 0, this->loopbackAddress));
}

void AddressNotSet::main($StringArray* args) {
	$$new(AddressNotSet)->run();
}

void AddressNotSet::run() {
	$useLocalObjectStack();
	{
		$var($DatagramSocket, ss, this->serversock);
		$var($Throwable, var$0, nullptr);
		try {
			try {
				{
					$var($DatagramSocket, sock, $new($DatagramSocket));
					$var($Throwable, var$1, nullptr);
					try {
						try {
							test(sock);
						} catch ($Throwable& t$) {
							try {
								sock->close();
							} catch ($Throwable& x2) {
								t$->addSuppressed(x2);
							}
							$throw(t$);
						}
					} catch ($Throwable& var$2) {
						$assign(var$1, var$2);
					} /*finally*/ {
						sock->close();
					}
					if (var$1 != nullptr) {
						$throw(var$1);
					}
				}
				{
					$var($DatagramSocket, sock, $new($MulticastSocket));
					$var($Throwable, var$3, nullptr);
					try {
						try {
							test(sock);
						} catch ($Throwable& t$) {
							try {
								sock->close();
							} catch ($Throwable& x2) {
								t$->addSuppressed(x2);
							}
							$throw(t$);
						}
					} catch ($Throwable& var$4) {
						$assign(var$3, var$4);
					} /*finally*/ {
						sock->close();
					}
					if (var$3 != nullptr) {
						$throw(var$3);
					}
				}
				{
					$var($DatagramSocket, sock, $$nc($DatagramChannel::open())->socket());
					$var($Throwable, var$5, nullptr);
					try {
						try {
							test(sock);
						} catch ($Throwable& t$) {
							if (sock != nullptr) {
								try {
									sock->close();
								} catch ($Throwable& x2) {
									t$->addSuppressed(x2);
								}
							}
							$throw(t$);
						}
					} catch ($Throwable& var$6) {
						$assign(var$5, var$6);
					} /*finally*/ {
						if (sock != nullptr) {
							sock->close();
						}
					}
					if (var$5 != nullptr) {
						$throw(var$5);
					}
				}
			} catch ($Throwable& t$) {
				if (ss != nullptr) {
					try {
						ss->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
				}
				$throw(t$);
			}
		} catch ($Throwable& var$7) {
			$assign(var$0, var$7);
		} /*finally*/ {
			if (ss != nullptr) {
				ss->close();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void AddressNotSet::test($DatagramSocket* sock) {
	$useLocalObjectStack();
	$nc($System::out)->println($$str({"Testing with "_s, $nc($of(sock))->getClass()}));
	$var($InetAddress, addr, this->loopbackAddress);
	$var($bytes, buf, nullptr);
	$var($DatagramPacket, p, nullptr);
	int32_t port = this->serversock->getLocalPort();
	$var($SocketAddress, connectedAddress, this->serversock->getLocalSocketAddress());
	$System::out->println("Checking send to non-connected address ..."_s);
	try {
		$System::out->println("Checking send with no packet address"_s);
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append("Hello, server"_s);
		var$0->append(++this->i);
		$assign(buf, $nc(($$str(var$0)))->getBytes());
		$assign(p, $new($DatagramPacket, buf, buf->length));
		sock->send(p);
		$throwNew($AssertionError, $of("Expected IllegalArgumentException not received"_s));
	} catch ($IllegalArgumentException& x) {
		$System::out->println($$str({"Got expected exception: "_s, x}));
	}
	$System::out->println("Checking send to valid address"_s);
	$var($StringBuilder, var$1, $new($StringBuilder));
	var$1->append("Hello, server"_s);
	var$1->append(++this->i);
	$assign(buf, $nc(($$str(var$1)))->getBytes());
	$assign(p, $new($DatagramPacket, buf, buf->length, addr, port));
	sock->send(p);
	this->serversock->receive(p);
	$System::out->println($$str({"Connecting to server address: "_s, connectedAddress}));
	sock->connect(connectedAddress);
	try {
		$System::out->println("Checking send with different address than connected"_s);
		$var($StringBuilder, var$2, $new($StringBuilder));
		var$2->append("Hello, server"_s);
		var$2->append(++this->i);
		$assign(buf, $nc(($$str(var$2)))->getBytes());
		$assign(p, $new($DatagramPacket, buf, buf->length, addr, port + 1));
		sock->send(p);
		$throwNew($AssertionError, $of("Expected IllegalArgumentException not received"_s));
	} catch ($IllegalArgumentException& x) {
		$System::out->println($$str({"Got expected exception: "_s, x}));
	}
	$System::out->println("Checking send to valid address"_s);
	$var($StringBuilder, var$3, $new($StringBuilder));
	var$3->append("Hello, server"_s);
	var$3->append(++this->i);
	$assign(buf, $nc(($$str(var$3)))->getBytes());
	$assign(p, $new($DatagramPacket, buf, buf->length, addr, port));
	sock->send(p);
	this->serversock->receive(p);
	if ($instanceOf($MulticastSocket, sock)) {
		sock->disconnect();
		testTTL($cast($MulticastSocket, sock));
	}
}

void AddressNotSet::testTTL($MulticastSocket* sock) {
	$useLocalObjectStack();
	$nc($System::out)->println($$str({"Testing deprecated send TTL with "_s, $nc($of(sock))->getClass()}));
	int8_t ttl = 100;
	$var($InetAddress, addr, this->loopbackAddress);
	$var($bytes, buf, nullptr);
	$var($DatagramPacket, p, nullptr);
	int32_t port = this->serversock->getLocalPort();
	$System::out->println("Checking send to non-connected address ..."_s);
	try {
		$System::out->println("Checking send with no packet address"_s);
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append("Hello, server"_s);
		var$0->append(++this->i);
		$assign(buf, $nc(($$str(var$0)))->getBytes());
		$assign(p, $new($DatagramPacket, buf, buf->length));
		sock->send(p, ttl);
		$throwNew($AssertionError, $of("Expected IllegalArgumentException not received"_s));
	} catch ($IllegalArgumentException& x) {
		$System::out->println($$str({"Got expected exception: "_s, x}));
	}
	$System::out->println($$str({"Connecting to connected address: "_s, sock}));
	sock->connect(addr, port);
	try {
		$System::out->println("Checking send with different address than connected"_s);
		$var($StringBuilder, var$1, $new($StringBuilder));
		var$1->append("Hello, server"_s);
		var$1->append(++this->i);
		$assign(buf, $nc(($$str(var$1)))->getBytes());
		$assign(p, $new($DatagramPacket, buf, buf->length, addr, port + 1));
		sock->send(p, ttl);
		$throwNew($AssertionError, $of("Expected IllegalArgumentException not received"_s));
	} catch ($IllegalArgumentException& x) {
		$System::out->println($$str({"Got expected exception: "_s, x}));
	}
}

AddressNotSet::AddressNotSet() {
}

$Class* AddressNotSet::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"loopbackAddress", "Ljava/net/InetAddress;", nullptr, $FINAL, $field(AddressNotSet, loopbackAddress)},
		{"serversock", "Ljava/net/DatagramSocket;", nullptr, $FINAL, $field(AddressNotSet, serversock)},
		{"i", "I", nullptr, 0, $field(AddressNotSet, i)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AddressNotSet, init$, void), "java.lang.Exception"},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(AddressNotSet, main, void, $StringArray*), "java.lang.Exception"},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(AddressNotSet, run, void), "java.lang.Exception"},
		{"test", "(Ljava/net/DatagramSocket;)V", nullptr, $PRIVATE, $method(AddressNotSet, test, void, $DatagramSocket*), "java.lang.Exception"},
		{"testTTL", "(Ljava/net/MulticastSocket;)V", nullptr, $PRIVATE, $method(AddressNotSet, testTTL, void, $MulticastSocket*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"AddressNotSet",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AddressNotSet, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AddressNotSet);
	});
	return class$;
}

$Class* AddressNotSet::class$ = nullptr;