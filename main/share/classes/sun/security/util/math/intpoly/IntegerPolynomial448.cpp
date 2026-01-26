#include <sun/security/util/math/intpoly/IntegerPolynomial448.h>

#include <java/math/BigInteger.h>
#include <sun/security/util/math/intpoly/IntegerPolynomial.h>
#include <jcpp.h>

#undef BITS_PER_LIMB
#undef CARRY_ADD
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

$FieldInfo _IntegerPolynomial448_FieldInfo_[] = {
	{"BITS_PER_LIMB", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IntegerPolynomial448, BITS_PER_LIMB)},
	{"NUM_LIMBS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IntegerPolynomial448, NUM_LIMBS)},
	{"MAX_ADDS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IntegerPolynomial448, MAX_ADDS)},
	{"MODULUS", "Ljava/math/BigInteger;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(IntegerPolynomial448, MODULUS)},
	{"CARRY_ADD", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IntegerPolynomial448, CARRY_ADD)},
	{}
};

$MethodInfo _IntegerPolynomial448_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(IntegerPolynomial448, init$, void)},
	{"carryReduce", "([JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ)V", nullptr, $PRIVATE, $method(IntegerPolynomial448, carryReduce, void, $longs*, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t)},
	{"carryReduce", "([JJJJJJJJJJJJJJJJJ)V", nullptr, $PRIVATE, $method(IntegerPolynomial448, carryReduce, void, $longs*, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t)},
	{"carryReduce0", "([JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ)V", nullptr, 0, $virtualMethod(IntegerPolynomial448, carryReduce0, void, $longs*, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t)},
	{"evaluateModulus", "()Ljava/math/BigInteger;", nullptr, $PRIVATE | $STATIC, $staticMethod(IntegerPolynomial448, evaluateModulus, $BigInteger*)},
	{"finalCarryReduceLast", "([J)V", nullptr, $PROTECTED, $virtualMethod(IntegerPolynomial448, finalCarryReduceLast, void, $longs*)},
	{"mult", "([J[J[J)V", nullptr, $PROTECTED, $virtualMethod(IntegerPolynomial448, mult, void, $longs*, $longs*, $longs*)},
	{"reduce", "([J)V", nullptr, $PROTECTED, $virtualMethod(IntegerPolynomial448, reduce, void, $longs*)},
	{"reduceIn", "([JJI)V", nullptr, $PROTECTED, $virtualMethod(IntegerPolynomial448, reduceIn, void, $longs*, int64_t, int32_t)},
	{"square", "([J[J)V", nullptr, $PROTECTED, $virtualMethod(IntegerPolynomial448, square, void, $longs*, $longs*)},
	{}
};

$ClassInfo _IntegerPolynomial448_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.util.math.intpoly.IntegerPolynomial448",
	"sun.security.util.math.intpoly.IntegerPolynomial",
	nullptr,
	_IntegerPolynomial448_FieldInfo_,
	_IntegerPolynomial448_MethodInfo_
};

$Object* allocate$IntegerPolynomial448($Class* clazz) {
	return $of($alloc(IntegerPolynomial448));
}

$BigInteger* IntegerPolynomial448::MODULUS = nullptr;

void IntegerPolynomial448::init$() {
	$IntegerPolynomial::init$(IntegerPolynomial448::BITS_PER_LIMB, IntegerPolynomial448::NUM_LIMBS, IntegerPolynomial448::MAX_ADDS, IntegerPolynomial448::MODULUS);
}

$BigInteger* IntegerPolynomial448::evaluateModulus() {
	$init(IntegerPolynomial448);
	$useLocalCurrentObjectStackCache();
	$var($BigInteger, result, $nc($($BigInteger::valueOf((int64_t)2)))->pow(448));
	$assign(result, $nc(result)->subtract($($nc($($BigInteger::valueOf((int64_t)2)))->pow(224))));
	$assign(result, result->subtract($($BigInteger::valueOf((int64_t)1))));
	return result;
}

void IntegerPolynomial448::reduceIn($longs* limbs, int64_t v, int32_t i) {
	(*$nc(limbs))[i - 8] += v;
	(*limbs)[i - 16] += v;
}

void IntegerPolynomial448::finalCarryReduceLast($longs* limbs) {
	int64_t c = $nc(limbs)->get(15) >> 28;
	(*limbs)[15] -= c << 28;
	(*limbs)[8] += c;
	(*limbs)[0] += c;
}

void IntegerPolynomial448::carryReduce($longs* r, int64_t c0, int64_t c1, int64_t c2, int64_t c3, int64_t c4, int64_t c5, int64_t c6, int64_t c7, int64_t c8, int64_t c9, int64_t c10, int64_t c11, int64_t c12, int64_t c13, int64_t c14, int64_t c15, int64_t c16, int64_t c17, int64_t c18, int64_t c19, int64_t c20, int64_t c21, int64_t c22, int64_t c23, int64_t c24, int64_t c25, int64_t c26, int64_t c27, int64_t c28, int64_t c29, int64_t c30) {
	int64_t c31 = 0;
	c16 += c24;
	c8 += c24;
	c17 += c25;
	c9 += c25;
	c18 += c26;
	c10 += c26;
	c19 += c27;
	c11 += c27;
	c20 += c28;
	c12 += c28;
	c21 += c29;
	c13 += c29;
	c22 += c30;
	c14 += c30;
	c12 += c20;
	c4 += c20;
	c13 += c21;
	c5 += c21;
	c14 += c22;
	c6 += c22;
	c15 += c23;
	c7 += c23;
	carryReduce0(r, c0, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14, c15, c16, c17, c18, c19, c20, c21, c22, c23, c24, c25, c26, c27, c28, c29, c30, c31);
}

void IntegerPolynomial448::carryReduce0($longs* r, int64_t c0, int64_t c1, int64_t c2, int64_t c3, int64_t c4, int64_t c5, int64_t c6, int64_t c7, int64_t c8, int64_t c9, int64_t c10, int64_t c11, int64_t c12, int64_t c13, int64_t c14, int64_t c15, int64_t c16, int64_t c17, int64_t c18, int64_t c19, int64_t c20, int64_t c21, int64_t c22, int64_t c23, int64_t c24, int64_t c25, int64_t c26, int64_t c27, int64_t c28, int64_t c29, int64_t c30, int64_t c31) {
	int64_t t0 = (c14 + IntegerPolynomial448::CARRY_ADD) >> 28;
	c14 -= (t0 << 28);
	c15 += t0;
	t0 = (c15 + IntegerPolynomial448::CARRY_ADD) >> 28;
	c15 -= (t0 << 28);
	c16 += t0;
	c8 += c16;
	c0 += c16;
	c9 += c17;
	c1 += c17;
	c10 += c18;
	c2 += c18;
	c11 += c19;
	c3 += c19;
	t0 = (c0 + IntegerPolynomial448::CARRY_ADD) >> 28;
	c0 -= (t0 << 28);
	c1 += t0;
	t0 = (c1 + IntegerPolynomial448::CARRY_ADD) >> 28;
	c1 -= (t0 << 28);
	c2 += t0;
	t0 = (c2 + IntegerPolynomial448::CARRY_ADD) >> 28;
	c2 -= (t0 << 28);
	c3 += t0;
	t0 = (c3 + IntegerPolynomial448::CARRY_ADD) >> 28;
	c3 -= (t0 << 28);
	c4 += t0;
	t0 = (c4 + IntegerPolynomial448::CARRY_ADD) >> 28;
	c4 -= (t0 << 28);
	c5 += t0;
	t0 = (c5 + IntegerPolynomial448::CARRY_ADD) >> 28;
	c5 -= (t0 << 28);
	c6 += t0;
	t0 = (c6 + IntegerPolynomial448::CARRY_ADD) >> 28;
	c6 -= (t0 << 28);
	c7 += t0;
	t0 = (c7 + IntegerPolynomial448::CARRY_ADD) >> 28;
	c7 -= (t0 << 28);
	c8 += t0;
	t0 = (c8 + IntegerPolynomial448::CARRY_ADD) >> 28;
	c8 -= (t0 << 28);
	c9 += t0;
	t0 = (c9 + IntegerPolynomial448::CARRY_ADD) >> 28;
	c9 -= (t0 << 28);
	c10 += t0;
	t0 = (c10 + IntegerPolynomial448::CARRY_ADD) >> 28;
	c10 -= (t0 << 28);
	c11 += t0;
	t0 = (c11 + IntegerPolynomial448::CARRY_ADD) >> 28;
	c11 -= (t0 << 28);
	c12 += t0;
	t0 = (c12 + IntegerPolynomial448::CARRY_ADD) >> 28;
	c12 -= (t0 << 28);
	c13 += t0;
	t0 = (c13 + IntegerPolynomial448::CARRY_ADD) >> 28;
	c13 -= (t0 << 28);
	c14 += t0;
	t0 = (c14 + IntegerPolynomial448::CARRY_ADD) >> 28;
	c14 -= (t0 << 28);
	c15 += t0;
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
}

void IntegerPolynomial448::carryReduce($longs* r, int64_t c0, int64_t c1, int64_t c2, int64_t c3, int64_t c4, int64_t c5, int64_t c6, int64_t c7, int64_t c8, int64_t c9, int64_t c10, int64_t c11, int64_t c12, int64_t c13, int64_t c14, int64_t c15) {
	int64_t c16 = 0;
	int64_t t0 = (c14 + IntegerPolynomial448::CARRY_ADD) >> 28;
	c14 -= (t0 << 28);
	c15 += t0;
	t0 = (c15 + IntegerPolynomial448::CARRY_ADD) >> 28;
	c15 -= (t0 << 28);
	c16 += t0;
	c8 += c16;
	c0 += c16;
	t0 = (c0 + IntegerPolynomial448::CARRY_ADD) >> 28;
	c0 -= (t0 << 28);
	c1 += t0;
	t0 = (c1 + IntegerPolynomial448::CARRY_ADD) >> 28;
	c1 -= (t0 << 28);
	c2 += t0;
	t0 = (c2 + IntegerPolynomial448::CARRY_ADD) >> 28;
	c2 -= (t0 << 28);
	c3 += t0;
	t0 = (c3 + IntegerPolynomial448::CARRY_ADD) >> 28;
	c3 -= (t0 << 28);
	c4 += t0;
	t0 = (c4 + IntegerPolynomial448::CARRY_ADD) >> 28;
	c4 -= (t0 << 28);
	c5 += t0;
	t0 = (c5 + IntegerPolynomial448::CARRY_ADD) >> 28;
	c5 -= (t0 << 28);
	c6 += t0;
	t0 = (c6 + IntegerPolynomial448::CARRY_ADD) >> 28;
	c6 -= (t0 << 28);
	c7 += t0;
	t0 = (c7 + IntegerPolynomial448::CARRY_ADD) >> 28;
	c7 -= (t0 << 28);
	c8 += t0;
	t0 = (c8 + IntegerPolynomial448::CARRY_ADD) >> 28;
	c8 -= (t0 << 28);
	c9 += t0;
	t0 = (c9 + IntegerPolynomial448::CARRY_ADD) >> 28;
	c9 -= (t0 << 28);
	c10 += t0;
	t0 = (c10 + IntegerPolynomial448::CARRY_ADD) >> 28;
	c10 -= (t0 << 28);
	c11 += t0;
	t0 = (c11 + IntegerPolynomial448::CARRY_ADD) >> 28;
	c11 -= (t0 << 28);
	c12 += t0;
	t0 = (c12 + IntegerPolynomial448::CARRY_ADD) >> 28;
	c12 -= (t0 << 28);
	c13 += t0;
	t0 = (c13 + IntegerPolynomial448::CARRY_ADD) >> 28;
	c13 -= (t0 << 28);
	c14 += t0;
	t0 = (c14 + IntegerPolynomial448::CARRY_ADD) >> 28;
	c14 -= (t0 << 28);
	c15 += t0;
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
}

void IntegerPolynomial448::mult($longs* a, $longs* b, $longs* r) {
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
	int64_t c16 = (a->get(1) * b->get(15)) + (a->get(2) * b->get(14)) + (a->get(3) * b->get(13)) + (a->get(4) * b->get(12)) + (a->get(5) * b->get(11)) + (a->get(6) * b->get(10)) + (a->get(7) * b->get(9)) + (a->get(8) * b->get(8)) + (a->get(9) * b->get(7)) + (a->get(10) * b->get(6)) + (a->get(11) * b->get(5)) + (a->get(12) * b->get(4)) + (a->get(13) * b->get(3)) + (a->get(14) * b->get(2)) + (a->get(15) * b->get(1));
	int64_t c17 = (a->get(2) * b->get(15)) + (a->get(3) * b->get(14)) + (a->get(4) * b->get(13)) + (a->get(5) * b->get(12)) + (a->get(6) * b->get(11)) + (a->get(7) * b->get(10)) + (a->get(8) * b->get(9)) + (a->get(9) * b->get(8)) + (a->get(10) * b->get(7)) + (a->get(11) * b->get(6)) + (a->get(12) * b->get(5)) + (a->get(13) * b->get(4)) + (a->get(14) * b->get(3)) + (a->get(15) * b->get(2));
	int64_t c18 = (a->get(3) * b->get(15)) + (a->get(4) * b->get(14)) + (a->get(5) * b->get(13)) + (a->get(6) * b->get(12)) + (a->get(7) * b->get(11)) + (a->get(8) * b->get(10)) + (a->get(9) * b->get(9)) + (a->get(10) * b->get(8)) + (a->get(11) * b->get(7)) + (a->get(12) * b->get(6)) + (a->get(13) * b->get(5)) + (a->get(14) * b->get(4)) + (a->get(15) * b->get(3));
	int64_t c19 = (a->get(4) * b->get(15)) + (a->get(5) * b->get(14)) + (a->get(6) * b->get(13)) + (a->get(7) * b->get(12)) + (a->get(8) * b->get(11)) + (a->get(9) * b->get(10)) + (a->get(10) * b->get(9)) + (a->get(11) * b->get(8)) + (a->get(12) * b->get(7)) + (a->get(13) * b->get(6)) + (a->get(14) * b->get(5)) + (a->get(15) * b->get(4));
	int64_t c20 = (a->get(5) * b->get(15)) + (a->get(6) * b->get(14)) + (a->get(7) * b->get(13)) + (a->get(8) * b->get(12)) + (a->get(9) * b->get(11)) + (a->get(10) * b->get(10)) + (a->get(11) * b->get(9)) + (a->get(12) * b->get(8)) + (a->get(13) * b->get(7)) + (a->get(14) * b->get(6)) + (a->get(15) * b->get(5));
	int64_t c21 = (a->get(6) * b->get(15)) + (a->get(7) * b->get(14)) + (a->get(8) * b->get(13)) + (a->get(9) * b->get(12)) + (a->get(10) * b->get(11)) + (a->get(11) * b->get(10)) + (a->get(12) * b->get(9)) + (a->get(13) * b->get(8)) + (a->get(14) * b->get(7)) + (a->get(15) * b->get(6));
	int64_t c22 = (a->get(7) * b->get(15)) + (a->get(8) * b->get(14)) + (a->get(9) * b->get(13)) + (a->get(10) * b->get(12)) + (a->get(11) * b->get(11)) + (a->get(12) * b->get(10)) + (a->get(13) * b->get(9)) + (a->get(14) * b->get(8)) + (a->get(15) * b->get(7));
	int64_t c23 = (a->get(8) * b->get(15)) + (a->get(9) * b->get(14)) + (a->get(10) * b->get(13)) + (a->get(11) * b->get(12)) + (a->get(12) * b->get(11)) + (a->get(13) * b->get(10)) + (a->get(14) * b->get(9)) + (a->get(15) * b->get(8));
	int64_t c24 = (a->get(9) * b->get(15)) + (a->get(10) * b->get(14)) + (a->get(11) * b->get(13)) + (a->get(12) * b->get(12)) + (a->get(13) * b->get(11)) + (a->get(14) * b->get(10)) + (a->get(15) * b->get(9));
	int64_t c25 = (a->get(10) * b->get(15)) + (a->get(11) * b->get(14)) + (a->get(12) * b->get(13)) + (a->get(13) * b->get(12)) + (a->get(14) * b->get(11)) + (a->get(15) * b->get(10));
	int64_t c26 = (a->get(11) * b->get(15)) + (a->get(12) * b->get(14)) + (a->get(13) * b->get(13)) + (a->get(14) * b->get(12)) + (a->get(15) * b->get(11));
	int64_t c27 = (a->get(12) * b->get(15)) + (a->get(13) * b->get(14)) + (a->get(14) * b->get(13)) + (a->get(15) * b->get(12));
	int64_t c28 = (a->get(13) * b->get(15)) + (a->get(14) * b->get(14)) + (a->get(15) * b->get(13));
	int64_t c29 = (a->get(14) * b->get(15)) + (a->get(15) * b->get(14));
	int64_t c30 = (a->get(15) * b->get(15));
	carryReduce(r, c0, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14, c15, c16, c17, c18, c19, c20, c21, c22, c23, c24, c25, c26, c27, c28, c29, c30);
}

void IntegerPolynomial448::reduce($longs* a) {
	carryReduce(a, $nc(a)->get(0), a->get(1), a->get(2), a->get(3), a->get(4), a->get(5), a->get(6), a->get(7), a->get(8), a->get(9), a->get(10), a->get(11), a->get(12), a->get(13), a->get(14), a->get(15));
}

void IntegerPolynomial448::square($longs* a, $longs* r) {
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
	int64_t c16 = 2 * ((a->get(1) * a->get(15)) + (a->get(2) * a->get(14)) + (a->get(3) * a->get(13)) + (a->get(4) * a->get(12)) + (a->get(5) * a->get(11)) + (a->get(6) * a->get(10)) + (a->get(7) * a->get(9))) + (a->get(8) * a->get(8));
	int64_t c17 = 2 * ((a->get(2) * a->get(15)) + (a->get(3) * a->get(14)) + (a->get(4) * a->get(13)) + (a->get(5) * a->get(12)) + (a->get(6) * a->get(11)) + (a->get(7) * a->get(10)) + (a->get(8) * a->get(9)));
	int64_t c18 = 2 * ((a->get(3) * a->get(15)) + (a->get(4) * a->get(14)) + (a->get(5) * a->get(13)) + (a->get(6) * a->get(12)) + (a->get(7) * a->get(11)) + (a->get(8) * a->get(10))) + (a->get(9) * a->get(9));
	int64_t c19 = 2 * ((a->get(4) * a->get(15)) + (a->get(5) * a->get(14)) + (a->get(6) * a->get(13)) + (a->get(7) * a->get(12)) + (a->get(8) * a->get(11)) + (a->get(9) * a->get(10)));
	int64_t c20 = 2 * ((a->get(5) * a->get(15)) + (a->get(6) * a->get(14)) + (a->get(7) * a->get(13)) + (a->get(8) * a->get(12)) + (a->get(9) * a->get(11))) + (a->get(10) * a->get(10));
	int64_t c21 = 2 * ((a->get(6) * a->get(15)) + (a->get(7) * a->get(14)) + (a->get(8) * a->get(13)) + (a->get(9) * a->get(12)) + (a->get(10) * a->get(11)));
	int64_t c22 = 2 * ((a->get(7) * a->get(15)) + (a->get(8) * a->get(14)) + (a->get(9) * a->get(13)) + (a->get(10) * a->get(12))) + (a->get(11) * a->get(11));
	int64_t c23 = 2 * ((a->get(8) * a->get(15)) + (a->get(9) * a->get(14)) + (a->get(10) * a->get(13)) + (a->get(11) * a->get(12)));
	int64_t c24 = 2 * ((a->get(9) * a->get(15)) + (a->get(10) * a->get(14)) + (a->get(11) * a->get(13))) + (a->get(12) * a->get(12));
	int64_t c25 = 2 * ((a->get(10) * a->get(15)) + (a->get(11) * a->get(14)) + (a->get(12) * a->get(13)));
	int64_t c26 = 2 * ((a->get(11) * a->get(15)) + (a->get(12) * a->get(14))) + (a->get(13) * a->get(13));
	int64_t c27 = 2 * ((a->get(12) * a->get(15)) + (a->get(13) * a->get(14)));
	int64_t c28 = 2 * (a->get(13) * a->get(15)) + (a->get(14) * a->get(14));
	int64_t c29 = 2 * (a->get(14) * a->get(15));
	int64_t c30 = (a->get(15) * a->get(15));
	carryReduce(r, c0, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14, c15, c16, c17, c18, c19, c20, c21, c22, c23, c24, c25, c26, c27, c28, c29, c30);
}

void clinit$IntegerPolynomial448($Class* class$) {
	$assignStatic(IntegerPolynomial448::MODULUS, IntegerPolynomial448::evaluateModulus());
}

IntegerPolynomial448::IntegerPolynomial448() {
}

$Class* IntegerPolynomial448::load$($String* name, bool initialize) {
	$loadClass(IntegerPolynomial448, name, initialize, &_IntegerPolynomial448_ClassInfo_, clinit$IntegerPolynomial448, allocate$IntegerPolynomial448);
	return class$;
}

$Class* IntegerPolynomial448::class$ = nullptr;

				} // intpoly
			} // math
		} // util
	} // security
} // sun