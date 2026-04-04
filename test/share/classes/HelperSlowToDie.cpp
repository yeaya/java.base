#include <HelperSlowToDie.h>
#include <HelperSlowToDie$1.h>
#include <java/lang/Runnable.h>
#include <java/lang/Runtime.h>
#include <java/nio/channels/SelectableChannel.h>
#include <java/nio/channels/SelectionKey.h>
#include <java/nio/channels/Selector.h>
#include <java/nio/channels/SocketChannel.h>
#include <jcpp.h>

#undef CHANNELS_PER_THREAD
#undef OP_CONNECT
#undef TEST_ITERATIONS

using $HelperSlowToDie$1 = ::HelperSlowToDie$1;
using $SocketChannelArray = $Array<::java::nio::channels::SocketChannel>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Runtime = ::java::lang::Runtime;
using $SelectionKey = ::java::nio::channels::SelectionKey;
using $Selector = ::java::nio::channels::Selector;
using $SocketChannel = ::java::nio::channels::SocketChannel;

$volatile(bool) HelperSlowToDie::done = false;

void HelperSlowToDie::init$() {
}

void HelperSlowToDie::main($StringArray* args) {
	$useLocalObjectStack();
	if (!$$nc($System::getProperty("os.name"_s))->startsWith("Windows"_s)) {
		$nc($System::out)->println("Test skipped as it verifies a Windows specific bug"_s);
		return;
	}
	$var($Selector, sel, $Selector::open());
	$var($SocketChannelArray, channels, $new($SocketChannelArray, HelperSlowToDie::CHANNELS_PER_THREAD));
	for (int32_t i = 0; i < HelperSlowToDie::CHANNELS_PER_THREAD; ++i) {
		$var($SocketChannel, sc, $SocketChannel::open());
		$nc(sc)->configureBlocking(false);
		sc->register$(sel, $SelectionKey::OP_CONNECT);
		channels->set(i, sc);
	}
	$nc(sel)->selectNow();
	$var($Runnable, busy, $new($HelperSlowToDie$1));
	int32_t ncores = $$nc($Runtime::getRuntime())->availableProcessors();
	for (int32_t i = 0; i < ncores - 1; ++i) {
		$$new($Thread, busy)->start();
	}
	for (int32_t i = 0; i < HelperSlowToDie::TEST_ITERATIONS; ++i) {
		$var($SocketChannel, sc, $SocketChannel::open());
		$nc(sc)->configureBlocking(false);
		sc->register$(sel, $SelectionKey::OP_CONNECT);
		sel->selectNow();
		sc->close();
		sel->selectNow();
	}
	$init(HelperSlowToDie);
	HelperSlowToDie::done = true;
	for (int32_t i = 0; i < HelperSlowToDie::CHANNELS_PER_THREAD; ++i) {
		$nc(channels->get(i))->close();
	}
	sel->close();
}

HelperSlowToDie::HelperSlowToDie() {
}

$Class* HelperSlowToDie::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"CHANNELS_PER_THREAD", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(HelperSlowToDie, CHANNELS_PER_THREAD)},
		{"TEST_ITERATIONS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(HelperSlowToDie, TEST_ITERATIONS)},
		{"done", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(HelperSlowToDie, done)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HelperSlowToDie, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(HelperSlowToDie, main, void, $StringArray*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"HelperSlowToDie$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"HelperSlowToDie",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"HelperSlowToDie$1"
	};
	$loadClass(HelperSlowToDie, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HelperSlowToDie);
	});
	return class$;
}

$Class* HelperSlowToDie::class$ = nullptr;