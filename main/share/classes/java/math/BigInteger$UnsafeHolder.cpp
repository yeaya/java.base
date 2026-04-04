#include <java/math/BigInteger$UnsafeHolder.h>
#include <java/math/BigInteger.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace math {

$Unsafe* BigInteger$UnsafeHolder::unsafe = nullptr;
int64_t BigInteger$UnsafeHolder::signumOffset = 0;
int64_t BigInteger$UnsafeHolder::magOffset = 0;

void BigInteger$UnsafeHolder::init$() {
}

void BigInteger$UnsafeHolder::putSign($BigInteger* bi, int32_t sign) {
	$init(BigInteger$UnsafeHolder);
	$nc(BigInteger$UnsafeHolder::unsafe)->putInt(bi, BigInteger$UnsafeHolder::signumOffset, sign);
}

void BigInteger$UnsafeHolder::putMag($BigInteger* bi, $ints* magnitude) {
	$init(BigInteger$UnsafeHolder);
	$nc(BigInteger$UnsafeHolder::unsafe)->putReference(bi, BigInteger$UnsafeHolder::magOffset, magnitude);
}

void BigInteger$UnsafeHolder::clinit$($Class* clazz) {
	$assignStatic(BigInteger$UnsafeHolder::unsafe, $Unsafe::getUnsafe());
	$load($BigInteger);
	BigInteger$UnsafeHolder::signumOffset = $nc(BigInteger$UnsafeHolder::unsafe)->objectFieldOffset($BigInteger::class$, "signum"_s);
	BigInteger$UnsafeHolder::magOffset = BigInteger$UnsafeHolder::unsafe->objectFieldOffset($BigInteger::class$, "mag"_s);
}

BigInteger$UnsafeHolder::BigInteger$UnsafeHolder() {
}

$Class* BigInteger$UnsafeHolder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BigInteger$UnsafeHolder, unsafe)},
		{"signumOffset", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BigInteger$UnsafeHolder, signumOffset)},
		{"magOffset", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BigInteger$UnsafeHolder, magOffset)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(BigInteger$UnsafeHolder, init$, void)},
		{"putMag", "(Ljava/math/BigInteger;[I)V", nullptr, $STATIC, $staticMethod(BigInteger$UnsafeHolder, putMag, void, $BigInteger*, $ints*)},
		{"putSign", "(Ljava/math/BigInteger;I)V", nullptr, $STATIC, $staticMethod(BigInteger$UnsafeHolder, putSign, void, $BigInteger*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.math.BigInteger$UnsafeHolder", "java.math.BigInteger", "UnsafeHolder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.math.BigInteger$UnsafeHolder",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.math.BigInteger"
	};
	$loadClass(BigInteger$UnsafeHolder, name, initialize, &classInfo$$, BigInteger$UnsafeHolder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(BigInteger$UnsafeHolder);
	});
	return class$;
}

$Class* BigInteger$UnsafeHolder::class$ = nullptr;

	} // math
} // java