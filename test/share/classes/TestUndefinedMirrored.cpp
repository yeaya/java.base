#include <TestUndefinedMirrored.h>
#include <jcpp.h>

using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

int32_t TestUndefinedMirrored::endValue = 0;

void TestUndefinedMirrored::init$() {
}

void TestUndefinedMirrored::main($StringArray* args) {
	$init(TestUndefinedMirrored);
	$useLocalObjectStack();
	for (int32_t ch = 0; ch <= TestUndefinedMirrored::endValue; ++ch) {
		bool var$0 = !$Character::isDefined((char16_t)ch);
		if (var$0 && $Character::isMirrored((char16_t)ch)) {
			$throwNew($RuntimeException, $$str({"Char value "_s, $($Integer::toHexString((char16_t)ch))}));
		}
	}
	$nc($System::out)->println("Passed."_s);
}

void TestUndefinedMirrored::clinit$($Class* clazz) {
	TestUndefinedMirrored::endValue = 0x0000ffff;
}

TestUndefinedMirrored::TestUndefinedMirrored() {
}

$Class* TestUndefinedMirrored::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"endValue", "I", nullptr, $STATIC, $staticField(TestUndefinedMirrored, endValue)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestUndefinedMirrored, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestUndefinedMirrored, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestUndefinedMirrored",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestUndefinedMirrored, name, initialize, &classInfo$$, TestUndefinedMirrored::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TestUndefinedMirrored);
	});
	return class$;
}

$Class* TestUndefinedMirrored::class$ = nullptr;