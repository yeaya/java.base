#include <FinalizerHistogramTest.h>
#include <FinalizerHistogramTest$MyObject.h>
#include <java/lang/reflect/Field.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/locks/ReentrantLock.h>
#include <jcpp.h>

using $FinalizerHistogramTest$MyObject = ::FinalizerHistogramTest$MyObject;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Field = ::java::lang::reflect::Field;
using $Method = ::java::lang::reflect::Method;
using $ReentrantLock = ::java::util::concurrent::locks::ReentrantLock;

$ReentrantLock* FinalizerHistogramTest::lock = nullptr;
$volatile(int32_t) FinalizerHistogramTest::wasInitialized = 0;
$volatile(int32_t) FinalizerHistogramTest::wasTrapped = 0;

void FinalizerHistogramTest::init$() {
}

void FinalizerHistogramTest::main($StringArray* argvs) {
	$init(FinalizerHistogramTest);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($Throwable, var$0, nullptr);
	try {
		try {
			$nc(FinalizerHistogramTest::lock)->lock();
			for (int32_t i = 0; i < FinalizerHistogramTest::objectsCount; ++i) {
				$new($FinalizerHistogramTest$MyObject);
			}
			$nc($System::out)->println($$str({"Objects intialized: "_s, $$str(FinalizerHistogramTest::objectsCount)}));
			$System::gc();
			while (FinalizerHistogramTest::wasTrapped < 1) {
				;
			}
			$Class* klass = $Class::forName("java.lang.ref.FinalizerHistogram"_s);
			$var($Method, m, klass->getDeclaredMethod("getFinalizerHistogram"_s, $$new($ClassArray, 0)));
			$nc(m)->setAccessible(true);
			$var($ObjectArray, entries, $cast($ObjectArray, m->invoke(nullptr, $$new($ObjectArray, 0))));
			$Class* entryKlass = $Class::forName("java.lang.ref.FinalizerHistogram$Entry"_s);
			$var($Field, name, entryKlass->getDeclaredField("className"_s));
			$nc(name)->setAccessible(true);
			$var($Field, count, entryKlass->getDeclaredField("instanceCount"_s));
			$nc(count)->setAccessible(true);
			$System::out->println("Unreachable instances waiting for finalization"_s);
			$System::out->println("#instances  class name"_s);
			$System::out->println("-----------------------"_s);
			bool found = false;
			{
				$var($ObjectArray, arr$, entries);
				for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
					$var($Object0, entry, arr$->get(i$));
					{
						$var($Object, e, entryKlass->cast(entry));
						$System::out->printf("%10d %s\n"_s, $$new($ObjectArray, {
							$(count->get(e)),
							$(name->get(e))
						}));
						if ($$sure($String, name->get(e))->indexOf("MyObject"_s) != -1) {
							found = true;
						}
					}
				}
			}
			if (!found) {
				$throwNew($RuntimeException, "MyObject is not found in test output"_s);
			}
			$System::out->println("Test PASSED"_s);
		} catch ($Exception& e) {
			$nc($System::err)->println($$str({"Test failed with "_s, e}));
			e->printStackTrace($System::err);
			$throwNew($RuntimeException, "Test failed"_s);
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$nc(FinalizerHistogramTest::lock)->unlock();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void FinalizerHistogramTest::clinit$($Class* clazz) {
	$assignStatic(FinalizerHistogramTest::lock, $new($ReentrantLock));
	FinalizerHistogramTest::wasInitialized = 0;
	FinalizerHistogramTest::wasTrapped = 0;
}

FinalizerHistogramTest::FinalizerHistogramTest() {
}

$Class* FinalizerHistogramTest::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"lock", "Ljava/util/concurrent/locks/ReentrantLock;", nullptr, $STATIC, $staticField(FinalizerHistogramTest, lock)},
		{"wasInitialized", "I", nullptr, $STATIC | $VOLATILE, $staticField(FinalizerHistogramTest, wasInitialized)},
		{"wasTrapped", "I", nullptr, $STATIC | $VOLATILE, $staticField(FinalizerHistogramTest, wasTrapped)},
		{"objectsCount", "I", nullptr, $STATIC | $FINAL, $constField(FinalizerHistogramTest, objectsCount)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FinalizerHistogramTest, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(FinalizerHistogramTest, main, void, $StringArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"FinalizerHistogramTest$MyObject", "FinalizerHistogramTest", "MyObject", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"FinalizerHistogramTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"FinalizerHistogramTest$MyObject"
	};
	$loadClass(FinalizerHistogramTest, name, initialize, &classInfo$$, FinalizerHistogramTest::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(FinalizerHistogramTest);
	});
	return class$;
}

$Class* FinalizerHistogramTest::class$ = nullptr;