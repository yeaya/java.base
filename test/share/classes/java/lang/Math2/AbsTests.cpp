#include <java/lang/Math2/AbsTests.h>

#include <java/io/Serializable.h>
#include <java/lang/Math.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/function/IntUnaryOperator.h>
#include <java/util/function/LongUnaryOperator.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef MIN_VALUE

using $intArray2 = $Array<int32_t, 2>;
using $longArray2 = $Array<int64_t, 2>;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ArithmeticException = ::java::lang::ArithmeticException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $IntUnaryOperator = ::java::util::function::IntUnaryOperator;
using $LongUnaryOperator = ::java::util::function::LongUnaryOperator;

namespace java {
	namespace lang {
		namespace Math2 {

class AbsTests$$Lambda$abs : public $IntUnaryOperator {
	$class(AbsTests$$Lambda$abs, $NO_CLASS_INIT, $IntUnaryOperator)
public:
	void init$() {
	}
	virtual int32_t applyAsInt(int32_t arg0) override {
		 return $Math::abs(arg0);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AbsTests$$Lambda$abs>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo AbsTests$$Lambda$abs::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(AbsTests$$Lambda$abs, init$, void)},
	{"applyAsInt", "(I)I", nullptr, $PUBLIC, $virtualMethod(AbsTests$$Lambda$abs, applyAsInt, int32_t, int32_t)},
	{}
};
$ClassInfo AbsTests$$Lambda$abs::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.Math2.AbsTests$$Lambda$abs",
	"java.lang.Object",
	"java.util.function.IntUnaryOperator",
	nullptr,
	methodInfos
};
$Class* AbsTests$$Lambda$abs::load$($String* name, bool initialize) {
	$loadClass(AbsTests$$Lambda$abs, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AbsTests$$Lambda$abs::class$ = nullptr;

class AbsTests$$Lambda$absExact$1 : public $IntUnaryOperator {
	$class(AbsTests$$Lambda$absExact$1, $NO_CLASS_INIT, $IntUnaryOperator)
public:
	void init$() {
	}
	virtual int32_t applyAsInt(int32_t arg0) override {
		 return $Math::absExact(arg0);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AbsTests$$Lambda$absExact$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo AbsTests$$Lambda$absExact$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(AbsTests$$Lambda$absExact$1, init$, void)},
	{"applyAsInt", "(I)I", nullptr, $PUBLIC, $virtualMethod(AbsTests$$Lambda$absExact$1, applyAsInt, int32_t, int32_t)},
	{}
};
$ClassInfo AbsTests$$Lambda$absExact$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.Math2.AbsTests$$Lambda$absExact$1",
	"java.lang.Object",
	"java.util.function.IntUnaryOperator",
	nullptr,
	methodInfos
};
$Class* AbsTests$$Lambda$absExact$1::load$($String* name, bool initialize) {
	$loadClass(AbsTests$$Lambda$absExact$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AbsTests$$Lambda$absExact$1::class$ = nullptr;

class AbsTests$$Lambda$abs$2 : public $LongUnaryOperator {
	$class(AbsTests$$Lambda$abs$2, $NO_CLASS_INIT, $LongUnaryOperator)
public:
	void init$() {
	}
	virtual int64_t applyAsLong(int64_t arg0) override {
		 return $Math::abs(arg0);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AbsTests$$Lambda$abs$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo AbsTests$$Lambda$abs$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(AbsTests$$Lambda$abs$2, init$, void)},
	{"applyAsLong", "(J)J", nullptr, $PUBLIC, $virtualMethod(AbsTests$$Lambda$abs$2, applyAsLong, int64_t, int64_t)},
	{}
};
$ClassInfo AbsTests$$Lambda$abs$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.Math2.AbsTests$$Lambda$abs$2",
	"java.lang.Object",
	"java.util.function.LongUnaryOperator",
	nullptr,
	methodInfos
};
$Class* AbsTests$$Lambda$abs$2::load$($String* name, bool initialize) {
	$loadClass(AbsTests$$Lambda$abs$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AbsTests$$Lambda$abs$2::class$ = nullptr;

class AbsTests$$Lambda$absExact$3 : public $LongUnaryOperator {
	$class(AbsTests$$Lambda$absExact$3, $NO_CLASS_INIT, $LongUnaryOperator)
public:
	void init$() {
	}
	virtual int64_t applyAsLong(int64_t arg0) override {
		 return $Math::absExact(arg0);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AbsTests$$Lambda$absExact$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo AbsTests$$Lambda$absExact$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(AbsTests$$Lambda$absExact$3, init$, void)},
	{"applyAsLong", "(J)J", nullptr, $PUBLIC, $virtualMethod(AbsTests$$Lambda$absExact$3, applyAsLong, int64_t, int64_t)},
	{}
};
$ClassInfo AbsTests$$Lambda$absExact$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.Math2.AbsTests$$Lambda$absExact$3",
	"java.lang.Object",
	"java.util.function.LongUnaryOperator",
	nullptr,
	methodInfos
};
$Class* AbsTests$$Lambda$absExact$3::load$($String* name, bool initialize) {
	$loadClass(AbsTests$$Lambda$absExact$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AbsTests$$Lambda$absExact$3::class$ = nullptr;

$FieldInfo _AbsTests_FieldInfo_[] = {
	{"errors", "I", nullptr, $PRIVATE | $STATIC, $staticField(AbsTests, errors)},
	{}
};

$MethodInfo _AbsTests_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(AbsTests, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(AbsTests, main, void, $StringArray*)},
	{"testInRangeIntAbs", "()I", nullptr, $PRIVATE | $STATIC, $staticMethod(AbsTests, testInRangeIntAbs, int32_t)},
	{"testInRangeLongAbs", "()J", nullptr, $PRIVATE | $STATIC, $staticMethod(AbsTests, testInRangeLongAbs, int64_t)},
	{"testIntAbs", "(Ljava/util/function/IntUnaryOperator;II)I", nullptr, $PRIVATE | $STATIC, $staticMethod(AbsTests, testIntAbs, int32_t, $IntUnaryOperator*, int32_t, int32_t)},
	{"testIntMinValue", "()I", nullptr, $PRIVATE | $STATIC, $staticMethod(AbsTests, testIntMinValue, int32_t)},
	{"testLongAbs", "(Ljava/util/function/LongUnaryOperator;JJ)I", nullptr, $PRIVATE | $STATIC, $staticMethod(AbsTests, testLongAbs, int32_t, $LongUnaryOperator*, int64_t, int64_t)},
	{"testLongMinValue", "()I", nullptr, $PRIVATE | $STATIC, $staticMethod(AbsTests, testLongMinValue, int32_t)},
	{}
};

$ClassInfo _AbsTests_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.Math2.AbsTests",
	"java.lang.Object",
	nullptr,
	_AbsTests_FieldInfo_,
	_AbsTests_MethodInfo_
};

$Object* allocate$AbsTests($Class* clazz) {
	return $of($alloc(AbsTests));
}

int32_t AbsTests::errors = 0;

void AbsTests::init$() {
}

void AbsTests::main($StringArray* args) {
	$init(AbsTests);
	$useLocalCurrentObjectStackCache();
	AbsTests::errors += testInRangeIntAbs();
	AbsTests::errors += testIntMinValue();
	AbsTests::errors += testInRangeLongAbs();
	AbsTests::errors += testLongMinValue();
	if (AbsTests::errors > 0) {
		$throwNew($RuntimeException, $$str({$$str(AbsTests::errors), " errors found testing abs."_s}));
	}
}

int32_t AbsTests::testInRangeIntAbs() {
	$init(AbsTests);
	$useLocalCurrentObjectStackCache();
	int32_t errors = 0;
	$var($intArray2, testCases, $new($intArray2, {
		$$new($ints, {
			+0,
			0
		}),
		$$new($ints, {
			+1,
			1
		}),
		$$new($ints, {
			-1,
			1
		}),
		$$new($ints, {
			-2,
			2
		}),
		$$new($ints, {
			+2,
			2
		}),
		$$new($ints, {
			-$Integer::MAX_VALUE,
			$Integer::MAX_VALUE
		}),
		$$new($ints, {
			+$Integer::MAX_VALUE,
			$Integer::MAX_VALUE
		})
	}));
	{
		$var($intArray2, arr$, testCases);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($ints, testCase, arr$->get(i$));
			{
				errors += testIntAbs(static_cast<$IntUnaryOperator*>($$new(AbsTests$$Lambda$abs)), $nc(testCase)->get(0), testCase->get(1));
				errors += testIntAbs(static_cast<$IntUnaryOperator*>($$new(AbsTests$$Lambda$absExact$1)), $nc(testCase)->get(0), testCase->get(1));
			}
		}
	}
	return errors;
}

int32_t AbsTests::testIntMinValue() {
	$init(AbsTests);
	$useLocalCurrentObjectStackCache();
	int32_t errors = 0;
	errors += testIntAbs(static_cast<$IntUnaryOperator*>($$new(AbsTests$$Lambda$abs)), $Integer::MIN_VALUE, $Integer::MIN_VALUE);
	try {
		int32_t result = $Math::absExact($Integer::MIN_VALUE);
		$nc($System::err)->printf("Bad return value %d from Math.absExact(MIN_VALUE)%n"_s, $$new($ObjectArray, {$($of($Integer::valueOf(result)))}));
		++errors;
	} catch ($ArithmeticException& ae) {
	}
	return errors;
}

int32_t AbsTests::testIntAbs($IntUnaryOperator* absFunc, int32_t argument, int32_t expected) {
	$init(AbsTests);
	$useLocalCurrentObjectStackCache();
	int32_t result = $nc(absFunc)->applyAsInt(argument);
	if (result != expected) {
		$nc($System::err)->printf("Unexpected int abs result %d for argument %d%n"_s, $$new($ObjectArray, {
			$($of($Integer::valueOf(result))),
			$($of($Integer::valueOf(argument)))
		}));
		return 1;
	} else {
		return 0;
	}
}

int64_t AbsTests::testInRangeLongAbs() {
	$init(AbsTests);
	$useLocalCurrentObjectStackCache();
	int32_t errors = 0;
	$var($longArray2, testCases, $new($longArray2, {
		$$new($longs, {
			+(int64_t)0,
			(int64_t)0
		}),
		$$new($longs, {
			+(int64_t)1,
			(int64_t)1
		}),
		$$new($longs, {
			(int64_t)-1,
			(int64_t)1
		}),
		$$new($longs, {
			(int64_t)-2,
			(int64_t)2
		}),
		$$new($longs, {
			+(int64_t)2,
			(int64_t)2
		}),
		$$new($longs, {
			(int64_t)(-$Integer::MAX_VALUE),
			(int64_t)$Integer::MAX_VALUE
		}),
		$$new($longs, {
			(int64_t)(+$Integer::MAX_VALUE),
			(int64_t)$Integer::MAX_VALUE
		}),
		$$new($longs, {
			(int64_t)$Integer::MIN_VALUE,
			-((int64_t)$Integer::MIN_VALUE)
		}),
		$$new($longs, {
			-$Long::MAX_VALUE,
			$Long::MAX_VALUE
		})
	}));
	{
		$var($longArray2, arr$, testCases);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($longs, testCase, arr$->get(i$));
			{
				errors += testLongAbs(static_cast<$LongUnaryOperator*>($$new(AbsTests$$Lambda$abs$2)), $nc(testCase)->get(0), testCase->get(1));
				errors += testLongAbs(static_cast<$LongUnaryOperator*>($$new(AbsTests$$Lambda$absExact$3)), $nc(testCase)->get(0), testCase->get(1));
			}
		}
	}
	return errors;
}

int32_t AbsTests::testLongMinValue() {
	$init(AbsTests);
	$useLocalCurrentObjectStackCache();
	int32_t errors = 0;
	errors += testLongAbs(static_cast<$LongUnaryOperator*>($$new(AbsTests$$Lambda$abs$2)), $Long::MIN_VALUE, $Long::MIN_VALUE);
	try {
		int64_t result = $Math::absExact($Long::MIN_VALUE);
		$nc($System::err)->printf("Bad return value %d from Math.absExact(MIN_VALUE)%n"_s, $$new($ObjectArray, {$($of($Long::valueOf(result)))}));
		++errors;
	} catch ($ArithmeticException& ae) {
	}
	return errors;
}

int32_t AbsTests::testLongAbs($LongUnaryOperator* absFunc, int64_t argument, int64_t expected) {
	$init(AbsTests);
	$useLocalCurrentObjectStackCache();
	int64_t result = $nc(absFunc)->applyAsLong(argument);
	if (result != expected) {
		$nc($System::err)->printf("Unexpected long abs result %d for argument %d%n"_s, $$new($ObjectArray, {
			$($of($Long::valueOf(result))),
			$($of($Long::valueOf(argument)))
		}));
		return 1;
	} else {
		return 0;
	}
}

void clinit$AbsTests($Class* class$) {
	AbsTests::errors = 0;
}

AbsTests::AbsTests() {
}

$Class* AbsTests::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(AbsTests$$Lambda$abs::classInfo$.name)) {
			return AbsTests$$Lambda$abs::load$(name, initialize);
		}
		if (name->equals(AbsTests$$Lambda$absExact$1::classInfo$.name)) {
			return AbsTests$$Lambda$absExact$1::load$(name, initialize);
		}
		if (name->equals(AbsTests$$Lambda$abs$2::classInfo$.name)) {
			return AbsTests$$Lambda$abs$2::load$(name, initialize);
		}
		if (name->equals(AbsTests$$Lambda$absExact$3::classInfo$.name)) {
			return AbsTests$$Lambda$absExact$3::load$(name, initialize);
		}
	}
	$loadClass(AbsTests, name, initialize, &_AbsTests_ClassInfo_, clinit$AbsTests, allocate$AbsTests);
	return class$;
}

$Class* AbsTests::class$ = nullptr;

		} // Math2
	} // lang
} // java