#include <TestUndefinedIgnorable.h>
#include <jcpp.h>

using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

int32_t TestUndefinedIgnorable::endValue = 0;

void TestUndefinedIgnorable::init$() {
}

void TestUndefinedIgnorable::main($StringArray* args) {
	$init(TestUndefinedIgnorable);
	$useLocalObjectStack();
	for (int32_t ch = 0; ch <= TestUndefinedIgnorable::endValue; ++ch) {
		bool var$0 = !$Character::isDefined((char16_t)ch);
		if (var$0 && $Character::isIdentifierIgnorable((char16_t)ch)) {
			$throwNew($RuntimeException, $$str({"Char value "_s, $($Integer::toHexString((char16_t)ch))}));
		}
	}
	$nc($System::out)->println("Passed."_s);
}

void TestUndefinedIgnorable::clinit$($Class* clazz) {
	TestUndefinedIgnorable::endValue = 0x0000ffff;
}

TestUndefinedIgnorable::TestUndefinedIgnorable() {
}

$Class* TestUndefinedIgnorable::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"endValue", "I", nullptr, $STATIC, $staticField(TestUndefinedIgnorable, endValue)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestUndefinedIgnorable, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestUndefinedIgnorable, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestUndefinedIgnorable",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestUndefinedIgnorable, name, initialize, &classInfo$$, TestUndefinedIgnorable::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TestUndefinedIgnorable);
	});
	return class$;
}

$Class* TestUndefinedIgnorable::class$ = nullptr;