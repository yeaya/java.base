#include <ITLRemoveTest.h>
#include <ITLRemoveTest$1.h>
#include <ITLRemoveTest$MyThread.h>
#include <java/lang/InheritableThreadLocal.h>
#include <jcpp.h>

#undef INITIAL_VALUE
#undef REMOVE_SET_VALUE

using $ITLRemoveTest$1 = ::ITLRemoveTest$1;
using $ITLRemoveTest$MyThread = ::ITLRemoveTest$MyThread;
using $ThrowableArray = $Array<::java::lang::Throwable>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InheritableThreadLocal = ::java::lang::InheritableThreadLocal;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$InheritableThreadLocal* ITLRemoveTest::n = nullptr;
int32_t ITLRemoveTest::threadCount = 0;
$ints* ITLRemoveTest::x = nullptr;
$ThrowableArray* ITLRemoveTest::exceptions = nullptr;
$ints* ITLRemoveTest::removeNode = nullptr;
$ints* ITLRemoveTest::removeAndSet = nullptr;

void ITLRemoveTest::init$() {
}

void ITLRemoveTest::main($StringArray* args) {
	$init(ITLRemoveTest);
	$useLocalObjectStack();
	$assignStatic(ITLRemoveTest::x, $new($ints, ITLRemoveTest::threadCount));
	$assignStatic(ITLRemoveTest::exceptions, $new($ThrowableArray, ITLRemoveTest::threadCount));
	$var($Thread, progenitor, $new($ITLRemoveTest$MyThread));
	progenitor->start();
	progenitor->join();
	for (int32_t i = 0; i < ITLRemoveTest::threadCount; ++i) {
		int32_t checkValue = i + ITLRemoveTest::INITIAL_VALUE;
		{
			$var($ints, arr$, ITLRemoveTest::removeNode);
			for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
				int32_t removeId = arr$->get(i$);
				if (removeId == i) {
					checkValue = ITLRemoveTest::INITIAL_VALUE;
					break;
				}
			}
		}
		{
			$var($ints, arr$, ITLRemoveTest::removeAndSet);
			for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
				int32_t removeId = arr$->get(i$);
				if (removeId == i) {
					checkValue = ITLRemoveTest::REMOVE_SET_VALUE;
					break;
				}
			}
		}
		if (ITLRemoveTest::exceptions->get(i) != nullptr) {
			$throw(ITLRemoveTest::exceptions->get(i));
		}
		if (ITLRemoveTest::x->get(i) != checkValue) {
			$throw($$new($Throwable, $$str({"x["_s, $$str(i), "] ="_s, $$str(ITLRemoveTest::x->get(i))})));
		}
	}
}

void ITLRemoveTest::clinit$($Class* clazz) {
	$assignStatic(ITLRemoveTest::n, $new($ITLRemoveTest$1));
	ITLRemoveTest::threadCount = 100;
	$assignStatic(ITLRemoveTest::removeNode, $new($ints, {
		10,
		20,
		45,
		38,
		88
	}));
	$assignStatic(ITLRemoveTest::removeAndSet, $new($ints, {
		12,
		34,
		10
	}));
}

ITLRemoveTest::ITLRemoveTest() {
}

$Class* ITLRemoveTest::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"INITIAL_VALUE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ITLRemoveTest, INITIAL_VALUE)},
		{"REMOVE_SET_VALUE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ITLRemoveTest, REMOVE_SET_VALUE)},
		{"n", "Ljava/lang/InheritableThreadLocal;", "Ljava/lang/InheritableThreadLocal<Ljava/lang/Integer;>;", $STATIC, $staticField(ITLRemoveTest, n)},
		{"threadCount", "I", nullptr, $STATIC, $staticField(ITLRemoveTest, threadCount)},
		{"x", "[I", nullptr, $STATIC, $staticField(ITLRemoveTest, x)},
		{"exceptions", "[Ljava/lang/Throwable;", nullptr, $STATIC, $staticField(ITLRemoveTest, exceptions)},
		{"removeNode", "[I", nullptr, $STATIC | $FINAL, $staticField(ITLRemoveTest, removeNode)},
		{"removeAndSet", "[I", nullptr, $STATIC | $FINAL, $staticField(ITLRemoveTest, removeAndSet)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ITLRemoveTest, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ITLRemoveTest, main, void, $StringArray*), "java.lang.Throwable"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ITLRemoveTest$MyThread", "ITLRemoveTest", "MyThread", $PRIVATE | $STATIC},
		{"ITLRemoveTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ITLRemoveTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"ITLRemoveTest$MyThread,ITLRemoveTest$1"
	};
	$loadClass(ITLRemoveTest, name, initialize, &classInfo$$, ITLRemoveTest::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ITLRemoveTest);
	});
	return class$;
}

$Class* ITLRemoveTest::class$ = nullptr;