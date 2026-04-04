#include <ToString.h>
#include <java/util/Random.h>
#include <jcpp.h>

#undef B
#undef C
#undef D
#undef F
#undef I
#undef L
#undef S
#undef Y

using $Boolean = ::java::lang::Boolean;
using $Byte = ::java::lang::Byte;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Short = ::java::lang::Short;
using $Random = ::java::util::Random;

$Random* ToString::generator = nullptr;

void ToString::init$() {
}

void ToString::main($StringArray* args) {
	$init(ToString);
	$useLocalObjectStack();
	bool b = false;
	$var($Boolean, B, $new($Boolean, b));
	if (!$(B->toString())->equals($($Boolean::toString(b)))) {
		$throwNew($RuntimeException, "Boolean wrapper toString() failure."_s);
	}
	b = true;
	$assign(B, $new($Boolean, b));
	if (!$(B->toString())->equals($($Boolean::toString(b)))) {
		$throwNew($RuntimeException, "Boolean wrapper toString() failure."_s);
	}
	for (int32_t x = 0; x < 100; ++x) {
		char16_t c = (char16_t)$nc(ToString::generator)->nextInt();
		$var($Character, C, $new($Character, c));
		if (!$(C->toString())->equals($($Character::toString(c)))) {
			$throwNew($RuntimeException, "Character wrapper toString() failure."_s);
		}
	}
	for (int32_t x = 0; x < 100; ++x) {
		int8_t y = (int8_t)$nc(ToString::generator)->nextInt();
		$var($Byte, Y, $new($Byte, y));
		if (!$(Y->toString())->equals($($Byte::toString(y)))) {
			$throwNew($RuntimeException, "Byte wrapper toString() failure."_s);
		}
	}
	for (int32_t x = 0; x < 100; ++x) {
		int16_t s = (int16_t)$nc(ToString::generator)->nextInt();
		$var($Short, S, $new($Short, s));
		if (!$(S->toString())->equals($($Short::toString(s)))) {
			$throwNew($RuntimeException, "Short wrapper toString() failure."_s);
		}
	}
	for (int32_t x = 0; x < 100; ++x) {
		int32_t i = $nc(ToString::generator)->nextInt();
		$var($Integer, I, $new($Integer, i));
		if (!$(I->toString())->equals($($Integer::toString(i)))) {
			$throwNew($RuntimeException, "Integer wrapper toString() failure."_s);
		}
	}
	for (int32_t x = 0; x < 100; ++x) {
		int64_t l = $nc(ToString::generator)->nextLong();
		$var($Long, L, $new($Long, l));
		if (!$(L->toString())->equals($($Long::toString(l)))) {
			$throwNew($RuntimeException, "Long wrapper toString() failure."_s);
		}
	}
	for (int32_t x = 0; x < 100; ++x) {
		float f = $nc(ToString::generator)->nextFloat();
		$var($Float, F, $new($Float, f));
		if (!$(F->toString())->equals($($Float::toString(f)))) {
			$throwNew($RuntimeException, "Float wrapper toString() failure."_s);
		}
	}
	for (int32_t x = 0; x < 100; ++x) {
		double d = $nc(ToString::generator)->nextDouble();
		$var($Double, D, $new($Double, d));
		if (!$(D->toString())->equals($($Double::toString(d)))) {
			$throwNew($RuntimeException, "Double wrapper toString() failure."_s);
		}
	}
}

void ToString::clinit$($Class* clazz) {
	$assignStatic(ToString::generator, $new($Random));
}

ToString::ToString() {
}

$Class* ToString::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"generator", "Ljava/util/Random;", nullptr, $PRIVATE | $STATIC, $staticField(ToString, generator)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ToString, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ToString, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ToString",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ToString, name, initialize, &classInfo$$, ToString::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ToString);
	});
	return class$;
}

$Class* ToString::class$ = nullptr;