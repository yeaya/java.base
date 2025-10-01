#include <java/math/BigDecimal$UnsafeHolder.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigDecimal.h>
#include <java/math/BigInteger.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigDecimal = ::java::math::BigDecimal;
using $BigInteger = ::java::math::BigInteger;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace math {

$FieldInfo _BigDecimal$UnsafeHolder_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BigDecimal$UnsafeHolder, unsafe)},
	{"intCompactOffset", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BigDecimal$UnsafeHolder, intCompactOffset)},
	{"intValOffset", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BigDecimal$UnsafeHolder, intValOffset)},
	{}
};

$MethodInfo _BigDecimal$UnsafeHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(BigDecimal$UnsafeHolder::*)()>(&BigDecimal$UnsafeHolder::init$))},
	{"setIntCompact", "(Ljava/math/BigDecimal;J)V", nullptr, $STATIC, $method(static_cast<void(*)($BigDecimal*,int64_t)>(&BigDecimal$UnsafeHolder::setIntCompact))},
	{"setIntValVolatile", "(Ljava/math/BigDecimal;Ljava/math/BigInteger;)V", nullptr, $STATIC, $method(static_cast<void(*)($BigDecimal*,$BigInteger*)>(&BigDecimal$UnsafeHolder::setIntValVolatile))},
	{}
};

$InnerClassInfo _BigDecimal$UnsafeHolder_InnerClassesInfo_[] = {
	{"java.math.BigDecimal$UnsafeHolder", "java.math.BigDecimal", "UnsafeHolder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _BigDecimal$UnsafeHolder_ClassInfo_ = {
	$ACC_SUPER,
	"java.math.BigDecimal$UnsafeHolder",
	"java.lang.Object",
	nullptr,
	_BigDecimal$UnsafeHolder_FieldInfo_,
	_BigDecimal$UnsafeHolder_MethodInfo_,
	nullptr,
	nullptr,
	_BigDecimal$UnsafeHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.math.BigDecimal"
};

$Object* allocate$BigDecimal$UnsafeHolder($Class* clazz) {
	return $of($alloc(BigDecimal$UnsafeHolder));
}

$Unsafe* BigDecimal$UnsafeHolder::unsafe = nullptr;
int64_t BigDecimal$UnsafeHolder::intCompactOffset = 0;
int64_t BigDecimal$UnsafeHolder::intValOffset = 0;

void BigDecimal$UnsafeHolder::init$() {
}

void BigDecimal$UnsafeHolder::setIntCompact($BigDecimal* bd, int64_t val) {
	$init(BigDecimal$UnsafeHolder);
	$nc(BigDecimal$UnsafeHolder::unsafe)->putLong(bd, BigDecimal$UnsafeHolder::intCompactOffset, val);
}

void BigDecimal$UnsafeHolder::setIntValVolatile($BigDecimal* bd, $BigInteger* val) {
	$init(BigDecimal$UnsafeHolder);
	$nc(BigDecimal$UnsafeHolder::unsafe)->putReferenceVolatile(bd, BigDecimal$UnsafeHolder::intValOffset, val);
}

void clinit$BigDecimal$UnsafeHolder($Class* class$) {
	$assignStatic(BigDecimal$UnsafeHolder::unsafe, $Unsafe::getUnsafe());
	$load($BigDecimal);
	BigDecimal$UnsafeHolder::intCompactOffset = $nc(BigDecimal$UnsafeHolder::unsafe)->objectFieldOffset($BigDecimal::class$, "intCompact"_s);
	BigDecimal$UnsafeHolder::intValOffset = $nc(BigDecimal$UnsafeHolder::unsafe)->objectFieldOffset($BigDecimal::class$, "intVal"_s);
}

BigDecimal$UnsafeHolder::BigDecimal$UnsafeHolder() {
}

$Class* BigDecimal$UnsafeHolder::load$($String* name, bool initialize) {
	$loadClass(BigDecimal$UnsafeHolder, name, initialize, &_BigDecimal$UnsafeHolder_ClassInfo_, clinit$BigDecimal$UnsafeHolder, allocate$BigDecimal$UnsafeHolder);
	return class$;
}

$Class* BigDecimal$UnsafeHolder::class$ = nullptr;

	} // math
} // java