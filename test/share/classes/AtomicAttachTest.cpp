#include <AtomicAttachTest.h>
#include <AtomicAttachTest$1.h>
#include <java/nio/channels/Pipe$SinkChannel.h>
#include <java/nio/channels/Pipe$SourceChannel.h>
#include <java/nio/channels/Pipe.h>
#include <java/nio/channels/SelectableChannel.h>
#include <java/nio/channels/SelectionKey.h>
#include <java/nio/channels/Selector.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <jcpp.h>

using $AtomicAttachTest$1 = ::AtomicAttachTest$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Pipe = ::java::nio::channels::Pipe;
using $SelectableChannel = ::java::nio::channels::SelectableChannel;
using $SelectionKey = ::java::nio::channels::SelectionKey;
using $Selector = ::java::nio::channels::Selector;
using $AtomicBoolean = ::java::util::concurrent::atomic::AtomicBoolean;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;

void AtomicAttachTest::init$() {
}

void AtomicAttachTest::main($StringArray* args) {
	$useLocalObjectStack();
	$var($Selector, selector, $Selector::open());
	$var($Pipe, pipe, $Pipe::open());
	$var($SelectableChannel, channel, $$nc($nc(pipe)->sink())->configureBlocking(false));
	$var($SelectionKey, key, $nc(channel)->register$(selector, 0));
	$nc(key)->attach($$new($AtomicBoolean));
	$var($AtomicInteger, errorCount, $new($AtomicInteger));
	$var($Thread, t, $new($AtomicAttachTest$1, key, errorCount));
	t->join();
	$$nc(pipe->sink())->close();
	$$nc(pipe->source())->close();
	$nc(selector)->close();
	int32_t count = errorCount->get();
	if (count > 0) {
		$throwNew($RuntimeException, $$str({"Error count:"_s, $$str(count)}));
	}
}

AtomicAttachTest::AtomicAttachTest() {
}

$Class* AtomicAttachTest::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AtomicAttachTest, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(AtomicAttachTest, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"AtomicAttachTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"AtomicAttachTest",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"AtomicAttachTest$1"
	};
	$loadClass(AtomicAttachTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AtomicAttachTest);
	});
	return class$;
}

$Class* AtomicAttachTest::class$ = nullptr;