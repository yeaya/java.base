#include <ManySourcesAndTargets.h>

#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/InputStream.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/DatagramSocket.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/NetworkInterface.h>
#include <java/net/SocketAddress.h>
#include <java/net/SocketException.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/DatagramChannel.h>
#include <java/nio/channels/NetworkChannel.h>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Optional.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

using $InetAddressArray = $Array<::java::net::InetAddress>;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $InputStream = ::java::io::InputStream;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $DatagramSocket = ::java::net::DatagramSocket;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $NetworkInterface = ::java::net::NetworkInterface;
using $SocketAddress = ::java::net::SocketAddress;
using $SocketException = ::java::net::SocketException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $DatagramChannel = ::java::nio::channels::DatagramChannel;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Optional = ::java::util::Optional;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Collector = ::java::util::stream::Collector;
using $Collectors = ::java::util::stream::Collectors;
using $Stream = ::java::util::stream::Stream;

class ManySourcesAndTargets$$Lambda$networkInterface : public $Function {
	$class(ManySourcesAndTargets$$Lambda$networkInterface, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* ia) override {
		 return $of(ManySourcesAndTargets::networkInterface($cast($InetAddress, ia)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ManySourcesAndTargets$$Lambda$networkInterface>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ManySourcesAndTargets$$Lambda$networkInterface::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ManySourcesAndTargets$$Lambda$networkInterface::*)()>(&ManySourcesAndTargets$$Lambda$networkInterface::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ManySourcesAndTargets$$Lambda$networkInterface::classInfo$ = {
	$PUBLIC | $FINAL,
	"ManySourcesAndTargets$$Lambda$networkInterface",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* ManySourcesAndTargets$$Lambda$networkInterface::load$($String* name, bool initialize) {
	$loadClass(ManySourcesAndTargets$$Lambda$networkInterface, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ManySourcesAndTargets$$Lambda$networkInterface::class$ = nullptr;

class ManySourcesAndTargets$$Lambda$stream$1 : public $Function {
	$class(ManySourcesAndTargets$$Lambda$stream$1, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($Optional, inst$)->stream());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ManySourcesAndTargets$$Lambda$stream$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ManySourcesAndTargets$$Lambda$stream$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ManySourcesAndTargets$$Lambda$stream$1::*)()>(&ManySourcesAndTargets$$Lambda$stream$1::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ManySourcesAndTargets$$Lambda$stream$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"ManySourcesAndTargets$$Lambda$stream$1",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* ManySourcesAndTargets$$Lambda$stream$1::load$($String* name, bool initialize) {
	$loadClass(ManySourcesAndTargets$$Lambda$stream$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ManySourcesAndTargets$$Lambda$stream$1::class$ = nullptr;

class ManySourcesAndTargets$$Lambda$inetAddresses$2 : public $Function {
	$class(ManySourcesAndTargets$$Lambda$inetAddresses$2, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($NetworkInterface, inst$)->inetAddresses());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ManySourcesAndTargets$$Lambda$inetAddresses$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ManySourcesAndTargets$$Lambda$inetAddresses$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ManySourcesAndTargets$$Lambda$inetAddresses$2::*)()>(&ManySourcesAndTargets$$Lambda$inetAddresses$2::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ManySourcesAndTargets$$Lambda$inetAddresses$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"ManySourcesAndTargets$$Lambda$inetAddresses$2",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* ManySourcesAndTargets$$Lambda$inetAddresses$2::load$($String* name, bool initialize) {
	$loadClass(ManySourcesAndTargets$$Lambda$inetAddresses$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ManySourcesAndTargets$$Lambda$inetAddresses$2::class$ = nullptr;

class ManySourcesAndTargets$$Lambda$lambda$main$0$3 : public $Predicate {
	$class(ManySourcesAndTargets$$Lambda$lambda$main$0$3, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* ia) override {
		 return ManySourcesAndTargets::lambda$main$0($cast($InetAddress, ia));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ManySourcesAndTargets$$Lambda$lambda$main$0$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ManySourcesAndTargets$$Lambda$lambda$main$0$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ManySourcesAndTargets$$Lambda$lambda$main$0$3::*)()>(&ManySourcesAndTargets$$Lambda$lambda$main$0$3::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo ManySourcesAndTargets$$Lambda$lambda$main$0$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"ManySourcesAndTargets$$Lambda$lambda$main$0$3",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* ManySourcesAndTargets$$Lambda$lambda$main$0$3::load$($String* name, bool initialize) {
	$loadClass(ManySourcesAndTargets$$Lambda$lambda$main$0$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ManySourcesAndTargets$$Lambda$lambda$main$0$3::class$ = nullptr;

$MethodInfo _ManySourcesAndTargets_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ManySourcesAndTargets::*)()>(&ManySourcesAndTargets::init$))},
	{"deserialize", "([B)Ljava/net/SocketAddress;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$SocketAddress*(*)($bytes*)>(&ManySourcesAndTargets::deserialize)), "java.lang.Exception"},
	{"lambda$main$0", "(Ljava/net/InetAddress;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($InetAddress*)>(&ManySourcesAndTargets::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ManySourcesAndTargets::main)), "java.lang.Exception"},
	{"networkInterface", "(Ljava/net/InetAddress;)Ljava/util/Optional;", "(Ljava/net/InetAddress;)Ljava/util/Optional<Ljava/net/NetworkInterface;>;", $PRIVATE | $STATIC, $method(static_cast<$Optional*(*)($InetAddress*)>(&ManySourcesAndTargets::networkInterface))},
	{"serialize", "(Ljava/net/SocketAddress;)[B", nullptr, $PRIVATE | $STATIC, $method(static_cast<$bytes*(*)($SocketAddress*)>(&ManySourcesAndTargets::serialize)), "java.lang.Exception"},
	{"testReceive", "(ILjava/nio/channels/DatagramChannel;Ljava/net/InetAddress;)V", nullptr, $STATIC, $method(static_cast<void(*)(int32_t,$DatagramChannel*,$InetAddress*)>(&ManySourcesAndTargets::testReceive)), "java.lang.Exception"},
	{"testSend", "(ILjava/net/InetAddress;Ljava/nio/channels/DatagramChannel;)V", nullptr, $STATIC, $method(static_cast<void(*)(int32_t,$InetAddress*,$DatagramChannel*)>(&ManySourcesAndTargets::testSend)), "java.lang.Exception"},
	{}
};

$ClassInfo _ManySourcesAndTargets_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ManySourcesAndTargets",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ManySourcesAndTargets_MethodInfo_
};

$Object* allocate$ManySourcesAndTargets($Class* clazz) {
	return $of($alloc(ManySourcesAndTargets));
}

void ManySourcesAndTargets::init$() {
}

void ManySourcesAndTargets::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($InetAddress, lh, $InetAddress::getLocalHost());
	$var($InetAddress, lb, $InetAddress::getLoopbackAddress());
	$var($List, addresses, $cast($List, $nc($($nc($($nc($($nc($($nc($($nc($($Stream::of($$new($InetAddressArray, {
		lh,
		lb
	}))))->map(static_cast<$Function*>($$new(ManySourcesAndTargets$$Lambda$networkInterface)))))->flatMap(static_cast<$Function*>($$new(ManySourcesAndTargets$$Lambda$stream$1)))))->flatMap(static_cast<$Function*>($$new(ManySourcesAndTargets$$Lambda$inetAddresses$2)))))->filter(static_cast<$Predicate*>($$new(ManySourcesAndTargets$$Lambda$lambda$main$0$3)))))->distinct()))->collect($($Collectors::toList()))));
	{
		$var($DatagramChannel, reader, $DatagramChannel::open());
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$nc(reader)->bind($$new($InetSocketAddress, 0));
					{
						$var($Iterator, i$, $nc(addresses)->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($InetAddress, address, $cast($InetAddress, i$->next()));
							{
								$nc($System::out)->format("%n-- %s --%n"_s, $$new($ObjectArray, {$($of($nc(address)->getHostAddress()))}));
								testSend(3, address, reader);
							}
						}
					}
				} catch ($Throwable& t$) {
					if (reader != nullptr) {
						try {
							reader->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				if (reader != nullptr) {
					reader->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	{
		$var($DatagramChannel, sender, $DatagramChannel::open());
		{
			$var($Throwable, var$2, nullptr);
			try {
				try {
					$nc(sender)->bind($$new($InetSocketAddress, 0));
					{
						$var($Iterator, i$, $nc(addresses)->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($InetAddress, address, $cast($InetAddress, i$->next()));
							{
								$nc($System::out)->format("%n-- %s --%n"_s, $$new($ObjectArray, {$($of($nc(address)->getHostAddress()))}));
								testReceive(3, sender, address);
							}
						}
					}
				} catch ($Throwable& t$) {
					if (sender != nullptr) {
						try {
							sender->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable& var$3) {
				$assign(var$2, var$3);
			} /*finally*/ {
				if (sender != nullptr) {
					sender->close();
				}
			}
			if (var$2 != nullptr) {
				$throw(var$2);
			}
		}
	}
}

void ManySourcesAndTargets::testSend(int32_t count, $InetAddress* address, $DatagramChannel* reader) {
	$useLocalCurrentObjectStackCache();
	int32_t remotePort = $nc($($nc(reader)->socket()))->getLocalPort();
	$var($InetSocketAddress, remote, $new($InetSocketAddress, address, remotePort));
	{
		$var($DatagramChannel, sender, $DatagramChannel::open());
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$nc(sender)->bind($$new($InetSocketAddress, address, 0));
					$var($SocketAddress, local, sender->getLocalAddress());
					$var($bytes, bytes, serialize(local));
					$var($SocketAddress, previousSource, nullptr);
					for (int32_t i = 0; i < count; ++i) {
						$nc($System::out)->format("send %s -> %s%n"_s, $$new($ObjectArray, {
							$of(local),
							$of(remote)
						}));
						sender->send($($ByteBuffer::wrap(bytes)), remote);
						$var($ByteBuffer, bb, $ByteBuffer::allocate(1000));
						$var($SocketAddress, source, reader->receive(bb));
						$nc($System::out)->format("received datagram from %s%n"_s, $$new($ObjectArray, {$of(source)}));
						$var($SocketAddress, payload, deserialize($($cast($bytes, $nc(bb)->array()))));
						if (!$nc($of(source))->equals(local)) {
							$throwNew($RuntimeException, $$str({"source="_s, source, ", expected="_s, local}));
						}
						if (!$nc($of(payload))->equals(local)) {
							$throwNew($RuntimeException, $$str({"payload="_s, payload, ", expected="_s, local}));
						}
						if (previousSource == nullptr) {
							$assign(previousSource, source);
						} else if (source != previousSource) {
							$throwNew($RuntimeException, "Cached SocketAddress not returned"_s);
						}
					}
				} catch ($Throwable& t$) {
					if (sender != nullptr) {
						try {
							sender->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				if (sender != nullptr) {
					sender->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void ManySourcesAndTargets::testReceive(int32_t count, $DatagramChannel* sender, $InetAddress* address) {
	$useLocalCurrentObjectStackCache();
	$var($SocketAddress, local, $nc(sender)->getLocalAddress());
	{
		$var($DatagramChannel, reader, $DatagramChannel::open());
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$nc(reader)->bind($$new($InetSocketAddress, address, 0));
					$var($SocketAddress, remote, reader->getLocalAddress());
					for (int32_t i = 0; i < count; ++i) {
						$nc($System::out)->format("send %s -> %s%n"_s, $$new($ObjectArray, {
							$of(local),
							$of(remote)
						}));
						reader->send($($ByteBuffer::allocate(32)), remote);
						$var($ByteBuffer, bb, $ByteBuffer::allocate(1000));
						$var($SocketAddress, source, reader->receive(bb));
						$nc($System::out)->format("received datagram from %s%n"_s, $$new($ObjectArray, {$of(source)}));
					}
				} catch ($Throwable& t$) {
					if (reader != nullptr) {
						try {
							reader->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				if (reader != nullptr) {
					reader->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

$bytes* ManySourcesAndTargets::serialize($SocketAddress* address) {
	$useLocalCurrentObjectStackCache();
	$var($ByteArrayOutputStream, baos, $new($ByteArrayOutputStream));
	$var($ObjectOutputStream, oos, $new($ObjectOutputStream, baos));
	oos->writeObject(address);
	oos->close();
	return baos->toByteArray();
}

$SocketAddress* ManySourcesAndTargets::deserialize($bytes* bytes) {
	$useLocalCurrentObjectStackCache();
	$var($ByteArrayInputStream, bais, $new($ByteArrayInputStream, bytes));
	$var($ObjectInputStream, ois, $new($ObjectInputStream, bais));
	return $cast($SocketAddress, ois->readObject());
}

$Optional* ManySourcesAndTargets::networkInterface($InetAddress* ia) {
	try {
		return $Optional::ofNullable($($NetworkInterface::getByInetAddress(ia)));
	} catch ($SocketException& e) {
		return $Optional::empty();
	}
	$shouldNotReachHere();
}

bool ManySourcesAndTargets::lambda$main$0($InetAddress* ia) {
	return !$nc(ia)->isAnyLocalAddress();
}

ManySourcesAndTargets::ManySourcesAndTargets() {
}

$Class* ManySourcesAndTargets::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ManySourcesAndTargets$$Lambda$networkInterface::classInfo$.name)) {
			return ManySourcesAndTargets$$Lambda$networkInterface::load$(name, initialize);
		}
		if (name->equals(ManySourcesAndTargets$$Lambda$stream$1::classInfo$.name)) {
			return ManySourcesAndTargets$$Lambda$stream$1::load$(name, initialize);
		}
		if (name->equals(ManySourcesAndTargets$$Lambda$inetAddresses$2::classInfo$.name)) {
			return ManySourcesAndTargets$$Lambda$inetAddresses$2::load$(name, initialize);
		}
		if (name->equals(ManySourcesAndTargets$$Lambda$lambda$main$0$3::classInfo$.name)) {
			return ManySourcesAndTargets$$Lambda$lambda$main$0$3::load$(name, initialize);
		}
	}
	$loadClass(ManySourcesAndTargets, name, initialize, &_ManySourcesAndTargets_ClassInfo_, allocate$ManySourcesAndTargets);
	return class$;
}

$Class* ManySourcesAndTargets::class$ = nullptr;