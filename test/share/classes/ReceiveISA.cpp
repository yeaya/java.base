#include <ReceiveISA.h>

#include <java/net/DatagramSocket.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/SocketAddress.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/DatagramChannel.h>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.h>
#include <jcpp.h>

using $SocketAddressArray = $Array<::java::net::SocketAddress>;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $DatagramSocket = ::java::net::DatagramSocket;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $SocketAddress = ::java::net::SocketAddress;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $DatagramChannel = ::java::nio::channels::DatagramChannel;

$MethodInfo _ReceiveISA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ReceiveISA::*)()>(&ReceiveISA::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ReceiveISA::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _ReceiveISA_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ReceiveISA",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ReceiveISA_MethodInfo_
};

$Object* allocate$ReceiveISA($Class* clazz) {
	return $of($alloc(ReceiveISA));
}

void ReceiveISA::init$() {
}

void ReceiveISA::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($String, regex, "Dia duit![0-2]"_s);
	{
		$var($DatagramChannel, dc1, $DatagramChannel::open());
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$var($DatagramChannel, dc2, $DatagramChannel::open());
					{
						$var($Throwable, var$1, nullptr);
						try {
							try {
								$var($DatagramChannel, dc3, $DatagramChannel::open());
								{
									$var($Throwable, var$2, nullptr);
									try {
										try {
											$var($DatagramChannel, dc4, $DatagramChannel::open());
											{
												$var($Throwable, var$3, nullptr);
												try {
													try {
														$nc($($nc(dc3)->socket()))->bind(($SocketAddress*)nullptr);
														$var($InetAddress, lh, $InetAddress::getLocalHost());
														$var($InetSocketAddress, isa, $new($InetSocketAddress, lh, $nc($(dc3->socket()))->getLocalPort()));
														$var($ByteBuffer, bb, $ByteBuffer::allocateDirect(100));
														$nc(bb)->put($("Dia duit!0"_s->getBytes()));
														bb->flip();
														$var($ByteBuffer, bb1, $ByteBuffer::allocateDirect(100));
														$nc(bb1)->put($("Dia duit!1"_s->getBytes()));
														bb1->flip();
														$var($ByteBuffer, bb2, $ByteBuffer::allocateDirect(100));
														$nc(bb2)->put($("Dia duit!2"_s->getBytes()));
														bb2->flip();
														$var($ByteBuffer, bb3, $ByteBuffer::allocateDirect(100));
														$nc(bb3)->put($("garbage"_s->getBytes()));
														bb3->flip();
														$nc(dc1)->send(bb, isa);
														$nc(dc4)->send(bb3, isa);
														dc1->send(bb1, isa);
														$nc(dc2)->send(bb2, isa);
														$nc($(dc3->socket()))->setSoTimeout(1000);
														$var($ByteBuffer, rb, $ByteBuffer::allocateDirect(100));
														$var($SocketAddressArray, sa, $new($SocketAddressArray, 3));
														for (int32_t i = 0; i < 3;) {
															$var($SocketAddress, receiver, dc3->receive(rb));
															$nc(rb)->flip();
															$var($bytes, bytes, $new($bytes, rb->limit()));
															rb->get(bytes, 0, rb->limit());
															$var($String, msg, $new($String, bytes));
															if (msg->matches("Dia duit![0-2]"_s)) {
																if (msg->equals("Dia duit!0"_s)) {
																	sa->set(0, receiver);
																	++i;
																}
																if (msg->equals("Dia duit!1"_s)) {
																	sa->set(1, receiver);
																	++i;
																}
																if (msg->equals("Dia duit!2"_s)) {
																	sa->set(2, receiver);
																	++i;
																}
															} else {
																$nc($System::out)->println($$str({"Interfered packet sender address is : "_s, receiver}));
																$nc($System::out)->println($$str({"random interfered packet is : "_s, msg}));
															}
															rb->clear();
														}
														if (!$nc($of(sa->get(0)))->equals(sa->get(1))) {
															$throwNew($Exception, "Source address for packets 1 & 2 should be equal"_s);
														}
														if ($nc($of(sa->get(1)))->equals(sa->get(2))) {
															$throwNew($Exception, "Source address for packets 2 & 3 should be different"_s);
														}
													} catch ($Throwable& t$) {
														if (dc4 != nullptr) {
															try {
																dc4->close();
															} catch ($Throwable& x2) {
																t$->addSuppressed(x2);
															}
														}
														$throw(t$);
													}
												} catch ($Throwable& var$4) {
													$assign(var$3, var$4);
												} /*finally*/ {
													if (dc4 != nullptr) {
														dc4->close();
													}
												}
												if (var$3 != nullptr) {
													$throw(var$3);
												}
											}
										} catch ($Throwable& t$) {
											if (dc3 != nullptr) {
												try {
													dc3->close();
												} catch ($Throwable& x2) {
													t$->addSuppressed(x2);
												}
											}
											$throw(t$);
										}
									} catch ($Throwable& var$5) {
										$assign(var$2, var$5);
									} /*finally*/ {
										if (dc3 != nullptr) {
											dc3->close();
										}
									}
									if (var$2 != nullptr) {
										$throw(var$2);
									}
								}
							} catch ($Throwable& t$) {
								if (dc2 != nullptr) {
									try {
										dc2->close();
									} catch ($Throwable& x2) {
										t$->addSuppressed(x2);
									}
								}
								$throw(t$);
							}
						} catch ($Throwable& var$6) {
							$assign(var$1, var$6);
						} /*finally*/ {
							if (dc2 != nullptr) {
								dc2->close();
							}
						}
						if (var$1 != nullptr) {
							$throw(var$1);
						}
					}
				} catch ($Throwable& t$) {
					if (dc1 != nullptr) {
						try {
							dc1->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable& var$7) {
				$assign(var$0, var$7);
			} /*finally*/ {
				if (dc1 != nullptr) {
					dc1->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

ReceiveISA::ReceiveISA() {
}

$Class* ReceiveISA::load$($String* name, bool initialize) {
	$loadClass(ReceiveISA, name, initialize, &_ReceiveISA_ClassInfo_, allocate$ReceiveISA);
	return class$;
}

$Class* ReceiveISA::class$ = nullptr;