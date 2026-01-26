#include <RegAfterPreClose.h>

#include <RegAfterPreClose$1.h>
#include <RegAfterPreClose$Closer.h>
#include <RegAfterPreClose$Connector.h>
#include <java/lang/Runnable.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/ServerSocket.h>
#include <java/net/SocketAddress.h>
#include <java/nio/channels/Channel.h>
#include <java/nio/channels/InterruptibleChannel.h>
#include <java/nio/channels/SelectableChannel.h>
#include <java/nio/channels/SelectionKey.h>
#include <java/nio/channels/Selector.h>
#include <java/nio/channels/ServerSocketChannel.h>
#include <java/nio/channels/SocketChannel.h>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.h>
#include <java/nio/channels/spi/AbstractSelectableChannel.h>
#include <java/util/Set.h>
#include <java/util/concurrent/ExecutorService.h>
#include <java/util/concurrent/Executors.h>
#include <java/util/concurrent/ThreadFactory.h>
#include <jcpp.h>

#undef OP_ACCEPT
#undef OP_READ
#undef TEST_ITERATIONS

using $RegAfterPreClose$1 = ::RegAfterPreClose$1;
using $RegAfterPreClose$Closer = ::RegAfterPreClose$Closer;
using $RegAfterPreClose$Connector = ::RegAfterPreClose$Connector;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $ServerSocket = ::java::net::ServerSocket;
using $SocketAddress = ::java::net::SocketAddress;
using $Channel = ::java::nio::channels::Channel;
using $InterruptibleChannel = ::java::nio::channels::InterruptibleChannel;
using $SelectableChannel = ::java::nio::channels::SelectableChannel;
using $SelectionKey = ::java::nio::channels::SelectionKey;
using $Selector = ::java::nio::channels::Selector;
using $ServerSocketChannel = ::java::nio::channels::ServerSocketChannel;
using $SocketChannel = ::java::nio::channels::SocketChannel;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;
using $AbstractSelectableChannel = ::java::nio::channels::spi::AbstractSelectableChannel;
using $Set = ::java::util::Set;
using $ExecutorService = ::java::util::concurrent::ExecutorService;
using $Executors = ::java::util::concurrent::Executors;
using $ThreadFactory = ::java::util::concurrent::ThreadFactory;

$FieldInfo _RegAfterPreClose_FieldInfo_[] = {
	{"TEST_ITERATIONS", "I", nullptr, $STATIC | $FINAL, $constField(RegAfterPreClose, TEST_ITERATIONS)},
	{"done", "Z", nullptr, $STATIC | $VOLATILE, $staticField(RegAfterPreClose, done)},
	{}
};

$MethodInfo _RegAfterPreClose_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(RegAfterPreClose, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(RegAfterPreClose, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$InnerClassInfo _RegAfterPreClose_InnerClassesInfo_[] = {
	{"RegAfterPreClose$Closer", "RegAfterPreClose", "Closer", $STATIC},
	{"RegAfterPreClose$Connector", "RegAfterPreClose", "Connector", $STATIC},
	{"RegAfterPreClose$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _RegAfterPreClose_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"RegAfterPreClose",
	"java.lang.Object",
	nullptr,
	_RegAfterPreClose_FieldInfo_,
	_RegAfterPreClose_MethodInfo_,
	nullptr,
	nullptr,
	_RegAfterPreClose_InnerClassesInfo_,
	nullptr,
	nullptr,
	"RegAfterPreClose$Closer,RegAfterPreClose$Connector,RegAfterPreClose$1"
};

$Object* allocate$RegAfterPreClose($Class* clazz) {
	return $of($alloc(RegAfterPreClose));
}

$volatile(bool) RegAfterPreClose::done = false;

void RegAfterPreClose::init$() {
}

void RegAfterPreClose::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($InetSocketAddress, isa, $new($InetSocketAddress, 0));
	$var($ServerSocketChannel, ssc, $ServerSocketChannel::open());
	$nc($($nc(ssc)->socket()))->bind(isa);
	$var($Selector, sel, $Selector::open());
	ssc->configureBlocking(false);
	$var($SelectionKey, key, ssc->register$(sel, $SelectionKey::OP_ACCEPT));
	$var($ThreadFactory, factory, $new($RegAfterPreClose$1));
	$var($ExecutorService, executor, $Executors::newFixedThreadPool(2, factory));
	$nc(executor)->execute($$new($RegAfterPreClose$Connector, $nc($(ssc->socket()))->getLocalPort()));
	int32_t remaining = RegAfterPreClose::TEST_ITERATIONS;
	while (remaining > 0) {
		$nc(sel)->select();
		if ($nc(key)->isAcceptable()) {
			$var($SocketChannel, sc, ssc->accept());
			if (sc != nullptr) {
				--remaining;
				sc->configureBlocking(false);
				sc->register$(sel, $SelectionKey::OP_READ);
				executor->execute($$new($RegAfterPreClose$Closer, static_cast<$Channel*>(static_cast<$InterruptibleChannel*>(static_cast<$AbstractInterruptibleChannel*>(static_cast<$SelectableChannel*>(static_cast<$AbstractSelectableChannel*>(sc)))))));
			}
		}
		$nc($(sel->selectedKeys()))->clear();
	}
	$init(RegAfterPreClose);
	RegAfterPreClose::done = true;
	$nc(sel)->close();
	executor->shutdown();
}

RegAfterPreClose::RegAfterPreClose() {
}

$Class* RegAfterPreClose::load$($String* name, bool initialize) {
	$loadClass(RegAfterPreClose, name, initialize, &_RegAfterPreClose_ClassInfo_, allocate$RegAfterPreClose);
	return class$;
}

$Class* RegAfterPreClose::class$ = nullptr;