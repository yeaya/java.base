#include <CloseThenRegister.h>
#include <java/net/InetSocketAddress.h>
#include <java/nio/channels/ClosedSelectorException.h>
#include <java/nio/channels/NetworkChannel.h>
#include <java/nio/channels/SelectableChannel.h>
#include <java/nio/channels/SelectionKey.h>
#include <java/nio/channels/Selector.h>
#include <java/nio/channels/ServerSocketChannel.h>
#include <jcpp.h>

#undef OP_ACCEPT

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $ClosedSelectorException = ::java::nio::channels::ClosedSelectorException;
using $SelectionKey = ::java::nio::channels::SelectionKey;
using $Selector = ::java::nio::channels::Selector;
using $ServerSocketChannel = ::java::nio::channels::ServerSocketChannel;

void CloseThenRegister::init$() {
}

void CloseThenRegister::main($StringArray* args) {
	$useLocalObjectStack();
	$var($Selector, sel, $Selector::open());
	$nc(sel)->close();
	$var($ServerSocketChannel, ssc, $ServerSocketChannel::open());
	$var($Throwable, var$0, nullptr);
	try {
		try {
			$nc(ssc)->bind($$new($InetSocketAddress, 0));
			ssc->configureBlocking(false);
			ssc->register$(sel, $SelectionKey::OP_ACCEPT);
			$throwNew($RuntimeException, "register after close does not cause CSE!"_s);
		} catch ($ClosedSelectorException& cse) {
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$nc(ssc)->close();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

CloseThenRegister::CloseThenRegister() {
}

$Class* CloseThenRegister::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CloseThenRegister, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(CloseThenRegister, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"CloseThenRegister",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CloseThenRegister, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CloseThenRegister);
	});
	return class$;
}

$Class* CloseThenRegister::class$ = nullptr;