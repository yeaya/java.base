#include <ITLConstructor.h>
#include <ITLConstructor$1.h>
#include <ITLConstructor$AnotherRunnable.h>
#include <java/lang/InheritableThreadLocal.h>
#include <java/lang/ThreadGroup.h>
#include <jcpp.h>

#undef CHILD_THREAD_COUNT

using $ITLConstructor$1 = ::ITLConstructor$1;
using $ITLConstructor$AnotherRunnable = ::ITLConstructor$AnotherRunnable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InheritableThreadLocal = ::java::lang::InheritableThreadLocal;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadGroup = ::java::lang::ThreadGroup;

$InheritableThreadLocal* ITLConstructor::n = nullptr;

void ITLConstructor::init$() {
}

void ITLConstructor::main($StringArray* args) {
	$init(ITLConstructor);
	test(true);
	test(false);
}

void ITLConstructor::test(bool inherit) {
	$init(ITLConstructor);
	$useLocalObjectStack();
	$var($ints, x, $new($ints, ITLConstructor::CHILD_THREAD_COUNT));
	$var($ThreadGroup, var$0, $($Thread::currentThread())->getThreadGroup());
	$var($Thread, child, $new($Thread, var$0, $$new($ITLConstructor$AnotherRunnable, 0, x, inherit), $$str({"ITLConstructor-thread-"_s, $$str((0))}), 0, inherit));
	child->start();
	child->join();
	for (int32_t i = 0; i < ITLConstructor::CHILD_THREAD_COUNT; ++i) {
		int32_t expectedValue = 1;
		if (inherit) {
			expectedValue = i + 1;
		}
		if (x->get(i) != expectedValue) {
			$throw($$new($Exception, $$str({"Got x["_s, $$str(i), "] = "_s, $$str(x->get(i)), ", expected: "_s, $$str(expectedValue)})));
		}
	}
}

void ITLConstructor::clinit$($Class* clazz) {
	$assignStatic(ITLConstructor::n, $new($ITLConstructor$1));
}

ITLConstructor::ITLConstructor() {
}

$Class* ITLConstructor::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"n", "Ljava/lang/InheritableThreadLocal;", "Ljava/lang/InheritableThreadLocal<Ljava/lang/Integer;>;", $STATIC, $staticField(ITLConstructor, n)},
		{"CHILD_THREAD_COUNT", "I", nullptr, $STATIC | $FINAL, $constField(ITLConstructor, CHILD_THREAD_COUNT)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ITLConstructor, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ITLConstructor, main, void, $StringArray*), "java.lang.Exception"},
		{"test", "(Z)V", nullptr, $STATIC, $staticMethod(ITLConstructor, test, void, bool), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ITLConstructor$AnotherRunnable", "ITLConstructor", "AnotherRunnable", $STATIC},
		{"ITLConstructor$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ITLConstructor",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"ITLConstructor$AnotherRunnable,ITLConstructor$1"
	};
	$loadClass(ITLConstructor, name, initialize, &classInfo$$, ITLConstructor::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ITLConstructor);
	});
	return class$;
}

$Class* ITLConstructor::class$ = nullptr;