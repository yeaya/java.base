#include <WakeupNow.h>

#include <java/nio/channels/Pipe$SinkChannel.h>
#include <java/nio/channels/Pipe$SourceChannel.h>
#include <java/nio/channels/Pipe.h>
#include <java/nio/channels/SelectableChannel.h>
#include <java/nio/channels/SelectionKey.h>
#include <java/nio/channels/Selector.h>
#include <jcpp.h>

#undef OP_READ

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Pipe = ::java::nio::channels::Pipe;
using $Pipe$SinkChannel = ::java::nio::channels::Pipe$SinkChannel;
using $Pipe$SourceChannel = ::java::nio::channels::Pipe$SourceChannel;
using $SelectableChannel = ::java::nio::channels::SelectableChannel;
using $SelectionKey = ::java::nio::channels::SelectionKey;
using $Selector = ::java::nio::channels::Selector;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;
using $AbstractSelectableChannel = ::java::nio::channels::spi::AbstractSelectableChannel;

$MethodInfo _WakeupNow_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WakeupNow::*)()>(&WakeupNow::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&WakeupNow::main)), "java.lang.Exception"},
	{"test1", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&WakeupNow::test1)), "java.lang.Exception"},
	{"test2", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&WakeupNow::test2)), "java.lang.Exception"},
	{}
};

$ClassInfo _WakeupNow_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"WakeupNow",
	"java.lang.Object",
	nullptr,
	nullptr,
	_WakeupNow_MethodInfo_
};

$Object* allocate$WakeupNow($Class* clazz) {
	return $of($alloc(WakeupNow));
}

void WakeupNow::init$() {
}

void WakeupNow::main($StringArray* args) {
	test1();
	test2();
}

void WakeupNow::test1() {
	$useLocalCurrentObjectStackCache();
	$var($Selector, sel, $Selector::open());
	$var($Pipe, p, $Pipe::open());
	$nc($($nc(p)->source()))->configureBlocking(false);
	$nc($(p->source()))->register$(sel, $SelectionKey::OP_READ);
	$nc(sel)->wakeup();
	$Thread::sleep(2000);
	sel->selectNow();
	int64_t startTime = $System::currentTimeMillis();
	int32_t n = sel->select((int64_t)2000);
	int64_t endTime = $System::currentTimeMillis();
	$nc($(p->source()))->close();
	$nc($(p->sink()))->close();
	sel->close();
	if (endTime - startTime < 1000) {
		$throwNew($RuntimeException, "test failed"_s);
	}
}

void WakeupNow::test2() {
	$useLocalCurrentObjectStackCache();
	$var($Selector, sel, $Selector::open());
	$var($Pipe, p, $Pipe::open());
	$nc($($nc(p)->source()))->configureBlocking(false);
	$nc(sel)->wakeup();
	$Thread::sleep(2000);
	sel->selectNow();
	int64_t startTime = $System::currentTimeMillis();
	int32_t n = sel->select((int64_t)2000);
	int64_t endTime = $System::currentTimeMillis();
	sel->close();
	if (endTime - startTime < 1000) {
		$throwNew($RuntimeException, "test failed"_s);
	}
}

WakeupNow::WakeupNow() {
}

$Class* WakeupNow::load$($String* name, bool initialize) {
	$loadClass(WakeupNow, name, initialize, &_WakeupNow_ClassInfo_, allocate$WakeupNow);
	return class$;
}

$Class* WakeupNow::class$ = nullptr;