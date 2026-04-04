#include <AtomicAttachTest$1.h>
#include <AtomicAttachTest.h>
#include <java/nio/channels/SelectionKey.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SelectionKey = ::java::nio::channels::SelectionKey;
using $AtomicBoolean = ::java::util::concurrent::atomic::AtomicBoolean;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;

void AtomicAttachTest$1::init$($SelectionKey* val$key, $AtomicInteger* val$errorCount) {
	$set(this, val$key, val$key);
	$set(this, val$errorCount, val$errorCount);
	$Thread::init$();
	{
		start();
		run();
	}
}

void AtomicAttachTest$1::run() {
	$var($AtomicBoolean, att, $new($AtomicBoolean));
	for (int32_t i = 0; i < (100 * 1000); ++i) {
		$assign(att, $cast($AtomicBoolean, $nc(this->val$key)->attach(att)));
		bool var$0 = !$nc(att)->compareAndSet(false, true);
		if (var$0 || !att->compareAndSet(true, false)) {
			$nc(this->val$errorCount)->incrementAndGet();
		}
	}
}

AtomicAttachTest$1::AtomicAttachTest$1() {
}

$Class* AtomicAttachTest$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$errorCount", "Ljava/util/concurrent/atomic/AtomicInteger;", nullptr, $FINAL | $SYNTHETIC, $field(AtomicAttachTest$1, val$errorCount)},
		{"val$key", "Ljava/nio/channels/SelectionKey;", nullptr, $FINAL | $SYNTHETIC, $field(AtomicAttachTest$1, val$key)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/channels/SelectionKey;Ljava/util/concurrent/atomic/AtomicInteger;)V", nullptr, 0, $method(AtomicAttachTest$1, init$, void, $SelectionKey*, $AtomicInteger*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(AtomicAttachTest$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"AtomicAttachTest",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"AtomicAttachTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"AtomicAttachTest$1",
		"java.lang.Thread",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"AtomicAttachTest"
	};
	$loadClass(AtomicAttachTest$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AtomicAttachTest$1);
	});
	return class$;
}

$Class* AtomicAttachTest$1::class$ = nullptr;