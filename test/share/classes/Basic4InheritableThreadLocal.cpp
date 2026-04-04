#include <Basic4InheritableThreadLocal.h>
#include <Basic4InheritableThreadLocal$1.h>
#include <Basic4InheritableThreadLocal$MyThread.h>
#include <java/lang/InheritableThreadLocal.h>
#include <jcpp.h>

using $Basic4InheritableThreadLocal$1 = ::Basic4InheritableThreadLocal$1;
using $Basic4InheritableThreadLocal$MyThread = ::Basic4InheritableThreadLocal$MyThread;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InheritableThreadLocal = ::java::lang::InheritableThreadLocal;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$InheritableThreadLocal* Basic4InheritableThreadLocal::n = nullptr;
int32_t Basic4InheritableThreadLocal::threadCount = 0;
$ints* Basic4InheritableThreadLocal::x = nullptr;

void Basic4InheritableThreadLocal::init$() {
}

void Basic4InheritableThreadLocal::main($StringArray* args) {
	$init(Basic4InheritableThreadLocal);
	$useLocalObjectStack();
	$assignStatic(Basic4InheritableThreadLocal::x, $new($ints, Basic4InheritableThreadLocal::threadCount));
	$var($Thread, progenitor, $new($Basic4InheritableThreadLocal$MyThread));
	progenitor->start();
	progenitor->join();
	for (int32_t i = 0; i < Basic4InheritableThreadLocal::threadCount; ++i) {
		if (Basic4InheritableThreadLocal::x->get(i) != i) {
			$throw($$new($Exception, $$str({"x["_s, $$str(i), "] ="_s, $$str(Basic4InheritableThreadLocal::x->get(i))})));
		}
	}
}

void Basic4InheritableThreadLocal::clinit$($Class* clazz) {
	$assignStatic(Basic4InheritableThreadLocal::n, $new($Basic4InheritableThreadLocal$1));
	Basic4InheritableThreadLocal::threadCount = 100;
}

Basic4InheritableThreadLocal::Basic4InheritableThreadLocal() {
}

$Class* Basic4InheritableThreadLocal::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"n", "Ljava/lang/InheritableThreadLocal;", nullptr, $STATIC, $staticField(Basic4InheritableThreadLocal, n)},
		{"threadCount", "I", nullptr, $STATIC, $staticField(Basic4InheritableThreadLocal, threadCount)},
		{"x", "[I", nullptr, $STATIC, $staticField(Basic4InheritableThreadLocal, x)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Basic4InheritableThreadLocal, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Basic4InheritableThreadLocal, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Basic4InheritableThreadLocal$MyThread", "Basic4InheritableThreadLocal", "MyThread", $PRIVATE | $STATIC},
		{"Basic4InheritableThreadLocal$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Basic4InheritableThreadLocal",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"Basic4InheritableThreadLocal$MyThread,Basic4InheritableThreadLocal$1"
	};
	$loadClass(Basic4InheritableThreadLocal, name, initialize, &classInfo$$, Basic4InheritableThreadLocal::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Basic4InheritableThreadLocal);
	});
	return class$;
}

$Class* Basic4InheritableThreadLocal::class$ = nullptr;