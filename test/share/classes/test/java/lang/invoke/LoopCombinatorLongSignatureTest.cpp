#include <test/java/lang/invoke/LoopCombinatorLongSignatureTest.h>

#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

#undef ARG_LIMIT
#undef FINI
#undef INIT
#undef PRED_F
#undef PRED_T
#undef STEP
#undef TYPE

using $MethodHandleArray = $Array<::java::lang::invoke::MethodHandle>;
using $MethodHandleArray2 = $Array<::java::lang::invoke::MethodHandle, 2>;
using $PrintStream = ::java::io::PrintStream;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $Arrays = ::java::util::Arrays;

namespace test {
	namespace java {
		namespace lang {
			namespace invoke {

$FieldInfo _LoopCombinatorLongSignatureTest_FieldInfo_[] = {
	{"INIT", "Ljava/lang/invoke/MethodHandle;", nullptr, $STATIC | $FINAL, $staticField(LoopCombinatorLongSignatureTest, INIT)},
	{"STEP", "Ljava/lang/invoke/MethodHandle;", nullptr, $STATIC | $FINAL, $staticField(LoopCombinatorLongSignatureTest, STEP)},
	{"PRED_F", "Ljava/lang/invoke/MethodHandle;", nullptr, $STATIC | $FINAL, $staticField(LoopCombinatorLongSignatureTest, PRED_F)},
	{"PRED_T", "Ljava/lang/invoke/MethodHandle;", nullptr, $STATIC | $FINAL, $staticField(LoopCombinatorLongSignatureTest, PRED_T)},
	{"FINI", "Ljava/lang/invoke/MethodHandle;", nullptr, $STATIC | $FINAL, $staticField(LoopCombinatorLongSignatureTest, FINI)},
	{"ARG_LIMIT", "I", nullptr, $STATIC | $FINAL, $constField(LoopCombinatorLongSignatureTest, ARG_LIMIT)},
	{}
};

$MethodInfo _LoopCombinatorLongSignatureTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LoopCombinatorLongSignatureTest::*)()>(&LoopCombinatorLongSignatureTest::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&LoopCombinatorLongSignatureTest::main))},
	{"testLongSignature", "(IZZ)V", nullptr, $STATIC, $method(static_cast<void(*)(int32_t,bool,bool)>(&LoopCombinatorLongSignatureTest::testLongSignature))},
	{}
};

$ClassInfo _LoopCombinatorLongSignatureTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"test.java.lang.invoke.LoopCombinatorLongSignatureTest",
	"java.lang.Object",
	nullptr,
	_LoopCombinatorLongSignatureTest_FieldInfo_,
	_LoopCombinatorLongSignatureTest_MethodInfo_
};

$Object* allocate$LoopCombinatorLongSignatureTest($Class* clazz) {
	return $of($alloc(LoopCombinatorLongSignatureTest));
}

$MethodHandle* LoopCombinatorLongSignatureTest::INIT = nullptr;
$MethodHandle* LoopCombinatorLongSignatureTest::STEP = nullptr;
$MethodHandle* LoopCombinatorLongSignatureTest::PRED_F = nullptr;
$MethodHandle* LoopCombinatorLongSignatureTest::PRED_T = nullptr;
$MethodHandle* LoopCombinatorLongSignatureTest::FINI = nullptr;

void LoopCombinatorLongSignatureTest::init$() {
}

void LoopCombinatorLongSignatureTest::main($StringArray* args) {
	$init(LoopCombinatorLongSignatureTest);
	bool run = $Boolean::parseBoolean($($System::getProperty("java.lang.invoke.LoopCombinatorLongSignatureTest.RUN"_s, "false"_s)));
	for (int32_t loopArgs = 0; loopArgs < 2; ++loopArgs) {
		testLongSignature(loopArgs, false, run);
		testLongSignature(loopArgs, true, run);
	}
}

void LoopCombinatorLongSignatureTest::testLongSignature(int32_t loopArgs, bool excessive, bool run) {
	$init(LoopCombinatorLongSignatureTest);
	$useLocalCurrentObjectStackCache();
	int32_t nClauses = LoopCombinatorLongSignatureTest::ARG_LIMIT - loopArgs + (excessive ? 1 : 0);
	$init($System);
	$nc($System::out)->print($$str({(excessive ? "(EXCESSIVE)"_s : "(LONG     )"_s), " arguments: "_s, $$str(loopArgs), ", clauses: "_s, $$str(nClauses), " -> "_s}));
	$var($ClassArray, argTypes, $new($ClassArray, loopArgs));
	$init($Integer);
	$Arrays::fill(argTypes, $of($Integer::TYPE));
	$var($MethodHandle, init, $MethodHandles::dropArguments(LoopCombinatorLongSignatureTest::INIT, 0, argTypes));
	$var($MethodHandleArray2, clauses, $new($MethodHandleArray2, nClauses));
	$var($MethodHandleArray, clause, $new($MethodHandleArray, {
		init,
		LoopCombinatorLongSignatureTest::STEP,
		LoopCombinatorLongSignatureTest::PRED_T,
		LoopCombinatorLongSignatureTest::FINI
	}));
	$var($MethodHandleArray, fclause, $new($MethodHandleArray, {
		init,
		LoopCombinatorLongSignatureTest::STEP,
		LoopCombinatorLongSignatureTest::PRED_F,
		LoopCombinatorLongSignatureTest::FINI
	}));
	$Arrays::fill(clauses, $of(clause));
	clauses->set(nClauses - 1, fclause);
	try {
		$var($MethodHandle, loop, $MethodHandles::loop(clauses));
		if (excessive) {
			$throwNew($AssertionError, $of("loop construction should have failed"_s));
		} else if (run) {
			int32_t r = 0;
			if (loopArgs == 0) {
				r = $intValue($nc(loop)->invoke($$new($ObjectArray, 0)));
			} else {
				$var($ObjectArray, args, $new($ObjectArray, loopArgs));
				$Arrays::fill(args, $($of($Integer::valueOf(0))));
				r = $nc(($cast($Integer, $($nc(loop)->invokeWithArguments(args)))))->intValue();
			}
			$nc($System::out)->println($$str({"SUCCEEDED (OK) -> "_s, $$str(r)}));
		} else {
			$nc($System::out)->println("SUCCEEDED (OK)"_s);
		}
	} catch ($IllegalArgumentException&) {
		$var($IllegalArgumentException, iae, $catch());
		if (excessive) {
			$nc($System::out)->println("FAILED    (OK)"_s);
		} else {
			iae->printStackTrace($System::out);
			$throwNew($AssertionError, $of("loop construction should not have failed (see above)"_s));
		}
	} catch ($Throwable&) {
		$var($Throwable, t, $catch());
		t->printStackTrace($System::out);
		$throwNew($AssertionError, $of("unexpected failure (see above)"_s));
	}
}

void clinit$LoopCombinatorLongSignatureTest($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$init($Integer);
	$assignStatic(LoopCombinatorLongSignatureTest::INIT, $MethodHandles::constant($Integer::TYPE, $($Integer::valueOf(0))));
	$assignStatic(LoopCombinatorLongSignatureTest::STEP, $MethodHandles::identity($Integer::TYPE));
	$init($Boolean);
	$assignStatic(LoopCombinatorLongSignatureTest::PRED_F, $MethodHandles::constant($Boolean::TYPE, $($Boolean::valueOf(false))));
	$assignStatic(LoopCombinatorLongSignatureTest::PRED_T, $MethodHandles::constant($Boolean::TYPE, $($Boolean::valueOf(true))));
	$assignStatic(LoopCombinatorLongSignatureTest::FINI, $MethodHandles::identity($Integer::TYPE));
}

LoopCombinatorLongSignatureTest::LoopCombinatorLongSignatureTest() {
}

$Class* LoopCombinatorLongSignatureTest::load$($String* name, bool initialize) {
	$loadClass(LoopCombinatorLongSignatureTest, name, initialize, &_LoopCombinatorLongSignatureTest_ClassInfo_, clinit$LoopCombinatorLongSignatureTest, allocate$LoopCombinatorLongSignatureTest);
	return class$;
}

$Class* LoopCombinatorLongSignatureTest::class$ = nullptr;

			} // invoke
		} // lang
	} // java
} // test