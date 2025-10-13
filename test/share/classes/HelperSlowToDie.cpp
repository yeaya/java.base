#include <HelperSlowToDie.h>

#include <HelperSlowToDie$1.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/Runtime.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Runtime = ::java::lang::Runtime;
using $SelectableChannel = ::java::nio::channels::SelectableChannel;
using $SelectionKey = ::java::nio::channels::SelectionKey;
using $Selector = ::java::nio::channels::Selector;
using $SocketChannel = ::java::nio::channels::SocketChannel;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;
using $AbstractSelectableChannel = ::java::nio::channels::spi::AbstractSelectableChannel;

$FieldInfo _HelperSlowToDie_FieldInfo_[] = {
	{"CHANNELS_PER_THREAD", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(HelperSlowToDie, CHANNELS_PER_THREAD)},
	{"TEST_ITERATIONS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(HelperSlowToDie, TEST_ITERATIONS)},
	{"done", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(HelperSlowToDie, done)},
	{}
};

$MethodInfo _HelperSlowToDie_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HelperSlowToDie::*)()>(&HelperSlowToDie::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&HelperSlowToDie::main)), "java.io.IOException"},
	{}
};

$InnerClassInfo _HelperSlowToDie_InnerClassesInfo_[] = {
	{"HelperSlowToDie$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HelperSlowToDie_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HelperSlowToDie",
	"java.lang.Object",
	nullptr,
	_HelperSlowToDie_FieldInfo_,
	_HelperSlowToDie_MethodInfo_,
	nullptr,
	nullptr,
	_HelperSlowToDie_InnerClassesInfo_,
	nullptr,
	nullptr,
	"HelperSlowToDie$1"
};

$Object* allocate$HelperSlowToDie($Class* clazz) {
	return $of($alloc(HelperSlowToDie));
}

$volatile(bool) HelperSlowToDie::done = false;

void HelperSlowToDie::init$() {
}

void HelperSlowToDie::main($StringArray* args) {
	if (!$nc($($System::getProperty("os.name"_s)))->startsWith("Windows"_s)) {
		$init($System);
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
	int32_t ncores = $nc($($Runtime::getRuntime()))->availableProcessors();
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
	$loadClass(HelperSlowToDie, name, initialize, &_HelperSlowToDie_ClassInfo_, allocate$HelperSlowToDie);
	return class$;
}

$Class* HelperSlowToDie::class$ = nullptr;