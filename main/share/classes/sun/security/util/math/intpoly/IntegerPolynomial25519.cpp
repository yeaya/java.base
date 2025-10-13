#include <sun/security/util/math/intpoly/IntegerPolynomial25519.h>

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

$FieldInfo _IntegerPolynomial25519_FieldInfo_[] = {
	{"BITS_PER_LIMB", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IntegerPolynomial25519, BITS_PER_LIMB)},
	{"NUM_LIMBS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IntegerPolynomial25519, NUM_LIMBS)},
	{"MAX_ADDS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IntegerPolynomial25519, MAX_ADDS)},
	{"MODULUS", "Ljava/math/BigInteger;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(IntegerPolynomial25519, MODULUS)},
	{"CARRY_ADD", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IntegerPolynomial25519, CARRY_ADD)},
	{"LIMB_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IntegerPolynomial25519, LIMB_MASK)},
	{}
};

$MethodInfo _IntegerPolynomial25519_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IntegerPolynomial25519::*)()>(&IntegerPolynomial25519::init$))},
	{"carryReduce", "([JJJJJJJJJJJJJJJJJJJJ)V", nullptr, $PRIVATE, $method(static_cast<void(IntegerPolynomial25519::*)($longs*,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t)>(&IntegerPolynomial25519::carryReduce))},
	{"carryReduce", "([JJJJJJJJJJJ)V", nullptr, $PRIVATE, $method(static_cast<void(IntegerPolynomial25519::*)($longs*,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t)>(&IntegerPolynomial25519::carryReduce))},
	{"evaluateModulus", "()Ljava/math/BigInteger;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$BigInteger*(*)()>(&IntegerPolynomial25519::evaluateModulus))},
	{"finalCarryReduceLast", "([J)V", nullptr, $PROTECTED},
	{"mult", "([J[J[J)V", nullptr, $PROTECTED},
	{"reduce", "([J)V", nullptr, $PROTECTED},
	{"reduceIn", "([JJI)V", nullptr, $PROTECTED},
	{"square", "([J[J)V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _IntegerPolynomial25519_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.util.math.intpoly.IntegerPolynomial25519",
	"sun.security.util.math.intpoly.IntegerPolynomial",
	nullptr,
	_IntegerPolynomial25519_FieldInfo_,
	_IntegerPolynomial25519_MethodInfo_
};

$Object* allocate$IntegerPolynomial25519($Class* clazz) {
	return $of($alloc(IntegerPolynomial25519));
}

$BigInteger* IntegerPolynomial25519::MODULUS = nullptr;

void IntegerPolynomial25519::init$() {
	$IntegerPolynomial::init$(IntegerPolynomial25519::BITS_PER_LIMB, IntegerPolynomial25519::NUM_LIMBS, IntegerPolynomial25519::MAX_ADDS, IntegerPolynomial25519::MODULUS);
}

$BigInteger* IntegerPolynomial25519::evaluateModulus() {
	$init(IntegerPolynomial25519);
	$var($BigInteger, result, $nc($($BigInteger::valueOf((int64_t)2)))->pow(255));
	$assign(result, $nc(result)->subtract($($BigInteger::valueOf((int64_t)19))));
	return result;
}

void IntegerPolynomial25519::reduceIn($longs* limbs, int64_t v, int32_t i) {
	int64_t t0 = 19 * v;
	(*$nc(limbs))[i - 10] += (int64_t)((t0 << 5) & (uint64_t)(int64_t)IntegerPolynomial25519::LIMB_MASK);
	(*limbs)[i - 9] += t0 >> 21;
}

void IntegerPolynomial25519::finalCarryReduceLast($longs* limbs) {
	int64_t c = $nc(limbs)->get(9) >> 21;
	(*limbs)[9] -= c << 21;
	int64_t t1 = 19 * c;
	(*limbs)[0] += t1;
}

void IntegerPolynomial25519::carryReduce($longs* r, int64_t c0, int64_t c1, int64_t c2, int64_t c3, int64_t c4, int64_t c5, int64_t c6, int64_t c7, int64_t c8, int64_t c9, int64_t c10, int64_t c11, int64_t c12, int64_t c13, int64_t c14, int64_t c15, int64_t c16, int64_t c17, int64_t c18) {
	int64_t c19 = 0;
	int64_t t0 = 19 * c17;
	c7 += (int64_t)((t0 << 5) & (uint64_t)(int64_t)IntegerPolynomial25519::LIMB_MASK);
	c8 += t0 >> 21;
	t0 = 19 * c18;
	c8 += (int64_t)((t0 << 5) & (uint64_t)(int64_t)IntegerPolynomial25519::LIMB_MASK);
	c9 += t0 >> 21;
	t0 = (c8 + IntegerPolynomial25519::CARRY_ADD) >> 26;
	c8 -= (t0 << 26);
	c9 += t0;
	t0 = (c9 + IntegerPolynomial25519::CARRY_ADD) >> 26;
	c9 -= (t0 << 26);
	c10 += t0;
	t0 = 19 * c10;
	c0 += (int64_t)((t0 << 5) & (uint64_t)(int64_t)IntegerPolynomial25519::LIMB_MASK);
	c1 += t0 >> 21;
	t0 = 19 * c11;
	c1 += (int64_t)((t0 << 5) & (uint64_t)(int64_t)IntegerPolynomial25519::LIMB_MASK);
	c2 += t0 >> 21;
	t0 = 19 * c12;
	c2 += (int64_t)((t0 << 5) & (uint64_t)(int64_t)IntegerPolynomial25519::LIMB_MASK);
	c3 += t0 >> 21;
	t0 = 19 * c13;
	c3 += (int64_t)((t0 << 5) & (uint64_t)(int64_t)IntegerPolynomial25519::LIMB_MASK);
	c4 += t0 >> 21;
	t0 = 19 * c14;
	c4 += (int64_t)((t0 << 5) & (uint64_t)(int64_t)IntegerPolynomial25519::LIMB_MASK);
	c5 += t0 >> 21;
	t0 = 19 * c15;
	c5 += (int64_t)((t0 << 5) & (uint64_t)(int64_t)IntegerPolynomial25519::LIMB_MASK);
	c6 += t0 >> 21;
	t0 = 19 * c16;
	c6 += (int64_t)((t0 << 5) & (uint64_t)(int64_t)IntegerPolynomial25519::LIMB_MASK);
	c7 += t0 >> 21;
	t0 = (c0 + IntegerPolynomial25519::CARRY_ADD) >> 26;
	c0 -= (t0 << 26);
	c1 += t0;
	t0 = (c1 + IntegerPolynomial25519::CARRY_ADD) >> 26;
	c1 -= (t0 << 26);
	c2 += t0;
	t0 = (c2 + IntegerPolynomial25519::CARRY_ADD) >> 26;
	c2 -= (t0 << 26);
	c3 += t0;
	t0 = (c3 + IntegerPolynomial25519::CARRY_ADD) >> 26;
	c3 -= (t0 << 26);
	c4 += t0;
	t0 = (c4 + IntegerPolynomial25519::CARRY_ADD) >> 26;
	c4 -= (t0 << 26);
	c5 += t0;
	t0 = (c5 + IntegerPolynomial25519::CARRY_ADD) >> 26;
	c5 -= (t0 << 26);
	c6 += t0;
	t0 = (c6 + IntegerPolynomial25519::CARRY_ADD) >> 26;
	c6 -= (t0 << 26);
	c7 += t0;
	t0 = (c7 + IntegerPolynomial25519::CARRY_ADD) >> 26;
	c7 -= (t0 << 26);
	c8 += t0;
	t0 = (c8 + IntegerPolynomial25519::CARRY_ADD) >> 26;
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

void IntegerPolynomial25519::carryReduce($longs* r, int64_t c0, int64_t c1, int64_t c2, int64_t c3, int64_t c4, int64_t c5, int64_t c6, int64_t c7, int64_t c8, int64_t c9) {
	int64_t c10 = 0;
	int64_t t0 = (c8 + IntegerPolynomial25519::CARRY_ADD) >> 26;
	c8 -= (t0 << 26);
	c9 += t0;
	t0 = (c9 + IntegerPolynomial25519::CARRY_ADD) >> 26;
	c9 -= (t0 << 26);
	c10 += t0;
	t0 = 19 * c10;
	c0 += (int64_t)((t0 << 5) & (uint64_t)(int64_t)IntegerPolynomial25519::LIMB_MASK);
	c1 += t0 >> 21;
	t0 = (c0 + IntegerPolynomial25519::CARRY_ADD) >> 26;
	c0 -= (t0 << 26);
	c1 += t0;
	t0 = (c1 + IntegerPolynomial25519::CARRY_ADD) >> 26;
	c1 -= (t0 << 26);
	c2 += t0;
	t0 = (c2 + IntegerPolynomial25519::CARRY_ADD) >> 26;
	c2 -= (t0 << 26);
	c3 += t0;
	t0 = (c3 + IntegerPolynomial25519::CARRY_ADD) >> 26;
	c3 -= (t0 << 26);
	c4 += t0;
	t0 = (c4 + IntegerPolynomial25519::CARRY_ADD) >> 26;
	c4 -= (t0 << 26);
	c5 += t0;
	t0 = (c5 + IntegerPolynomial25519::CARRY_ADD) >> 26;
	c5 -= (t0 << 26);
	c6 += t0;
	t0 = (c6 + IntegerPolynomial25519::CARRY_ADD) >> 26;
	c6 -= (t0 << 26);
	c7 += t0;
	t0 = (c7 + IntegerPolynomial25519::CARRY_ADD) >> 26;
	c7 -= (t0 << 26);
	c8 += t0;
	t0 = (c8 + IntegerPolynomial25519::CARRY_ADD) >> 26;
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

void IntegerPolynomial25519::mult($longs* a, $longs* b, $longs* r) {
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

void IntegerPolynomial25519::reduce($longs* a) {
	carryReduce(a, $nc(a)->get(0), a->get(1), a->get(2), a->get(3), a->get(4), a->get(5), a->get(6), a->get(7), a->get(8), a->get(9));
}

void IntegerPolynomial25519::square($longs* a, $longs* r) {
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

void clinit$IntegerPolynomial25519($Class* class$) {
	$assignStatic(IntegerPolynomial25519::MODULUS, IntegerPolynomial25519::evaluateModulus());
}

IntegerPolynomial25519::IntegerPolynomial25519() {
}

$Class* IntegerPolynomial25519::load$($String* name, bool initialize) {
	$loadClass(IntegerPolynomial25519, name, initialize, &_IntegerPolynomial25519_ClassInfo_, clinit$IntegerPolynomial25519, allocate$IntegerPolynomial25519);
	return class$;
}

$Class* IntegerPolynomial25519::class$ = nullptr;

				} // intpoly
			} // math
		} // util
	} // security
} // sun