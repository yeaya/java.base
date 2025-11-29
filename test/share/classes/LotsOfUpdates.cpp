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

$MethodInfo _LotsOfUpdates_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LotsOfUpdates::*)()>(&LotsOfUpdates::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&LotsOfUpdates::main)), "java.io.IOException"},
	{}
};

$ClassInfo _LotsOfUpdates_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"LotsOfUpdates",
	"java.lang.Object",
	nullptr,
	nullptr,
	_LotsOfUpdates_MethodInfo_
};

$Object* allocate$LotsOfUpdates($Class* clazz) {
	return $of($alloc(LotsOfUpdates));
}

void LotsOfUpdates::init$() {
}

void LotsOfUpdates::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($Selector, sel, $Selector::open());
	$var($SocketChannel, sc, $SocketChannel::open());
	$nc(sc)->configureBlocking(false);
	$var($SelectionKey, key, sc->register$(sel, 0));
	for (int32_t i = 0; i < 0x0000C350; ++i) {
		$nc(key)->interestOps(0);
	}
	$nc(sel)->selectNow();
}

LotsOfUpdates::LotsOfUpdates() {
}

$Class* LotsOfUpdates::load$($String* name, bool initialize) {
	$loadClass(LotsOfUpdates, name, initialize, &_LotsOfUpdates_ClassInfo_, allocate$LotsOfUpdates);
	return class$;
}

$Class* LotsOfUpdates::class$ = nullptr;