#include <ChangingInterests.h>

#include <java/lang/InterruptedException.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/ServerSocket.h>
#include <java/net/SocketAddress.h>
#include <java/net/SocketOption.h>
#include <java/net/StandardSocketOptions.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/NetworkChannel.h>
#include <java/nio/channels/SelectableChannel.h>
#include <java/nio/channels/SelectionKey.h>
#include <java/nio/channels/Selector.h>
#include <java/nio/channels/ServerSocketChannel.h>
#include <java/nio/channels/SocketChannel.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef OPS
#undef TCP_NODELAY

using $PrintStream = ::java::io::PrintStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $ServerSocket = ::java::net::ServerSocket;
using $SocketAddress = ::java::net::SocketAddress;
using $StandardSocketOptions = ::java::net::StandardSocketOptions;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $SelectionKey = ::java::nio::channels::SelectionKey;
using $Selector = ::java::nio::channels::Selector;
using $ServerSocketChannel = ::java::nio::channels::ServerSocketChannel;
using $SocketChannel = ::java::nio::channels::SocketChannel;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;

$FieldInfo _ChangingInterests_FieldInfo_[] = {
	{"OPS", "[I", nullptr, $STATIC, $staticField(ChangingInterests, OPS)},
	{}
};

$MethodInfo _ChangingInterests_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ChangingInterests, init$, void)},
	{"assertTrue", "(ZLjava/lang/String;)V", nullptr, $STATIC, $staticMethod(ChangingInterests, assertTrue, void, bool, $String*)},
	{"drain", "(Ljava/nio/channels/SocketChannel;)V", nullptr, $STATIC, $staticMethod(ChangingInterests, drain, void, $SocketChannel*), "java.io.IOException"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ChangingInterests, main, void, $StringArray*), "java.io.IOException"},
	{"makeReadable", "(Ljava/nio/channels/SocketChannel;Ljava/nio/channels/SocketChannel;)V", nullptr, $STATIC, $staticMethod(ChangingInterests, makeReadable, void, $SocketChannel*, $SocketChannel*), "java.io.IOException"},
	{"testChange", "(Ljava/nio/channels/SelectionKey;II)V", nullptr, $STATIC, $staticMethod(ChangingInterests, testChange, void, $SelectionKey*, int32_t, int32_t), "java.io.IOException"},
	{"testForSpin", "(Ljava/nio/channels/Selector;)V", nullptr, $STATIC, $staticMethod(ChangingInterests, testForSpin, void, $Selector*), "java.io.IOException"},
	{"toOpsString", "(I)Ljava/lang/String;", nullptr, $STATIC, $staticMethod(ChangingInterests, toOpsString, $String*, int32_t)},
	{}
};

$ClassInfo _ChangingInterests_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ChangingInterests",
	"java.lang.Object",
	nullptr,
	_ChangingInterests_FieldInfo_,
	_ChangingInterests_MethodInfo_
};

$Object* allocate$ChangingInterests($Class* clazz) {
	return $of($alloc(ChangingInterests));
}

$ints* ChangingInterests::OPS = nullptr;

void ChangingInterests::init$() {
}

$String* ChangingInterests::toOpsString(int32_t ops) {
	$init(ChangingInterests);
	$var($String, s, ""_s);
	if (((int32_t)(ops & (uint32_t)1)) > 0) {
		$plusAssign(s, "POLLIN"_s);
	}
	if (((int32_t)(ops & (uint32_t)4)) > 0) {
		if (s->length() > 0) {
			$plusAssign(s, "|"_s);
		}
		$plusAssign(s, "POLLOUT"_s);
	}
	if (s->length() == 0) {
		$assign(s, "0"_s);
	}
	return $str({"("_s, s, ")"_s});
}

void ChangingInterests::makeReadable($SocketChannel* out, $SocketChannel* in) {
	$init(ChangingInterests);
	$useLocalCurrentObjectStackCache();
	$nc(out)->write($($ByteBuffer::wrap($$new($bytes, 2))));
	$var($ByteBuffer, oneByte, $ByteBuffer::wrap($$new($bytes, 1)));
	do {
		int32_t n = $nc(in)->read(oneByte);
		if (n == 1) {
			break;
		} else if (n == 0) {
			try {
				$Thread::sleep(50);
			} catch ($InterruptedException& ignore) {
			}
		} else {
			$throwNew($RuntimeException, $$str({"Expected to read 0 or 1 byte; actual number was "_s, $$str(n)}));
		}
	} while (true);
}

void ChangingInterests::drain($SocketChannel* sc) {
	$init(ChangingInterests);
	$var($ByteBuffer, buf, $ByteBuffer::allocate(100));
	int32_t n = 0;
	while ((n = $nc(sc)->read(buf)) > 0) {
		$nc(buf)->rewind();
	}
}

void ChangingInterests::testChange($SelectionKey* key, int32_t from, int32_t to) {
	$init(ChangingInterests);
	$useLocalCurrentObjectStackCache();
	$var($Selector, sel, $nc(key)->selector());
	assertTrue($nc($($nc(sel)->keys()))->size() == 1, "Only one channel should be registered"_s);
	key->interestOps(from);
	$nc(sel)->selectNow();
	$nc($(sel->selectedKeys()))->clear();
	key->interestOps(to);
	$nc($System::out)->println("select..."_s);
	int32_t selected = sel->selectNow();
	$nc($System::out)->println($$str({""_s, $$str(selected), " channel(s) selected"_s}));
	int32_t expected = (to == 0) ? 0 : 1;
	assertTrue(selected == expected, $$str({"Expected "_s, $$str(expected)}));
	{
		$var($Iterator, i$, $nc($(sel->selectedKeys()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SelectionKey, k, $cast($SelectionKey, i$->next()));
			{
				assertTrue(k == key, "Unexpected key selected"_s);
				bool readable = $nc(k)->isReadable();
				bool writable = k->isWritable();
				$nc($System::out)->println($$str({"key readable: "_s, $$str(readable)}));
				$nc($System::out)->println($$str({"key writable: "_s, $$str(writable)}));
				if (((int32_t)(to & (uint32_t)1)) == 0) {
					assertTrue(!readable, "Not expected to be readable"_s);
				} else {
					assertTrue(readable, "Expected to be readable"_s);
				}
				if (((int32_t)(to & (uint32_t)4)) == 0) {
					assertTrue(!writable, "Not expected to be writable"_s);
				} else {
					assertTrue(writable, "Expected to be writable"_s);
				}
				$nc($(sel->selectedKeys()))->clear();
			}
		}
	}
}

void ChangingInterests::testForSpin($Selector* sel) {
	$init(ChangingInterests);
	$useLocalCurrentObjectStackCache();
	$nc($System::out)->println("Test for spin..."_s);
	int64_t start = $System::currentTimeMillis();
	int32_t count = 3;
	while (count-- > 0) {
		int32_t selected = $nc(sel)->select((int64_t)1000);
		$nc($System::out)->println($$str({""_s, $$str(selected), " channel(s) selected"_s}));
		assertTrue(selected == 0, "Channel should not be selected"_s);
	}
	int64_t dur = $System::currentTimeMillis() - start;
	assertTrue(dur > 1000, "select was too short"_s);
}

void ChangingInterests::main($StringArray* args) {
	$init(ChangingInterests);
	$useLocalCurrentObjectStackCache();
	$var($InetAddress, lh, $InetAddress::getLocalHost());
	$var($ServerSocketChannel, ssc, $cast($ServerSocketChannel, $nc($($ServerSocketChannel::open()))->bind($$new($InetSocketAddress, 0))));
	$var($SocketChannel, sc, $SocketChannel::open());
	$init($StandardSocketOptions);
	$nc(sc)->setOption($StandardSocketOptions::TCP_NODELAY, $($Boolean::valueOf(true)));
	sc->connect($$new($InetSocketAddress, lh, $nc($($nc(ssc)->socket()))->getLocalPort()));
	$var($SocketChannel, peer, $nc(ssc)->accept());
	$nc(peer)->setOption($StandardSocketOptions::TCP_NODELAY, $($Boolean::valueOf(true)));
	sc->configureBlocking(false);
	makeReadable(peer, sc);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($Selector, sel, $Selector::open());
			{
				$var($Throwable, var$1, nullptr);
				try {
					try {
						$var($SelectionKey, key, sc->register$(sel, 0));
						$nc(sel)->selectNow();
						{
							$var($ints, arr$, ChangingInterests::OPS);
							int32_t len$ = $nc(arr$)->length;
							int32_t i$ = 0;
							for (; i$ < len$; ++i$) {
								int32_t from = arr$->get(i$);
								{
									{
										$var($ints, arr$, ChangingInterests::OPS);
										int32_t len$ = arr$->length;
										int32_t i$ = 0;
										for (; i$ < len$; ++i$) {
											int32_t to = arr$->get(i$);
											{
												$var($String, var$2, $$str({$(toOpsString(from)), " -> "_s}));
												$nc($System::out)->println($$concat(var$2, $(toOpsString(to))));
												testChange(key, from, to);
												if (to == 0) {
													testForSpin(sel);
												}
												if (to == 1) {
													$nc($System::out)->println("Drain channel..."_s);
													drain(sc);
													testForSpin(sel);
													$nc($System::out)->println("Make channel readable again"_s);
													makeReadable(peer, sc);
												}
												$nc($System::out)->println();
											}
										}
									}
								}
							}
						}
					} catch ($Throwable& t$) {
						if (sel != nullptr) {
							try {
								sel->close();
							} catch ($Throwable& x2) {
								t$->addSuppressed(x2);
							}
						}
						$throw(t$);
					}
				} catch ($Throwable& var$3) {
					$assign(var$1, var$3);
				} /*finally*/ {
					if (sel != nullptr) {
						sel->close();
					}
				}
				if (var$1 != nullptr) {
					$throw(var$1);
				}
			}
		} catch ($Throwable& var$4) {
			$assign(var$0, var$4);
		} /*finally*/ {
			sc->close();
			peer->close();
			ssc->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void ChangingInterests::assertTrue(bool v, $String* msg) {
	$init(ChangingInterests);
	if (!v) {
		$throwNew($RuntimeException, msg);
	}
}

void clinit$ChangingInterests($Class* class$) {
	$assignStatic(ChangingInterests::OPS, $new($ints, {
		0,
		4,
		1,
		(4 | 1)
	}));
}

ChangingInterests::ChangingInterests() {
}

$Class* ChangingInterests::load$($String* name, bool initialize) {
	$loadClass(ChangingInterests, name, initialize, &_ChangingInterests_ClassInfo_, clinit$ChangingInterests, allocate$ChangingInterests);
	return class$;
}

$Class* ChangingInterests::class$ = nullptr;