#include <Chars.h>
#include <java/util/Arrays.h>
#include <java/util/Random.h>
#include <java/util/stream/IntStream.h>
#include <jcpp.h>

using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Arrays = ::java::util::Arrays;
using $Random = ::java::util::Random;

void Chars::init$() {
}

void Chars::main($StringArray* args) {
	$useLocalObjectStack();
	$var($Random, r, $new($Random));
	for (int32_t i = 0; i < 10; ++i) {
		int32_t n = 100 + r->nextInt(100);
		$var($chars, cc, $new($chars, n));
		$var($ints, ccExp, $new($ints, n));
		$var($ints, cpExp, $new($ints, n));
		for (int32_t j = 0; j < n; ++j) {
			cc->set(j, (char16_t)(ccExp->set(j, cpExp->set(j, r->nextInt(128)))));
		}
		testChars(cc, ccExp);
		testCPs(cc, cpExp);
		for (int32_t j = 0; j < n; ++j) {
			cc->set(j, (char16_t)(ccExp->set(j, cpExp->set(j, r->nextInt(0x00008000)))));
		}
		testChars(cc, ccExp);
		testCPs(cc, cpExp);
		int32_t k = 0;
		for (int32_t j = 0; j < n; ++j) {
			if (j % 9 == 5 && j + 1 < n) {
				int32_t cp = 0x00010000 + r->nextInt(2000);
				cpExp->set(k++, cp);
				$Character::toChars(cp, cc, j);
				ccExp->set(j, cc->get(j));
				ccExp->set(j + 1, cc->get(j + 1));
				++j;
			} else {
				cc->set(j, (char16_t)(ccExp->set(j, cpExp->set(k++, r->nextInt(0x00008000)))));
			}
		}
		$assign(cpExp, $Arrays::copyOf(cpExp, k));
		testChars(cc, ccExp);
		testCPs(cc, cpExp);
	}
}

void Chars::testChars($chars* cc, $ints* expected) {
	$useLocalObjectStack();
	$var($String, str, $new($String, cc));
	if (!$Arrays::equals(expected, $($(str->chars())->toArray()))) {
		$throwNew($RuntimeException, "chars/codePoints() failed!"_s);
	}
}

void Chars::testCPs($chars* cc, $ints* expected) {
	$useLocalObjectStack();
	$var($String, str, $new($String, cc));
	if (!$Arrays::equals(expected, $($(str->codePoints())->toArray()))) {
		$throwNew($RuntimeException, "chars/codePoints() failed!"_s);
	}
}

Chars::Chars() {
}

$Class* Chars::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Chars, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Chars, main, void, $StringArray*)},
		{"testCPs", "([C[I)V", nullptr, $STATIC, $staticMethod(Chars, testCPs, void, $chars*, $ints*)},
		{"testChars", "([C[I)V", nullptr, $STATIC, $staticMethod(Chars, testChars, void, $chars*, $ints*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Chars",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Chars, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Chars);
	});
	return class$;
}

$Class* Chars::class$ = nullptr;