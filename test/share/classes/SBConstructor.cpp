#include <SBConstructor.h>
#include <java/lang/StringBuffer.h>
#include <java/util/Random.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $StringBuffer = ::java::lang::StringBuffer;
using $Random = ::java::util::Random;

$Random* SBConstructor::rnd = nullptr;

void SBConstructor::init$() {
}

void SBConstructor::main($StringArray* argvs) {
	$init(SBConstructor);
	$useLocalObjectStack();
	for (int32_t i = 0; i < 1000; ++i) {
		int32_t length = $nc(SBConstructor::rnd)->nextInt(20) + 1;
		$var($StringBuffer, testStringBuffer, $new($StringBuffer));
		$var($StringBuilder, testStringBuilder, $new($StringBuilder));
		for (int32_t x = 0; x < length; ++x) {
			char16_t aChar = (char16_t)SBConstructor::rnd->nextInt();
			testStringBuffer->append(aChar);
			testStringBuilder->append(aChar);
		}
		$var($String, testString1, $new($String, testStringBuffer));
		$var($String, testString2, $new($String, testStringBuilder));
		if (!testString1->equals(testString2)) {
			$throwNew($RuntimeException, "Test failure"_s);
		}
	}
}

void SBConstructor::clinit$($Class* clazz) {
	$assignStatic(SBConstructor::rnd, $new($Random));
}

SBConstructor::SBConstructor() {
}

$Class* SBConstructor::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"rnd", "Ljava/util/Random;", nullptr, $PRIVATE | $STATIC, $staticField(SBConstructor, rnd)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SBConstructor, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SBConstructor, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"SBConstructor",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SBConstructor, name, initialize, &classInfo$$, SBConstructor::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SBConstructor);
	});
	return class$;
}

$Class* SBConstructor::class$ = nullptr;