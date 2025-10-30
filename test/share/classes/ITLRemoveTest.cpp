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
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;

$FieldInfo _ITLRemoveTest_FieldInfo_[] = {
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

$MethodInfo _ITLRemoveTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ITLRemoveTest::*)()>(&ITLRemoveTest::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ITLRemoveTest::main)), "java.lang.Throwable"},
	{}
};

$InnerClassInfo _ITLRemoveTest_InnerClassesInfo_[] = {
	{"ITLRemoveTest$MyThread", "ITLRemoveTest", "MyThread", $PRIVATE | $STATIC},
	{"ITLRemoveTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ITLRemoveTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ITLRemoveTest",
	"java.lang.Object",
	nullptr,
	_ITLRemoveTest_FieldInfo_,
	_ITLRemoveTest_MethodInfo_,
	nullptr,
	nullptr,
	_ITLRemoveTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"ITLRemoveTest$MyThread,ITLRemoveTest$1"
};

$Object* allocate$ITLRemoveTest($Class* clazz) {
	return $of($alloc(ITLRemoveTest));
}

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
	$useLocalCurrentObjectStackCache();
	$assignStatic(ITLRemoveTest::x, $new($ints, ITLRemoveTest::threadCount));
	$assignStatic(ITLRemoveTest::exceptions, $new($ThrowableArray, ITLRemoveTest::threadCount));
	$var($Thread, progenitor, $new($ITLRemoveTest$MyThread));
	progenitor->start();
	progenitor->join();
	for (int32_t i = 0; i < ITLRemoveTest::threadCount; ++i) {
		int32_t checkValue = i + ITLRemoveTest::INITIAL_VALUE;
		{
			$var($ints, arr$, ITLRemoveTest::removeNode);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				int32_t removeId = arr$->get(i$);
				if (removeId == i) {
					checkValue = ITLRemoveTest::INITIAL_VALUE;
					break;
				}
			}
		}
		{
			$var($ints, arr$, ITLRemoveTest::removeAndSet);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				int32_t removeId = arr$->get(i$);
				if (removeId == i) {
					checkValue = ITLRemoveTest::REMOVE_SET_VALUE;
					break;
				}
			}
		}
		if ($nc(ITLRemoveTest::exceptions)->get(i) != nullptr) {
			$throw($nc(ITLRemoveTest::exceptions)->get(i));
		}
		if ($nc(ITLRemoveTest::x)->get(i) != checkValue) {
			$throw($$new($Throwable, $$str({"x["_s, $$str(i), "] ="_s, $$str($nc(ITLRemoveTest::x)->get(i))})));
		}
	}
}

void clinit$ITLRemoveTest($Class* class$) {
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
	$loadClass(ITLRemoveTest, name, initialize, &_ITLRemoveTest_ClassInfo_, clinit$ITLRemoveTest, allocate$ITLRemoveTest);
	return class$;
}

$Class* ITLRemoveTest::class$ = nullptr;