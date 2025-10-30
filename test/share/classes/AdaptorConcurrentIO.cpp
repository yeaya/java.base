#include <AdaptorConcurrentIO.h>

#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/DatagramPacket.h>
#include <java/net/DatagramSocket.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/SocketAddress.h>
#include <java/nio/channels/DatagramChannel.h>
#include <java/nio/channels/NetworkChannel.h>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.h>
#include <java/util/concurrent/Callable.h>
#include <java/util/concurrent/ExecutorService.h>
#include <java/util/concurrent/Executors.h>
#include <java/util/concurrent/Future.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $DatagramPacket = ::java::net::DatagramPacket;
using $DatagramSocket = ::java::net::DatagramSocket;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $SocketAddress = ::java::net::SocketAddress;
using $DatagramChannel = ::java::nio::channels::DatagramChannel;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;
using $Callable = ::java::util::concurrent::Callable;
using $ExecutorService = ::java::util::concurrent::ExecutorService;
using $Executors = ::java::util::concurrent::Executors;
using $Future = ::java::util::concurrent::Future;

class AdaptorConcurrentIO$$Lambda$lambda$testConcurrentSendReceive$0 : public $Callable {
	$class(AdaptorConcurrentIO$$Lambda$lambda$testConcurrentSendReceive$0, $NO_CLASS_INIT, $Callable)
public:
	void init$($DatagramSocket* s) {
		$set(this, s, s);
	}
	virtual $Object* call() override {
		 return $of(AdaptorConcurrentIO::lambda$testConcurrentSendReceive$0(s));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AdaptorConcurrentIO$$Lambda$lambda$testConcurrentSendReceive$0>());
	}
	$DatagramSocket* s = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo AdaptorConcurrentIO$$Lambda$lambda$testConcurrentSendReceive$0::fieldInfos[2] = {
	{"s", "Ljava/net/DatagramSocket;", nullptr, $PUBLIC, $field(AdaptorConcurrentIO$$Lambda$lambda$testConcurrentSendReceive$0, s)},
	{}
};
$MethodInfo AdaptorConcurrentIO$$Lambda$lambda$testConcurrentSendReceive$0::methodInfos[3] = {
	{"<init>", "(Ljava/net/DatagramSocket;)V", nullptr, $PUBLIC, $method(static_cast<void(AdaptorConcurrentIO$$Lambda$lambda$testConcurrentSendReceive$0::*)($DatagramSocket*)>(&AdaptorConcurrentIO$$Lambda$lambda$testConcurrentSendReceive$0::init$))},
	{"call", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo AdaptorConcurrentIO$$Lambda$lambda$testConcurrentSendReceive$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"AdaptorConcurrentIO$$Lambda$lambda$testConcurrentSendReceive$0",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	fieldInfos,
	methodInfos
};
$Class* AdaptorConcurrentIO$$Lambda$lambda$testConcurrentSendReceive$0::load$($String* name, bool initialize) {
	$loadClass(AdaptorConcurrentIO$$Lambda$lambda$testConcurrentSendReceive$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AdaptorConcurrentIO$$Lambda$lambda$testConcurrentSendReceive$0::class$ = nullptr;

$MethodInfo _AdaptorConcurrentIO_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AdaptorConcurrentIO::*)()>(&AdaptorConcurrentIO::init$))},
	{"lambda$testConcurrentSendReceive$0", "(Ljava/net/DatagramSocket;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)($DatagramSocket*)>(&AdaptorConcurrentIO::lambda$testConcurrentSendReceive$0)), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&AdaptorConcurrentIO::main)), "java.lang.Exception"},
	{"testConcurrentSendReceive", "(I)V", nullptr, $STATIC, $method(static_cast<void(*)(int32_t)>(&AdaptorConcurrentIO::testConcurrentSendReceive)), "java.lang.Exception"},
	{}
};

$ClassInfo _AdaptorConcurrentIO_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"AdaptorConcurrentIO",
	"java.lang.Object",
	nullptr,
	nullptr,
	_AdaptorConcurrentIO_MethodInfo_
};

$Object* allocate$AdaptorConcurrentIO($Class* clazz) {
	return $of($alloc(AdaptorConcurrentIO));
}

void AdaptorConcurrentIO::init$() {
}

void AdaptorConcurrentIO::main($StringArray* args) {
	testConcurrentSendReceive(0);
	testConcurrentSendReceive(0x0000EA60);
}

void AdaptorConcurrentIO::testConcurrentSendReceive(int32_t timeout) {
	$useLocalCurrentObjectStackCache();
	{
		$var($DatagramChannel, dc, $DatagramChannel::open());
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$var($InetAddress, lb, $InetAddress::getLoopbackAddress());
					$nc(dc)->bind($$new($InetSocketAddress, lb, 0));
					$var($DatagramSocket, s, dc->socket());
					$nc(s)->setSoTimeout(timeout);
					$var($ExecutorService, pool, $Executors::newSingleThreadExecutor());
					{
						$var($Throwable, var$1, nullptr);
						try {
							$var($Future, result, $nc(pool)->submit(static_cast<$Callable*>($$new(AdaptorConcurrentIO$$Lambda$lambda$testConcurrentSendReceive$0, s))));
							$Thread::sleep(200);
							$var($bytes, data, "hello"_s->getBytes("UTF-8"_s));
							$var($DatagramPacket, p, $new($DatagramPacket, data, 0, data->length));
							p->setSocketAddress($(s->getLocalSocketAddress()));
							s->send(p);
							$var($String, msg, $cast($String, $nc(result)->get()));
							if (!$nc(msg)->equals("hello"_s)) {
								$throwNew($RuntimeException, $$str({"Unexpected message: "_s, msg}));
							}
						} catch ($Throwable& var$2) {
							$assign(var$1, var$2);
						} /*finally*/ {
							$nc(pool)->shutdown();
						}
						if (var$1 != nullptr) {
							$throw(var$1);
						}
					}
				} catch ($Throwable& t$) {
					if (dc != nullptr) {
						try {
							dc->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable& var$3) {
				$assign(var$0, var$3);
			} /*finally*/ {
				if (dc != nullptr) {
					dc->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

$String* AdaptorConcurrentIO::lambda$testConcurrentSendReceive$0($DatagramSocket* s) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, data, $new($bytes, 100));
	$var($DatagramPacket, p, $new($DatagramPacket, data, 0, data->length));
	$nc(s)->receive(p);
	$var($bytes, var$0, p->getData());
	int32_t var$1 = p->getOffset();
	return $new($String, var$0, var$1, p->getLength(), "UTF-8"_s);
}

AdaptorConcurrentIO::AdaptorConcurrentIO() {
}

$Class* AdaptorConcurrentIO::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(AdaptorConcurrentIO$$Lambda$lambda$testConcurrentSendReceive$0::classInfo$.name)) {
			return AdaptorConcurrentIO$$Lambda$lambda$testConcurrentSendReceive$0::load$(name, initialize);
		}
	}
	$loadClass(AdaptorConcurrentIO, name, initialize, &_AdaptorConcurrentIO_ClassInfo_, allocate$AdaptorConcurrentIO);
	return class$;
}

$Class* AdaptorConcurrentIO::class$ = nullptr;