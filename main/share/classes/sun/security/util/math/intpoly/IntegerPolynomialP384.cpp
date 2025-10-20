#include <sun/security/util/math/intpoly/IntegerPolynomialP384.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigInteger.h>
#include <sun/security/util/math/intpoly/IntegerPolynomial.h>
#include <jcpp.h>

#undef BITS_PER_LIMB
#undef CARRY_ADD
#undef LIMB_MASK
#undef MAX_ADDS
#undef MODULUS
#undef NUM_LIMBS

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $IntegerPolynomial = ::sun::security::util::math::intpoly::IntegerPolynomial;

namespace sun {
	namespace security {
		namespace util {
			namespace math {
				namespace intpoly {

$FieldInfo _IntegerPolynomialP384_FieldInfo_[] = {
	{"BITS_PER_LIMB", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IntegerPolynomialP384, BITS_PER_LIMB)},
	{"NUM_LIMBS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IntegerPolynomialP384, NUM_LIMBS)},
	{"MAX_ADDS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IntegerPolynomialP384, MAX_ADDS)},
	{"MODULUS", "Ljava/math/BigInteger;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(IntegerPolynomialP384, MODULUS)},
	{"CARRY_ADD", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IntegerPolynomialP384, CARRY_ADD)},
	{"LIMB_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IntegerPolynomialP384, LIMB_MASK)},
	{}
};

$MethodInfo _IntegerPolynomialP384_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IntegerPolynomialP384::*)()>(&IntegerPolynomialP384::init$))},
	{"carryReduce", "([JJJJJJJJJJJJJJJJJJJJJJJJJJJJ)V", nullptr, $PRIVATE, $method(static_cast<void(IntegerPolynomialP384::*)($longs*,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t)>(&IntegerPolynomialP384::carryReduce))},
	{"carryReduce", "([JJJJJJJJJJJJJJJ)V", nullptr, $PRIVATE, $method(static_cast<void(IntegerPolynomialP384::*)($longs*,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t)>(&IntegerPolynomialP384::carryReduce))},
	{"carryReduce0", "([JJJJJJJJJJJJJJJJJJJJJJJJJJJJJ)V", nullptr, 0},
	{"evaluateModulus", "()Ljava/math/BigInteger;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$BigInteger*(*)()>(&IntegerPolynomialP384::evaluateModulus))},
	{"finalCarryReduceLast", "([J)V", nullptr, $PROTECTED},
	{"mult", "([J[J[J)V", nullptr, $PROTECTED},
	{"reduce", "([J)V", nullptr, $PROTECTED},
	{"reduceIn", "([JJI)V", nullptr, $PROTECTED},
	{"square", "([J[J)V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _IntegerPolynomialP384_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.util.math.intpoly.IntegerPolynomialP384",
	"sun.security.util.math.intpoly.IntegerPolynomial",
	nullptr,
	_IntegerPolynomialP384_FieldInfo_,
	_IntegerPolynomialP384_MethodInfo_
};

$Object* allocate$IntegerPolynomialP384($Class* clazz) {
	return $of($alloc(IntegerPolynomialP384));
}

$BigInteger* IntegerPolynomialP384::MODULUS = nullptr;

void IntegerPolynomialP384::init$() {
	$IntegerPolynomial::init$(IntegerPolynomialP384::BITS_PER_LIMB, IntegerPolynomialP384::NUM_LIMBS, IntegerPolynomialP384::MAX_ADDS, IntegerPolynomialP384::MODULUS);
}

$BigInteger* IntegerPolynomialP384::evaluateModulus() {
	$init(IntegerPolynomialP384);
	$useLocalCurrentObjectStackCache();
	$var($BigInteger, result, $nc($($BigInteger::valueOf((int64_t)2)))->pow(384));
	$assign(result, $nc(result)->subtract($($nc($($BigInteger::valueOf((int64_t)2)))->pow(128))));
	$assign(result, result->subtract($($nc($($BigInteger::valueOf((int64_t)2)))->pow(96))));
	$assign(result, result->add($($nc($($BigInteger::valueOf((int64_t)2)))->pow(32))));
	$assign(result, result->subtract($($BigInteger::valueOf((int64_t)1))));
	return result;
}

void IntegerPolynomialP384::reduceIn($longs* limbs, int64_t v, int32_t i) {
	(*$nc(limbs))[i - 10] += (int64_t)((v << 24) & (uint64_t)(int64_t)IntegerPolynomialP384::LIMB_MASK);
	(*limbs)[i - 9] += v >> 4;
	(*limbs)[i - 11] += (int64_t)((v << 20) & (uint64_t)(int64_t)IntegerPolynomialP384::LIMB_MASK);
	(*limbs)[i - 10] += v >> 8;
	(*limbs)[i - 13] -= (int64_t)((v << 12) & (uint64_t)(int64_t)IntegerPolynomialP384::LIMB_MASK);
	(*limbs)[i - 12] -= v >> 16;
	(*limbs)[i - 14] += (int64_t)((v << 8) & (uint64_t)(int64_t)IntegerPolynomialP384::LIMB_MASK);
	(*limbs)[i - 13] += v >> 20;
}

void IntegerPolynomialP384::finalCarryReduceLast($longs* limbs) {
	int64_t c = $nc(limbs)->get(13) >> 20;
	(*limbs)[13] -= c << 20;
	(*limbs)[4] += (int64_t)((c << 16) & (uint64_t)(int64_t)IntegerPolynomialP384::LIMB_MASK);
	(*limbs)[5] += c >> 12;
	(*limbs)[3] += (int64_t)((c << 12) & (uint64_t)(int64_t)IntegerPolynomialP384::LIMB_MASK);
	(*limbs)[4] += c >> 16;
	(*limbs)[1] -= (int64_t)((c << 4) & (uint64_t)(int64_t)IntegerPolynomialP384::LIMB_MASK);
	(*limbs)[2] -= c >> 24;
	(*limbs)[0] += c;
}

void IntegerPolynomialP384::carryReduce($longs* r, int64_t c0, int64_t c1, int64_t c2, int64_t c3, int64_t c4, int64_t c5, int64_t c6, int64_t c7, int64_t c8, int64_t c9, int64_t c10, int64_t c11, int64_t c12, int64_t c13, int64_t c14, int64_t c15, int64_t c16, int64_t c17, int64_t c18, int64_t c19, int64_t c20, int64_t c21, int64_t c22, int64_t c23, int64_t c24, int64_t c25, int64_t c26) {
	int64_t c27 = 0;
	c16 += (int64_t)((c26 << 24) & (uint64_t)(int64_t)IntegerPolynomialP384::LIMB_MASK);
	c17 += c26 >> 4;
	c15 += (int64_t)((c26 << 20) & (uint64_t)(int64_t)IntegerPolynomialP384::LIMB_MASK);
	c16 += c26 >> 8;
	c13 -= (int64_t)((c26 << 12) & (uint64_t)(int64_t)IntegerPolynomialP384::LIMB_MASK);
	c14 -= c26 >> 16;
	c12 += (int64_t)((c26 << 8) & (uint64_t)(int64_t)IntegerPolynomialP384::LIMB_MASK);
	c13 += c26 >> 20;
	c15 += (int64_t)((c25 << 24) & (uint64_t)(int64_t)IntegerPolynomialP384::LIMB_MASK);
	c16 += c25 >> 4;
	c14 += (int64_t)((c25 << 20) & (uint64_t)(int64_t)IntegerPolynomialP384::LIMB_MASK);
	c15 += c25 >> 8;
	c12 -= (int64_t)((c25 << 12) & (uint64_t)(int64_t)IntegerPolynomialP384::LIMB_MASK);
	c13 -= c25 >> 16;
	c11 += (int64_t)((c25 << 8) & (uint64_t)(int64_t)IntegerPolynomialP384::LIMB_MASK);
	c12 += c25 >> 20;
	c14 += (int64_t)((c24 << 24) & (uint64_t)(int64_t)IntegerPolynomialP384::LIMB_MASK);
	c15 += c24 >> 4;
	c13 += (int64_t)((c24 << 20) & (uint64_t)(int64_t)IntegerPolynomialP384::LIMB_MASK);
	c14 += c24 >> 8;
	c11 -= (int64_t)((c24 << 12) & (uint64_t)(int64_t)IntegerPolynomialP384::LIMB_MASK);
	c12 -= c24 >> 16;
	c10 += (int64_t)((c24 << 8) & (uint64_t)(int64_t)IntegerPolynomialP384::LIMB_MASK);
	c11 += c24 >> 20;
	c13 += (int64_t)((c23 << 24) & (uint64_t)(int64_t)IntegerPolynomialP384::LIMB_MASK);
	c14 += c23 >> 4;
	c12 += (int64_t)((c23 << 20) & (uint64_t)(int64_t)IntegerPolynomialP384::LIMB_MASK);
	c13 += c23 >> 8;
	c10 -= (int64_t)((c23 << 12) & (uint64_t)(int64_t)IntegerPolynomialP384::LIMB_MASK);
	c11 -= c23 >> 16;
	c9 += (int64_t)((c23 << 8) & (uint64_t)(int64_t)IntegerPolynomialP384::LIMB_MASK);
	c10 += c23 >> 20;
	c12 += (int64_t)((c22 << 24) & (uint64_t)(int64_t)IntegerPolynomialP384::LIMB_MASK);
	c13 += c22 >> 4;
	c11 += (int64_t)((c22 << 20) & (uint64_t)(int64_t)IntegerPolynomialP384::LIMB_MASK);
	c12 += c22 >> 8;
	c9 -= (int64_t)((c22 << 12) & (uint64_t)(int64_t)IntegerPolynomialP384::LIMB_MASK);
	c10 -= c22 >> 16;
	c8 += (int64_t)((c22 << 8) & (uint64_t)(int64_t)IntegerPolynomialP384::LIMB_MASK);
	c9 += c22 >> 20;
	c11 += (int64_t)((c21 << 24) & (uint64_t)(int64_t)IntegerPolynomialP384::LIMB_MASK);
	c12 += c21 >> 4;
	c10 += (int64_t)((c21 << 20) & (uint64_t)(int64_t)IntegerPolynomialP384::LIMB_MASK);
	c11 += c21 >> 8;
	c8 -= (int64_t)((c21 << 12) & (uint64_t)(int64_t)IntegerPolynomialP384::LIMB_MASK);
	c9 -= c21 >> 16;
	c7 += (int64_t)((c21 << 8) & (uint64_t)(int64_t)IntegerPolynomialP384::LIMB_MASK);
	c8 += c21 >> 20;
	c10 += (int64_t)((c20 << 24) & (uint64_t)(int64_t)IntegerPolynomialP384::LIMB_MASK);
	c11 += c20 >> 4;
	c9 += (int64_t)((c20 << 20) & (uint64_t)(int64_t)IntegerPolynomialP384::LIMB_MASK);
	c10 += c20 >> 8;
	c7 -= (int64_t)((c20 << 12) & (uint64_t)(int64_t)IntegerPolynomialP384::LIMB_MASK);
	c8 -= c20 >> 16;
	c6 += (int64_t)((c20 << 8) & (uint64_t)(int64_t)IntegerPolynomialP384::LIMB_MASK);
	c7 += c20 >> 20;
	c9 += (int64_t)((c19 << 24) & (uint64_t)(int64_t)IntegerPolynomialP384::LIMB_MASK);
	c10 += c19 >> 4;
	c8 += (int64_t)((c19 << 20) & (uint64_t)(int64_t)IntegerPolynomialP384::LIMB_MASK);
	c9 += c19 >> 8;
	c6 -= (int64_t)((c19 << 12) & (uint64_t)(int64_t)IntegerPolynomialP384::LIMB_MASK);
	c7 -= c19 >> 16;
	c5 += (int64_t)((c19 << 8) & (uint64_t)(int64_t)IntegerPolynomialP384::LIMB_MASK);
	c6 += c19 >> 20;
	c8 += (int64_t)((c18 << 24) & (uint64_t)(int64_t)IntegerPolynomialP384::LIMB_MASK);
	c9 += c18 >> 4;
	c7 += (int64_t)((c18 << 20) & (uint64_t)(int64_t)IntegerPolynomialP384::LIMB_MASK);
	c8 += c18 >> 8;
	c5 -= (int64_t)((c18 << 12) & (uint64_t)(int64_t)IntegerPolynomialP384::LIMB_MASK);
	c6 -= c18 >> 16;
	c4 += (int64_t)((c18 << 8) & (uint64_t)(int64_t)IntegerPolynomialP384::LIMB_MASK);
	c5 += c18 >> 20;
	c7 += (int64_t)((c17 << 24) & (uint64_t)(int64_t)IntegerPolynomialP384::LIMB_MASK);
	c8 += c17 >> 4;
	c6 += (int64_t)((c17 << 20) & (uint64_t)(int64_t)IntegerPolynomialP384::LIMB_MASK);
	c7 += c17 >> 8;
	c4 -= (int64_t)((c17 << 12) & (uint64_t)(int64_t)IntegerPolynomialP384::LIMB_MASK);
	c5 -= c17 >> 16;
	c3 += (int64_t)((c17 << 8) & (uint64_t)(int64_t)IntegerPolynomialP384::LIMB_MASK);
	c4 += c17 >> 20;
	c6 += (int64_t)((c16 << 24) & (uint64_t)(int64_t)IntegerPolynomialP384::LIMB_MASK);
	c7 += c16 >> 4;
	c5 += (int64_t)((c16 << 20) & (uint64_t)(int64_t)IntegerPolynomialP384::LIMB_MASK);
	c6 += c16 >> 8;
	c3 -= (int64_t)((c16 << 12) & (uint64_t)(int64_t)IntegerPolynomialP384::LIMB_MASK);
	c4 -= c16 >> 16;
	c2 += (int64_t)((c16 << 8) & (uint64_t)(int64_t)IntegerPolynomialP384::LIMB_MASK);
	c3 += c16 >> 20;
	c5 += (int64_t)((c15 << 24) & (uint64_t)(int64_t)IntegerPolynomialP384::LIMB_MASK);
	c6 += c15 >> 4;
	c4 += (int64_t)((c15 << 20) & (uint64_t)(int64_t)IntegerPolynomialP384::LIMB_MASK);
	c5 += c15 >> 8;
	c2 -= (int64_t)((c15 << 12) & (uint64_t)(int64_t)IntegerPolynomialP384::LIMB_MASK);
	c3 -= c15 >> 16;
	c1 += (int64_t)((c15 << 8) & (uint64_t)(int64_t)IntegerPolynomialP384::LIMB_MASK);
	c2 += c15 >> 20;
	c4 += (int64_t)((c14 << 24) & (uint64_t)(int64_t)IntegerPolynomialP384::LIMB_MASK);
	c5 += c14 >> 4;
	c3 += (int64_t)((c14 << 20) & (uint64_t)(int64_t)IntegerPolynomialP384::LIMB_MASK);
	c4 += c14 >> 8;
	c1 -= (int64_t)((c14 << 12) & (uint64_t)(int64_t)IntegerPolynomialP384::LIMB_MASK);
	c2 -= c14 >> 16;
	c0 += (int64_t)((c14 << 8) & (uint64_t)(int64_t)IntegerPolynomialP384::LIMB_MASK);
	c1 += c14 >> 20;
	c14 = 0;
	carryReduce0(r, c0, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14, c15, c16, c17, c18, c19, c20, c21, c22, c23, c24, c25, c26, c27);
}

void IntegerPolynomialP384::carryReduce0($longs* r, int64_t c0, int64_t c1, int64_t c2, int64_t c3, int64_t c4, int64_t c5, int64_t c6, int64_t c7, int64_t c8, int64_t c9, int64_t c10, int64_t c11, int64_t c12, int64_t c13, int64_t c14, int64_t c15, int64_t c16, int64_t c17, int64_t c18, int64_t c19, int64_t c20, int64_t c21, int64_t c22, int64_t c23, int64_t c24, int64_t c25, int64_t c26, int64_t c27) {
	int64_t t0 = (c12 + IntegerPolynomialP384::CARRY_ADD) >> 28;
	c12 -= (t0 << 28);
	c13 += t0;
	t0 = (c13 + IntegerPolynomialP384::CARRY_ADD) >> 28;
	c13 -= (t0 << 28);
	c14 += t0;
	c4 += (int64_t)((c14 << 24) & (uint64_t)(int64_t)IntegerPolynomialP384::LIMB_MASK);
	c5 += c14 >> 4;
	c3 += (int64_t)((c14 << 20) & (uint64_t)(int64_t)IntegerPolynomialP384::LIMB_MASK);
	c4 += c14 >> 8;
	c1 -= (int64_t)((c14 << 12) & (uint64_t)(int64_t)IntegerPolynomialP384::LIMB_MASK);
	c2 -= c14 >> 16;
	c0 += (int64_t)((c14 << 8) & (uint64_t)(int64_t)IntegerPolynomialP384::LIMB_MASK);
	c1 += c14 >> 20;
	t0 = (c0 + IntegerPolynomialP384::CARRY_ADD) >> 28;
	c0 -= (t0 << 28);
	c1 += t0;
	t0 = (c1 + IntegerPolynomialP384::CARRY_ADD) >> 28;
	c1 -= (t0 << 28);
	c2 += t0;
	t0 = (c2 + IntegerPolynomialP384::CARRY_ADD) >> 28;
	c2 -= (t0 << 28);
	c3 += t0;
	t0 = (c3 + IntegerPolynomialP384::CARRY_ADD) >> 28;
	c3 -= (t0 << 28);
	c4 += t0;
	t0 = (c4 + IntegerPolynomialP384::CARRY_ADD) >> 28;
	c4 -= (t0 << 28);
	c5 += t0;
	t0 = (c5 + IntegerPolynomialP384::CARRY_ADD) >> 28;
	c5 -= (t0 << 28);
	c6 += t0;
	t0 = (c6 + IntegerPolynomialP384::CARRY_ADD) >> 28;
	c6 -= (t0 << 28);
	c7 += t0;
	t0 = (c7 + IntegerPolynomialP384::CARRY_ADD) >> 28;
	c7 -= (t0 << 28);
	c8 += t0;
	t0 = (c8 + IntegerPolynomialP384::CARRY_ADD) >> 28;
	c8 -= (t0 << 28);
	c9 += t0;
	t0 = (c9 + IntegerPolynomialP384::CARRY_ADD) >> 28;
	c9 -= (t0 << 28);
	c10 += t0;
	t0 = (c10 + IntegerPolynomialP384::CARRY_ADD) >> 28;
	c10 -= (t0 << 28);
	c11 += t0;
	t0 = (c11 + IntegerPolynomialP384::CARRY_ADD) >> 28;
	c11 -= (t0 << 28);
	c12 += t0;
	t0 = (c12 + IntegerPolynomialP384::CARRY_ADD) >> 28;
	c12 -= (t0 << 28);
	c13 += t0;
	$nc(r)->set(0, c0);
	r->set(1, c1);
	r->set(2, c2);
	r->set(3, c3);
	r->set(4, c4);
	r->set(5, c5);
	r->set(6, c6);
	r->set(7, c7);
	r->set(8, c8);
	r->set(9, c9);
	r->set(10, c10);
	r->set(11, c11);
	r->set(12, c12);
	r->set(13, c13);
}

void IntegerPolynomialP384::carryReduce($longs* r, int64_t c0, int64_t c1, int64_t c2, int64_t c3, int64_t c4, int64_t c5, int64_t c6, int64_t c7, int64_t c8, int64_t c9, int64_t c10, int64_t c11, int64_t c12, int64_t c13) {
	int64_t c14 = 0;
	int64_t t0 = (c12 + IntegerPolynomialP384::CARRY_ADD) >> 28;
	c12 -= (t0 << 28);
	c13 += t0;
	t0 = (c13 + IntegerPolynomialP384::CARRY_ADD) >> 28;
	c13 -= (t0 << 28);
	c14 += t0;
	c4 += (int64_t)((c14 << 24) & (uint64_t)(int64_t)IntegerPolynomialP384::LIMB_MASK);
	c5 += c14 >> 4;
	c3 += (int64_t)((c14 << 20) & (uint64_t)(int64_t)IntegerPolynomialP384::LIMB_MASK);
	c4 += c14 >> 8;
	c1 -= (int64_t)((c14 << 12) & (uint64_t)(int64_t)IntegerPolynomialP384::LIMB_MASK);
	c2 -= c14 >> 16;
	c0 += (int64_t)((c14 << 8) & (uint64_t)(int64_t)IntegerPolynomialP384::LIMB_MASK);
	c1 += c14 >> 20;
	t0 = (c0 + IntegerPolynomialP384::CARRY_ADD) >> 28;
	c0 -= (t0 << 28);
	c1 += t0;
	t0 = (c1 + IntegerPolynomialP384::CARRY_ADD) >> 28;
	c1 -= (t0 << 28);
	c2 += t0;
	t0 = (c2 + IntegerPolynomialP384::CARRY_ADD) >> 28;
	c2 -= (t0 << 28);
	c3 += t0;
	t0 = (c3 + IntegerPolynomialP384::CARRY_ADD) >> 28;
	c3 -= (t0 << 28);
	c4 += t0;
	t0 = (c4 + IntegerPolynomialP384::CARRY_ADD) >> 28;
	c4 -= (t0 << 28);
	c5 += t0;
	t0 = (c5 + IntegerPolynomialP384::CARRY_ADD) >> 28;
	c5 -= (t0 << 28);
	c6 += t0;
	t0 = (c6 + IntegerPolynomialP384::CARRY_ADD) >> 28;
	c6 -= (t0 << 28);
	c7 += t0;
	t0 = (c7 + IntegerPolynomialP384::CARRY_ADD) >> 28;
	c7 -= (t0 << 28);
	c8 += t0;
	t0 = (c8 + IntegerPolynomialP384::CARRY_ADD) >> 28;
	c8 -= (t0 << 28);
	c9 += t0;
	t0 = (c9 + IntegerPolynomialP384::CARRY_ADD) >> 28;
	c9 -= (t0 << 28);
	c10 += t0;
	t0 = (c10 + IntegerPolynomialP384::CARRY_ADD) >> 28;
	c10 -= (t0 << 28);
	c11 += t0;
	t0 = (c11 + IntegerPolynomialP384::CARRY_ADD) >> 28;
	c11 -= (t0 << 28);
	c12 += t0;
	t0 = (c12 + IntegerPolynomialP384::CARRY_ADD) >> 28;
	c12 -= (t0 << 28);
	c13 += t0;
	$nc(r)->set(0, c0);
	r->set(1, c1);
	r->set(2, c2);
	r->set(3, c3);
	r->set(4, c4);
	r->set(5, c5);
	r->set(6, c6);
	r->set(7, c7);
	r->set(8, c8);
	r->set(9, c9);
	r->set(10, c10);
	r->set(11, c11);
	r->set(12, c12);
	r->set(13, c13);
}

void IntegerPolynomialP384::mult($longs* a, $longs* b, $longs* r) {
	int64_t c0 = ($nc(a)->get(0) * $nc(b)->get(0));
	int64_t c1 = (a->get(0) * b->get(1)) + (a->get(1) * b->get(0));
	int64_t c2 = (a->get(0) * b->get(2)) + (a->get(1) * b->get(1)) + (a->get(2) * b->get(0));
	int64_t c3 = (a->get(0) * b->get(3)) + (a->get(1) * b->get(2)) + (a->get(2) * b->get(1)) + (a->get(3) * b->get(0));
	int64_t c4 = (a->get(0) * b->get(4)) + (a->get(1) * b->get(3)) + (a->get(2) * b->get(2)) + (a->get(3) * b->get(1)) + (a->get(4) * b->get(0));
	int64_t c5 = (a->get(0) * b->get(5)) + (a->get(1) * b->get(4)) + (a->get(2) * b->get(3)) + (a->get(3) * b->get(2)) + (a->get(4) * b->get(1)) + (a->get(5) * b->get(0));
	int64_t c6 = (a->get(0) * b->get(6)) + (a->get(1) * b->get(5)) + (a->get(2) * b->get(4)) + (a->get(3) * b->get(3)) + (a->get(4) * b->get(2)) + (a->get(5) * b->get(1)) + (a->get(6) * b->get(0));
	int64_t c7 = (a->get(0) * b->get(7)) + (a->get(1) * b->get(6)) + (a->get(2) * b->get(5)) + (a->get(3) * b->get(4)) + (a->get(4) * b->get(3)) + (a->get(5) * b->get(2)) + (a->get(6) * b->get(1)) + (a->get(7) * b->get(0));
	int64_t c8 = (a->get(0) * b->get(8)) + (a->get(1) * b->get(7)) + (a->get(2) * b->get(6)) + (a->get(3) * b->get(5)) + (a->get(4) * b->get(4)) + (a->get(5) * b->get(3)) + (a->get(6) * b->get(2)) + (a->get(7) * b->get(1)) + (a->get(8) * b->get(0));
	int64_t c9 = (a->get(0) * b->get(9)) + (a->get(1) * b->get(8)) + (a->get(2) * b->get(7)) + (a->get(3) * b->get(6)) + (a->get(4) * b->get(5)) + (a->get(5) * b->get(4)) + (a->get(6) * b->get(3)) + (a->get(7) * b->get(2)) + (a->get(8) * b->get(1)) + (a->get(9) * b->get(0));
	int64_t c10 = (a->get(0) * b->get(10)) + (a->get(1) * b->get(9)) + (a->get(2) * b->get(8)) + (a->get(3) * b->get(7)) + (a->get(4) * b->get(6)) + (a->get(5) * b->get(5)) + (a->get(6) * b->get(4)) + (a->get(7) * b->get(3)) + (a->get(8) * b->get(2)) + (a->get(9) * b->get(1)) + (a->get(10) * b->get(0));
	int64_t c11 = (a->get(0) * b->get(11)) + (a->get(1) * b->get(10)) + (a->get(2) * b->get(9)) + (a->get(3) * b->get(8)) + (a->get(4) * b->get(7)) + (a->get(5) * b->get(6)) + (a->get(6) * b->get(5)) + (a->get(7) * b->get(4)) + (a->get(8) * b->get(3)) + (a->get(9) * b->get(2)) + (a->get(10) * b->get(1)) + (a->get(11) * b->get(0));
	int64_t c12 = (a->get(0) * b->get(12)) + (a->get(1) * b->get(11)) + (a->get(2) * b->get(10)) + (a->get(3) * b->get(9)) + (a->get(4) * b->get(8)) + (a->get(5) * b->get(7)) + (a->get(6) * b->get(6)) + (a->get(7) * b->get(5)) + (a->get(8) * b->get(4)) + (a->get(9) * b->get(3)) + (a->get(10) * b->get(2)) + (a->get(11) * b->get(1)) + (a->get(12) * b->get(0));
	int64_t c13 = (a->get(0) * b->get(13)) + (a->get(1) * b->get(12)) + (a->get(2) * b->get(11)) + (a->get(3) * b->get(10)) + (a->get(4) * b->get(9)) + (a->get(5) * b->get(8)) + (a->get(6) * b->get(7)) + (a->get(7) * b->get(6)) + (a->get(8) * b->get(5)) + (a->get(9) * b->get(4)) + (a->get(10) * b->get(3)) + (a->get(11) * b->get(2)) + (a->get(12) * b->get(1)) + (a->get(13) * b->get(0));
	int64_t c14 = (a->get(1) * b->get(13)) + (a->get(2) * b->get(12)) + (a->get(3) * b->get(11)) + (a->get(4) * b->get(10)) + (a->get(5) * b->get(9)) + (a->get(6) * b->get(8)) + (a->get(7) * b->get(7)) + (a->get(8) * b->get(6)) + (a->get(9) * b->get(5)) + (a->get(10) * b->get(4)) + (a->get(11) * b->get(3)) + (a->get(12) * b->get(2)) + (a->get(13) * b->get(1));
	int64_t c15 = (a->get(2) * b->get(13)) + (a->get(3) * b->get(12)) + (a->get(4) * b->get(11)) + (a->get(5) * b->get(10)) + (a->get(6) * b->get(9)) + (a->get(7) * b->get(8)) + (a->get(8) * b->get(7)) + (a->get(9) * b->get(6)) + (a->get(10) * b->get(5)) + (a->get(11) * b->get(4)) + (a->get(12) * b->get(3)) + (a->get(13) * b->get(2));
	int64_t c16 = (a->get(3) * b->get(13)) + (a->get(4) * b->get(12)) + (a->get(5) * b->get(11)) + (a->get(6) * b->get(10)) + (a->get(7) * b->get(9)) + (a->get(8) * b->get(8)) + (a->get(9) * b->get(7)) + (a->get(10) * b->get(6)) + (a->get(11) * b->get(5)) + (a->get(12) * b->get(4)) + (a->get(13) * b->get(3));
	int64_t c17 = (a->get(4) * b->get(13)) + (a->get(5) * b->get(12)) + (a->get(6) * b->get(11)) + (a->get(7) * b->get(10)) + (a->get(8) * b->get(9)) + (a->get(9) * b->get(8)) + (a->get(10) * b->get(7)) + (a->get(11) * b->get(6)) + (a->get(12) * b->get(5)) + (a->get(13) * b->get(4));
	int64_t c18 = (a->get(5) * b->get(13)) + (a->get(6) * b->get(12)) + (a->get(7) * b->get(11)) + (a->get(8) * b->get(10)) + (a->get(9) * b->get(9)) + (a->get(10) * b->get(8)) + (a->get(11) * b->get(7)) + (a->get(12) * b->get(6)) + (a->get(13) * b->get(5));
	int64_t c19 = (a->get(6) * b->get(13)) + (a->get(7) * b->get(12)) + (a->get(8) * b->get(11)) + (a->get(9) * b->get(10)) + (a->get(10) * b->get(9)) + (a->get(11) * b->get(8)) + (a->get(12) * b->get(7)) + (a->get(13) * b->get(6));
	int64_t c20 = (a->get(7) * b->get(13)) + (a->get(8) * b->get(12)) + (a->get(9) * b->get(11)) + (a->get(10) * b->get(10)) + (a->get(11) * b->get(9)) + (a->get(12) * b->get(8)) + (a->get(13) * b->get(7));
	int64_t c21 = (a->get(8) * b->get(13)) + (a->get(9) * b->get(12)) + (a->get(10) * b->get(11)) + (a->get(11) * b->get(10)) + (a->get(12) * b->get(9)) + (a->get(13) * b->get(8));
	int64_t c22 = (a->get(9) * b->get(13)) + (a->get(10) * b->get(12)) + (a->get(11) * b->get(11)) + (a->get(12) * b->get(10)) + (a->get(13) * b->get(9));
	int64_t c23 = (a->get(10) * b->get(13)) + (a->get(11) * b->get(12)) + (a->get(12) * b->get(11)) + (a->get(13) * b->get(10));
	int64_t c24 = (a->get(11) * b->get(13)) + (a->get(12) * b->get(12)) + (a->get(13) * b->get(11));
	int64_t c25 = (a->get(12) * b->get(13)) + (a->get(13) * b->get(12));
	int64_t c26 = (a->get(13) * b->get(13));
	carryReduce(r, c0, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14, c15, c16, c17, c18, c19, c20, c21, c22, c23, c24, c25, c26);
}

void IntegerPolynomialP384::reduce($longs* a) {
	carryReduce(a, $nc(a)->get(0), a->get(1), a->get(2), a->get(3), a->get(4), a->get(5), a->get(6), a->get(7), a->get(8), a->get(9), a->get(10), a->get(11), a->get(12), a->get(13));
}

void IntegerPolynomialP384::square($longs* a, $longs* r) {
	int64_t c0 = ($nc(a)->get(0) * a->get(0));
	int64_t c1 = 2 * (a->get(0) * a->get(1));
	int64_t c2 = 2 * (a->get(0) * a->get(2)) + (a->get(1) * a->get(1));
	int64_t c3 = 2 * ((a->get(0) * a->get(3)) + (a->get(1) * a->get(2)));
	int64_t c4 = 2 * ((a->get(0) * a->get(4)) + (a->get(1) * a->get(3))) + (a->get(2) * a->get(2));
	int64_t c5 = 2 * ((a->get(0) * a->get(5)) + (a->get(1) * a->get(4)) + (a->get(2) * a->get(3)));
	int64_t c6 = 2 * ((a->get(0) * a->get(6)) + (a->get(1) * a->get(5)) + (a->get(2) * a->get(4))) + (a->get(3) * a->get(3));
	int64_t c7 = 2 * ((a->get(0) * a->get(7)) + (a->get(1) * a->get(6)) + (a->get(2) * a->get(5)) + (a->get(3) * a->get(4)));
	int64_t c8 = 2 * ((a->get(0) * a->get(8)) + (a->get(1) * a->get(7)) + (a->get(2) * a->get(6)) + (a->get(3) * a->get(5))) + (a->get(4) * a->get(4));
	int64_t c9 = 2 * ((a->get(0) * a->get(9)) + (a->get(1) * a->get(8)) + (a->get(2) * a->get(7)) + (a->get(3) * a->get(6)) + (a->get(4) * a->get(5)));
	int64_t c10 = 2 * ((a->get(0) * a->get(10)) + (a->get(1) * a->get(9)) + (a->get(2) * a->get(8)) + (a->get(3) * a->get(7)) + (a->get(4) * a->get(6))) + (a->get(5) * a->get(5));
	int64_t c11 = 2 * ((a->get(0) * a->get(11)) + (a->get(1) * a->get(10)) + (a->get(2) * a->get(9)) + (a->get(3) * a->get(8)) + (a->get(4) * a->get(7)) + (a->get(5) * a->get(6)));
	int64_t c12 = 2 * ((a->get(0) * a->get(12)) + (a->get(1) * a->get(11)) + (a->get(2) * a->get(10)) + (a->get(3) * a->get(9)) + (a->get(4) * a->get(8)) + (a->get(5) * a->get(7))) + (a->get(6) * a->get(6));
	int64_t c13 = 2 * ((a->get(0) * a->get(13)) + (a->get(1) * a->get(12)) + (a->get(2) * a->get(11)) + (a->get(3) * a->get(10)) + (a->get(4) * a->get(9)) + (a->get(5) * a->get(8)) + (a->get(6) * a->get(7)));
	int64_t c14 = 2 * ((a->get(1) * a->get(13)) + (a->get(2) * a->get(12)) + (a->get(3) * a->get(11)) + (a->get(4) * a->get(10)) + (a->get(5) * a->get(9)) + (a->get(6) * a->get(8))) + (a->get(7) * a->get(7));
	int64_t c15 = 2 * ((a->get(2) * a->get(13)) + (a->get(3) * a->get(12)) + (a->get(4) * a->get(11)) + (a->get(5) * a->get(10)) + (a->get(6) * a->get(9)) + (a->get(7) * a->get(8)));
	int64_t c16 = 2 * ((a->get(3) * a->get(13)) + (a->get(4) * a->get(12)) + (a->get(5) * a->get(11)) + (a->get(6) * a->get(10)) + (a->get(7) * a->get(9))) + (a->get(8) * a->get(8));
	int64_t c17 = 2 * ((a->get(4) * a->get(13)) + (a->get(5) * a->get(12)) + (a->get(6) * a->get(11)) + (a->get(7) * a->get(10)) + (a->get(8) * a->get(9)));
	int64_t c18 = 2 * ((a->get(5) * a->get(13)) + (a->get(6) * a->get(12)) + (a->get(7) * a->get(11)) + (a->get(8) * a->get(10))) + (a->get(9) * a->get(9));
	int64_t c19 = 2 * ((a->get(6) * a->get(13)) + (a->get(7) * a->get(12)) + (a->get(8) * a->get(11)) + (a->get(9) * a->get(10)));
	int64_t c20 = 2 * ((a->get(7) * a->get(13)) + (a->get(8) * a->get(12)) + (a->get(9) * a->get(11))) + (a->get(10) * a->get(10));
	int64_t c21 = 2 * ((a->get(8) * a->get(13)) + (a->get(9) * a->get(12)) + (a->get(10) * a->get(11)));
	int64_t c22 = 2 * ((a->get(9) * a->get(13)) + (a->get(10) * a->get(12))) + (a->get(11) * a->get(11));
	int64_t c23 = 2 * ((a->get(10) * a->get(13)) + (a->get(11) * a->get(12)));
	int64_t c24 = 2 * (a->get(11) * a->get(13)) + (a->get(12) * a->get(12));
	int64_t c25 = 2 * (a->get(12) * a->get(13));
	int64_t c26 = (a->get(13) * a->get(13));
	carryReduce(r, c0, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14, c15, c16, c17, c18, c19, c20, c21, c22, c23, c24, c25, c26);
}

void clinit$IntegerPolynomialP384($Class* class$) {
	$assignStatic(IntegerPolynomialP384::MODULUS, IntegerPolynomialP384::evaluateModulus());
}

IntegerPolynomialP384::IntegerPolynomialP384() {
}

$Class* IntegerPolynomialP384::load$($String* name, bool initialize) {
	$loadClass(IntegerPolynomialP384, name, initialize, &_IntegerPolynomialP384_ClassInfo_, clinit$IntegerPolynomialP384, allocate$IntegerPolynomialP384);
	return class$;
}

$Class* IntegerPolynomialP384::class$ = nullptr;

				} // intpoly
			} // math
		} // util
	} // security
} // sun