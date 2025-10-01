#include <Chars.h>

#include <java/lang/Array.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $IntStream = ::java::util::stream::IntStream;

$MethodInfo _Chars_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Chars::*)()>(&Chars::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Chars::main))},
	{"testCPs", "([C[I)V", nullptr, $STATIC, $method(static_cast<void(*)($chars*,$ints*)>(&Chars::testCPs))},
	{"testChars", "([C[I)V", nullptr, $STATIC, $method(static_cast<void(*)($chars*,$ints*)>(&Chars::testChars))},
	{}
};

$ClassInfo _Chars_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Chars",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Chars_MethodInfo_
};

$Object* allocate$Chars($Class* clazz) {
	return $of($alloc(Chars));
}

void Chars::init$() {
}

void Chars::main($StringArray* args) {
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
			cc->set(j, (char16_t)(ccExp->set(j, cpExp->set(j, r->nextInt(32768)))));
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
				cc->set(j, (char16_t)(ccExp->set(j, cpExp->set(k++, r->nextInt(32768)))));
			}
		}
		$assign(cpExp, $Arrays::copyOf(cpExp, k));
		testChars(cc, ccExp);
		testCPs(cc, cpExp);
	}
}

void Chars::testChars($chars* cc, $ints* expected) {
	$var($String, str, $new($String, cc));
	if (!$Arrays::equals(expected, $($(str->chars())->toArray()))) {
		$throwNew($RuntimeException, "chars/codePoints() failed!"_s);
	}
}

void Chars::testCPs($chars* cc, $ints* expected) {
	$var($String, str, $new($String, cc));
	if (!$Arrays::equals(expected, $($(str->codePoints())->toArray()))) {
		$throwNew($RuntimeException, "chars/codePoints() failed!"_s);
	}
}

Chars::Chars() {
}

$Class* Chars::load$($String* name, bool initialize) {
	$loadClass(Chars, name, initialize, &_Chars_ClassInfo_, allocate$Chars);
	return class$;
}

$Class* Chars::class$ = nullptr;