#include <TestUndefinedNumeric.h>
#include <jcpp.h>

using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

int32_t TestUndefinedNumeric::endValue = 0;

void TestUndefinedNumeric::init$() {
}

void TestUndefinedNumeric::main($StringArray* args) {
	$init(TestUndefinedNumeric);
	$useLocalObjectStack();
	for (int32_t ch = 0; ch <= 0x0000ffff; ++ch) {
		bool var$0 = !$Character::isDefined((char16_t)ch);
		if (var$0 && $Character::getNumericValue((char16_t)ch) != -1) {
			$throwNew($RuntimeException, $$str({"Char value "_s, $($Integer::toHexString((char16_t)ch))}));
		}
	}
	$nc($System::out)->println("Passed."_s);
}

void TestUndefinedNumeric::clinit$($Class* clazz) {
	TestUndefinedNumeric::endValue = 0x0000ffff;
}

TestUndefinedNumeric::TestUndefinedNumeric() {
}

$Class* TestUndefinedNumeric::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"endValue", "I", nullptr, $STATIC, $staticField(TestUndefinedNumeric, endValue)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestUndefinedNumeric, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestUndefinedNumeric, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestUndefinedNumeric",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestUndefinedNumeric, name, initialize, &classInfo$$, TestUndefinedNumeric::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TestUndefinedNumeric);
	});
	return class$;
}

$Class* TestUndefinedNumeric::class$ = nullptr;