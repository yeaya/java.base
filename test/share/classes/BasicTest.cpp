#include <BasicTest.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/StringConcatException.h>
#include <java/lang/invoke/StringConcatFactory.h>
#include <java/util/Arrays.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef MAX_PARAM_SLOTS
#undef TYPE

using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodType = ::java::lang::invoke::MethodType;
using $StringConcatException = ::java::lang::invoke::StringConcatException;
using $StringConcatFactory = ::java::lang::invoke::StringConcatFactory;
using $Arrays = ::java::util::Arrays;
using $Iterator = ::java::util::Iterator;

int32_t BasicTest::exceedMaxParamSlots = 0;

void BasicTest::init$() {
}

void BasicTest::main($StringArray* args) {
	$init(BasicTest);
	$useLocalObjectStack();
	int32_t expectionTestCases = 0;
	$var($ClassArray, types, $new($ClassArray, 200));
	$Arrays::fill(types, $Integer::TYPE);
	test($($MethodType::methodType($String::class$, types)));
	$assign(types, $new($ClassArray, 100));
	$Arrays::fill(types, $Long::TYPE);
	test($($MethodType::methodType($String::class$, types)));
	++expectionTestCases;
	$assign(types, $new($ClassArray, 101));
	$Arrays::fill(types, 0, 50, $Long::TYPE);
	$Arrays::fill(types, 50, 100, $Double::TYPE);
	types->set(100, $Integer::TYPE);
	test($($MethodType::methodType($String::class$, types)));
	++expectionTestCases;
	$assign(types, $new($ClassArray, 201));
	$Arrays::fill(types, $Integer::TYPE);
	test($($MethodType::methodType($String::class$, types)));
	if (BasicTest::exceedMaxParamSlots != expectionTestCases) {
		$throwNew($RuntimeException, "expected one test case exceeding 200 param slots"_s);
	}
}

void BasicTest::test($MethodType* concatType) {
	$init(BasicTest);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($String, recipe, ""_s);
	int32_t slots = 0;
	{
		$var($Iterator, i$, $$nc($nc(concatType)->parameterList())->iterator());
		for (; $nc(i$)->hasNext();) {
			$Class* c = $cast($Class, i$->next());
			{
				$plusAssign(recipe, "\u0001"_s);
				++slots;
				if (c == $Double::TYPE || c == $Long::TYPE) {
					++slots;
				}
			}
		}
	}
	if (slots > BasicTest::MAX_PARAM_SLOTS) {
		++BasicTest::exceedMaxParamSlots;
	}
	$nc($System::out)->format("Test %s parameter slots%n"_s, $$new($ObjectArray, {$($Integer::valueOf(slots))}));
	try {
		$StringConcatFactory::makeConcat($($MethodHandles::lookup()), "name"_s, concatType);
		if (slots > BasicTest::MAX_PARAM_SLOTS) {
			$throwNew($RuntimeException, "StringConcatException not thrown"_s);
		}
	} catch ($StringConcatException& e) {
		if (slots <= BasicTest::MAX_PARAM_SLOTS) {
			$throw(e);
		}
	}
	try {
		$StringConcatFactory::makeConcatWithConstants($($MethodHandles::lookup()), "name"_s, concatType, recipe, $$new($ObjectArray, 0));
		if (slots > BasicTest::MAX_PARAM_SLOTS) {
			$throwNew($RuntimeException, "StringConcatException not thrown"_s);
		}
	} catch ($StringConcatException& e) {
		if (slots <= BasicTest::MAX_PARAM_SLOTS) {
			$throw(e);
		}
	}
}

void BasicTest::clinit$($Class* clazz) {
	BasicTest::exceedMaxParamSlots = 0;
}

BasicTest::BasicTest() {
}

$Class* BasicTest::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"MAX_PARAM_SLOTS", "I", nullptr, $STATIC | $FINAL, $constField(BasicTest, MAX_PARAM_SLOTS)},
		{"exceedMaxParamSlots", "I", nullptr, $STATIC, $staticField(BasicTest, exceedMaxParamSlots)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BasicTest, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(BasicTest, main, void, $StringArray*), "java.lang.Throwable"},
		{"test", "(Ljava/lang/invoke/MethodType;)V", nullptr, $STATIC, $staticMethod(BasicTest, test, void, $MethodType*), "java.lang.invoke.StringConcatException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"BasicTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(BasicTest, name, initialize, &classInfo$$, BasicTest::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(BasicTest);
	});
	return class$;
}

$Class* BasicTest::class$ = nullptr;