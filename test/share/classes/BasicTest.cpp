#include <BasicTest.h>

#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/StringConcatException.h>
#include <java/lang/invoke/StringConcatFactory.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef MAX_PARAM_SLOTS
#undef TYPE

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $CallSite = ::java::lang::invoke::CallSite;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $StringConcatException = ::java::lang::invoke::StringConcatException;
using $StringConcatFactory = ::java::lang::invoke::StringConcatFactory;
using $Arrays = ::java::util::Arrays;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;

$FieldInfo _BasicTest_FieldInfo_[] = {
	{"MAX_PARAM_SLOTS", "I", nullptr, $STATIC | $FINAL, $constField(BasicTest, MAX_PARAM_SLOTS)},
	{"exceedMaxParamSlots", "I", nullptr, $STATIC, $staticField(BasicTest, exceedMaxParamSlots)},
	{}
};

$MethodInfo _BasicTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicTest::*)()>(&BasicTest::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&BasicTest::main)), "java.lang.Throwable"},
	{"test", "(Ljava/lang/invoke/MethodType;)V", nullptr, $STATIC, $method(static_cast<void(*)($MethodType*)>(&BasicTest::test)), "java.lang.invoke.StringConcatException"},
	{}
};

$ClassInfo _BasicTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"BasicTest",
	"java.lang.Object",
	nullptr,
	_BasicTest_FieldInfo_,
	_BasicTest_MethodInfo_
};

$Object* allocate$BasicTest($Class* clazz) {
	return $of($alloc(BasicTest));
}

int32_t BasicTest::exceedMaxParamSlots = 0;

void BasicTest::init$() {
}

void BasicTest::main($StringArray* args) {
	$init(BasicTest);
	$useLocalCurrentObjectStackCache();
	int32_t expectionTestCases = 0;
	$var($ClassArray, types, $new($ClassArray, 200));
	$init($Integer);
	$Arrays::fill(types, $of($Integer::TYPE));
	$load($String);
	test($($MethodType::methodType($String::class$, types)));
	$assign(types, $new($ClassArray, 100));
	$init($Long);
	$Arrays::fill(types, $of($Long::TYPE));
	test($($MethodType::methodType($String::class$, types)));
	++expectionTestCases;
	$assign(types, $new($ClassArray, 101));
	$Arrays::fill(types, 0, 50, $of($Long::TYPE));
	$init($Double);
	$Arrays::fill(types, 50, 100, $of($Double::TYPE));
	types->set(100, $Integer::TYPE);
	test($($MethodType::methodType($String::class$, types)));
	++expectionTestCases;
	$assign(types, $new($ClassArray, 201));
	$Arrays::fill(types, $of($Integer::TYPE));
	test($($MethodType::methodType($String::class$, types)));
	if (BasicTest::exceedMaxParamSlots != expectionTestCases) {
		$throwNew($RuntimeException, "expected one test case exceeding 200 param slots"_s);
	}
}

void BasicTest::test($MethodType* concatType) {
	$init(BasicTest);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($String, recipe, ""_s);
	int32_t slots = 0;
	{
		$var($Iterator, i$, $nc($($nc(concatType)->parameterList()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$Class* c = $cast($Class, i$->next());
			{
				$plusAssign(recipe, "\u0001"_s);
				++slots;
				$init($Double);
				$init($Long);
				if (c == $Double::TYPE || c == $Long::TYPE) {
					++slots;
				}
			}
		}
	}
	if (slots > BasicTest::MAX_PARAM_SLOTS) {
		++BasicTest::exceedMaxParamSlots;
	}
	$init($System);
	$nc($System::out)->format("Test %s parameter slots%n"_s, $$new($ObjectArray, {$($of($Integer::valueOf(slots)))}));
	try {
		$StringConcatFactory::makeConcat($($MethodHandles::lookup()), "name"_s, concatType);
		if (slots > BasicTest::MAX_PARAM_SLOTS) {
			$throwNew($RuntimeException, "StringConcatException not thrown"_s);
		}
	} catch ($StringConcatException&) {
		$var($StringConcatException, e, $catch());
		if (slots <= BasicTest::MAX_PARAM_SLOTS) {
			$throw(e);
		}
	}
	try {
		$StringConcatFactory::makeConcatWithConstants($($MethodHandles::lookup()), "name"_s, concatType, recipe, $$new($ObjectArray, 0));
		if (slots > BasicTest::MAX_PARAM_SLOTS) {
			$throwNew($RuntimeException, "StringConcatException not thrown"_s);
		}
	} catch ($StringConcatException&) {
		$var($StringConcatException, e, $catch());
		if (slots <= BasicTest::MAX_PARAM_SLOTS) {
			$throw(e);
		}
	}
}

void clinit$BasicTest($Class* class$) {
	BasicTest::exceedMaxParamSlots = 0;
}

BasicTest::BasicTest() {
}

$Class* BasicTest::load$($String* name, bool initialize) {
	$loadClass(BasicTest, name, initialize, &_BasicTest_ClassInfo_, clinit$BasicTest, allocate$BasicTest);
	return class$;
}

$Class* BasicTest::class$ = nullptr;