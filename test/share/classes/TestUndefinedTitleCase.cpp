#include <TestUndefinedTitleCase.h>
#include <jcpp.h>

using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

int32_t TestUndefinedTitleCase::endCharValue = 0;

void TestUndefinedTitleCase::init$() {
}

void TestUndefinedTitleCase::main($StringArray* args) {
	$init(TestUndefinedTitleCase);
	$useLocalObjectStack();
	for (int32_t ch = 0; ch <= TestUndefinedTitleCase::endCharValue; ++ch) {
		bool var$0 = !$Character::isDefined((char16_t)ch);
		if (var$0 && $Character::toTitleCase((char16_t)ch) != (char16_t)ch) {
			$throwNew($RuntimeException, $$str({"Char value "_s, $($Integer::toHexString((char16_t)ch))}));
		}
	}
	$nc($System::out)->println("Passed"_s);
}

void TestUndefinedTitleCase::clinit$($Class* clazz) {
	TestUndefinedTitleCase::endCharValue = 0x0000ffff;
}

TestUndefinedTitleCase::TestUndefinedTitleCase() {
}

$Class* TestUndefinedTitleCase::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"endCharValue", "I", nullptr, $STATIC, $staticField(TestUndefinedTitleCase, endCharValue)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestUndefinedTitleCase, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestUndefinedTitleCase, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestUndefinedTitleCase",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestUndefinedTitleCase, name, initialize, &classInfo$$, TestUndefinedTitleCase::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TestUndefinedTitleCase);
	});
	return class$;
}

$Class* TestUndefinedTitleCase::class$ = nullptr;