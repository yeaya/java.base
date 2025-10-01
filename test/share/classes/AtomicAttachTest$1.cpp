#include <AtomicAttachTest$1.h>

#include <AtomicAttachTest.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/channels/SelectionKey.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <jcpp.h>

using $AtomicAttachTest = ::AtomicAttachTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SelectionKey = ::java::nio::channels::SelectionKey;
using $AtomicBoolean = ::java::util::concurrent::atomic::AtomicBoolean;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;

$FieldInfo _AtomicAttachTest$1_FieldInfo_[] = {
	{"val$errorCount", "Ljava/util/concurrent/atomic/AtomicInteger;", nullptr, $FINAL | $SYNTHETIC, $field(AtomicAttachTest$1, val$errorCount)},
	{"val$key", "Ljava/nio/channels/SelectionKey;", nullptr, $FINAL | $SYNTHETIC, $field(AtomicAttachTest$1, val$key)},
	{}
};

$MethodInfo _AtomicAttachTest$1_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/channels/SelectionKey;Ljava/util/concurrent/atomic/AtomicInteger;)V", nullptr, 0, $method(static_cast<void(AtomicAttachTest$1::*)($SelectionKey*,$AtomicInteger*)>(&AtomicAttachTest$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AtomicAttachTest$1_EnclosingMethodInfo_ = {
	"AtomicAttachTest",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _AtomicAttachTest$1_InnerClassesInfo_[] = {
	{"AtomicAttachTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AtomicAttachTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"AtomicAttachTest$1",
	"java.lang.Thread",
	nullptr,
	_AtomicAttachTest$1_FieldInfo_,
	_AtomicAttachTest$1_MethodInfo_,
	nullptr,
	&_AtomicAttachTest$1_EnclosingMethodInfo_,
	_AtomicAttachTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"AtomicAttachTest"
};

$Object* allocate$AtomicAttachTest$1($Class* clazz) {
	return $of($alloc(AtomicAttachTest$1));
}

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
		if (var$0 || !$nc(att)->compareAndSet(true, false)) {
			$nc(this->val$errorCount)->incrementAndGet();
		}
	}
}

AtomicAttachTest$1::AtomicAttachTest$1() {
}

$Class* AtomicAttachTest$1::load$($String* name, bool initialize) {
	$loadClass(AtomicAttachTest$1, name, initialize, &_AtomicAttachTest$1_ClassInfo_, allocate$AtomicAttachTest$1);
	return class$;
}

$Class* AtomicAttachTest$1::class$ = nullptr;