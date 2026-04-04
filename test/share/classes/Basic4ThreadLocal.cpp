#include <Basic4ThreadLocal.h>
#include <Basic4ThreadLocal$1.h>
#include <Basic4ThreadLocal$2.h>
#include <java/lang/ThreadLocal.h>
#include <jcpp.h>

using $Basic4ThreadLocal$1 = ::Basic4ThreadLocal$1;
using $Basic4ThreadLocal$2 = ::Basic4ThreadLocal$2;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadLocal = ::java::lang::ThreadLocal;

$ThreadLocal* Basic4ThreadLocal::n = nullptr;

void Basic4ThreadLocal::init$() {
}

void Basic4ThreadLocal::main($StringArray* args) {
	$init(Basic4ThreadLocal);
	$useLocalObjectStack();
	int32_t threadCount = 100;
	$var($ThreadArray, th, $new($ThreadArray, threadCount));
	$var($ints, x, $new($ints, threadCount));
	for (int32_t i = 0; i < threadCount; ++i) {
		th->set(i, $$new($Basic4ThreadLocal$2, x));
		$nc(th->get(i))->start();
	}
	for (int32_t i = 0; i < threadCount; ++i) {
		$nc(th->get(i))->join();
	}
	for (int32_t i = 0; i < threadCount; ++i) {
		if (x->get(i) != i) {
			$throw($$new($Exception, $$str({"x["_s, $$str(i), "] ="_s, $$str(x->get(i))})));
		}
	}
}

void Basic4ThreadLocal::clinit$($Class* clazz) {
	$assignStatic(Basic4ThreadLocal::n, $new($Basic4ThreadLocal$1));
}

Basic4ThreadLocal::Basic4ThreadLocal() {
}

$Class* Basic4ThreadLocal::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"n", "Ljava/lang/ThreadLocal;", nullptr, $STATIC, $staticField(Basic4ThreadLocal, n)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Basic4ThreadLocal, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Basic4ThreadLocal, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Basic4ThreadLocal$2", nullptr, nullptr, 0},
		{"Basic4ThreadLocal$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Basic4ThreadLocal",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"Basic4ThreadLocal$2,Basic4ThreadLocal$1"
	};
	$loadClass(Basic4ThreadLocal, name, initialize, &classInfo$$, Basic4ThreadLocal::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Basic4ThreadLocal);
	});
	return class$;
}

$Class* Basic4ThreadLocal::class$ = nullptr;