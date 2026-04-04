#include <LotsOfUpdates.h>
#include <java/nio/channels/SelectableChannel.h>
#include <java/nio/channels/SelectionKey.h>
#include <java/nio/channels/Selector.h>
#include <java/nio/channels/SocketChannel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SelectionKey = ::java::nio::channels::SelectionKey;
using $Selector = ::java::nio::channels::Selector;
using $SocketChannel = ::java::nio::channels::SocketChannel;

void LotsOfUpdates::init$() {
}

void LotsOfUpdates::main($StringArray* args) {
	$useLocalObjectStack();
	$var($Selector, sel, $Selector::open());
	$var($SocketChannel, sc, $SocketChannel::open());
	$nc(sc)->configureBlocking(false);
	$var($SelectionKey, key, sc->register$(sel, 0));
	for (int32_t i = 0; i < 50000; ++i) {
		$nc(key)->interestOps(0);
	}
	$nc(sel)->selectNow();
}

LotsOfUpdates::LotsOfUpdates() {
}

$Class* LotsOfUpdates::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LotsOfUpdates, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(LotsOfUpdates, main, void, $StringArray*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"LotsOfUpdates",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LotsOfUpdates, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LotsOfUpdates);
	});
	return class$;
}

$Class* LotsOfUpdates::class$ = nullptr;