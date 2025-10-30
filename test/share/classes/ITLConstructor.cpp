#include <ITLConstructor.h>

#include <ITLConstructor$1.h>
#include <ITLConstructor$AnotherRunnable.h>
#include <java/lang/InheritableThreadLocal.h>
#include <java/lang/Runnable.h>
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
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $ThreadGroup = ::java::lang::ThreadGroup;

$FieldInfo _ITLConstructor_FieldInfo_[] = {
	{"n", "Ljava/lang/InheritableThreadLocal;", "Ljava/lang/InheritableThreadLocal<Ljava/lang/Integer;>;", $STATIC, $staticField(ITLConstructor, n)},
	{"CHILD_THREAD_COUNT", "I", nullptr, $STATIC | $FINAL, $constField(ITLConstructor, CHILD_THREAD_COUNT)},
	{}
};

$MethodInfo _ITLConstructor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ITLConstructor::*)()>(&ITLConstructor::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ITLConstructor::main)), "java.lang.Exception"},
	{"test", "(Z)V", nullptr, $STATIC, $method(static_cast<void(*)(bool)>(&ITLConstructor::test)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _ITLConstructor_InnerClassesInfo_[] = {
	{"ITLConstructor$AnotherRunnable", "ITLConstructor", "AnotherRunnable", $STATIC},
	{"ITLConstructor$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ITLConstructor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ITLConstructor",
	"java.lang.Object",
	nullptr,
	_ITLConstructor_FieldInfo_,
	_ITLConstructor_MethodInfo_,
	nullptr,
	nullptr,
	_ITLConstructor_InnerClassesInfo_,
	nullptr,
	nullptr,
	"ITLConstructor$AnotherRunnable,ITLConstructor$1"
};

$Object* allocate$ITLConstructor($Class* clazz) {
	return $of($alloc(ITLConstructor));
}

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
	$useLocalCurrentObjectStackCache();
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

void clinit$ITLConstructor($Class* class$) {
	$assignStatic(ITLConstructor::n, $new($ITLConstructor$1));
}

ITLConstructor::ITLConstructor() {
}

$Class* ITLConstructor::load$($String* name, bool initialize) {
	$loadClass(ITLConstructor, name, initialize, &_ITLConstructor_ClassInfo_, clinit$ITLConstructor, allocate$ITLConstructor);
	return class$;
}

$Class* ITLConstructor::class$ = nullptr;