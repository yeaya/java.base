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
using $Pipe$SinkChannel = ::java::nio::channels::Pipe$SinkChannel;
using $Pipe$SourceChannel = ::java::nio::channels::Pipe$SourceChannel;
using $SelectableChannel = ::java::nio::channels::SelectableChannel;
using $SelectionKey = ::java::nio::channels::SelectionKey;
using $Selector = ::java::nio::channels::Selector;
using $AtomicBoolean = ::java::util::concurrent::atomic::AtomicBoolean;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;

$MethodInfo _AtomicAttachTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AtomicAttachTest::*)()>(&AtomicAttachTest::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&AtomicAttachTest::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _AtomicAttachTest_InnerClassesInfo_[] = {
	{"AtomicAttachTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AtomicAttachTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"AtomicAttachTest",
	"java.lang.Object",
	nullptr,
	nullptr,
	_AtomicAttachTest_MethodInfo_,
	nullptr,
	nullptr,
	_AtomicAttachTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"AtomicAttachTest$1"
};

$Object* allocate$AtomicAttachTest($Class* clazz) {
	return $of($alloc(AtomicAttachTest));
}

void AtomicAttachTest::init$() {
}

void AtomicAttachTest::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($Selector, selector, $Selector::open());
	$var($Pipe, pipe, $Pipe::open());
	$var($SelectableChannel, channel, $nc($($nc(pipe)->sink()))->configureBlocking(false));
	$var($SelectionKey, key, $nc(channel)->register$(selector, 0));
	$nc(key)->attach($$new($AtomicBoolean));
	$var($AtomicInteger, errorCount, $new($AtomicInteger));
	$var($Thread, t, $new($AtomicAttachTest$1, key, errorCount));
	t->join();
	$nc($(pipe->sink()))->close();
	$nc($(pipe->source()))->close();
	$nc(selector)->close();
	int32_t count = errorCount->get();
	if (count > 0) {
		$throwNew($RuntimeException, $$str({"Error count:"_s, $$str(count)}));
	}
}

AtomicAttachTest::AtomicAttachTest() {
}

$Class* AtomicAttachTest::load$($String* name, bool initialize) {
	$loadClass(AtomicAttachTest, name, initialize, &_AtomicAttachTest_ClassInfo_, allocate$AtomicAttachTest);
	return class$;
}

$Class* AtomicAttachTest::class$ = nullptr;