#include <RacyDeregister.h>

#include <RacyDeregister$1.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/ServerSocket.h>
#include <java/net/SocketAddress.h>
#include <java/nio/channels/SelectableChannel.h>
#include <java/nio/channels/SelectionKey.h>
#include <java/nio/channels/Selector.h>
#include <java/nio/channels/ServerSocketChannel.h>
#include <java/nio/channels/SocketChannel.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef FALSE
#undef OP_READ
#undef TIMEOUT_THRESHOLD_MILLIS
#undef TRUE

using $RacyDeregister$1 = ::RacyDeregister$1;
using $SelectionKeyArray = $Array<::java::nio::channels::SelectionKey>;
using $PrintStream = ::java::io::PrintStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $ServerSocket = ::java::net::ServerSocket;
using $SocketAddress = ::java::net::SocketAddress;
using $SelectionKey = ::java::nio::channels::SelectionKey;
using $Selector = ::java::nio::channels::Selector;
using $ServerSocketChannel = ::java::nio::channels::ServerSocketChannel;
using $SocketChannel = ::java::nio::channels::SocketChannel;
using $Set = ::java::util::Set;

$FieldInfo _RacyDeregister_FieldInfo_[] = {
	{"TIMEOUT_THRESHOLD_MILLIS", "I", nullptr, $STATIC | $FINAL, $constField(RacyDeregister, TIMEOUT_THRESHOLD_MILLIS)},
	{"t0", "J", nullptr, $STATIC, $staticField(RacyDeregister, t0)},
	{"notified", "Z", nullptr, $STATIC, $staticField(RacyDeregister, notified)},
	{"selectorLock", "Ljava/lang/Object;", nullptr, $STATIC | $FINAL, $staticField(RacyDeregister, selectorLock)},
	{"notifyLock", "Ljava/lang/Object;", nullptr, $STATIC | $FINAL, $staticField(RacyDeregister, notifyLock)},
	{"succTermination", "Ljava/lang/Boolean;", nullptr, $STATIC | $VOLATILE, $staticField(RacyDeregister, succTermination)},
	{}
};

$MethodInfo _RacyDeregister_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(RacyDeregister, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(RacyDeregister, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$InnerClassInfo _RacyDeregister_InnerClassesInfo_[] = {
	{"RacyDeregister$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _RacyDeregister_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"RacyDeregister",
	"java.lang.Object",
	nullptr,
	_RacyDeregister_FieldInfo_,
	_RacyDeregister_MethodInfo_,
	nullptr,
	nullptr,
	_RacyDeregister_InnerClassesInfo_,
	nullptr,
	nullptr,
	"RacyDeregister$1"
};

$Object* allocate$RacyDeregister($Class* clazz) {
	return $of($alloc(RacyDeregister));
}

int64_t RacyDeregister::t0 = 0;
bool RacyDeregister::notified = false;
$Object* RacyDeregister::selectorLock = nullptr;
$Object* RacyDeregister::notifyLock = nullptr;
$volatile($Boolean*) RacyDeregister::succTermination = nullptr;

void RacyDeregister::init$() {
}

void RacyDeregister::main($StringArray* args) {
	$init(RacyDeregister);
	$useLocalCurrentObjectStackCache();
	RacyDeregister::t0 = $System::currentTimeMillis();
	$var($InetAddress, addr, $InetAddress::getByName(nullptr));
	$var($ServerSocketChannel, sc, $ServerSocketChannel::open());
	$nc($($nc(sc)->socket()))->bind($$new($InetSocketAddress, addr, 0));
	$SocketChannel::open(static_cast<$SocketAddress*>($$new($InetSocketAddress, addr, $nc($(sc->socket()))->getLocalPort())));
	$var($SocketChannel, accepted, sc->accept());
	$nc(accepted)->configureBlocking(false);
	$SocketChannel::open(static_cast<$SocketAddress*>($$new($InetSocketAddress, addr, $nc($(sc->socket()))->getLocalPort())));
	$var($SocketChannel, accepted2, sc->accept());
	$nc(accepted2)->configureBlocking(false);
	$var($Selector, sel, $Selector::open());
	$var($SelectionKey, key2, accepted2->register$(sel, $SelectionKey::OP_READ));
	$var($SelectionKeyArray, key, $new($SelectionKeyArray, {$(accepted->register$(sel, $SelectionKey::OP_READ))}));
	$$new($RacyDeregister$1, sel, key)->start();
	while (true) {
		$nc(sel)->select();
		$init($Boolean);
		if ($nc($Boolean::TRUE)->equals(RacyDeregister::succTermination)) {
			$nc($System::out)->println("Test passed"_s);
			$nc($System::out)->flush();
			sel->close();
			sc->close();
			break;
		} else {
			if ($nc($Boolean::FALSE)->equals(RacyDeregister::succTermination)) {
				$nc($System::err)->println("Failed to pass the test"_s);
				$nc($System::err)->flush();
				sel->close();
				sc->close();
				$throwNew($RuntimeException, "Failed to pass the test"_s);
			}
		}
		$synchronized(RacyDeregister::selectorLock) {
		}
		bool var$0 = $nc($(sel->selectedKeys()))->contains(key->get(0));
		if (var$0 && $nc(key->get(0))->isWritable()) {
			$synchronized(RacyDeregister::notifyLock) {
				RacyDeregister::notified = true;
				$nc($of(RacyDeregister::notifyLock))->notify();
				$nc(key->get(0))->cancel();
				sel->selectNow();
				$assign(key2, accepted2->register$(sel, $SelectionKey::OP_READ));
				key->set(0, $(accepted->register$(sel, $SelectionKey::OP_READ)));
			}
		}
		$nc(key2)->cancel();
		$nc($(sel->selectedKeys()))->clear();
	}
}

void clinit$RacyDeregister($Class* class$) {
	$assignStatic(RacyDeregister::selectorLock, $new($Object));
	$assignStatic(RacyDeregister::notifyLock, $new($Object));
	$assignStatic(RacyDeregister::succTermination, nullptr);
}

RacyDeregister::RacyDeregister() {
}

$Class* RacyDeregister::load$($String* name, bool initialize) {
	$loadClass(RacyDeregister, name, initialize, &_RacyDeregister_ClassInfo_, clinit$RacyDeregister, allocate$RacyDeregister);
	return class$;
}

$Class* RacyDeregister::class$ = nullptr;