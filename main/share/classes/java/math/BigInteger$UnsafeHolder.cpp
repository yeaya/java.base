#include <java/math/BigInteger$UnsafeHolder.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _BigInteger$UnsafeHolder_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BigInteger$UnsafeHolder, unsafe)},
	{"signumOffset", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BigInteger$UnsafeHolder, signumOffset)},
	{"magOffset", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BigInteger$UnsafeHolder, magOffset)},
	{}
};

$MethodInfo _BigInteger$UnsafeHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(BigInteger$UnsafeHolder::*)()>(&BigInteger$UnsafeHolder::init$))},
	{"putMag", "(Ljava/math/BigInteger;[I)V", nullptr, $STATIC, $method(static_cast<void(*)($BigInteger*,$ints*)>(&BigInteger$UnsafeHolder::putMag))},
	{"putSign", "(Ljava/math/BigInteger;I)V", nullptr, $STATIC, $method(static_cast<void(*)($BigInteger*,int32_t)>(&BigInteger$UnsafeHolder::putSign))},
	{}
};

$InnerClassInfo _BigInteger$UnsafeHolder_InnerClassesInfo_[] = {
	{"java.math.BigInteger$UnsafeHolder", "java.math.BigInteger", "UnsafeHolder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _BigInteger$UnsafeHolder_ClassInfo_ = {
	$ACC_SUPER,
	"java.math.BigInteger$UnsafeHolder",
	"java.lang.Object",
	nullptr,
	_BigInteger$UnsafeHolder_FieldInfo_,
	_BigInteger$UnsafeHolder_MethodInfo_,
	nullptr,
	nullptr,
	_BigInteger$UnsafeHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.math.BigInteger"
};

$Object* allocate$BigInteger$UnsafeHolder($Class* clazz) {
	return $of($alloc(BigInteger$UnsafeHolder));
}

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

void clinit$BigInteger$UnsafeHolder($Class* class$) {
	$assignStatic(BigInteger$UnsafeHolder::unsafe, $Unsafe::getUnsafe());
	$load($BigInteger);
	BigInteger$UnsafeHolder::signumOffset = $nc(BigInteger$UnsafeHolder::unsafe)->objectFieldOffset($BigInteger::class$, "signum"_s);
	BigInteger$UnsafeHolder::magOffset = $nc(BigInteger$UnsafeHolder::unsafe)->objectFieldOffset($BigInteger::class$, "mag"_s);
}

BigInteger$UnsafeHolder::BigInteger$UnsafeHolder() {
}

$Class* BigInteger$UnsafeHolder::load$($String* name, bool initialize) {
	$loadClass(BigInteger$UnsafeHolder, name, initialize, &_BigInteger$UnsafeHolder_ClassInfo_, clinit$BigInteger$UnsafeHolder, allocate$BigInteger$UnsafeHolder);
	return class$;
}

$Class* BigInteger$UnsafeHolder::class$ = nullptr;

	} // math
} // java