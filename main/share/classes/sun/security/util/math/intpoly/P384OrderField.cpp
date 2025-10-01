#include <sun/security/util/math/intpoly/P384OrderField.h>

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

#undef NUM_LIMBS
#undef MODULUS
#undef CARRY_ADD
#undef BITS_PER_LIMB
#undef LIMB_MASK
#undef MAX_ADDS

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

$FieldInfo _P384OrderField_FieldInfo_[] = {
	{"BITS_PER_LIMB", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(P384OrderField, BITS_PER_LIMB)},
	{"NUM_LIMBS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(P384OrderField, NUM_LIMBS)},
	{"MAX_ADDS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(P384OrderField, MAX_ADDS)},
	{"MODULUS", "Ljava/math/BigInteger;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(P384OrderField, MODULUS)},
	{"CARRY_ADD", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(P384OrderField, CARRY_ADD)},
	{"LIMB_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(P384OrderField, LIMB_MASK)},
	{}
};

$MethodInfo _P384OrderField_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(P384OrderField::*)()>(&P384OrderField::init$))},
	{"carryReduce", "([JJJJJJJJJJJJJJJJJJJJJJJJJJJJ)V", nullptr, $PRIVATE, $method(static_cast<void(P384OrderField::*)($longs*,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t)>(&P384OrderField::carryReduce))},
	{"carryReduce", "([JJJJJJJJJJJJJJJ)V", nullptr, $PRIVATE, $method(static_cast<void(P384OrderField::*)($longs*,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t)>(&P384OrderField::carryReduce))},
	{"carryReduce0", "([JJJJJJJJJJJJJJJJJJJJJJJJJJJJJ)V", nullptr, 0},
	{"carryReduce0", "([JJJJJJJJJJJJJJJJ)V", nullptr, 0},
	{"carryReduce1", "([JJJJJJJJJJJJJJJJJJJJJJJJJJJJJ)V", nullptr, 0},
	{"carryReduce2", "([JJJJJJJJJJJJJJJJJJJJJJJJJJJJJ)V", nullptr, 0},
	{"evaluateModulus", "()Ljava/math/BigInteger;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$BigInteger*(*)()>(&P384OrderField::evaluateModulus))},
	{"finalCarryReduceLast", "([J)V", nullptr, $PROTECTED},
	{"mult", "([J[J[J)V", nullptr, $PROTECTED},
	{"reduce", "([J)V", nullptr, $PROTECTED},
	{"reduceIn", "([JJI)V", nullptr, $PROTECTED},
	{"square", "([J[J)V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _P384OrderField_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.util.math.intpoly.P384OrderField",
	"sun.security.util.math.intpoly.IntegerPolynomial",
	nullptr,
	_P384OrderField_FieldInfo_,
	_P384OrderField_MethodInfo_
};

$Object* allocate$P384OrderField($Class* clazz) {
	return $of($alloc(P384OrderField));
}

$BigInteger* P384OrderField::MODULUS = nullptr;

void P384OrderField::init$() {
	$IntegerPolynomial::init$(P384OrderField::BITS_PER_LIMB, P384OrderField::NUM_LIMBS, P384OrderField::MAX_ADDS, P384OrderField::MODULUS);
}

$BigInteger* P384OrderField::evaluateModulus() {
	$init(P384OrderField);
	$var($BigInteger, result, $nc($($BigInteger::valueOf((int64_t)2)))->pow(384));
	$assign(result, $nc(result)->subtract($($BigInteger::valueOf((int64_t)0x033AD68D))));
	$assign(result, result->subtract($($nc($($nc($($BigInteger::valueOf((int64_t)2)))->pow(28)))->multiply($($BigInteger::valueOf((int64_t)0x013E6953))))));
	$assign(result, result->add($($nc($($nc($($BigInteger::valueOf((int64_t)2)))->pow(56)))->multiply($($BigInteger::valueOf((int64_t)0x00A77AED))))));
	$assign(result, result->add($($nc($($nc($($BigInteger::valueOf((int64_t)2)))->pow(84)))->multiply($($BigInteger::valueOf((int64_t)0x00DB248B))))));
	$assign(result, result->subtract($($nc($($nc($($BigInteger::valueOf((int64_t)2)))->pow(112)))->multiply($($BigInteger::valueOf((int64_t)0x0220A7E6))))));
	$assign(result, result->subtract($($nc($($nc($($BigInteger::valueOf((int64_t)2)))->pow(140)))->multiply($($BigInteger::valueOf((int64_t)0x07E0BC8D))))));
	$assign(result, result->subtract($($nc($($nc($($BigInteger::valueOf((int64_t)2)))->pow(168)))->multiply($($BigInteger::valueOf((int64_t)0x00389CB2))))));
	return result;
}

void P384OrderField::reduceIn($longs* limbs, int64_t v, int32_t i) {
	int64_t t0 = 0x033AD68D * v;
	(*$nc(limbs))[i - 14] += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	(*limbs)[i - 13] += t0 >> 20;
	int64_t t1 = 0x013E6953 * v;
	(*limbs)[i - 13] += (int64_t)((t1 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	(*limbs)[i - 12] += t1 >> 20;
	int64_t t2 = (int32_t)0xFF588513 * v;
	(*limbs)[i - 12] += (int64_t)((t2 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	(*limbs)[i - 11] += t2 >> 20;
	int64_t t3 = (int32_t)0xFF24DB75 * v;
	(*limbs)[i - 11] += (int64_t)((t3 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	(*limbs)[i - 10] += t3 >> 20;
	int64_t t4 = 0x0220A7E6 * v;
	(*limbs)[i - 10] += (int64_t)((t4 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	(*limbs)[i - 9] += t4 >> 20;
	int64_t t5 = 0x07E0BC8D * v;
	(*limbs)[i - 9] += (int64_t)((t5 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	(*limbs)[i - 8] += t5 >> 20;
	int64_t t6 = 0x00389CB2 * v;
	(*limbs)[i - 8] += (int64_t)((t6 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	(*limbs)[i - 7] += t6 >> 20;
}

void P384OrderField::finalCarryReduceLast($longs* limbs) {
	int64_t c = $nc(limbs)->get(13) >> 20;
	(*limbs)[13] -= c << 20;
	int64_t t7 = 0x033AD68D * c;
	(*limbs)[0] += t7;
	t7 = 0x013E6953 * c;
	(*limbs)[1] += t7;
	t7 = (int32_t)0xFF588513 * c;
	(*limbs)[2] += t7;
	t7 = (int32_t)0xFF24DB75 * c;
	(*limbs)[3] += t7;
	t7 = 0x0220A7E6 * c;
	(*limbs)[4] += t7;
	t7 = 0x07E0BC8D * c;
	(*limbs)[5] += t7;
	t7 = 0x00389CB2 * c;
	(*limbs)[6] += t7;
}

void P384OrderField::carryReduce($longs* r, int64_t c0, int64_t c1, int64_t c2, int64_t c3, int64_t c4, int64_t c5, int64_t c6, int64_t c7, int64_t c8, int64_t c9, int64_t c10, int64_t c11, int64_t c12, int64_t c13, int64_t c14, int64_t c15, int64_t c16, int64_t c17, int64_t c18, int64_t c19, int64_t c20, int64_t c21, int64_t c22, int64_t c23, int64_t c24, int64_t c25, int64_t c26) {
	int64_t c27 = 0;
	int64_t t0 = (c0 + P384OrderField::CARRY_ADD) >> 28;
	c0 -= (t0 << 28);
	c1 += t0;
	t0 = (c1 + P384OrderField::CARRY_ADD) >> 28;
	c1 -= (t0 << 28);
	c2 += t0;
	t0 = (c2 + P384OrderField::CARRY_ADD) >> 28;
	c2 -= (t0 << 28);
	c3 += t0;
	t0 = (c3 + P384OrderField::CARRY_ADD) >> 28;
	c3 -= (t0 << 28);
	c4 += t0;
	t0 = (c4 + P384OrderField::CARRY_ADD) >> 28;
	c4 -= (t0 << 28);
	c5 += t0;
	t0 = (c5 + P384OrderField::CARRY_ADD) >> 28;
	c5 -= (t0 << 28);
	c6 += t0;
	t0 = (c6 + P384OrderField::CARRY_ADD) >> 28;
	c6 -= (t0 << 28);
	c7 += t0;
	t0 = (c7 + P384OrderField::CARRY_ADD) >> 28;
	c7 -= (t0 << 28);
	c8 += t0;
	t0 = (c8 + P384OrderField::CARRY_ADD) >> 28;
	c8 -= (t0 << 28);
	c9 += t0;
	t0 = (c9 + P384OrderField::CARRY_ADD) >> 28;
	c9 -= (t0 << 28);
	c10 += t0;
	t0 = (c10 + P384OrderField::CARRY_ADD) >> 28;
	c10 -= (t0 << 28);
	c11 += t0;
	t0 = (c11 + P384OrderField::CARRY_ADD) >> 28;
	c11 -= (t0 << 28);
	c12 += t0;
	t0 = (c12 + P384OrderField::CARRY_ADD) >> 28;
	c12 -= (t0 << 28);
	c13 += t0;
	t0 = (c13 + P384OrderField::CARRY_ADD) >> 28;
	c13 -= (t0 << 28);
	c14 += t0;
	t0 = (c14 + P384OrderField::CARRY_ADD) >> 28;
	c14 -= (t0 << 28);
	c15 += t0;
	t0 = (c15 + P384OrderField::CARRY_ADD) >> 28;
	c15 -= (t0 << 28);
	c16 += t0;
	t0 = (c16 + P384OrderField::CARRY_ADD) >> 28;
	c16 -= (t0 << 28);
	c17 += t0;
	t0 = (c17 + P384OrderField::CARRY_ADD) >> 28;
	c17 -= (t0 << 28);
	c18 += t0;
	t0 = (c18 + P384OrderField::CARRY_ADD) >> 28;
	c18 -= (t0 << 28);
	c19 += t0;
	t0 = (c19 + P384OrderField::CARRY_ADD) >> 28;
	c19 -= (t0 << 28);
	c20 += t0;
	t0 = (c20 + P384OrderField::CARRY_ADD) >> 28;
	c20 -= (t0 << 28);
	c21 += t0;
	t0 = (c21 + P384OrderField::CARRY_ADD) >> 28;
	c21 -= (t0 << 28);
	c22 += t0;
	t0 = (c22 + P384OrderField::CARRY_ADD) >> 28;
	c22 -= (t0 << 28);
	c23 += t0;
	t0 = (c23 + P384OrderField::CARRY_ADD) >> 28;
	c23 -= (t0 << 28);
	c24 += t0;
	t0 = (c24 + P384OrderField::CARRY_ADD) >> 28;
	c24 -= (t0 << 28);
	c25 += t0;
	t0 = (c25 + P384OrderField::CARRY_ADD) >> 28;
	c25 -= (t0 << 28);
	c26 += t0;
	t0 = (c26 + P384OrderField::CARRY_ADD) >> 28;
	c26 -= (t0 << 28);
	c27 += t0;
	carryReduce0(r, c0, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14, c15, c16, c17, c18, c19, c20, c21, c22, c23, c24, c25, c26, c27);
}

void P384OrderField::carryReduce0($longs* r, int64_t c0, int64_t c1, int64_t c2, int64_t c3, int64_t c4, int64_t c5, int64_t c6, int64_t c7, int64_t c8, int64_t c9, int64_t c10, int64_t c11, int64_t c12, int64_t c13, int64_t c14, int64_t c15, int64_t c16, int64_t c17, int64_t c18, int64_t c19, int64_t c20, int64_t c21, int64_t c22, int64_t c23, int64_t c24, int64_t c25, int64_t c26, int64_t c27) {
	int64_t t0 = 0;
	t0 = 0x033AD68D * c27;
	c13 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c14 += t0 >> 20;
	t0 = 0x013E6953 * c27;
	c14 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c15 += t0 >> 20;
	t0 = (int32_t)0xFF588513 * c27;
	c15 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c16 += t0 >> 20;
	t0 = (int32_t)0xFF24DB75 * c27;
	c16 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c17 += t0 >> 20;
	t0 = 0x0220A7E6 * c27;
	c17 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c18 += t0 >> 20;
	t0 = 0x07E0BC8D * c27;
	c18 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c19 += t0 >> 20;
	t0 = 0x00389CB2 * c27;
	c19 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c20 += t0 >> 20;
	t0 = 0x033AD68D * c26;
	c12 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c13 += t0 >> 20;
	t0 = 0x013E6953 * c26;
	c13 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c14 += t0 >> 20;
	t0 = (int32_t)0xFF588513 * c26;
	c14 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c15 += t0 >> 20;
	t0 = (int32_t)0xFF24DB75 * c26;
	c15 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c16 += t0 >> 20;
	t0 = 0x0220A7E6 * c26;
	c16 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c17 += t0 >> 20;
	t0 = 0x07E0BC8D * c26;
	c17 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c18 += t0 >> 20;
	t0 = 0x00389CB2 * c26;
	c18 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c19 += t0 >> 20;
	t0 = 0x033AD68D * c25;
	c11 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c12 += t0 >> 20;
	t0 = 0x013E6953 * c25;
	c12 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c13 += t0 >> 20;
	t0 = (int32_t)0xFF588513 * c25;
	c13 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c14 += t0 >> 20;
	t0 = (int32_t)0xFF24DB75 * c25;
	c14 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c15 += t0 >> 20;
	t0 = 0x0220A7E6 * c25;
	c15 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c16 += t0 >> 20;
	t0 = 0x07E0BC8D * c25;
	c16 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c17 += t0 >> 20;
	t0 = 0x00389CB2 * c25;
	c17 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c18 += t0 >> 20;
	t0 = 0x033AD68D * c24;
	c10 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c11 += t0 >> 20;
	t0 = 0x013E6953 * c24;
	c11 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c12 += t0 >> 20;
	t0 = (int32_t)0xFF588513 * c24;
	c12 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c13 += t0 >> 20;
	t0 = (int32_t)0xFF24DB75 * c24;
	c13 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c14 += t0 >> 20;
	t0 = 0x0220A7E6 * c24;
	c14 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c15 += t0 >> 20;
	t0 = 0x07E0BC8D * c24;
	c15 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c16 += t0 >> 20;
	t0 = 0x00389CB2 * c24;
	c16 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c17 += t0 >> 20;
	t0 = 0x033AD68D * c23;
	c9 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c10 += t0 >> 20;
	t0 = 0x013E6953 * c23;
	c10 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c11 += t0 >> 20;
	t0 = (int32_t)0xFF588513 * c23;
	c11 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c12 += t0 >> 20;
	t0 = (int32_t)0xFF24DB75 * c23;
	c12 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c13 += t0 >> 20;
	t0 = 0x0220A7E6 * c23;
	c13 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c14 += t0 >> 20;
	t0 = 0x07E0BC8D * c23;
	c14 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c15 += t0 >> 20;
	t0 = 0x00389CB2 * c23;
	c15 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c16 += t0 >> 20;
	t0 = 0x033AD68D * c22;
	c8 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c9 += t0 >> 20;
	t0 = 0x013E6953 * c22;
	c9 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c10 += t0 >> 20;
	t0 = (int32_t)0xFF588513 * c22;
	c10 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c11 += t0 >> 20;
	t0 = (int32_t)0xFF24DB75 * c22;
	c11 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c12 += t0 >> 20;
	t0 = 0x0220A7E6 * c22;
	c12 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c13 += t0 >> 20;
	t0 = 0x07E0BC8D * c22;
	c13 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c14 += t0 >> 20;
	t0 = 0x00389CB2 * c22;
	c14 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c15 += t0 >> 20;
	t0 = 0x033AD68D * c21;
	c7 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c8 += t0 >> 20;
	t0 = 0x013E6953 * c21;
	c8 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c9 += t0 >> 20;
	t0 = (int32_t)0xFF588513 * c21;
	c9 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c10 += t0 >> 20;
	t0 = (int32_t)0xFF24DB75 * c21;
	c10 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c11 += t0 >> 20;
	t0 = 0x0220A7E6 * c21;
	c11 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c12 += t0 >> 20;
	t0 = 0x07E0BC8D * c21;
	c12 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c13 += t0 >> 20;
	t0 = 0x00389CB2 * c21;
	c13 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c14 += t0 >> 20;
	t0 = 0x033AD68D * c20;
	c6 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c7 += t0 >> 20;
	t0 = 0x013E6953 * c20;
	c7 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c8 += t0 >> 20;
	t0 = (int32_t)0xFF588513 * c20;
	c8 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c9 += t0 >> 20;
	t0 = (int32_t)0xFF24DB75 * c20;
	c9 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c10 += t0 >> 20;
	t0 = 0x0220A7E6 * c20;
	c10 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c11 += t0 >> 20;
	t0 = 0x07E0BC8D * c20;
	c11 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c12 += t0 >> 20;
	t0 = 0x00389CB2 * c20;
	c12 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c13 += t0 >> 20;
	t0 = 0x033AD68D * c19;
	c5 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c6 += t0 >> 20;
	t0 = 0x013E6953 * c19;
	c6 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c7 += t0 >> 20;
	t0 = (int32_t)0xFF588513 * c19;
	c7 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c8 += t0 >> 20;
	t0 = (int32_t)0xFF24DB75 * c19;
	c8 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c9 += t0 >> 20;
	t0 = 0x0220A7E6 * c19;
	c9 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c10 += t0 >> 20;
	t0 = 0x07E0BC8D * c19;
	c10 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c11 += t0 >> 20;
	t0 = 0x00389CB2 * c19;
	c11 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c12 += t0 >> 20;
	t0 = 0x033AD68D * c18;
	c4 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c5 += t0 >> 20;
	t0 = 0x013E6953 * c18;
	c5 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c6 += t0 >> 20;
	t0 = (int32_t)0xFF588513 * c18;
	c6 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c7 += t0 >> 20;
	t0 = (int32_t)0xFF24DB75 * c18;
	c7 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c8 += t0 >> 20;
	t0 = 0x0220A7E6 * c18;
	c8 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c9 += t0 >> 20;
	t0 = 0x07E0BC8D * c18;
	c9 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c10 += t0 >> 20;
	t0 = 0x00389CB2 * c18;
	c10 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c11 += t0 >> 20;
	t0 = 0x033AD68D * c17;
	c3 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c4 += t0 >> 20;
	t0 = 0x013E6953 * c17;
	c4 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c5 += t0 >> 20;
	t0 = (int32_t)0xFF588513 * c17;
	c5 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c6 += t0 >> 20;
	t0 = (int32_t)0xFF24DB75 * c17;
	c6 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c7 += t0 >> 20;
	t0 = 0x0220A7E6 * c17;
	c7 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c8 += t0 >> 20;
	t0 = 0x07E0BC8D * c17;
	c8 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c9 += t0 >> 20;
	t0 = 0x00389CB2 * c17;
	c9 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c10 += t0 >> 20;
	t0 = 0x033AD68D * c16;
	c2 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c3 += t0 >> 20;
	t0 = 0x013E6953 * c16;
	c3 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c4 += t0 >> 20;
	t0 = (int32_t)0xFF588513 * c16;
	c4 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c5 += t0 >> 20;
	t0 = (int32_t)0xFF24DB75 * c16;
	c5 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c6 += t0 >> 20;
	t0 = 0x0220A7E6 * c16;
	c6 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c7 += t0 >> 20;
	t0 = 0x07E0BC8D * c16;
	c7 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c8 += t0 >> 20;
	t0 = 0x00389CB2 * c16;
	c8 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c9 += t0 >> 20;
	t0 = 0x033AD68D * c15;
	c1 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c2 += t0 >> 20;
	t0 = 0x013E6953 * c15;
	c2 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c3 += t0 >> 20;
	t0 = (int32_t)0xFF588513 * c15;
	c3 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c4 += t0 >> 20;
	t0 = (int32_t)0xFF24DB75 * c15;
	c4 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c5 += t0 >> 20;
	t0 = 0x0220A7E6 * c15;
	c5 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c6 += t0 >> 20;
	t0 = 0x07E0BC8D * c15;
	c6 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c7 += t0 >> 20;
	t0 = 0x00389CB2 * c15;
	c7 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c8 += t0 >> 20;
	t0 = 0x033AD68D * c14;
	c0 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c1 += t0 >> 20;
	t0 = 0x013E6953 * c14;
	c1 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c2 += t0 >> 20;
	t0 = (int32_t)0xFF588513 * c14;
	c2 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c3 += t0 >> 20;
	t0 = (int32_t)0xFF24DB75 * c14;
	c3 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c4 += t0 >> 20;
	t0 = 0x0220A7E6 * c14;
	c4 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c5 += t0 >> 20;
	t0 = 0x07E0BC8D * c14;
	c5 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c6 += t0 >> 20;
	t0 = 0x00389CB2 * c14;
	c6 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c7 += t0 >> 20;
	c14 = 0;
	carryReduce1(r, c0, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14, c15, c16, c17, c18, c19, c20, c21, c22, c23, c24, c25, c26, c27);
}

void P384OrderField::carryReduce1($longs* r, int64_t c0, int64_t c1, int64_t c2, int64_t c3, int64_t c4, int64_t c5, int64_t c6, int64_t c7, int64_t c8, int64_t c9, int64_t c10, int64_t c11, int64_t c12, int64_t c13, int64_t c14, int64_t c15, int64_t c16, int64_t c17, int64_t c18, int64_t c19, int64_t c20, int64_t c21, int64_t c22, int64_t c23, int64_t c24, int64_t c25, int64_t c26, int64_t c27) {
	int64_t t0 = 0;
	t0 = (c0 + P384OrderField::CARRY_ADD) >> 28;
	c0 -= (t0 << 28);
	c1 += t0;
	t0 = (c1 + P384OrderField::CARRY_ADD) >> 28;
	c1 -= (t0 << 28);
	c2 += t0;
	t0 = (c2 + P384OrderField::CARRY_ADD) >> 28;
	c2 -= (t0 << 28);
	c3 += t0;
	t0 = (c3 + P384OrderField::CARRY_ADD) >> 28;
	c3 -= (t0 << 28);
	c4 += t0;
	t0 = (c4 + P384OrderField::CARRY_ADD) >> 28;
	c4 -= (t0 << 28);
	c5 += t0;
	t0 = (c5 + P384OrderField::CARRY_ADD) >> 28;
	c5 -= (t0 << 28);
	c6 += t0;
	t0 = (c6 + P384OrderField::CARRY_ADD) >> 28;
	c6 -= (t0 << 28);
	c7 += t0;
	t0 = (c7 + P384OrderField::CARRY_ADD) >> 28;
	c7 -= (t0 << 28);
	c8 += t0;
	t0 = (c8 + P384OrderField::CARRY_ADD) >> 28;
	c8 -= (t0 << 28);
	c9 += t0;
	t0 = (c9 + P384OrderField::CARRY_ADD) >> 28;
	c9 -= (t0 << 28);
	c10 += t0;
	t0 = (c10 + P384OrderField::CARRY_ADD) >> 28;
	c10 -= (t0 << 28);
	c11 += t0;
	t0 = (c11 + P384OrderField::CARRY_ADD) >> 28;
	c11 -= (t0 << 28);
	c12 += t0;
	t0 = (c12 + P384OrderField::CARRY_ADD) >> 28;
	c12 -= (t0 << 28);
	c13 += t0;
	t0 = (c13 + P384OrderField::CARRY_ADD) >> 28;
	c13 -= (t0 << 28);
	c14 += t0;
	carryReduce2(r, c0, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14, c15, c16, c17, c18, c19, c20, c21, c22, c23, c24, c25, c26, c27);
}

void P384OrderField::carryReduce2($longs* r, int64_t c0, int64_t c1, int64_t c2, int64_t c3, int64_t c4, int64_t c5, int64_t c6, int64_t c7, int64_t c8, int64_t c9, int64_t c10, int64_t c11, int64_t c12, int64_t c13, int64_t c14, int64_t c15, int64_t c16, int64_t c17, int64_t c18, int64_t c19, int64_t c20, int64_t c21, int64_t c22, int64_t c23, int64_t c24, int64_t c25, int64_t c26, int64_t c27) {
	int64_t t0 = 0;
	t0 = 0x033AD68D * c14;
	c0 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c1 += t0 >> 20;
	t0 = 0x013E6953 * c14;
	c1 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c2 += t0 >> 20;
	t0 = (int32_t)0xFF588513 * c14;
	c2 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c3 += t0 >> 20;
	t0 = (int32_t)0xFF24DB75 * c14;
	c3 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c4 += t0 >> 20;
	t0 = 0x0220A7E6 * c14;
	c4 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c5 += t0 >> 20;
	t0 = 0x07E0BC8D * c14;
	c5 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c6 += t0 >> 20;
	t0 = 0x00389CB2 * c14;
	c6 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c7 += t0 >> 20;
	t0 = (c0 + P384OrderField::CARRY_ADD) >> 28;
	c0 -= (t0 << 28);
	c1 += t0;
	t0 = (c1 + P384OrderField::CARRY_ADD) >> 28;
	c1 -= (t0 << 28);
	c2 += t0;
	t0 = (c2 + P384OrderField::CARRY_ADD) >> 28;
	c2 -= (t0 << 28);
	c3 += t0;
	t0 = (c3 + P384OrderField::CARRY_ADD) >> 28;
	c3 -= (t0 << 28);
	c4 += t0;
	t0 = (c4 + P384OrderField::CARRY_ADD) >> 28;
	c4 -= (t0 << 28);
	c5 += t0;
	t0 = (c5 + P384OrderField::CARRY_ADD) >> 28;
	c5 -= (t0 << 28);
	c6 += t0;
	t0 = (c6 + P384OrderField::CARRY_ADD) >> 28;
	c6 -= (t0 << 28);
	c7 += t0;
	t0 = (c7 + P384OrderField::CARRY_ADD) >> 28;
	c7 -= (t0 << 28);
	c8 += t0;
	t0 = (c8 + P384OrderField::CARRY_ADD) >> 28;
	c8 -= (t0 << 28);
	c9 += t0;
	t0 = (c9 + P384OrderField::CARRY_ADD) >> 28;
	c9 -= (t0 << 28);
	c10 += t0;
	t0 = (c10 + P384OrderField::CARRY_ADD) >> 28;
	c10 -= (t0 << 28);
	c11 += t0;
	t0 = (c11 + P384OrderField::CARRY_ADD) >> 28;
	c11 -= (t0 << 28);
	c12 += t0;
	t0 = (c12 + P384OrderField::CARRY_ADD) >> 28;
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

void P384OrderField::carryReduce($longs* r, int64_t c0, int64_t c1, int64_t c2, int64_t c3, int64_t c4, int64_t c5, int64_t c6, int64_t c7, int64_t c8, int64_t c9, int64_t c10, int64_t c11, int64_t c12, int64_t c13) {
	int64_t c14 = 0;
	int64_t t0 = (c0 + P384OrderField::CARRY_ADD) >> 28;
	c0 -= (t0 << 28);
	c1 += t0;
	t0 = (c1 + P384OrderField::CARRY_ADD) >> 28;
	c1 -= (t0 << 28);
	c2 += t0;
	t0 = (c2 + P384OrderField::CARRY_ADD) >> 28;
	c2 -= (t0 << 28);
	c3 += t0;
	t0 = (c3 + P384OrderField::CARRY_ADD) >> 28;
	c3 -= (t0 << 28);
	c4 += t0;
	t0 = (c4 + P384OrderField::CARRY_ADD) >> 28;
	c4 -= (t0 << 28);
	c5 += t0;
	t0 = (c5 + P384OrderField::CARRY_ADD) >> 28;
	c5 -= (t0 << 28);
	c6 += t0;
	t0 = (c6 + P384OrderField::CARRY_ADD) >> 28;
	c6 -= (t0 << 28);
	c7 += t0;
	t0 = (c7 + P384OrderField::CARRY_ADD) >> 28;
	c7 -= (t0 << 28);
	c8 += t0;
	t0 = (c8 + P384OrderField::CARRY_ADD) >> 28;
	c8 -= (t0 << 28);
	c9 += t0;
	t0 = (c9 + P384OrderField::CARRY_ADD) >> 28;
	c9 -= (t0 << 28);
	c10 += t0;
	t0 = (c10 + P384OrderField::CARRY_ADD) >> 28;
	c10 -= (t0 << 28);
	c11 += t0;
	t0 = (c11 + P384OrderField::CARRY_ADD) >> 28;
	c11 -= (t0 << 28);
	c12 += t0;
	t0 = (c12 + P384OrderField::CARRY_ADD) >> 28;
	c12 -= (t0 << 28);
	c13 += t0;
	t0 = (c13 + P384OrderField::CARRY_ADD) >> 28;
	c13 -= (t0 << 28);
	c14 += t0;
	carryReduce0(r, c0, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14);
}

void P384OrderField::carryReduce0($longs* r, int64_t c0, int64_t c1, int64_t c2, int64_t c3, int64_t c4, int64_t c5, int64_t c6, int64_t c7, int64_t c8, int64_t c9, int64_t c10, int64_t c11, int64_t c12, int64_t c13, int64_t c14) {
	int64_t t0 = 0;
	t0 = 0x033AD68D * c14;
	c0 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c1 += t0 >> 20;
	t0 = 0x013E6953 * c14;
	c1 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c2 += t0 >> 20;
	t0 = (int32_t)0xFF588513 * c14;
	c2 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c3 += t0 >> 20;
	t0 = (int32_t)0xFF24DB75 * c14;
	c3 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c4 += t0 >> 20;
	t0 = 0x0220A7E6 * c14;
	c4 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c5 += t0 >> 20;
	t0 = 0x07E0BC8D * c14;
	c5 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c6 += t0 >> 20;
	t0 = 0x00389CB2 * c14;
	c6 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)P384OrderField::LIMB_MASK);
	c7 += t0 >> 20;
	t0 = (c0 + P384OrderField::CARRY_ADD) >> 28;
	c0 -= (t0 << 28);
	c1 += t0;
	t0 = (c1 + P384OrderField::CARRY_ADD) >> 28;
	c1 -= (t0 << 28);
	c2 += t0;
	t0 = (c2 + P384OrderField::CARRY_ADD) >> 28;
	c2 -= (t0 << 28);
	c3 += t0;
	t0 = (c3 + P384OrderField::CARRY_ADD) >> 28;
	c3 -= (t0 << 28);
	c4 += t0;
	t0 = (c4 + P384OrderField::CARRY_ADD) >> 28;
	c4 -= (t0 << 28);
	c5 += t0;
	t0 = (c5 + P384OrderField::CARRY_ADD) >> 28;
	c5 -= (t0 << 28);
	c6 += t0;
	t0 = (c6 + P384OrderField::CARRY_ADD) >> 28;
	c6 -= (t0 << 28);
	c7 += t0;
	t0 = (c7 + P384OrderField::CARRY_ADD) >> 28;
	c7 -= (t0 << 28);
	c8 += t0;
	t0 = (c8 + P384OrderField::CARRY_ADD) >> 28;
	c8 -= (t0 << 28);
	c9 += t0;
	t0 = (c9 + P384OrderField::CARRY_ADD) >> 28;
	c9 -= (t0 << 28);
	c10 += t0;
	t0 = (c10 + P384OrderField::CARRY_ADD) >> 28;
	c10 -= (t0 << 28);
	c11 += t0;
	t0 = (c11 + P384OrderField::CARRY_ADD) >> 28;
	c11 -= (t0 << 28);
	c12 += t0;
	t0 = (c12 + P384OrderField::CARRY_ADD) >> 28;
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

void P384OrderField::mult($longs* a, $longs* b, $longs* r) {
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

void P384OrderField::reduce($longs* a) {
	carryReduce(a, $nc(a)->get(0), a->get(1), a->get(2), a->get(3), a->get(4), a->get(5), a->get(6), a->get(7), a->get(8), a->get(9), a->get(10), a->get(11), a->get(12), a->get(13));
}

void P384OrderField::square($longs* a, $longs* r) {
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

void clinit$P384OrderField($Class* class$) {
	$assignStatic(P384OrderField::MODULUS, P384OrderField::evaluateModulus());
}

P384OrderField::P384OrderField() {
}

$Class* P384OrderField::load$($String* name, bool initialize) {
	$loadClass(P384OrderField, name, initialize, &_P384OrderField_ClassInfo_, clinit$P384OrderField, allocate$P384OrderField);
	return class$;
}

$Class* P384OrderField::class$ = nullptr;

				} // intpoly
			} // math
		} // util
	} // security
} // sun