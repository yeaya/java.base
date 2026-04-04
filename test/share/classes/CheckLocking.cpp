#include <CheckLocking.h>
#include <java/nio/channels/SelectableChannel.h>
#include <java/nio/channels/SelectionKey.h>
#include <java/nio/channels/Selector.h>
#include <java/nio/channels/SocketChannel.h>
#include <java/nio/channels/spi/AbstractSelector.h>
#include <java/nio/channels/spi/SelectorProvider.h>
#include <jcpp.h>

#undef OP_READ

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SelectionKey = ::java::nio::channels::SelectionKey;
using $Selector = ::java::nio::channels::Selector;
using $SocketChannel = ::java::nio::channels::SocketChannel;
using $SelectorProvider = ::java::nio::channels::spi::SelectorProvider;

$Selector* CheckLocking::selector = nullptr;

void CheckLocking::init$() {
}

void CheckLocking::run() {
	try {
		$nc(CheckLocking::selector)->select();
	} catch ($Throwable& th) {
		th->printStackTrace();
	}
}

void CheckLocking::doSelect() {
	$init(CheckLocking);
	$useLocalObjectStack();
	$var($Thread, thread, $new($Thread, $$new(CheckLocking)));
	thread->start();
	$Thread::sleep(1000);
}

void CheckLocking::main($StringArray* args) {
	$init(CheckLocking);
	$useLocalObjectStack();
	$assignStatic(CheckLocking::selector, $$nc($SelectorProvider::provider())->openSelector());
	$var($SocketChannel, sc, $SocketChannel::open());
	$nc(sc)->configureBlocking(false);
	$var($SelectionKey, sk, sc->register$(CheckLocking::selector, 0, nullptr));
	doSelect();
	$nc(sk)->interestOps($SelectionKey::OP_READ);
	$nc(CheckLocking::selector)->wakeup();
	sc->close();
	$nc(CheckLocking::selector)->close();
}

CheckLocking::CheckLocking() {
}

$Class* CheckLocking::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"selector", "Ljava/nio/channels/Selector;", nullptr, $PRIVATE | $STATIC, $staticField(CheckLocking, selector)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CheckLocking, init$, void)},
		{"doSelect", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(CheckLocking, doSelect, void), "java.lang.Exception"},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(CheckLocking, main, void, $StringArray*), "java.lang.Exception"},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(CheckLocking, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"CheckLocking",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CheckLocking, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CheckLocking);
	});
	return class$;
}

$Class* CheckLocking::class$ = nullptr;