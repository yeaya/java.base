#include <FinalizerHistogramTest.h>

#include <FinalizerHistogramTest$MyObject.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Field.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/locks/ReentrantLock.h>
#include <jcpp.h>

using $FinalizerHistogramTest$MyObject = ::FinalizerHistogramTest$MyObject;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Field = ::java::lang::reflect::Field;
using $Method = ::java::lang::reflect::Method;
using $ReentrantLock = ::java::util::concurrent::locks::ReentrantLock;

$FieldInfo _FinalizerHistogramTest_FieldInfo_[] = {
	{"lock", "Ljava/util/concurrent/locks/ReentrantLock;", nullptr, $STATIC, $staticField(FinalizerHistogramTest, lock)},
	{"wasInitialized", "I", nullptr, $STATIC | $VOLATILE, $staticField(FinalizerHistogramTest, wasInitialized)},
	{"wasTrapped", "I", nullptr, $STATIC | $VOLATILE, $staticField(FinalizerHistogramTest, wasTrapped)},
	{"objectsCount", "I", nullptr, $STATIC | $FINAL, $constField(FinalizerHistogramTest, objectsCount)},
	{}
};

$MethodInfo _FinalizerHistogramTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FinalizerHistogramTest::*)()>(&FinalizerHistogramTest::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&FinalizerHistogramTest::main))},
	{}
};

$InnerClassInfo _FinalizerHistogramTest_InnerClassesInfo_[] = {
	{"FinalizerHistogramTest$MyObject", "FinalizerHistogramTest", "MyObject", $STATIC},
	{}
};

$ClassInfo _FinalizerHistogramTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"FinalizerHistogramTest",
	"java.lang.Object",
	nullptr,
	_FinalizerHistogramTest_FieldInfo_,
	_FinalizerHistogramTest_MethodInfo_,
	nullptr,
	nullptr,
	_FinalizerHistogramTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"FinalizerHistogramTest$MyObject"
};

$Object* allocate$FinalizerHistogramTest($Class* clazz) {
	return $of($alloc(FinalizerHistogramTest));
}

$ReentrantLock* FinalizerHistogramTest::lock = nullptr;
$volatile(int32_t) FinalizerHistogramTest::wasInitialized = 0;
$volatile(int32_t) FinalizerHistogramTest::wasTrapped = 0;

void FinalizerHistogramTest::init$() {
}

void FinalizerHistogramTest::main($StringArray* argvs) {
	$init(FinalizerHistogramTest);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$nc(FinalizerHistogramTest::lock)->lock();
				for (int32_t i = 0; i < FinalizerHistogramTest::objectsCount; ++i) {
					$new($FinalizerHistogramTest$MyObject);
				}
				$init($System);
				$nc($System::out)->println($$str({"Objects intialized: "_s, $$str(FinalizerHistogramTest::objectsCount)}));
				$System::gc();
				while (FinalizerHistogramTest::wasTrapped < 1) {
				}
				$Class* klass = $Class::forName("java.lang.ref.FinalizerHistogram"_s);
				$var($Method, m, $nc(klass)->getDeclaredMethod("getFinalizerHistogram"_s, $$new($ClassArray, 0)));
				$nc(m)->setAccessible(true);
				$var($ObjectArray, entries, $cast($ObjectArray, m->invoke(nullptr, $$new($ObjectArray, 0))));
				$Class* entryKlass = $Class::forName("java.lang.ref.FinalizerHistogram$Entry"_s);
				$var($Field, name, $nc(entryKlass)->getDeclaredField("className"_s));
				$nc(name)->setAccessible(true);
				$var($Field, count, entryKlass->getDeclaredField("instanceCount"_s));
				$nc(count)->setAccessible(true);
				$nc($System::out)->println("Unreachable instances waiting for finalization"_s);
				$nc($System::out)->println("#instances  class name"_s);
				$nc($System::out)->println("-----------------------"_s);
				bool found = false;
				{
					$var($ObjectArray, arr$, entries);
					int32_t len$ = $nc(arr$)->length;
					int32_t i$ = 0;
					for (; i$ < len$; ++i$) {
						$var($Object0, entry, arr$->get(i$));
						{
							$var($Object, e, entryKlass->cast(entry));
							$nc($System::out)->printf("%10d %s\n"_s, $$new($ObjectArray, {
								$(count->get(e)),
								$(name->get(e))
							}));
							if ($nc(($cast($String, $(name->get(e)))))->indexOf("MyObject"_s) != -1) {
								found = true;
							}
						}
					}
				}
				if (!found) {
					$throwNew($RuntimeException, "MyObject is not found in test output"_s);
				}
				$nc($System::out)->println("Test PASSED"_s);
			} catch ($Exception&) {
				$var($Exception, e, $catch());
				$init($System);
				$nc($System::err)->println($$str({"Test failed with "_s, e}));
				e->printStackTrace($System::err);
				$throwNew($RuntimeException, "Test failed"_s);
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(FinalizerHistogramTest::lock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void clinit$FinalizerHistogramTest($Class* class$) {
	$assignStatic(FinalizerHistogramTest::lock, $new($ReentrantLock));
	FinalizerHistogramTest::wasInitialized = 0;
	FinalizerHistogramTest::wasTrapped = 0;
}

FinalizerHistogramTest::FinalizerHistogramTest() {
}

$Class* FinalizerHistogramTest::load$($String* name, bool initialize) {
	$loadClass(FinalizerHistogramTest, name, initialize, &_FinalizerHistogramTest_ClassInfo_, clinit$FinalizerHistogramTest, allocate$FinalizerHistogramTest);
	return class$;
}

$Class* FinalizerHistogramTest::class$ = nullptr;