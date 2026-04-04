#include <RacyDeregister.h>
#include <RacyDeregister$1.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/ServerSocket.h>
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
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $SelectionKey = ::java::nio::channels::SelectionKey;
using $Selector = ::java::nio::channels::Selector;
using $ServerSocketChannel = ::java::nio::channels::ServerSocketChannel;
using $SocketChannel = ::java::nio::channels::SocketChannel;

int64_t RacyDeregister::t0 = 0;
bool RacyDeregister::notified = false;
$Object* RacyDeregister::selectorLock = nullptr;
$Object* RacyDeregister::notifyLock = nullptr;
$volatile($Boolean*) RacyDeregister::succTermination = nullptr;

void RacyDeregister::init$() {
}

void RacyDeregister::main($StringArray* args) {
	$init(RacyDeregister);
	$useLocalObjectStack();
	RacyDeregister::t0 = $System::currentTimeMillis();
	$var($InetAddress, addr, $InetAddress::getByName(nullptr));
	$var($ServerSocketChannel, sc, $ServerSocketChannel::open());
	$$nc($nc(sc)->socket())->bind($$new($InetSocketAddress, addr, 0));
	$SocketChannel::open($$new($InetSocketAddress, addr, $$nc(sc->socket())->getLocalPort()));
	$var($SocketChannel, accepted, sc->accept());
	$nc(accepted)->configureBlocking(false);
	$SocketChannel::open($$new($InetSocketAddress, addr, $$nc(sc->socket())->getLocalPort()));
	$var($SocketChannel, accepted2, sc->accept());
	$nc(accepted2)->configureBlocking(false);
	$var($Selector, sel, $Selector::open());
	$var($SelectionKey, key2, accepted2->register$(sel, $SelectionKey::OP_READ));
	$var($SelectionKeyArray, key, $new($SelectionKeyArray, {$(accepted->register$(sel, $SelectionKey::OP_READ))}));
	$$new($RacyDeregister$1, sel, key)->start();
	while (true) {
		$nc(sel)->select();
		if ($nc($Boolean::TRUE)->equals(RacyDeregister::succTermination)) {
			$nc($System::out)->println("Test passed"_s);
			$System::out->flush();
			sel->close();
			sc->close();
			break;
		} else if ($nc($Boolean::FALSE)->equals(RacyDeregister::succTermination)) {
			$nc($System::err)->println("Failed to pass the test"_s);
			$System::err->flush();
			sel->close();
			sc->close();
			$throwNew($RuntimeException, "Failed to pass the test"_s);
		}
		$synchronized(RacyDeregister::selectorLock) {
		}
		bool var$0 = $$nc(sel->selectedKeys())->contains(key->get(0));
		if (var$0 && $nc(key->get(0))->isWritable()) {
			$synchronized(RacyDeregister::notifyLock) {
				RacyDeregister::notified = true;
				RacyDeregister::notifyLock->notify();
				$nc(key->get(0))->cancel();
				sel->selectNow();
				$assign(key2, accepted2->register$(sel, $SelectionKey::OP_READ));
				key->set(0, $(accepted->register$(sel, $SelectionKey::OP_READ)));
			}
		}
		$nc(key2)->cancel();
		$$nc(sel->selectedKeys())->clear();
	}
}

void RacyDeregister::clinit$($Class* clazz) {
	$assignStatic(RacyDeregister::selectorLock, $new($Object));
	$assignStatic(RacyDeregister::notifyLock, $new($Object));
	$assignStatic(RacyDeregister::succTermination, nullptr);
}

RacyDeregister::RacyDeregister() {
}

$Class* RacyDeregister::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"TIMEOUT_THRESHOLD_MILLIS", "I", nullptr, $STATIC | $FINAL, $constField(RacyDeregister, TIMEOUT_THRESHOLD_MILLIS)},
		{"t0", "J", nullptr, $STATIC, $staticField(RacyDeregister, t0)},
		{"notified", "Z", nullptr, $STATIC, $staticField(RacyDeregister, notified)},
		{"selectorLock", "Ljava/lang/Object;", nullptr, $STATIC | $FINAL, $staticField(RacyDeregister, selectorLock)},
		{"notifyLock", "Ljava/lang/Object;", nullptr, $STATIC | $FINAL, $staticField(RacyDeregister, notifyLock)},
		{"succTermination", "Ljava/lang/Boolean;", nullptr, $STATIC | $VOLATILE, $staticField(RacyDeregister, succTermination)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(RacyDeregister, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(RacyDeregister, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"RacyDeregister$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"RacyDeregister",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"RacyDeregister$1"
	};
	$loadClass(RacyDeregister, name, initialize, &classInfo$$, RacyDeregister::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(RacyDeregister);
	});
	return class$;
}

$Class* RacyDeregister::class$ = nullptr;