#include <ITLConstructor$AnotherRunnable.h>
#include <ITLConstructor.h>
#include <java/lang/InheritableThreadLocal.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/ThreadLocal.h>
#include <jcpp.h>

using $ITLConstructor = ::ITLConstructor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ThreadGroup = ::java::lang::ThreadGroup;

void ITLConstructor$AnotherRunnable::init$(int32_t threadId, $ints* x, bool inherit) {
	this->threadId = threadId;
	$set(this, x, x);
	this->inherit = inherit;
}

void ITLConstructor$AnotherRunnable::run() {
	$useLocalObjectStack();
	$init($ITLConstructor);
	int32_t itlValue = $$sure($Integer, $nc($ITLConstructor::n)->get())->intValue();
	if (this->threadId < 10 - 1) {
		$var($ThreadGroup, var$0, $($Thread::currentThread())->getThreadGroup());
		$var($Thread, child, $new($Thread, var$0, $$new(ITLConstructor$AnotherRunnable, this->threadId + 1, this->x, this->inherit), $$str({"ITLConstructor-thread-"_s, $$str((this->threadId + 1))}), 0, this->inherit));
		child->start();
		try {
			child->join();
		} catch ($InterruptedException& e) {
			$throw($$new($RuntimeException, "Interrupted"_s, e));
		}
	}
	$nc(this->x)->set(this->threadId, itlValue + 1);
}

ITLConstructor$AnotherRunnable::ITLConstructor$AnotherRunnable() {
}

$Class* ITLConstructor$AnotherRunnable::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"threadId", "I", nullptr, $FINAL, $field(ITLConstructor$AnotherRunnable, threadId)},
		{"x", "[I", nullptr, $FINAL, $field(ITLConstructor$AnotherRunnable, x)},
		{"inherit", "Z", nullptr, $FINAL, $field(ITLConstructor$AnotherRunnable, inherit)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I[IZ)V", nullptr, 0, $method(ITLConstructor$AnotherRunnable, init$, void, int32_t, $ints*, bool)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(ITLConstructor$AnotherRunnable, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ITLConstructor$AnotherRunnable", "ITLConstructor", "AnotherRunnable", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ITLConstructor$AnotherRunnable",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"ITLConstructor"
	};
	$loadClass(ITLConstructor$AnotherRunnable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ITLConstructor$AnotherRunnable);
	});
	return class$;
}

$Class* ITLConstructor$AnotherRunnable::class$ = nullptr;