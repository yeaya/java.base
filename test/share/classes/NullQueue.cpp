#include <NullQueue.h>
#include <NullQueue$1.h>
#include <java/lang/Runnable.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/ref/Reference.h>
#include <jcpp.h>

using $NullQueue$1 = ::NullQueue$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $Reference = ::java::lang::ref::Reference;

$Reference* NullQueue::r = nullptr;

void NullQueue::init$() {
}

$Thread* NullQueue::findThread($String* name) {
	$init(NullQueue);
	$useLocalObjectStack();
	$var($ThreadGroup, tg, $($Thread::currentThread())->getThreadGroup());
	{
		$var($ThreadGroup, tgn, tg);
		for (; tgn != nullptr; $assign(tg, tgn), $assign(tgn, tg->getParent())) {
			;
		}
	}
	int32_t nt = $nc(tg)->activeCount();
	$var($ThreadArray, ts, $new($ThreadArray, nt));
	tg->enumerate(ts);
	$var($Thread, refHandler, nullptr);
	for (int32_t i = 0; i < ts->length; ++i) {
		if ($$nc($nc(ts->get(i))->getName())->equals(name)) {
			return ts->get(i);
		}
	}
	return nullptr;
}

void NullQueue::fork($Runnable* proc) {
	$init(NullQueue);
	$var($Thread, t, $new($Thread, proc));
	t->start();
	t->join();
}

void NullQueue::main($StringArray* args) {
	$init(NullQueue);
	$useLocalObjectStack();
	$var($Thread, refHandler, findThread("Reference Handler"_s));
	if (refHandler == nullptr) {
		$throwNew($Exception, "Couldn\'t find Reference-handler thread"_s);
	}
	if (!$nc(refHandler)->isAlive()) {
		$throwNew($Exception, "Reference-handler thread is not alive"_s);
	}
	fork($$new($NullQueue$1));
	for (int32_t i = 0;; ++i) {
		$Thread::sleep(10);
		$System::gc();
		if ($nc(NullQueue::r)->get() == nullptr) {
			break;
		}
		if (i >= 10) {
			$throwNew($Exception, "Couldn\'t cause weak ref to be cleared"_s);
		}
	}
	if (!refHandler->isAlive()) {
		$throwNew($Exception, "Reference-handler thread died"_s);
	}
}

void NullQueue::clinit$($Class* clazz) {
	$assignStatic(NullQueue::r, nullptr);
}

NullQueue::NullQueue() {
}

$Class* NullQueue::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"r", "Ljava/lang/ref/Reference;", nullptr, $PRIVATE | $STATIC, $staticField(NullQueue, r)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(NullQueue, init$, void)},
		{"findThread", "(Ljava/lang/String;)Ljava/lang/Thread;", nullptr, $PRIVATE | $STATIC, $staticMethod(NullQueue, findThread, $Thread*, $String*)},
		{"fork", "(Ljava/lang/Runnable;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(NullQueue, fork, void, $Runnable*), "java.lang.InterruptedException"},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(NullQueue, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"NullQueue$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"NullQueue",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"NullQueue$1"
	};
	$loadClass(NullQueue, name, initialize, &classInfo$$, NullQueue::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(NullQueue);
	});
	return class$;
}

$Class* NullQueue::class$ = nullptr;