#include <CheckLocking.h>

#include <java/lang/Runnable.h>
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
using $Runnable = ::java::lang::Runnable;
using $SelectableChannel = ::java::nio::channels::SelectableChannel;
using $SelectionKey = ::java::nio::channels::SelectionKey;
using $Selector = ::java::nio::channels::Selector;
using $SocketChannel = ::java::nio::channels::SocketChannel;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;
using $AbstractSelectableChannel = ::java::nio::channels::spi::AbstractSelectableChannel;
using $AbstractSelector = ::java::nio::channels::spi::AbstractSelector;
using $SelectorProvider = ::java::nio::channels::spi::SelectorProvider;

$FieldInfo _CheckLocking_FieldInfo_[] = {
	{"selector", "Ljava/nio/channels/Selector;", nullptr, $PRIVATE | $STATIC, $staticField(CheckLocking, selector)},
	{}
};

$MethodInfo _CheckLocking_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CheckLocking::*)()>(&CheckLocking::init$))},
	{"doSelect", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&CheckLocking::doSelect)), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&CheckLocking::main)), "java.lang.Exception"},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CheckLocking_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"CheckLocking",
	"java.lang.Object",
	"java.lang.Runnable",
	_CheckLocking_FieldInfo_,
	_CheckLocking_MethodInfo_
};

$Object* allocate$CheckLocking($Class* clazz) {
	return $of($alloc(CheckLocking));
}

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
	$useLocalCurrentObjectStackCache();
	$var($Thread, thread, $new($Thread, static_cast<$Runnable*>($$new(CheckLocking))));
	thread->start();
	$Thread::sleep(1000);
}

void CheckLocking::main($StringArray* args) {
	$init(CheckLocking);
	$useLocalCurrentObjectStackCache();
	$assignStatic(CheckLocking::selector, $nc($($SelectorProvider::provider()))->openSelector());
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
	$loadClass(CheckLocking, name, initialize, &_CheckLocking_ClassInfo_, allocate$CheckLocking);
	return class$;
}

$Class* CheckLocking::class$ = nullptr;