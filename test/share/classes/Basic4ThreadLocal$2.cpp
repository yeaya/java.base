#include <Basic4ThreadLocal$2.h>
#include <Basic4ThreadLocal.h>
#include <java/lang/ThreadLocal.h>
#include <jcpp.h>

using $Basic4ThreadLocal = ::Basic4ThreadLocal;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

void Basic4ThreadLocal$2::init$($ints* val$x) {
	$set(this, val$x, val$x);
	$Thread::init$();
}

void Basic4ThreadLocal$2::run() {
	$useLocalObjectStack();
	$init($Basic4ThreadLocal);
	int32_t threadId = $$cast($Integer, $nc($Basic4ThreadLocal::n)->get())->intValue();
	for (int32_t j = 0; j < threadId; ++j) {
		++(*$nc(this->val$x))[threadId];
		$($Thread::currentThread())->yield();
	}
}

Basic4ThreadLocal$2::Basic4ThreadLocal$2() {
}

$Class* Basic4ThreadLocal$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$x", "[I", nullptr, $FINAL | $SYNTHETIC, $field(Basic4ThreadLocal$2, val$x)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([I)V", nullptr, 0, $method(Basic4ThreadLocal$2, init$, void, $ints*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Basic4ThreadLocal$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Basic4ThreadLocal",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Basic4ThreadLocal$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Basic4ThreadLocal$2",
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
		"Basic4ThreadLocal"
	};
	$loadClass(Basic4ThreadLocal$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Basic4ThreadLocal$2);
	});
	return class$;
}

$Class* Basic4ThreadLocal$2::class$ = nullptr;