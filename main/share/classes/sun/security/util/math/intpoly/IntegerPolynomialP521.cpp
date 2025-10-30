#include <sun/security/util/math/intpoly/IntegerPolynomialP521.h>

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

$FieldInfo _IntegerPolynomialP521_FieldInfo_[] = {
	{"BITS_PER_LIMB", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IntegerPolynomialP521, BITS_PER_LIMB)},
	{"NUM_LIMBS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IntegerPolynomialP521, NUM_LIMBS)},
	{"MAX_ADDS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IntegerPolynomialP521, MAX_ADDS)},
	{"MODULUS", "Ljava/math/BigInteger;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(IntegerPolynomialP521, MODULUS)},
	{"CARRY_ADD", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IntegerPolynomialP521, CARRY_ADD)},
	{"LIMB_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IntegerPolynomialP521, LIMB_MASK)},
	{}
};

$MethodInfo _IntegerPolynomialP521_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IntegerPolynomialP521::*)()>(&IntegerPolynomialP521::init$))},
	{"carryReduce", "([JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ)V", nullptr, $PRIVATE, $method(static_cast<void(IntegerPolynomialP521::*)($longs*,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t)>(&IntegerPolynomialP521::carryReduce))},
	{"carryReduce", "([JJJJJJJJJJJJJJJJJJJJ)V", nullptr, $PRIVATE, $method(static_cast<void(IntegerPolynomialP521::*)($longs*,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t)>(&IntegerPolynomialP521::carryReduce))},
	{"carryReduce0", "([JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ)V", nullptr, 0},
	{"evaluateModulus", "()Ljava/math/BigInteger;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$BigInteger*(*)()>(&IntegerPolynomialP521::evaluateModulus))},
	{"finalCarryReduceLast", "([J)V", nullptr, $PROTECTED},
	{"mult", "([J[J[J)V", nullptr, $PROTECTED},
	{"reduce", "([J)V", nullptr, $PROTECTED},
	{"reduceIn", "([JJI)V", nullptr, $PROTECTED},
	{"square", "([J[J)V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _IntegerPolynomialP521_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.util.math.intpoly.IntegerPolynomialP521",
	"sun.security.util.math.intpoly.IntegerPolynomial",
	nullptr,
	_IntegerPolynomialP521_FieldInfo_,
	_IntegerPolynomialP521_MethodInfo_
};

$Object* allocate$IntegerPolynomialP521($Class* clazz) {
	return $of($alloc(IntegerPolynomialP521));
}

$BigInteger* IntegerPolynomialP521::MODULUS = nullptr;

void IntegerPolynomialP521::init$() {
	$IntegerPolynomial::init$(IntegerPolynomialP521::BITS_PER_LIMB, IntegerPolynomialP521::NUM_LIMBS, IntegerPolynomialP521::MAX_ADDS, IntegerPolynomialP521::MODULUS);
}

$BigInteger* IntegerPolynomialP521::evaluateModulus() {
	$init(IntegerPolynomialP521);
	$useLocalCurrentObjectStackCache();
	$var($BigInteger, result, $nc($($BigInteger::valueOf((int64_t)2)))->pow(521));
	$assign(result, $nc(result)->subtract($($BigInteger::valueOf((int64_t)1))));
	return result;
}

void IntegerPolynomialP521::reduceIn($longs* limbs, int64_t v, int32_t i) {
	(*$nc(limbs))[i - 19] += (int64_t)((v << 11) & (uint64_t)(int64_t)IntegerPolynomialP521::LIMB_MASK);
	(*limbs)[i - 18] += v >> 17;
}

void IntegerPolynomialP521::finalCarryReduceLast($longs* limbs) {
	int64_t c = $nc(limbs)->get(18) >> 17;
	(*limbs)[18] -= c << 17;
	(*limbs)[0] += c;
}

void IntegerPolynomialP521::carryReduce($longs* r, int64_t c0, int64_t c1, int64_t c2, int64_t c3, int64_t c4, int64_t c5, int64_t c6, int64_t c7, int64_t c8, int64_t c9, int64_t c10, int64_t c11, int64_t c12, int64_t c13, int64_t c14, int64_t c15, int64_t c16, int64_t c17, int64_t c18, int64_t c19, int64_t c20, int64_t c21, int64_t c22, int64_t c23, int64_t c24, int64_t c25, int64_t c26, int64_t c27, int64_t c28, int64_t c29, int64_t c30, int64_t c31, int64_t c32, int64_t c33, int64_t c34, int64_t c35, int64_t c36) {
	int64_t c37 = 0;
	c17 += (int64_t)((c36 << 11) & (uint64_t)(int64_t)IntegerPolynomialP521::LIMB_MASK);
	c18 += c36 >> 17;
	c16 += (int64_t)((c35 << 11) & (uint64_t)(int64_t)IntegerPolynomialP521::LIMB_MASK);
	c17 += c35 >> 17;
	c15 += (int64_t)((c34 << 11) & (uint64_t)(int64_t)IntegerPolynomialP521::LIMB_MASK);
	c16 += c34 >> 17;
	c14 += (int64_t)((c33 << 11) & (uint64_t)(int64_t)IntegerPolynomialP521::LIMB_MASK);
	c15 += c33 >> 17;
	c13 += (int64_t)((c32 << 11) & (uint64_t)(int64_t)IntegerPolynomialP521::LIMB_MASK);
	c14 += c32 >> 17;
	c12 += (int64_t)((c31 << 11) & (uint64_t)(int64_t)IntegerPolynomialP521::LIMB_MASK);
	c13 += c31 >> 17;
	c11 += (int64_t)((c30 << 11) & (uint64_t)(int64_t)IntegerPolynomialP521::LIMB_MASK);
	c12 += c30 >> 17;
	c10 += (int64_t)((c29 << 11) & (uint64_t)(int64_t)IntegerPolynomialP521::LIMB_MASK);
	c11 += c29 >> 17;
	c9 += (int64_t)((c28 << 11) & (uint64_t)(int64_t)IntegerPolynomialP521::LIMB_MASK);
	c10 += c28 >> 17;
	c8 += (int64_t)((c27 << 11) & (uint64_t)(int64_t)IntegerPolynomialP521::LIMB_MASK);
	c9 += c27 >> 17;
	c7 += (int64_t)((c26 << 11) & (uint64_t)(int64_t)IntegerPolynomialP521::LIMB_MASK);
	c8 += c26 >> 17;
	c6 += (int64_t)((c25 << 11) & (uint64_t)(int64_t)IntegerPolynomialP521::LIMB_MASK);
	c7 += c25 >> 17;
	c5 += (int64_t)((c24 << 11) & (uint64_t)(int64_t)IntegerPolynomialP521::LIMB_MASK);
	c6 += c24 >> 17;
	c4 += (int64_t)((c23 << 11) & (uint64_t)(int64_t)IntegerPolynomialP521::LIMB_MASK);
	c5 += c23 >> 17;
	c3 += (int64_t)((c22 << 11) & (uint64_t)(int64_t)IntegerPolynomialP521::LIMB_MASK);
	c4 += c22 >> 17;
	c2 += (int64_t)((c21 << 11) & (uint64_t)(int64_t)IntegerPolynomialP521::LIMB_MASK);
	c3 += c21 >> 17;
	c1 += (int64_t)((c20 << 11) & (uint64_t)(int64_t)IntegerPolynomialP521::LIMB_MASK);
	c2 += c20 >> 17;
	c0 += (int64_t)((c19 << 11) & (uint64_t)(int64_t)IntegerPolynomialP521::LIMB_MASK);
	c1 += c19 >> 17;
	c19 = 0;
	carryReduce0(r, c0, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14, c15, c16, c17, c18, c19, c20, c21, c22, c23, c24, c25, c26, c27, c28, c29, c30, c31, c32, c33, c34, c35, c36, c37);
}

void IntegerPolynomialP521::carryReduce0($longs* r, int64_t c0, int64_t c1, int64_t c2, int64_t c3, int64_t c4, int64_t c5, int64_t c6, int64_t c7, int64_t c8, int64_t c9, int64_t c10, int64_t c11, int64_t c12, int64_t c13, int64_t c14, int64_t c15, int64_t c16, int64_t c17, int64_t c18, int64_t c19, int64_t c20, int64_t c21, int64_t c22, int64_t c23, int64_t c24, int64_t c25, int64_t c26, int64_t c27, int64_t c28, int64_t c29, int64_t c30, int64_t c31, int64_t c32, int64_t c33, int64_t c34, int64_t c35, int64_t c36, int64_t c37) {
	int64_t t0 = (c17 + IntegerPolynomialP521::CARRY_ADD) >> 28;
	c17 -= (t0 << 28);
	c18 += t0;
	t0 = (c18 + IntegerPolynomialP521::CARRY_ADD) >> 28;
	c18 -= (t0 << 28);
	c19 += t0;
	c0 += (int64_t)((c19 << 11) & (uint64_t)(int64_t)IntegerPolynomialP521::LIMB_MASK);
	c1 += c19 >> 17;
	t0 = (c0 + IntegerPolynomialP521::CARRY_ADD) >> 28;
	c0 -= (t0 << 28);
	c1 += t0;
	t0 = (c1 + IntegerPolynomialP521::CARRY_ADD) >> 28;
	c1 -= (t0 << 28);
	c2 += t0;
	t0 = (c2 + IntegerPolynomialP521::CARRY_ADD) >> 28;
	c2 -= (t0 << 28);
	c3 += t0;
	t0 = (c3 + IntegerPolynomialP521::CARRY_ADD) >> 28;
	c3 -= (t0 << 28);
	c4 += t0;
	t0 = (c4 + IntegerPolynomialP521::CARRY_ADD) >> 28;
	c4 -= (t0 << 28);
	c5 += t0;
	t0 = (c5 + IntegerPolynomialP521::CARRY_ADD) >> 28;
	c5 -= (t0 << 28);
	c6 += t0;
	t0 = (c6 + IntegerPolynomialP521::CARRY_ADD) >> 28;
	c6 -= (t0 << 28);
	c7 += t0;
	t0 = (c7 + IntegerPolynomialP521::CARRY_ADD) >> 28;
	c7 -= (t0 << 28);
	c8 += t0;
	t0 = (c8 + IntegerPolynomialP521::CARRY_ADD) >> 28;
	c8 -= (t0 << 28);
	c9 += t0;
	t0 = (c9 + IntegerPolynomialP521::CARRY_ADD) >> 28;
	c9 -= (t0 << 28);
	c10 += t0;
	t0 = (c10 + IntegerPolynomialP521::CARRY_ADD) >> 28;
	c10 -= (t0 << 28);
	c11 += t0;
	t0 = (c11 + IntegerPolynomialP521::CARRY_ADD) >> 28;
	c11 -= (t0 << 28);
	c12 += t0;
	t0 = (c12 + IntegerPolynomialP521::CARRY_ADD) >> 28;
	c12 -= (t0 << 28);
	c13 += t0;
	t0 = (c13 + IntegerPolynomialP521::CARRY_ADD) >> 28;
	c13 -= (t0 << 28);
	c14 += t0;
	t0 = (c14 + IntegerPolynomialP521::CARRY_ADD) >> 28;
	c14 -= (t0 << 28);
	c15 += t0;
	t0 = (c15 + IntegerPolynomialP521::CARRY_ADD) >> 28;
	c15 -= (t0 << 28);
	c16 += t0;
	t0 = (c16 + IntegerPolynomialP521::CARRY_ADD) >> 28;
	c16 -= (t0 << 28);
	c17 += t0;
	t0 = (c17 + IntegerPolynomialP521::CARRY_ADD) >> 28;
	c17 -= (t0 << 28);
	c18 += t0;
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
	r->set(14, c14);
	r->set(15, c15);
	r->set(16, c16);
	r->set(17, c17);
	r->set(18, c18);
}

void IntegerPolynomialP521::carryReduce($longs* r, int64_t c0, int64_t c1, int64_t c2, int64_t c3, int64_t c4, int64_t c5, int64_t c6, int64_t c7, int64_t c8, int64_t c9, int64_t c10, int64_t c11, int64_t c12, int64_t c13, int64_t c14, int64_t c15, int64_t c16, int64_t c17, int64_t c18) {
	int64_t c19 = 0;
	int64_t t0 = (c17 + IntegerPolynomialP521::CARRY_ADD) >> 28;
	c17 -= (t0 << 28);
	c18 += t0;
	t0 = (c18 + IntegerPolynomialP521::CARRY_ADD) >> 28;
	c18 -= (t0 << 28);
	c19 += t0;
	c0 += (int64_t)((c19 << 11) & (uint64_t)(int64_t)IntegerPolynomialP521::LIMB_MASK);
	c1 += c19 >> 17;
	t0 = (c0 + IntegerPolynomialP521::CARRY_ADD) >> 28;
	c0 -= (t0 << 28);
	c1 += t0;
	t0 = (c1 + IntegerPolynomialP521::CARRY_ADD) >> 28;
	c1 -= (t0 << 28);
	c2 += t0;
	t0 = (c2 + IntegerPolynomialP521::CARRY_ADD) >> 28;
	c2 -= (t0 << 28);
	c3 += t0;
	t0 = (c3 + IntegerPolynomialP521::CARRY_ADD) >> 28;
	c3 -= (t0 << 28);
	c4 += t0;
	t0 = (c4 + IntegerPolynomialP521::CARRY_ADD) >> 28;
	c4 -= (t0 << 28);
	c5 += t0;
	t0 = (c5 + IntegerPolynomialP521::CARRY_ADD) >> 28;
	c5 -= (t0 << 28);
	c6 += t0;
	t0 = (c6 + IntegerPolynomialP521::CARRY_ADD) >> 28;
	c6 -= (t0 << 28);
	c7 += t0;
	t0 = (c7 + IntegerPolynomialP521::CARRY_ADD) >> 28;
	c7 -= (t0 << 28);
	c8 += t0;
	t0 = (c8 + IntegerPolynomialP521::CARRY_ADD) >> 28;
	c8 -= (t0 << 28);
	c9 += t0;
	t0 = (c9 + IntegerPolynomialP521::CARRY_ADD) >> 28;
	c9 -= (t0 << 28);
	c10 += t0;
	t0 = (c10 + IntegerPolynomialP521::CARRY_ADD) >> 28;
	c10 -= (t0 << 28);
	c11 += t0;
	t0 = (c11 + IntegerPolynomialP521::CARRY_ADD) >> 28;
	c11 -= (t0 << 28);
	c12 += t0;
	t0 = (c12 + IntegerPolynomialP521::CARRY_ADD) >> 28;
	c12 -= (t0 << 28);
	c13 += t0;
	t0 = (c13 + IntegerPolynomialP521::CARRY_ADD) >> 28;
	c13 -= (t0 << 28);
	c14 += t0;
	t0 = (c14 + IntegerPolynomialP521::CARRY_ADD) >> 28;
	c14 -= (t0 << 28);
	c15 += t0;
	t0 = (c15 + IntegerPolynomialP521::CARRY_ADD) >> 28;
	c15 -= (t0 << 28);
	c16 += t0;
	t0 = (c16 + IntegerPolynomialP521::CARRY_ADD) >> 28;
	c16 -= (t0 << 28);
	c17 += t0;
	t0 = (c17 + IntegerPolynomialP521::CARRY_ADD) >> 28;
	c17 -= (t0 << 28);
	c18 += t0;
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
	r->set(14, c14);
	r->set(15, c15);
	r->set(16, c16);
	r->set(17, c17);
	r->set(18, c18);
}

void IntegerPolynomialP521::mult($longs* a, $longs* b, $longs* r) {
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
	int64_t c14 = (a->get(0) * b->get(14)) + (a->get(1) * b->get(13)) + (a->get(2) * b->get(12)) + (a->get(3) * b->get(11)) + (a->get(4) * b->get(10)) + (a->get(5) * b->get(9)) + (a->get(6) * b->get(8)) + (a->get(7) * b->get(7)) + (a->get(8) * b->get(6)) + (a->get(9) * b->get(5)) + (a->get(10) * b->get(4)) + (a->get(11) * b->get(3)) + (a->get(12) * b->get(2)) + (a->get(13) * b->get(1)) + (a->get(14) * b->get(0));
	int64_t c15 = (a->get(0) * b->get(15)) + (a->get(1) * b->get(14)) + (a->get(2) * b->get(13)) + (a->get(3) * b->get(12)) + (a->get(4) * b->get(11)) + (a->get(5) * b->get(10)) + (a->get(6) * b->get(9)) + (a->get(7) * b->get(8)) + (a->get(8) * b->get(7)) + (a->get(9) * b->get(6)) + (a->get(10) * b->get(5)) + (a->get(11) * b->get(4)) + (a->get(12) * b->get(3)) + (a->get(13) * b->get(2)) + (a->get(14) * b->get(1)) + (a->get(15) * b->get(0));
	int64_t c16 = (a->get(0) * b->get(16)) + (a->get(1) * b->get(15)) + (a->get(2) * b->get(14)) + (a->get(3) * b->get(13)) + (a->get(4) * b->get(12)) + (a->get(5) * b->get(11)) + (a->get(6) * b->get(10)) + (a->get(7) * b->get(9)) + (a->get(8) * b->get(8)) + (a->get(9) * b->get(7)) + (a->get(10) * b->get(6)) + (a->get(11) * b->get(5)) + (a->get(12) * b->get(4)) + (a->get(13) * b->get(3)) + (a->get(14) * b->get(2)) + (a->get(15) * b->get(1)) + (a->get(16) * b->get(0));
	int64_t c17 = (a->get(0) * b->get(17)) + (a->get(1) * b->get(16)) + (a->get(2) * b->get(15)) + (a->get(3) * b->get(14)) + (a->get(4) * b->get(13)) + (a->get(5) * b->get(12)) + (a->get(6) * b->get(11)) + (a->get(7) * b->get(10)) + (a->get(8) * b->get(9)) + (a->get(9) * b->get(8)) + (a->get(10) * b->get(7)) + (a->get(11) * b->get(6)) + (a->get(12) * b->get(5)) + (a->get(13) * b->get(4)) + (a->get(14) * b->get(3)) + (a->get(15) * b->get(2)) + (a->get(16) * b->get(1)) + (a->get(17) * b->get(0));
	int64_t c18 = (a->get(0) * b->get(18)) + (a->get(1) * b->get(17)) + (a->get(2) * b->get(16)) + (a->get(3) * b->get(15)) + (a->get(4) * b->get(14)) + (a->get(5) * b->get(13)) + (a->get(6) * b->get(12)) + (a->get(7) * b->get(11)) + (a->get(8) * b->get(10)) + (a->get(9) * b->get(9)) + (a->get(10) * b->get(8)) + (a->get(11) * b->get(7)) + (a->get(12) * b->get(6)) + (a->get(13) * b->get(5)) + (a->get(14) * b->get(4)) + (a->get(15) * b->get(3)) + (a->get(16) * b->get(2)) + (a->get(17) * b->get(1)) + (a->get(18) * b->get(0));
	int64_t c19 = (a->get(1) * b->get(18)) + (a->get(2) * b->get(17)) + (a->get(3) * b->get(16)) + (a->get(4) * b->get(15)) + (a->get(5) * b->get(14)) + (a->get(6) * b->get(13)) + (a->get(7) * b->get(12)) + (a->get(8) * b->get(11)) + (a->get(9) * b->get(10)) + (a->get(10) * b->get(9)) + (a->get(11) * b->get(8)) + (a->get(12) * b->get(7)) + (a->get(13) * b->get(6)) + (a->get(14) * b->get(5)) + (a->get(15) * b->get(4)) + (a->get(16) * b->get(3)) + (a->get(17) * b->get(2)) + (a->get(18) * b->get(1));
	int64_t c20 = (a->get(2) * b->get(18)) + (a->get(3) * b->get(17)) + (a->get(4) * b->get(16)) + (a->get(5) * b->get(15)) + (a->get(6) * b->get(14)) + (a->get(7) * b->get(13)) + (a->get(8) * b->get(12)) + (a->get(9) * b->get(11)) + (a->get(10) * b->get(10)) + (a->get(11) * b->get(9)) + (a->get(12) * b->get(8)) + (a->get(13) * b->get(7)) + (a->get(14) * b->get(6)) + (a->get(15) * b->get(5)) + (a->get(16) * b->get(4)) + (a->get(17) * b->get(3)) + (a->get(18) * b->get(2));
	int64_t c21 = (a->get(3) * b->get(18)) + (a->get(4) * b->get(17)) + (a->get(5) * b->get(16)) + (a->get(6) * b->get(15)) + (a->get(7) * b->get(14)) + (a->get(8) * b->get(13)) + (a->get(9) * b->get(12)) + (a->get(10) * b->get(11)) + (a->get(11) * b->get(10)) + (a->get(12) * b->get(9)) + (a->get(13) * b->get(8)) + (a->get(14) * b->get(7)) + (a->get(15) * b->get(6)) + (a->get(16) * b->get(5)) + (a->get(17) * b->get(4)) + (a->get(18) * b->get(3));
	int64_t c22 = (a->get(4) * b->get(18)) + (a->get(5) * b->get(17)) + (a->get(6) * b->get(16)) + (a->get(7) * b->get(15)) + (a->get(8) * b->get(14)) + (a->get(9) * b->get(13)) + (a->get(10) * b->get(12)) + (a->get(11) * b->get(11)) + (a->get(12) * b->get(10)) + (a->get(13) * b->get(9)) + (a->get(14) * b->get(8)) + (a->get(15) * b->get(7)) + (a->get(16) * b->get(6)) + (a->get(17) * b->get(5)) + (a->get(18) * b->get(4));
	int64_t c23 = (a->get(5) * b->get(18)) + (a->get(6) * b->get(17)) + (a->get(7) * b->get(16)) + (a->get(8) * b->get(15)) + (a->get(9) * b->get(14)) + (a->get(10) * b->get(13)) + (a->get(11) * b->get(12)) + (a->get(12) * b->get(11)) + (a->get(13) * b->get(10)) + (a->get(14) * b->get(9)) + (a->get(15) * b->get(8)) + (a->get(16) * b->get(7)) + (a->get(17) * b->get(6)) + (a->get(18) * b->get(5));
	int64_t c24 = (a->get(6) * b->get(18)) + (a->get(7) * b->get(17)) + (a->get(8) * b->get(16)) + (a->get(9) * b->get(15)) + (a->get(10) * b->get(14)) + (a->get(11) * b->get(13)) + (a->get(12) * b->get(12)) + (a->get(13) * b->get(11)) + (a->get(14) * b->get(10)) + (a->get(15) * b->get(9)) + (a->get(16) * b->get(8)) + (a->get(17) * b->get(7)) + (a->get(18) * b->get(6));
	int64_t c25 = (a->get(7) * b->get(18)) + (a->get(8) * b->get(17)) + (a->get(9) * b->get(16)) + (a->get(10) * b->get(15)) + (a->get(11) * b->get(14)) + (a->get(12) * b->get(13)) + (a->get(13) * b->get(12)) + (a->get(14) * b->get(11)) + (a->get(15) * b->get(10)) + (a->get(16) * b->get(9)) + (a->get(17) * b->get(8)) + (a->get(18) * b->get(7));
	int64_t c26 = (a->get(8) * b->get(18)) + (a->get(9) * b->get(17)) + (a->get(10) * b->get(16)) + (a->get(11) * b->get(15)) + (a->get(12) * b->get(14)) + (a->get(13) * b->get(13)) + (a->get(14) * b->get(12)) + (a->get(15) * b->get(11)) + (a->get(16) * b->get(10)) + (a->get(17) * b->get(9)) + (a->get(18) * b->get(8));
	int64_t c27 = (a->get(9) * b->get(18)) + (a->get(10) * b->get(17)) + (a->get(11) * b->get(16)) + (a->get(12) * b->get(15)) + (a->get(13) * b->get(14)) + (a->get(14) * b->get(13)) + (a->get(15) * b->get(12)) + (a->get(16) * b->get(11)) + (a->get(17) * b->get(10)) + (a->get(18) * b->get(9));
	int64_t c28 = (a->get(10) * b->get(18)) + (a->get(11) * b->get(17)) + (a->get(12) * b->get(16)) + (a->get(13) * b->get(15)) + (a->get(14) * b->get(14)) + (a->get(15) * b->get(13)) + (a->get(16) * b->get(12)) + (a->get(17) * b->get(11)) + (a->get(18) * b->get(10));
	int64_t c29 = (a->get(11) * b->get(18)) + (a->get(12) * b->get(17)) + (a->get(13) * b->get(16)) + (a->get(14) * b->get(15)) + (a->get(15) * b->get(14)) + (a->get(16) * b->get(13)) + (a->get(17) * b->get(12)) + (a->get(18) * b->get(11));
	int64_t c30 = (a->get(12) * b->get(18)) + (a->get(13) * b->get(17)) + (a->get(14) * b->get(16)) + (a->get(15) * b->get(15)) + (a->get(16) * b->get(14)) + (a->get(17) * b->get(13)) + (a->get(18) * b->get(12));
	int64_t c31 = (a->get(13) * b->get(18)) + (a->get(14) * b->get(17)) + (a->get(15) * b->get(16)) + (a->get(16) * b->get(15)) + (a->get(17) * b->get(14)) + (a->get(18) * b->get(13));
	int64_t c32 = (a->get(14) * b->get(18)) + (a->get(15) * b->get(17)) + (a->get(16) * b->get(16)) + (a->get(17) * b->get(15)) + (a->get(18) * b->get(14));
	int64_t c33 = (a->get(15) * b->get(18)) + (a->get(16) * b->get(17)) + (a->get(17) * b->get(16)) + (a->get(18) * b->get(15));
	int64_t c34 = (a->get(16) * b->get(18)) + (a->get(17) * b->get(17)) + (a->get(18) * b->get(16));
	int64_t c35 = (a->get(17) * b->get(18)) + (a->get(18) * b->get(17));
	int64_t c36 = (a->get(18) * b->get(18));
	carryReduce(r, c0, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14, c15, c16, c17, c18, c19, c20, c21, c22, c23, c24, c25, c26, c27, c28, c29, c30, c31, c32, c33, c34, c35, c36);
}

void IntegerPolynomialP521::reduce($longs* a) {
	carryReduce(a, $nc(a)->get(0), a->get(1), a->get(2), a->get(3), a->get(4), a->get(5), a->get(6), a->get(7), a->get(8), a->get(9), a->get(10), a->get(11), a->get(12), a->get(13), a->get(14), a->get(15), a->get(16), a->get(17), a->get(18));
}

void IntegerPolynomialP521::square($longs* a, $longs* r) {
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
	int64_t c14 = 2 * ((a->get(0) * a->get(14)) + (a->get(1) * a->get(13)) + (a->get(2) * a->get(12)) + (a->get(3) * a->get(11)) + (a->get(4) * a->get(10)) + (a->get(5) * a->get(9)) + (a->get(6) * a->get(8))) + (a->get(7) * a->get(7));
	int64_t c15 = 2 * ((a->get(0) * a->get(15)) + (a->get(1) * a->get(14)) + (a->get(2) * a->get(13)) + (a->get(3) * a->get(12)) + (a->get(4) * a->get(11)) + (a->get(5) * a->get(10)) + (a->get(6) * a->get(9)) + (a->get(7) * a->get(8)));
	int64_t c16 = 2 * ((a->get(0) * a->get(16)) + (a->get(1) * a->get(15)) + (a->get(2) * a->get(14)) + (a->get(3) * a->get(13)) + (a->get(4) * a->get(12)) + (a->get(5) * a->get(11)) + (a->get(6) * a->get(10)) + (a->get(7) * a->get(9))) + (a->get(8) * a->get(8));
	int64_t c17 = 2 * ((a->get(0) * a->get(17)) + (a->get(1) * a->get(16)) + (a->get(2) * a->get(15)) + (a->get(3) * a->get(14)) + (a->get(4) * a->get(13)) + (a->get(5) * a->get(12)) + (a->get(6) * a->get(11)) + (a->get(7) * a->get(10)) + (a->get(8) * a->get(9)));
	int64_t c18 = 2 * ((a->get(0) * a->get(18)) + (a->get(1) * a->get(17)) + (a->get(2) * a->get(16)) + (a->get(3) * a->get(15)) + (a->get(4) * a->get(14)) + (a->get(5) * a->get(13)) + (a->get(6) * a->get(12)) + (a->get(7) * a->get(11)) + (a->get(8) * a->get(10))) + (a->get(9) * a->get(9));
	int64_t c19 = 2 * ((a->get(1) * a->get(18)) + (a->get(2) * a->get(17)) + (a->get(3) * a->get(16)) + (a->get(4) * a->get(15)) + (a->get(5) * a->get(14)) + (a->get(6) * a->get(13)) + (a->get(7) * a->get(12)) + (a->get(8) * a->get(11)) + (a->get(9) * a->get(10)));
	int64_t c20 = 2 * ((a->get(2) * a->get(18)) + (a->get(3) * a->get(17)) + (a->get(4) * a->get(16)) + (a->get(5) * a->get(15)) + (a->get(6) * a->get(14)) + (a->get(7) * a->get(13)) + (a->get(8) * a->get(12)) + (a->get(9) * a->get(11))) + (a->get(10) * a->get(10));
	int64_t c21 = 2 * ((a->get(3) * a->get(18)) + (a->get(4) * a->get(17)) + (a->get(5) * a->get(16)) + (a->get(6) * a->get(15)) + (a->get(7) * a->get(14)) + (a->get(8) * a->get(13)) + (a->get(9) * a->get(12)) + (a->get(10) * a->get(11)));
	int64_t c22 = 2 * ((a->get(4) * a->get(18)) + (a->get(5) * a->get(17)) + (a->get(6) * a->get(16)) + (a->get(7) * a->get(15)) + (a->get(8) * a->get(14)) + (a->get(9) * a->get(13)) + (a->get(10) * a->get(12))) + (a->get(11) * a->get(11));
	int64_t c23 = 2 * ((a->get(5) * a->get(18)) + (a->get(6) * a->get(17)) + (a->get(7) * a->get(16)) + (a->get(8) * a->get(15)) + (a->get(9) * a->get(14)) + (a->get(10) * a->get(13)) + (a->get(11) * a->get(12)));
	int64_t c24 = 2 * ((a->get(6) * a->get(18)) + (a->get(7) * a->get(17)) + (a->get(8) * a->get(16)) + (a->get(9) * a->get(15)) + (a->get(10) * a->get(14)) + (a->get(11) * a->get(13))) + (a->get(12) * a->get(12));
	int64_t c25 = 2 * ((a->get(7) * a->get(18)) + (a->get(8) * a->get(17)) + (a->get(9) * a->get(16)) + (a->get(10) * a->get(15)) + (a->get(11) * a->get(14)) + (a->get(12) * a->get(13)));
	int64_t c26 = 2 * ((a->get(8) * a->get(18)) + (a->get(9) * a->get(17)) + (a->get(10) * a->get(16)) + (a->get(11) * a->get(15)) + (a->get(12) * a->get(14))) + (a->get(13) * a->get(13));
	int64_t c27 = 2 * ((a->get(9) * a->get(18)) + (a->get(10) * a->get(17)) + (a->get(11) * a->get(16)) + (a->get(12) * a->get(15)) + (a->get(13) * a->get(14)));
	int64_t c28 = 2 * ((a->get(10) * a->get(18)) + (a->get(11) * a->get(17)) + (a->get(12) * a->get(16)) + (a->get(13) * a->get(15))) + (a->get(14) * a->get(14));
	int64_t c29 = 2 * ((a->get(11) * a->get(18)) + (a->get(12) * a->get(17)) + (a->get(13) * a->get(16)) + (a->get(14) * a->get(15)));
	int64_t c30 = 2 * ((a->get(12) * a->get(18)) + (a->get(13) * a->get(17)) + (a->get(14) * a->get(16))) + (a->get(15) * a->get(15));
	int64_t c31 = 2 * ((a->get(13) * a->get(18)) + (a->get(14) * a->get(17)) + (a->get(15) * a->get(16)));
	int64_t c32 = 2 * ((a->get(14) * a->get(18)) + (a->get(15) * a->get(17))) + (a->get(16) * a->get(16));
	int64_t c33 = 2 * ((a->get(15) * a->get(18)) + (a->get(16) * a->get(17)));
	int64_t c34 = 2 * (a->get(16) * a->get(18)) + (a->get(17) * a->get(17));
	int64_t c35 = 2 * (a->get(17) * a->get(18));
	int64_t c36 = (a->get(18) * a->get(18));
	carryReduce(r, c0, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14, c15, c16, c17, c18, c19, c20, c21, c22, c23, c24, c25, c26, c27, c28, c29, c30, c31, c32, c33, c34, c35, c36);
}

void clinit$IntegerPolynomialP521($Class* class$) {
	$assignStatic(IntegerPolynomialP521::MODULUS, IntegerPolynomialP521::evaluateModulus());
}

IntegerPolynomialP521::IntegerPolynomialP521() {
}

$Class* IntegerPolynomialP521::load$($String* name, bool initialize) {
	$loadClass(IntegerPolynomialP521, name, initialize, &_IntegerPolynomialP521_ClassInfo_, clinit$IntegerPolynomialP521, allocate$IntegerPolynomialP521);
	return class$;
}

$Class* IntegerPolynomialP521::class$ = nullptr;

				} // intpoly
			} // math
		} // util
	} // security
} // sun