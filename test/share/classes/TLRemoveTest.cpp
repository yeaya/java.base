#include <TLRemoveTest.h>

#include <TLRemoveTest$1.h>
#include <TLRemoveTest$2.h>
#include <java/lang/ThreadLocal.h>
#include <jcpp.h>

#undef INITIAL_VALUE
#undef REMOVE_SET_VALUE

using $TLRemoveTest$1 = ::TLRemoveTest$1;
using $TLRemoveTest$2 = ::TLRemoveTest$2;
using $ThrowableArray = $Array<::java::lang::Throwable>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadLocal = ::java::lang::ThreadLocal;

$FieldInfo _TLRemoveTest_FieldInfo_[] = {
	{"INITIAL_VALUE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TLRemoveTest, INITIAL_VALUE)},
	{"REMOVE_SET_VALUE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TLRemoveTest, REMOVE_SET_VALUE)},
	{"n", "Ljava/lang/ThreadLocal;", "Ljava/lang/ThreadLocal<Ljava/lang/Integer;>;", $STATIC, $staticField(TLRemoveTest, n)},
	{}
};

$MethodInfo _TLRemoveTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(TLRemoveTest, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TLRemoveTest, main, void, $StringArray*), "java.lang.Throwable"},
	{}
};

$InnerClassInfo _TLRemoveTest_InnerClassesInfo_[] = {
	{"TLRemoveTest$2", nullptr, nullptr, 0},
	{"TLRemoveTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TLRemoveTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TLRemoveTest",
	"java.lang.Object",
	nullptr,
	_TLRemoveTest_FieldInfo_,
	_TLRemoveTest_MethodInfo_,
	nullptr,
	nullptr,
	_TLRemoveTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"TLRemoveTest$2,TLRemoveTest$1"
};

$Object* allocate$TLRemoveTest($Class* clazz) {
	return $of($alloc(TLRemoveTest));
}

$ThreadLocal* TLRemoveTest::n = nullptr;

void TLRemoveTest::init$() {
}

void TLRemoveTest::main($StringArray* args) {
	$init(TLRemoveTest);
	$useLocalCurrentObjectStackCache();
	int32_t threadCount = 100;
	$var($ints, removeNode, $new($ints, {
		10,
		20,
		45,
		38
	}));
	$var($ints, removeAndSet, $new($ints, {
		12,
		34,
		10
	}));
	$var($ThreadArray, th, $new($ThreadArray, threadCount));
	$var($ints, x, $new($ints, threadCount));
	$var($ThrowableArray, exceptions, $new($ThrowableArray, threadCount));
	for (int32_t i = 0; i < threadCount; ++i) {
		int32_t threadId = i;
		th->set(i, $$new($TLRemoveTest$2, threadId, removeNode, removeAndSet, x, exceptions));
		$nc(th->get(i))->start();
	}
	for (int32_t i = 0; i < threadCount; ++i) {
		$nc(th->get(i))->join();
	}
	for (int32_t i = 0; i < threadCount; ++i) {
		int32_t checkValue = i;
		{
			$var($ints, arr$, removeNode);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				int32_t removeId = arr$->get(i$);
				if (removeId == i) {
					checkValue = TLRemoveTest::INITIAL_VALUE;
					break;
				}
			}
		}
		{
			$var($ints, arr$, removeAndSet);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				int32_t removeId = arr$->get(i$);
				if (removeId == i) {
					checkValue = TLRemoveTest::REMOVE_SET_VALUE;
					break;
				}
			}
		}
		if (exceptions->get(i) != nullptr) {
			$throw(exceptions->get(i));
		}
		if (x->get(i) != checkValue) {
			$throw($$new($Throwable, $$str({"x["_s, $$str(i), "] ="_s, $$str(x->get(i))})));
		}
	}
}

void clinit$TLRemoveTest($Class* class$) {
	$assignStatic(TLRemoveTest::n, $new($TLRemoveTest$1));
}

TLRemoveTest::TLRemoveTest() {
}

$Class* TLRemoveTest::load$($String* name, bool initialize) {
	$loadClass(TLRemoveTest, name, initialize, &_TLRemoveTest_ClassInfo_, clinit$TLRemoveTest, allocate$TLRemoveTest);
	return class$;
}

$Class* TLRemoveTest::class$ = nullptr;