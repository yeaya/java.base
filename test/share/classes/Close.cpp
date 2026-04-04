#include <Close.h>
#include <java/nio/channels/SelectableChannel.h>
#include <java/nio/channels/SelectionKey.h>
#include <java/nio/channels/Selector.h>
#include <java/nio/channels/SocketChannel.h>
#include <jcpp.h>

#undef OP_READ

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $SelectionKey = ::java::nio::channels::SelectionKey;
using $Selector = ::java::nio::channels::Selector;
using $SocketChannel = ::java::nio::channels::SocketChannel;

void Close::init$() {
}

$SelectionKey* Close::open() {
	$useLocalObjectStack();
	$var($SocketChannel, sc, $SocketChannel::open());
	$var($Selector, sel, $Selector::open());
	$nc(sc)->configureBlocking(false);
	return sc->register$(sel, $SelectionKey::OP_READ);
}

void Close::check($SelectionKey* sk) {
	if ($nc(sk)->isValid()) {
		$throwNew($RuntimeException, "Key still valid"_s);
	}
	if ($$nc(sk->channel())->isOpen()) {
		$throwNew($RuntimeException, "Channel still open"_s);
	}
}

void Close::testSocketClose() {
	$var($SelectionKey, sk, open());
	check(sk);
}

void Close::testChannelClose() {
	$useLocalObjectStack();
	$var($SelectionKey, sk, open());
	$var($Throwable, var$0, nullptr);
	try {
		$$nc($nc(sk)->channel())->close();
		check(sk);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$$nc($nc(sk)->selector())->close();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void Close::main($StringArray* args) {
	testChannelClose();
}

Close::Close() {
}

$Class* Close::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Close, init$, void)},
		{"check", "(Ljava/nio/channels/SelectionKey;)V", nullptr, $STATIC, $staticMethod(Close, check, void, $SelectionKey*), "java.io.IOException"},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Close, main, void, $StringArray*), "java.lang.Exception"},
		{"open", "()Ljava/nio/channels/SelectionKey;", nullptr, $STATIC, $staticMethod(Close, open, $SelectionKey*), "java.io.IOException"},
		{"testChannelClose", "()V", nullptr, $STATIC, $staticMethod(Close, testChannelClose, void), "java.io.IOException"},
		{"testSocketClose", "()V", nullptr, $STATIC, $staticMethod(Close, testSocketClose, void), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Close",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Close, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Close);
	});
	return class$;
}

$Class* Close::class$ = nullptr;