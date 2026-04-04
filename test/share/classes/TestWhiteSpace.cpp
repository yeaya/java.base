#include <TestWhiteSpace.h>
#include <jcpp.h>

using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void TestWhiteSpace::init$() {
}

void TestWhiteSpace::main($StringArray* args) {
	$useLocalObjectStack();
	$var($chars, whiteSpace, $new($chars, {
		(char16_t)0xa0,
		(char16_t)0x2007,
		(char16_t)0x202f
	}));
	for (int32_t x = 0; x < whiteSpace->length; ++x) {
		if ($Character::isWhitespace(whiteSpace->get(x))) {
			$throwNew($RuntimeException, $$str({"Invalid whitespace: \\u"_s, $($Integer::toString((int32_t)whiteSpace->get(x), 16))}));
		}
	}
	$nc($System::out)->println("Passed."_s);
}

TestWhiteSpace::TestWhiteSpace() {
}

$Class* TestWhiteSpace::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestWhiteSpace, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestWhiteSpace, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestWhiteSpace",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TestWhiteSpace, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestWhiteSpace);
	});
	return class$;
}

$Class* TestWhiteSpace::class$ = nullptr;