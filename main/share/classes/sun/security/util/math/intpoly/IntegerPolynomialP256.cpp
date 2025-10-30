#include <sun/security/util/math/intpoly/IntegerPolynomialP256.h>

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

$FieldInfo _IntegerPolynomialP256_FieldInfo_[] = {
	{"BITS_PER_LIMB", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IntegerPolynomialP256, BITS_PER_LIMB)},
	{"NUM_LIMBS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IntegerPolynomialP256, NUM_LIMBS)},
	{"MAX_ADDS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IntegerPolynomialP256, MAX_ADDS)},
	{"MODULUS", "Ljava/math/BigInteger;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(IntegerPolynomialP256, MODULUS)},
	{"CARRY_ADD", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IntegerPolynomialP256, CARRY_ADD)},
	{"LIMB_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IntegerPolynomialP256, LIMB_MASK)},
	{}
};

$MethodInfo _IntegerPolynomialP256_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IntegerPolynomialP256::*)()>(&IntegerPolynomialP256::init$))},
	{"carryReduce", "([JJJJJJJJJJJJJJJJJJJJ)V", nullptr, $PRIVATE, $method(static_cast<void(IntegerPolynomialP256::*)($longs*,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t)>(&IntegerPolynomialP256::carryReduce))},
	{"carryReduce", "([JJJJJJJJJJJ)V", nullptr, $PRIVATE, $method(static_cast<void(IntegerPolynomialP256::*)($longs*,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t)>(&IntegerPolynomialP256::carryReduce))},
	{"carryReduce0", "([JJJJJJJJJJJJJJJJJJJJJ)V", nullptr, 0},
	{"evaluateModulus", "()Ljava/math/BigInteger;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$BigInteger*(*)()>(&IntegerPolynomialP256::evaluateModulus))},
	{"finalCarryReduceLast", "([J)V", nullptr, $PROTECTED},
	{"mult", "([J[J[J)V", nullptr, $PROTECTED},
	{"reduce", "([J)V", nullptr, $PROTECTED},
	{"reduceIn", "([JJI)V", nullptr, $PROTECTED},
	{"square", "([J[J)V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _IntegerPolynomialP256_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.util.math.intpoly.IntegerPolynomialP256",
	"sun.security.util.math.intpoly.IntegerPolynomial",
	nullptr,
	_IntegerPolynomialP256_FieldInfo_,
	_IntegerPolynomialP256_MethodInfo_
};

$Object* allocate$IntegerPolynomialP256($Class* clazz) {
	return $of($alloc(IntegerPolynomialP256));
}

$BigInteger* IntegerPolynomialP256::MODULUS = nullptr;

void IntegerPolynomialP256::init$() {
	$IntegerPolynomial::init$(IntegerPolynomialP256::BITS_PER_LIMB, IntegerPolynomialP256::NUM_LIMBS, IntegerPolynomialP256::MAX_ADDS, IntegerPolynomialP256::MODULUS);
}

$BigInteger* IntegerPolynomialP256::evaluateModulus() {
	$init(IntegerPolynomialP256);
	$useLocalCurrentObjectStackCache();
	$var($BigInteger, result, $nc($($BigInteger::valueOf((int64_t)2)))->pow(256));
	$assign(result, $nc(result)->subtract($($nc($($BigInteger::valueOf((int64_t)2)))->pow(224))));
	$assign(result, result->add($($nc($($BigInteger::valueOf((int64_t)2)))->pow(192))));
	$assign(result, result->add($($nc($($BigInteger::valueOf((int64_t)2)))->pow(96))));
	$assign(result, result->subtract($($BigInteger::valueOf((int64_t)1))));
	return result;
}

void IntegerPolynomialP256::reduceIn($longs* limbs, int64_t v, int32_t i) {
	(*$nc(limbs))[i - 2] += (int64_t)((v << 20) & (uint64_t)(int64_t)IntegerPolynomialP256::LIMB_MASK);
	(*limbs)[i - 1] += v >> 6;
	(*limbs)[i - 3] -= (int64_t)((v << 14) & (uint64_t)(int64_t)IntegerPolynomialP256::LIMB_MASK);
	(*limbs)[i - 2] -= v >> 12;
	(*limbs)[i - 7] -= (int64_t)((v << 22) & (uint64_t)(int64_t)IntegerPolynomialP256::LIMB_MASK);
	(*limbs)[i - 6] -= v >> 4;
	(*limbs)[i - 10] += (int64_t)((v << 4) & (uint64_t)(int64_t)IntegerPolynomialP256::LIMB_MASK);
	(*limbs)[i - 9] += v >> 22;
}

void IntegerPolynomialP256::finalCarryReduceLast($longs* limbs) {
	int64_t c = $nc(limbs)->get(9) >> 22;
	(*limbs)[9] -= c << 22;
	(*limbs)[8] += (int64_t)((c << 16) & (uint64_t)(int64_t)IntegerPolynomialP256::LIMB_MASK);
	(*limbs)[9] += c >> 10;
	(*limbs)[7] -= (int64_t)((c << 10) & (uint64_t)(int64_t)IntegerPolynomialP256::LIMB_MASK);
	(*limbs)[8] -= c >> 16;
	(*limbs)[3] -= (int64_t)((c << 18) & (uint64_t)(int64_t)IntegerPolynomialP256::LIMB_MASK);
	(*limbs)[4] -= c >> 8;
	(*limbs)[0] += c;
}

void IntegerPolynomialP256::carryReduce($longs* r, int64_t c0, int64_t c1, int64_t c2, int64_t c3, int64_t c4, int64_t c5, int64_t c6, int64_t c7, int64_t c8, int64_t c9, int64_t c10, int64_t c11, int64_t c12, int64_t c13, int64_t c14, int64_t c15, int64_t c16, int64_t c17, int64_t c18) {
	int64_t c19 = 0;
	c16 += (int64_t)((c18 << 20) & (uint64_t)(int64_t)IntegerPolynomialP256::LIMB_MASK);
	c17 += c18 >> 6;
	c15 -= (int64_t)((c18 << 14) & (uint64_t)(int64_t)IntegerPolynomialP256::LIMB_MASK);
	c16 -= c18 >> 12;
	c11 -= (int64_t)((c18 << 22) & (uint64_t)(int64_t)IntegerPolynomialP256::LIMB_MASK);
	c12 -= c18 >> 4;
	c8 += (int64_t)((c18 << 4) & (uint64_t)(int64_t)IntegerPolynomialP256::LIMB_MASK);
	c9 += c18 >> 22;
	c15 += (int64_t)((c17 << 20) & (uint64_t)(int64_t)IntegerPolynomialP256::LIMB_MASK);
	c16 += c17 >> 6;
	c14 -= (int64_t)((c17 << 14) & (uint64_t)(int64_t)IntegerPolynomialP256::LIMB_MASK);
	c15 -= c17 >> 12;
	c10 -= (int64_t)((c17 << 22) & (uint64_t)(int64_t)IntegerPolynomialP256::LIMB_MASK);
	c11 -= c17 >> 4;
	c7 += (int64_t)((c17 << 4) & (uint64_t)(int64_t)IntegerPolynomialP256::LIMB_MASK);
	c8 += c17 >> 22;
	c14 += (int64_t)((c16 << 20) & (uint64_t)(int64_t)IntegerPolynomialP256::LIMB_MASK);
	c15 += c16 >> 6;
	c13 -= (int64_t)((c16 << 14) & (uint64_t)(int64_t)IntegerPolynomialP256::LIMB_MASK);
	c14 -= c16 >> 12;
	c9 -= (int64_t)((c16 << 22) & (uint64_t)(int64_t)IntegerPolynomialP256::LIMB_MASK);
	c10 -= c16 >> 4;
	c6 += (int64_t)((c16 << 4) & (uint64_t)(int64_t)IntegerPolynomialP256::LIMB_MASK);
	c7 += c16 >> 22;
	c13 += (int64_t)((c15 << 20) & (uint64_t)(int64_t)IntegerPolynomialP256::LIMB_MASK);
	c14 += c15 >> 6;
	c12 -= (int64_t)((c15 << 14) & (uint64_t)(int64_t)IntegerPolynomialP256::LIMB_MASK);
	c13 -= c15 >> 12;
	c8 -= (int64_t)((c15 << 22) & (uint64_t)(int64_t)IntegerPolynomialP256::LIMB_MASK);
	c9 -= c15 >> 4;
	c5 += (int64_t)((c15 << 4) & (uint64_t)(int64_t)IntegerPolynomialP256::LIMB_MASK);
	c6 += c15 >> 22;
	c12 += (int64_t)((c14 << 20) & (uint64_t)(int64_t)IntegerPolynomialP256::LIMB_MASK);
	c13 += c14 >> 6;
	c11 -= (int64_t)((c14 << 14) & (uint64_t)(int64_t)IntegerPolynomialP256::LIMB_MASK);
	c12 -= c14 >> 12;
	c7 -= (int64_t)((c14 << 22) & (uint64_t)(int64_t)IntegerPolynomialP256::LIMB_MASK);
	c8 -= c14 >> 4;
	c4 += (int64_t)((c14 << 4) & (uint64_t)(int64_t)IntegerPolynomialP256::LIMB_MASK);
	c5 += c14 >> 22;
	c11 += (int64_t)((c13 << 20) & (uint64_t)(int64_t)IntegerPolynomialP256::LIMB_MASK);
	c12 += c13 >> 6;
	c10 -= (int64_t)((c13 << 14) & (uint64_t)(int64_t)IntegerPolynomialP256::LIMB_MASK);
	c11 -= c13 >> 12;
	c6 -= (int64_t)((c13 << 22) & (uint64_t)(int64_t)IntegerPolynomialP256::LIMB_MASK);
	c7 -= c13 >> 4;
	c3 += (int64_t)((c13 << 4) & (uint64_t)(int64_t)IntegerPolynomialP256::LIMB_MASK);
	c4 += c13 >> 22;
	c10 += (int64_t)((c12 << 20) & (uint64_t)(int64_t)IntegerPolynomialP256::LIMB_MASK);
	c11 += c12 >> 6;
	c9 -= (int64_t)((c12 << 14) & (uint64_t)(int64_t)IntegerPolynomialP256::LIMB_MASK);
	c10 -= c12 >> 12;
	c5 -= (int64_t)((c12 << 22) & (uint64_t)(int64_t)IntegerPolynomialP256::LIMB_MASK);
	c6 -= c12 >> 4;
	c2 += (int64_t)((c12 << 4) & (uint64_t)(int64_t)IntegerPolynomialP256::LIMB_MASK);
	c3 += c12 >> 22;
	c9 += (int64_t)((c11 << 20) & (uint64_t)(int64_t)IntegerPolynomialP256::LIMB_MASK);
	c10 += c11 >> 6;
	c8 -= (int64_t)((c11 << 14) & (uint64_t)(int64_t)IntegerPolynomialP256::LIMB_MASK);
	c9 -= c11 >> 12;
	c4 -= (int64_t)((c11 << 22) & (uint64_t)(int64_t)IntegerPolynomialP256::LIMB_MASK);
	c5 -= c11 >> 4;
	c1 += (int64_t)((c11 << 4) & (uint64_t)(int64_t)IntegerPolynomialP256::LIMB_MASK);
	c2 += c11 >> 22;
	c8 += (int64_t)((c10 << 20) & (uint64_t)(int64_t)IntegerPolynomialP256::LIMB_MASK);
	c9 += c10 >> 6;
	c7 -= (int64_t)((c10 << 14) & (uint64_t)(int64_t)IntegerPolynomialP256::LIMB_MASK);
	c8 -= c10 >> 12;
	c3 -= (int64_t)((c10 << 22) & (uint64_t)(int64_t)IntegerPolynomialP256::LIMB_MASK);
	c4 -= c10 >> 4;
	c0 += (int64_t)((c10 << 4) & (uint64_t)(int64_t)IntegerPolynomialP256::LIMB_MASK);
	c1 += c10 >> 22;
	c10 = 0;
	carryReduce0(r, c0, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14, c15, c16, c17, c18, c19);
}

void IntegerPolynomialP256::carryReduce0($longs* r, int64_t c0, int64_t c1, int64_t c2, int64_t c3, int64_t c4, int64_t c5, int64_t c6, int64_t c7, int64_t c8, int64_t c9, int64_t c10, int64_t c11, int64_t c12, int64_t c13, int64_t c14, int64_t c15, int64_t c16, int64_t c17, int64_t c18, int64_t c19) {
	int64_t t0 = (c8 + IntegerPolynomialP256::CARRY_ADD) >> 26;
	c8 -= (t0 << 26);
	c9 += t0;
	t0 = (c9 + IntegerPolynomialP256::CARRY_ADD) >> 26;
	c9 -= (t0 << 26);
	c10 += t0;
	c8 += (int64_t)((c10 << 20) & (uint64_t)(int64_t)IntegerPolynomialP256::LIMB_MASK);
	c9 += c10 >> 6;
	c7 -= (int64_t)((c10 << 14) & (uint64_t)(int64_t)IntegerPolynomialP256::LIMB_MASK);
	c8 -= c10 >> 12;
	c3 -= (int64_t)((c10 << 22) & (uint64_t)(int64_t)IntegerPolynomialP256::LIMB_MASK);
	c4 -= c10 >> 4;
	c0 += (int64_t)((c10 << 4) & (uint64_t)(int64_t)IntegerPolynomialP256::LIMB_MASK);
	c1 += c10 >> 22;
	t0 = (c0 + IntegerPolynomialP256::CARRY_ADD) >> 26;
	c0 -= (t0 << 26);
	c1 += t0;
	t0 = (c1 + IntegerPolynomialP256::CARRY_ADD) >> 26;
	c1 -= (t0 << 26);
	c2 += t0;
	t0 = (c2 + IntegerPolynomialP256::CARRY_ADD) >> 26;
	c2 -= (t0 << 26);
	c3 += t0;
	t0 = (c3 + IntegerPolynomialP256::CARRY_ADD) >> 26;
	c3 -= (t0 << 26);
	c4 += t0;
	t0 = (c4 + IntegerPolynomialP256::CARRY_ADD) >> 26;
	c4 -= (t0 << 26);
	c5 += t0;
	t0 = (c5 + IntegerPolynomialP256::CARRY_ADD) >> 26;
	c5 -= (t0 << 26);
	c6 += t0;
	t0 = (c6 + IntegerPolynomialP256::CARRY_ADD) >> 26;
	c6 -= (t0 << 26);
	c7 += t0;
	t0 = (c7 + IntegerPolynomialP256::CARRY_ADD) >> 26;
	c7 -= (t0 << 26);
	c8 += t0;
	t0 = (c8 + IntegerPolynomialP256::CARRY_ADD) >> 26;
	c8 -= (t0 << 26);
	c9 += t0;
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
}

void IntegerPolynomialP256::carryReduce($longs* r, int64_t c0, int64_t c1, int64_t c2, int64_t c3, int64_t c4, int64_t c5, int64_t c6, int64_t c7, int64_t c8, int64_t c9) {
	int64_t c10 = 0;
	int64_t t0 = (c8 + IntegerPolynomialP256::CARRY_ADD) >> 26;
	c8 -= (t0 << 26);
	c9 += t0;
	t0 = (c9 + IntegerPolynomialP256::CARRY_ADD) >> 26;
	c9 -= (t0 << 26);
	c10 += t0;
	c8 += (int64_t)((c10 << 20) & (uint64_t)(int64_t)IntegerPolynomialP256::LIMB_MASK);
	c9 += c10 >> 6;
	c7 -= (int64_t)((c10 << 14) & (uint64_t)(int64_t)IntegerPolynomialP256::LIMB_MASK);
	c8 -= c10 >> 12;
	c3 -= (int64_t)((c10 << 22) & (uint64_t)(int64_t)IntegerPolynomialP256::LIMB_MASK);
	c4 -= c10 >> 4;
	c0 += (int64_t)((c10 << 4) & (uint64_t)(int64_t)IntegerPolynomialP256::LIMB_MASK);
	c1 += c10 >> 22;
	t0 = (c0 + IntegerPolynomialP256::CARRY_ADD) >> 26;
	c0 -= (t0 << 26);
	c1 += t0;
	t0 = (c1 + IntegerPolynomialP256::CARRY_ADD) >> 26;
	c1 -= (t0 << 26);
	c2 += t0;
	t0 = (c2 + IntegerPolynomialP256::CARRY_ADD) >> 26;
	c2 -= (t0 << 26);
	c3 += t0;
	t0 = (c3 + IntegerPolynomialP256::CARRY_ADD) >> 26;
	c3 -= (t0 << 26);
	c4 += t0;
	t0 = (c4 + IntegerPolynomialP256::CARRY_ADD) >> 26;
	c4 -= (t0 << 26);
	c5 += t0;
	t0 = (c5 + IntegerPolynomialP256::CARRY_ADD) >> 26;
	c5 -= (t0 << 26);
	c6 += t0;
	t0 = (c6 + IntegerPolynomialP256::CARRY_ADD) >> 26;
	c6 -= (t0 << 26);
	c7 += t0;
	t0 = (c7 + IntegerPolynomialP256::CARRY_ADD) >> 26;
	c7 -= (t0 << 26);
	c8 += t0;
	t0 = (c8 + IntegerPolynomialP256::CARRY_ADD) >> 26;
	c8 -= (t0 << 26);
	c9 += t0;
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
}

void IntegerPolynomialP256::mult($longs* a, $longs* b, $longs* r) {
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
	int64_t c10 = (a->get(1) * b->get(9)) + (a->get(2) * b->get(8)) + (a->get(3) * b->get(7)) + (a->get(4) * b->get(6)) + (a->get(5) * b->get(5)) + (a->get(6) * b->get(4)) + (a->get(7) * b->get(3)) + (a->get(8) * b->get(2)) + (a->get(9) * b->get(1));
	int64_t c11 = (a->get(2) * b->get(9)) + (a->get(3) * b->get(8)) + (a->get(4) * b->get(7)) + (a->get(5) * b->get(6)) + (a->get(6) * b->get(5)) + (a->get(7) * b->get(4)) + (a->get(8) * b->get(3)) + (a->get(9) * b->get(2));
	int64_t c12 = (a->get(3) * b->get(9)) + (a->get(4) * b->get(8)) + (a->get(5) * b->get(7)) + (a->get(6) * b->get(6)) + (a->get(7) * b->get(5)) + (a->get(8) * b->get(4)) + (a->get(9) * b->get(3));
	int64_t c13 = (a->get(4) * b->get(9)) + (a->get(5) * b->get(8)) + (a->get(6) * b->get(7)) + (a->get(7) * b->get(6)) + (a->get(8) * b->get(5)) + (a->get(9) * b->get(4));
	int64_t c14 = (a->get(5) * b->get(9)) + (a->get(6) * b->get(8)) + (a->get(7) * b->get(7)) + (a->get(8) * b->get(6)) + (a->get(9) * b->get(5));
	int64_t c15 = (a->get(6) * b->get(9)) + (a->get(7) * b->get(8)) + (a->get(8) * b->get(7)) + (a->get(9) * b->get(6));
	int64_t c16 = (a->get(7) * b->get(9)) + (a->get(8) * b->get(8)) + (a->get(9) * b->get(7));
	int64_t c17 = (a->get(8) * b->get(9)) + (a->get(9) * b->get(8));
	int64_t c18 = (a->get(9) * b->get(9));
	carryReduce(r, c0, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14, c15, c16, c17, c18);
}

void IntegerPolynomialP256::reduce($longs* a) {
	carryReduce(a, $nc(a)->get(0), a->get(1), a->get(2), a->get(3), a->get(4), a->get(5), a->get(6), a->get(7), a->get(8), a->get(9));
}

void IntegerPolynomialP256::square($longs* a, $longs* r) {
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
	int64_t c10 = 2 * ((a->get(1) * a->get(9)) + (a->get(2) * a->get(8)) + (a->get(3) * a->get(7)) + (a->get(4) * a->get(6))) + (a->get(5) * a->get(5));
	int64_t c11 = 2 * ((a->get(2) * a->get(9)) + (a->get(3) * a->get(8)) + (a->get(4) * a->get(7)) + (a->get(5) * a->get(6)));
	int64_t c12 = 2 * ((a->get(3) * a->get(9)) + (a->get(4) * a->get(8)) + (a->get(5) * a->get(7))) + (a->get(6) * a->get(6));
	int64_t c13 = 2 * ((a->get(4) * a->get(9)) + (a->get(5) * a->get(8)) + (a->get(6) * a->get(7)));
	int64_t c14 = 2 * ((a->get(5) * a->get(9)) + (a->get(6) * a->get(8))) + (a->get(7) * a->get(7));
	int64_t c15 = 2 * ((a->get(6) * a->get(9)) + (a->get(7) * a->get(8)));
	int64_t c16 = 2 * (a->get(7) * a->get(9)) + (a->get(8) * a->get(8));
	int64_t c17 = 2 * (a->get(8) * a->get(9));
	int64_t c18 = (a->get(9) * a->get(9));
	carryReduce(r, c0, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14, c15, c16, c17, c18);
}

void clinit$IntegerPolynomialP256($Class* class$) {
	$assignStatic(IntegerPolynomialP256::MODULUS, IntegerPolynomialP256::evaluateModulus());
}

IntegerPolynomialP256::IntegerPolynomialP256() {
}

$Class* IntegerPolynomialP256::load$($String* name, bool initialize) {
	$loadClass(IntegerPolynomialP256, name, initialize, &_IntegerPolynomialP256_ClassInfo_, clinit$IntegerPolynomialP256, allocate$IntegerPolynomialP256);
	return class$;
}

$Class* IntegerPolynomialP256::class$ = nullptr;

				} // intpoly
			} // math
		} // util
	} // security
} // sun