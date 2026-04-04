#include <TestUndefinedDirectionality.h>
#include <jcpp.h>

#undef DIRECTIONALITY_UNDEFINED

using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void TestUndefinedDirectionality::init$() {
}

void TestUndefinedDirectionality::main($StringArray* args) {
	$useLocalObjectStack();
	int32_t failures = 0;
	for (int32_t ch = 0; ch <= 0x0000ffff; ++ch) {
		if (!$Character::isDefined((char16_t)ch)) {
			int8_t direction = $Character::getDirectionality((char16_t)ch);
			if (direction != $Character::DIRECTIONALITY_UNDEFINED) {
				$nc($System::err)->println($$str({"Fail: \\u"_s, $($Integer::toString(ch, 16))}));
				++failures;
			}
		}
	}
	if (failures != 0) {
		$throwNew($RuntimeException, "TestUndefinedDirectionality: failed."_s);
	} else {
		$nc($System::out)->println("Passed."_s);
	}
}

TestUndefinedDirectionality::TestUndefinedDirectionality() {
}

$Class* TestUndefinedDirectionality::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestUndefinedDirectionality, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestUndefinedDirectionality, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestUndefinedDirectionality",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TestUndefinedDirectionality, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestUndefinedDirectionality);
	});
	return class$;
}

$Class* TestUndefinedDirectionality::class$ = nullptr;