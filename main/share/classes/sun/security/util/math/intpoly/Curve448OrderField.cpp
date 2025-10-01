#include <sun/security/util/math/intpoly/Curve448OrderField.h>

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

$FieldInfo _Curve448OrderField_FieldInfo_[] = {
	{"BITS_PER_LIMB", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Curve448OrderField, BITS_PER_LIMB)},
	{"NUM_LIMBS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Curve448OrderField, NUM_LIMBS)},
	{"MAX_ADDS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Curve448OrderField, MAX_ADDS)},
	{"MODULUS", "Ljava/math/BigInteger;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Curve448OrderField, MODULUS)},
	{"CARRY_ADD", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Curve448OrderField, CARRY_ADD)},
	{"LIMB_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Curve448OrderField, LIMB_MASK)},
	{}
};

$MethodInfo _Curve448OrderField_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Curve448OrderField::*)()>(&Curve448OrderField::init$))},
	{"carryReduce", "([JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ)V", nullptr, $PRIVATE, $method(static_cast<void(Curve448OrderField::*)($longs*,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t)>(&Curve448OrderField::carryReduce))},
	{"carryReduce", "([JJJJJJJJJJJJJJJJJ)V", nullptr, $PRIVATE, $method(static_cast<void(Curve448OrderField::*)($longs*,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t)>(&Curve448OrderField::carryReduce))},
	{"carryReduce0", "([JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ)V", nullptr, 0},
	{"carryReduce0", "([JJJJJJJJJJJJJJJJJJ)V", nullptr, 0},
	{"carryReduce1", "([JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ)V", nullptr, 0},
	{"carryReduce2", "([JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ)V", nullptr, 0},
	{"evaluateModulus", "()Ljava/math/BigInteger;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$BigInteger*(*)()>(&Curve448OrderField::evaluateModulus))},
	{"finalCarryReduceLast", "([J)V", nullptr, $PROTECTED},
	{"mult", "([J[J[J)V", nullptr, $PROTECTED},
	{"reduce", "([J)V", nullptr, $PROTECTED},
	{"reduceIn", "([JJI)V", nullptr, $PROTECTED},
	{"square", "([J[J)V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _Curve448OrderField_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.util.math.intpoly.Curve448OrderField",
	"sun.security.util.math.intpoly.IntegerPolynomial",
	nullptr,
	_Curve448OrderField_FieldInfo_,
	_Curve448OrderField_MethodInfo_
};

$Object* allocate$Curve448OrderField($Class* clazz) {
	return $of($alloc(Curve448OrderField));
}

$BigInteger* Curve448OrderField::MODULUS = nullptr;

void Curve448OrderField::init$() {
	$IntegerPolynomial::init$(Curve448OrderField::BITS_PER_LIMB, Curve448OrderField::NUM_LIMBS, Curve448OrderField::MAX_ADDS, Curve448OrderField::MODULUS);
}

$BigInteger* Curve448OrderField::evaluateModulus() {
	$init(Curve448OrderField);
	$var($BigInteger, result, $nc($($BigInteger::valueOf((int64_t)2)))->pow(446));
	$assign(result, $nc(result)->subtract($($BigInteger::valueOf((int64_t)0x04A7BB0D))));
	$assign(result, result->add($($nc($($nc($($BigInteger::valueOf((int64_t)2)))->pow(28)))->multiply($($BigInteger::valueOf((int64_t)0x078C292B))))));
	$assign(result, result->add($($nc($($nc($($BigInteger::valueOf((int64_t)2)))->pow(56)))->multiply($($BigInteger::valueOf((int64_t)0x058F5523))))));
	$assign(result, result->subtract($($nc($($nc($($BigInteger::valueOf((int64_t)2)))->pow(84)))->multiply($($BigInteger::valueOf((int64_t)0x03D8D724))))));
	$assign(result, result->add($($nc($($nc($($BigInteger::valueOf((int64_t)2)))->pow(112)))->multiply($($BigInteger::valueOf((int64_t)0x0690216D))))));
	$assign(result, result->add($($nc($($nc($($BigInteger::valueOf((int64_t)2)))->pow(140)))->multiply($($BigInteger::valueOf((int64_t)0x049AED63))))));
	$assign(result, result->subtract($($nc($($nc($($BigInteger::valueOf((int64_t)2)))->pow(168)))->multiply($($BigInteger::valueOf((int64_t)0x063BB125))))));
	$assign(result, result->add($($nc($($nc($($BigInteger::valueOf((int64_t)2)))->pow(196)))->multiply($($BigInteger::valueOf((int64_t)0x07CCA23F))))));
	$assign(result, result->subtract($($nc($($BigInteger::valueOf((int64_t)2)))->pow(224))));
	return result;
}

void Curve448OrderField::reduceIn($longs* limbs, int64_t v, int32_t i) {
	int64_t t0 = 0x04A7BB0D * v;
	(*$nc(limbs))[i - 16] += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	(*limbs)[i - 15] += t0 >> 26;
	int64_t t1 = (int32_t)0xF873D6D5 * v;
	(*limbs)[i - 15] += (int64_t)((t1 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	(*limbs)[i - 14] += t1 >> 26;
	int64_t t2 = (int32_t)0xFA70AADD * v;
	(*limbs)[i - 14] += (int64_t)((t2 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	(*limbs)[i - 13] += t2 >> 26;
	int64_t t3 = 0x03D8D724 * v;
	(*limbs)[i - 13] += (int64_t)((t3 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	(*limbs)[i - 12] += t3 >> 26;
	int64_t t4 = (int32_t)0xF96FDE93 * v;
	(*limbs)[i - 12] += (int64_t)((t4 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	(*limbs)[i - 11] += t4 >> 26;
	int64_t t5 = (int32_t)0xFB65129D * v;
	(*limbs)[i - 11] += (int64_t)((t5 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	(*limbs)[i - 10] += t5 >> 26;
	int64_t t6 = 0x063BB125 * v;
	(*limbs)[i - 10] += (int64_t)((t6 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	(*limbs)[i - 9] += t6 >> 26;
	int64_t t7 = (int32_t)0xF8335DC1 * v;
	(*limbs)[i - 9] += (int64_t)((t7 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	(*limbs)[i - 8] += t7 >> 26;
	(*limbs)[i - 8] += (int64_t)((v << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	(*limbs)[i - 7] += v >> 26;
}

void Curve448OrderField::finalCarryReduceLast($longs* limbs) {
	int64_t c = $nc(limbs)->get(15) >> 26;
	(*limbs)[15] -= c << 26;
	int64_t t8 = 0x04A7BB0D * c;
	(*limbs)[0] += t8;
	t8 = (int32_t)0xF873D6D5 * c;
	(*limbs)[1] += t8;
	t8 = (int32_t)0xFA70AADD * c;
	(*limbs)[2] += t8;
	t8 = 0x03D8D724 * c;
	(*limbs)[3] += t8;
	t8 = (int32_t)0xF96FDE93 * c;
	(*limbs)[4] += t8;
	t8 = (int32_t)0xFB65129D * c;
	(*limbs)[5] += t8;
	t8 = 0x063BB125 * c;
	(*limbs)[6] += t8;
	t8 = (int32_t)0xF8335DC1 * c;
	(*limbs)[7] += t8;
	(*limbs)[8] += c;
}

void Curve448OrderField::carryReduce($longs* r, int64_t c0, int64_t c1, int64_t c2, int64_t c3, int64_t c4, int64_t c5, int64_t c6, int64_t c7, int64_t c8, int64_t c9, int64_t c10, int64_t c11, int64_t c12, int64_t c13, int64_t c14, int64_t c15, int64_t c16, int64_t c17, int64_t c18, int64_t c19, int64_t c20, int64_t c21, int64_t c22, int64_t c23, int64_t c24, int64_t c25, int64_t c26, int64_t c27, int64_t c28, int64_t c29, int64_t c30) {
	int64_t c31 = 0;
	int64_t t0 = (c0 + Curve448OrderField::CARRY_ADD) >> 28;
	c0 -= (t0 << 28);
	c1 += t0;
	t0 = (c1 + Curve448OrderField::CARRY_ADD) >> 28;
	c1 -= (t0 << 28);
	c2 += t0;
	t0 = (c2 + Curve448OrderField::CARRY_ADD) >> 28;
	c2 -= (t0 << 28);
	c3 += t0;
	t0 = (c3 + Curve448OrderField::CARRY_ADD) >> 28;
	c3 -= (t0 << 28);
	c4 += t0;
	t0 = (c4 + Curve448OrderField::CARRY_ADD) >> 28;
	c4 -= (t0 << 28);
	c5 += t0;
	t0 = (c5 + Curve448OrderField::CARRY_ADD) >> 28;
	c5 -= (t0 << 28);
	c6 += t0;
	t0 = (c6 + Curve448OrderField::CARRY_ADD) >> 28;
	c6 -= (t0 << 28);
	c7 += t0;
	t0 = (c7 + Curve448OrderField::CARRY_ADD) >> 28;
	c7 -= (t0 << 28);
	c8 += t0;
	t0 = (c8 + Curve448OrderField::CARRY_ADD) >> 28;
	c8 -= (t0 << 28);
	c9 += t0;
	t0 = (c9 + Curve448OrderField::CARRY_ADD) >> 28;
	c9 -= (t0 << 28);
	c10 += t0;
	t0 = (c10 + Curve448OrderField::CARRY_ADD) >> 28;
	c10 -= (t0 << 28);
	c11 += t0;
	t0 = (c11 + Curve448OrderField::CARRY_ADD) >> 28;
	c11 -= (t0 << 28);
	c12 += t0;
	t0 = (c12 + Curve448OrderField::CARRY_ADD) >> 28;
	c12 -= (t0 << 28);
	c13 += t0;
	t0 = (c13 + Curve448OrderField::CARRY_ADD) >> 28;
	c13 -= (t0 << 28);
	c14 += t0;
	t0 = (c14 + Curve448OrderField::CARRY_ADD) >> 28;
	c14 -= (t0 << 28);
	c15 += t0;
	t0 = (c15 + Curve448OrderField::CARRY_ADD) >> 28;
	c15 -= (t0 << 28);
	c16 += t0;
	t0 = (c16 + Curve448OrderField::CARRY_ADD) >> 28;
	c16 -= (t0 << 28);
	c17 += t0;
	t0 = (c17 + Curve448OrderField::CARRY_ADD) >> 28;
	c17 -= (t0 << 28);
	c18 += t0;
	t0 = (c18 + Curve448OrderField::CARRY_ADD) >> 28;
	c18 -= (t0 << 28);
	c19 += t0;
	t0 = (c19 + Curve448OrderField::CARRY_ADD) >> 28;
	c19 -= (t0 << 28);
	c20 += t0;
	t0 = (c20 + Curve448OrderField::CARRY_ADD) >> 28;
	c20 -= (t0 << 28);
	c21 += t0;
	t0 = (c21 + Curve448OrderField::CARRY_ADD) >> 28;
	c21 -= (t0 << 28);
	c22 += t0;
	t0 = (c22 + Curve448OrderField::CARRY_ADD) >> 28;
	c22 -= (t0 << 28);
	c23 += t0;
	t0 = (c23 + Curve448OrderField::CARRY_ADD) >> 28;
	c23 -= (t0 << 28);
	c24 += t0;
	t0 = (c24 + Curve448OrderField::CARRY_ADD) >> 28;
	c24 -= (t0 << 28);
	c25 += t0;
	t0 = (c25 + Curve448OrderField::CARRY_ADD) >> 28;
	c25 -= (t0 << 28);
	c26 += t0;
	t0 = (c26 + Curve448OrderField::CARRY_ADD) >> 28;
	c26 -= (t0 << 28);
	c27 += t0;
	t0 = (c27 + Curve448OrderField::CARRY_ADD) >> 28;
	c27 -= (t0 << 28);
	c28 += t0;
	t0 = (c28 + Curve448OrderField::CARRY_ADD) >> 28;
	c28 -= (t0 << 28);
	c29 += t0;
	t0 = (c29 + Curve448OrderField::CARRY_ADD) >> 28;
	c29 -= (t0 << 28);
	c30 += t0;
	t0 = (c30 + Curve448OrderField::CARRY_ADD) >> 28;
	c30 -= (t0 << 28);
	c31 += t0;
	carryReduce0(r, c0, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14, c15, c16, c17, c18, c19, c20, c21, c22, c23, c24, c25, c26, c27, c28, c29, c30, c31);
}

void Curve448OrderField::carryReduce0($longs* r, int64_t c0, int64_t c1, int64_t c2, int64_t c3, int64_t c4, int64_t c5, int64_t c6, int64_t c7, int64_t c8, int64_t c9, int64_t c10, int64_t c11, int64_t c12, int64_t c13, int64_t c14, int64_t c15, int64_t c16, int64_t c17, int64_t c18, int64_t c19, int64_t c20, int64_t c21, int64_t c22, int64_t c23, int64_t c24, int64_t c25, int64_t c26, int64_t c27, int64_t c28, int64_t c29, int64_t c30, int64_t c31) {
	int64_t t0 = 0;
	t0 = 0x04A7BB0D * c31;
	c15 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c16 += t0 >> 26;
	t0 = (int32_t)0xF873D6D5 * c31;
	c16 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c17 += t0 >> 26;
	t0 = (int32_t)0xFA70AADD * c31;
	c17 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c18 += t0 >> 26;
	t0 = 0x03D8D724 * c31;
	c18 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c19 += t0 >> 26;
	t0 = (int32_t)0xF96FDE93 * c31;
	c19 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c20 += t0 >> 26;
	t0 = (int32_t)0xFB65129D * c31;
	c20 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c21 += t0 >> 26;
	t0 = 0x063BB125 * c31;
	c21 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c22 += t0 >> 26;
	t0 = (int32_t)0xF8335DC1 * c31;
	c22 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c23 += t0 >> 26;
	c23 += (int64_t)((c31 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c24 += c31 >> 26;
	t0 = 0x04A7BB0D * c30;
	c14 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c15 += t0 >> 26;
	t0 = (int32_t)0xF873D6D5 * c30;
	c15 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c16 += t0 >> 26;
	t0 = (int32_t)0xFA70AADD * c30;
	c16 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c17 += t0 >> 26;
	t0 = 0x03D8D724 * c30;
	c17 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c18 += t0 >> 26;
	t0 = (int32_t)0xF96FDE93 * c30;
	c18 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c19 += t0 >> 26;
	t0 = (int32_t)0xFB65129D * c30;
	c19 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c20 += t0 >> 26;
	t0 = 0x063BB125 * c30;
	c20 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c21 += t0 >> 26;
	t0 = (int32_t)0xF8335DC1 * c30;
	c21 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c22 += t0 >> 26;
	c22 += (int64_t)((c30 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c23 += c30 >> 26;
	t0 = 0x04A7BB0D * c29;
	c13 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c14 += t0 >> 26;
	t0 = (int32_t)0xF873D6D5 * c29;
	c14 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c15 += t0 >> 26;
	t0 = (int32_t)0xFA70AADD * c29;
	c15 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c16 += t0 >> 26;
	t0 = 0x03D8D724 * c29;
	c16 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c17 += t0 >> 26;
	t0 = (int32_t)0xF96FDE93 * c29;
	c17 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c18 += t0 >> 26;
	t0 = (int32_t)0xFB65129D * c29;
	c18 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c19 += t0 >> 26;
	t0 = 0x063BB125 * c29;
	c19 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c20 += t0 >> 26;
	t0 = (int32_t)0xF8335DC1 * c29;
	c20 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c21 += t0 >> 26;
	c21 += (int64_t)((c29 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c22 += c29 >> 26;
	t0 = 0x04A7BB0D * c28;
	c12 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c13 += t0 >> 26;
	t0 = (int32_t)0xF873D6D5 * c28;
	c13 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c14 += t0 >> 26;
	t0 = (int32_t)0xFA70AADD * c28;
	c14 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c15 += t0 >> 26;
	t0 = 0x03D8D724 * c28;
	c15 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c16 += t0 >> 26;
	t0 = (int32_t)0xF96FDE93 * c28;
	c16 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c17 += t0 >> 26;
	t0 = (int32_t)0xFB65129D * c28;
	c17 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c18 += t0 >> 26;
	t0 = 0x063BB125 * c28;
	c18 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c19 += t0 >> 26;
	t0 = (int32_t)0xF8335DC1 * c28;
	c19 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c20 += t0 >> 26;
	c20 += (int64_t)((c28 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c21 += c28 >> 26;
	t0 = 0x04A7BB0D * c27;
	c11 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c12 += t0 >> 26;
	t0 = (int32_t)0xF873D6D5 * c27;
	c12 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c13 += t0 >> 26;
	t0 = (int32_t)0xFA70AADD * c27;
	c13 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c14 += t0 >> 26;
	t0 = 0x03D8D724 * c27;
	c14 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c15 += t0 >> 26;
	t0 = (int32_t)0xF96FDE93 * c27;
	c15 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c16 += t0 >> 26;
	t0 = (int32_t)0xFB65129D * c27;
	c16 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c17 += t0 >> 26;
	t0 = 0x063BB125 * c27;
	c17 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c18 += t0 >> 26;
	t0 = (int32_t)0xF8335DC1 * c27;
	c18 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c19 += t0 >> 26;
	c19 += (int64_t)((c27 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c20 += c27 >> 26;
	t0 = 0x04A7BB0D * c26;
	c10 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c11 += t0 >> 26;
	t0 = (int32_t)0xF873D6D5 * c26;
	c11 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c12 += t0 >> 26;
	t0 = (int32_t)0xFA70AADD * c26;
	c12 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c13 += t0 >> 26;
	t0 = 0x03D8D724 * c26;
	c13 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c14 += t0 >> 26;
	t0 = (int32_t)0xF96FDE93 * c26;
	c14 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c15 += t0 >> 26;
	t0 = (int32_t)0xFB65129D * c26;
	c15 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c16 += t0 >> 26;
	t0 = 0x063BB125 * c26;
	c16 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c17 += t0 >> 26;
	t0 = (int32_t)0xF8335DC1 * c26;
	c17 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c18 += t0 >> 26;
	c18 += (int64_t)((c26 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c19 += c26 >> 26;
	t0 = 0x04A7BB0D * c25;
	c9 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c10 += t0 >> 26;
	t0 = (int32_t)0xF873D6D5 * c25;
	c10 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c11 += t0 >> 26;
	t0 = (int32_t)0xFA70AADD * c25;
	c11 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c12 += t0 >> 26;
	t0 = 0x03D8D724 * c25;
	c12 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c13 += t0 >> 26;
	t0 = (int32_t)0xF96FDE93 * c25;
	c13 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c14 += t0 >> 26;
	t0 = (int32_t)0xFB65129D * c25;
	c14 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c15 += t0 >> 26;
	t0 = 0x063BB125 * c25;
	c15 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c16 += t0 >> 26;
	t0 = (int32_t)0xF8335DC1 * c25;
	c16 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c17 += t0 >> 26;
	c17 += (int64_t)((c25 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c18 += c25 >> 26;
	t0 = 0x04A7BB0D * c24;
	c8 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c9 += t0 >> 26;
	t0 = (int32_t)0xF873D6D5 * c24;
	c9 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c10 += t0 >> 26;
	t0 = (int32_t)0xFA70AADD * c24;
	c10 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c11 += t0 >> 26;
	t0 = 0x03D8D724 * c24;
	c11 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c12 += t0 >> 26;
	t0 = (int32_t)0xF96FDE93 * c24;
	c12 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c13 += t0 >> 26;
	t0 = (int32_t)0xFB65129D * c24;
	c13 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c14 += t0 >> 26;
	t0 = 0x063BB125 * c24;
	c14 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c15 += t0 >> 26;
	t0 = (int32_t)0xF8335DC1 * c24;
	c15 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c16 += t0 >> 26;
	c16 += (int64_t)((c24 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c17 += c24 >> 26;
	t0 = 0x04A7BB0D * c23;
	c7 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c8 += t0 >> 26;
	t0 = (int32_t)0xF873D6D5 * c23;
	c8 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c9 += t0 >> 26;
	t0 = (int32_t)0xFA70AADD * c23;
	c9 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c10 += t0 >> 26;
	t0 = 0x03D8D724 * c23;
	c10 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c11 += t0 >> 26;
	t0 = (int32_t)0xF96FDE93 * c23;
	c11 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c12 += t0 >> 26;
	t0 = (int32_t)0xFB65129D * c23;
	c12 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c13 += t0 >> 26;
	t0 = 0x063BB125 * c23;
	c13 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c14 += t0 >> 26;
	t0 = (int32_t)0xF8335DC1 * c23;
	c14 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c15 += t0 >> 26;
	c15 += (int64_t)((c23 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c16 += c23 >> 26;
	t0 = 0x04A7BB0D * c22;
	c6 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c7 += t0 >> 26;
	t0 = (int32_t)0xF873D6D5 * c22;
	c7 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c8 += t0 >> 26;
	t0 = (int32_t)0xFA70AADD * c22;
	c8 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c9 += t0 >> 26;
	t0 = 0x03D8D724 * c22;
	c9 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c10 += t0 >> 26;
	t0 = (int32_t)0xF96FDE93 * c22;
	c10 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c11 += t0 >> 26;
	t0 = (int32_t)0xFB65129D * c22;
	c11 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c12 += t0 >> 26;
	t0 = 0x063BB125 * c22;
	c12 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c13 += t0 >> 26;
	t0 = (int32_t)0xF8335DC1 * c22;
	c13 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c14 += t0 >> 26;
	c14 += (int64_t)((c22 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c15 += c22 >> 26;
	t0 = 0x04A7BB0D * c21;
	c5 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c6 += t0 >> 26;
	t0 = (int32_t)0xF873D6D5 * c21;
	c6 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c7 += t0 >> 26;
	t0 = (int32_t)0xFA70AADD * c21;
	c7 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c8 += t0 >> 26;
	t0 = 0x03D8D724 * c21;
	c8 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c9 += t0 >> 26;
	t0 = (int32_t)0xF96FDE93 * c21;
	c9 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c10 += t0 >> 26;
	t0 = (int32_t)0xFB65129D * c21;
	c10 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c11 += t0 >> 26;
	t0 = 0x063BB125 * c21;
	c11 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c12 += t0 >> 26;
	t0 = (int32_t)0xF8335DC1 * c21;
	c12 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c13 += t0 >> 26;
	c13 += (int64_t)((c21 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c14 += c21 >> 26;
	t0 = 0x04A7BB0D * c20;
	c4 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c5 += t0 >> 26;
	t0 = (int32_t)0xF873D6D5 * c20;
	c5 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c6 += t0 >> 26;
	t0 = (int32_t)0xFA70AADD * c20;
	c6 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c7 += t0 >> 26;
	t0 = 0x03D8D724 * c20;
	c7 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c8 += t0 >> 26;
	t0 = (int32_t)0xF96FDE93 * c20;
	c8 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c9 += t0 >> 26;
	t0 = (int32_t)0xFB65129D * c20;
	c9 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c10 += t0 >> 26;
	t0 = 0x063BB125 * c20;
	c10 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c11 += t0 >> 26;
	t0 = (int32_t)0xF8335DC1 * c20;
	c11 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c12 += t0 >> 26;
	c12 += (int64_t)((c20 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c13 += c20 >> 26;
	t0 = 0x04A7BB0D * c19;
	c3 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c4 += t0 >> 26;
	t0 = (int32_t)0xF873D6D5 * c19;
	c4 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c5 += t0 >> 26;
	t0 = (int32_t)0xFA70AADD * c19;
	c5 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c6 += t0 >> 26;
	t0 = 0x03D8D724 * c19;
	c6 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c7 += t0 >> 26;
	t0 = (int32_t)0xF96FDE93 * c19;
	c7 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c8 += t0 >> 26;
	t0 = (int32_t)0xFB65129D * c19;
	c8 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c9 += t0 >> 26;
	t0 = 0x063BB125 * c19;
	c9 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c10 += t0 >> 26;
	t0 = (int32_t)0xF8335DC1 * c19;
	c10 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c11 += t0 >> 26;
	c11 += (int64_t)((c19 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c12 += c19 >> 26;
	t0 = 0x04A7BB0D * c18;
	c2 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c3 += t0 >> 26;
	t0 = (int32_t)0xF873D6D5 * c18;
	c3 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c4 += t0 >> 26;
	t0 = (int32_t)0xFA70AADD * c18;
	c4 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c5 += t0 >> 26;
	t0 = 0x03D8D724 * c18;
	c5 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c6 += t0 >> 26;
	t0 = (int32_t)0xF96FDE93 * c18;
	c6 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c7 += t0 >> 26;
	t0 = (int32_t)0xFB65129D * c18;
	c7 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c8 += t0 >> 26;
	t0 = 0x063BB125 * c18;
	c8 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c9 += t0 >> 26;
	t0 = (int32_t)0xF8335DC1 * c18;
	c9 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c10 += t0 >> 26;
	c10 += (int64_t)((c18 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c11 += c18 >> 26;
	t0 = 0x04A7BB0D * c17;
	c1 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c2 += t0 >> 26;
	t0 = (int32_t)0xF873D6D5 * c17;
	c2 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c3 += t0 >> 26;
	t0 = (int32_t)0xFA70AADD * c17;
	c3 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c4 += t0 >> 26;
	t0 = 0x03D8D724 * c17;
	c4 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c5 += t0 >> 26;
	t0 = (int32_t)0xF96FDE93 * c17;
	c5 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c6 += t0 >> 26;
	t0 = (int32_t)0xFB65129D * c17;
	c6 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c7 += t0 >> 26;
	t0 = 0x063BB125 * c17;
	c7 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c8 += t0 >> 26;
	t0 = (int32_t)0xF8335DC1 * c17;
	c8 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c9 += t0 >> 26;
	c9 += (int64_t)((c17 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c10 += c17 >> 26;
	t0 = 0x04A7BB0D * c16;
	c0 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c1 += t0 >> 26;
	t0 = (int32_t)0xF873D6D5 * c16;
	c1 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c2 += t0 >> 26;
	t0 = (int32_t)0xFA70AADD * c16;
	c2 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c3 += t0 >> 26;
	t0 = 0x03D8D724 * c16;
	c3 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c4 += t0 >> 26;
	t0 = (int32_t)0xF96FDE93 * c16;
	c4 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c5 += t0 >> 26;
	t0 = (int32_t)0xFB65129D * c16;
	c5 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c6 += t0 >> 26;
	t0 = 0x063BB125 * c16;
	c6 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c7 += t0 >> 26;
	t0 = (int32_t)0xF8335DC1 * c16;
	c7 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c8 += t0 >> 26;
	c8 += (int64_t)((c16 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c9 += c16 >> 26;
	c16 = 0;
	carryReduce1(r, c0, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14, c15, c16, c17, c18, c19, c20, c21, c22, c23, c24, c25, c26, c27, c28, c29, c30, c31);
}

void Curve448OrderField::carryReduce1($longs* r, int64_t c0, int64_t c1, int64_t c2, int64_t c3, int64_t c4, int64_t c5, int64_t c6, int64_t c7, int64_t c8, int64_t c9, int64_t c10, int64_t c11, int64_t c12, int64_t c13, int64_t c14, int64_t c15, int64_t c16, int64_t c17, int64_t c18, int64_t c19, int64_t c20, int64_t c21, int64_t c22, int64_t c23, int64_t c24, int64_t c25, int64_t c26, int64_t c27, int64_t c28, int64_t c29, int64_t c30, int64_t c31) {
	int64_t t0 = 0;
	t0 = (c0 + Curve448OrderField::CARRY_ADD) >> 28;
	c0 -= (t0 << 28);
	c1 += t0;
	t0 = (c1 + Curve448OrderField::CARRY_ADD) >> 28;
	c1 -= (t0 << 28);
	c2 += t0;
	t0 = (c2 + Curve448OrderField::CARRY_ADD) >> 28;
	c2 -= (t0 << 28);
	c3 += t0;
	t0 = (c3 + Curve448OrderField::CARRY_ADD) >> 28;
	c3 -= (t0 << 28);
	c4 += t0;
	t0 = (c4 + Curve448OrderField::CARRY_ADD) >> 28;
	c4 -= (t0 << 28);
	c5 += t0;
	t0 = (c5 + Curve448OrderField::CARRY_ADD) >> 28;
	c5 -= (t0 << 28);
	c6 += t0;
	t0 = (c6 + Curve448OrderField::CARRY_ADD) >> 28;
	c6 -= (t0 << 28);
	c7 += t0;
	t0 = (c7 + Curve448OrderField::CARRY_ADD) >> 28;
	c7 -= (t0 << 28);
	c8 += t0;
	t0 = (c8 + Curve448OrderField::CARRY_ADD) >> 28;
	c8 -= (t0 << 28);
	c9 += t0;
	t0 = (c9 + Curve448OrderField::CARRY_ADD) >> 28;
	c9 -= (t0 << 28);
	c10 += t0;
	t0 = (c10 + Curve448OrderField::CARRY_ADD) >> 28;
	c10 -= (t0 << 28);
	c11 += t0;
	t0 = (c11 + Curve448OrderField::CARRY_ADD) >> 28;
	c11 -= (t0 << 28);
	c12 += t0;
	t0 = (c12 + Curve448OrderField::CARRY_ADD) >> 28;
	c12 -= (t0 << 28);
	c13 += t0;
	t0 = (c13 + Curve448OrderField::CARRY_ADD) >> 28;
	c13 -= (t0 << 28);
	c14 += t0;
	t0 = (c14 + Curve448OrderField::CARRY_ADD) >> 28;
	c14 -= (t0 << 28);
	c15 += t0;
	t0 = (c15 + Curve448OrderField::CARRY_ADD) >> 28;
	c15 -= (t0 << 28);
	c16 += t0;
	carryReduce2(r, c0, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14, c15, c16, c17, c18, c19, c20, c21, c22, c23, c24, c25, c26, c27, c28, c29, c30, c31);
}

void Curve448OrderField::carryReduce2($longs* r, int64_t c0, int64_t c1, int64_t c2, int64_t c3, int64_t c4, int64_t c5, int64_t c6, int64_t c7, int64_t c8, int64_t c9, int64_t c10, int64_t c11, int64_t c12, int64_t c13, int64_t c14, int64_t c15, int64_t c16, int64_t c17, int64_t c18, int64_t c19, int64_t c20, int64_t c21, int64_t c22, int64_t c23, int64_t c24, int64_t c25, int64_t c26, int64_t c27, int64_t c28, int64_t c29, int64_t c30, int64_t c31) {
	int64_t t0 = 0;
	t0 = 0x04A7BB0D * c16;
	c0 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c1 += t0 >> 26;
	t0 = (int32_t)0xF873D6D5 * c16;
	c1 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c2 += t0 >> 26;
	t0 = (int32_t)0xFA70AADD * c16;
	c2 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c3 += t0 >> 26;
	t0 = 0x03D8D724 * c16;
	c3 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c4 += t0 >> 26;
	t0 = (int32_t)0xF96FDE93 * c16;
	c4 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c5 += t0 >> 26;
	t0 = (int32_t)0xFB65129D * c16;
	c5 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c6 += t0 >> 26;
	t0 = 0x063BB125 * c16;
	c6 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c7 += t0 >> 26;
	t0 = (int32_t)0xF8335DC1 * c16;
	c7 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c8 += t0 >> 26;
	c8 += (int64_t)((c16 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c9 += c16 >> 26;
	t0 = (c0 + Curve448OrderField::CARRY_ADD) >> 28;
	c0 -= (t0 << 28);
	c1 += t0;
	t0 = (c1 + Curve448OrderField::CARRY_ADD) >> 28;
	c1 -= (t0 << 28);
	c2 += t0;
	t0 = (c2 + Curve448OrderField::CARRY_ADD) >> 28;
	c2 -= (t0 << 28);
	c3 += t0;
	t0 = (c3 + Curve448OrderField::CARRY_ADD) >> 28;
	c3 -= (t0 << 28);
	c4 += t0;
	t0 = (c4 + Curve448OrderField::CARRY_ADD) >> 28;
	c4 -= (t0 << 28);
	c5 += t0;
	t0 = (c5 + Curve448OrderField::CARRY_ADD) >> 28;
	c5 -= (t0 << 28);
	c6 += t0;
	t0 = (c6 + Curve448OrderField::CARRY_ADD) >> 28;
	c6 -= (t0 << 28);
	c7 += t0;
	t0 = (c7 + Curve448OrderField::CARRY_ADD) >> 28;
	c7 -= (t0 << 28);
	c8 += t0;
	t0 = (c8 + Curve448OrderField::CARRY_ADD) >> 28;
	c8 -= (t0 << 28);
	c9 += t0;
	t0 = (c9 + Curve448OrderField::CARRY_ADD) >> 28;
	c9 -= (t0 << 28);
	c10 += t0;
	t0 = (c10 + Curve448OrderField::CARRY_ADD) >> 28;
	c10 -= (t0 << 28);
	c11 += t0;
	t0 = (c11 + Curve448OrderField::CARRY_ADD) >> 28;
	c11 -= (t0 << 28);
	c12 += t0;
	t0 = (c12 + Curve448OrderField::CARRY_ADD) >> 28;
	c12 -= (t0 << 28);
	c13 += t0;
	t0 = (c13 + Curve448OrderField::CARRY_ADD) >> 28;
	c13 -= (t0 << 28);
	c14 += t0;
	t0 = (c14 + Curve448OrderField::CARRY_ADD) >> 28;
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

void Curve448OrderField::carryReduce($longs* r, int64_t c0, int64_t c1, int64_t c2, int64_t c3, int64_t c4, int64_t c5, int64_t c6, int64_t c7, int64_t c8, int64_t c9, int64_t c10, int64_t c11, int64_t c12, int64_t c13, int64_t c14, int64_t c15) {
	int64_t c16 = 0;
	int64_t t0 = (c0 + Curve448OrderField::CARRY_ADD) >> 28;
	c0 -= (t0 << 28);
	c1 += t0;
	t0 = (c1 + Curve448OrderField::CARRY_ADD) >> 28;
	c1 -= (t0 << 28);
	c2 += t0;
	t0 = (c2 + Curve448OrderField::CARRY_ADD) >> 28;
	c2 -= (t0 << 28);
	c3 += t0;
	t0 = (c3 + Curve448OrderField::CARRY_ADD) >> 28;
	c3 -= (t0 << 28);
	c4 += t0;
	t0 = (c4 + Curve448OrderField::CARRY_ADD) >> 28;
	c4 -= (t0 << 28);
	c5 += t0;
	t0 = (c5 + Curve448OrderField::CARRY_ADD) >> 28;
	c5 -= (t0 << 28);
	c6 += t0;
	t0 = (c6 + Curve448OrderField::CARRY_ADD) >> 28;
	c6 -= (t0 << 28);
	c7 += t0;
	t0 = (c7 + Curve448OrderField::CARRY_ADD) >> 28;
	c7 -= (t0 << 28);
	c8 += t0;
	t0 = (c8 + Curve448OrderField::CARRY_ADD) >> 28;
	c8 -= (t0 << 28);
	c9 += t0;
	t0 = (c9 + Curve448OrderField::CARRY_ADD) >> 28;
	c9 -= (t0 << 28);
	c10 += t0;
	t0 = (c10 + Curve448OrderField::CARRY_ADD) >> 28;
	c10 -= (t0 << 28);
	c11 += t0;
	t0 = (c11 + Curve448OrderField::CARRY_ADD) >> 28;
	c11 -= (t0 << 28);
	c12 += t0;
	t0 = (c12 + Curve448OrderField::CARRY_ADD) >> 28;
	c12 -= (t0 << 28);
	c13 += t0;
	t0 = (c13 + Curve448OrderField::CARRY_ADD) >> 28;
	c13 -= (t0 << 28);
	c14 += t0;
	t0 = (c14 + Curve448OrderField::CARRY_ADD) >> 28;
	c14 -= (t0 << 28);
	c15 += t0;
	t0 = (c15 + Curve448OrderField::CARRY_ADD) >> 28;
	c15 -= (t0 << 28);
	c16 += t0;
	carryReduce0(r, c0, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14, c15, c16);
}

void Curve448OrderField::carryReduce0($longs* r, int64_t c0, int64_t c1, int64_t c2, int64_t c3, int64_t c4, int64_t c5, int64_t c6, int64_t c7, int64_t c8, int64_t c9, int64_t c10, int64_t c11, int64_t c12, int64_t c13, int64_t c14, int64_t c15, int64_t c16) {
	int64_t t0 = 0;
	t0 = 0x04A7BB0D * c16;
	c0 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c1 += t0 >> 26;
	t0 = (int32_t)0xF873D6D5 * c16;
	c1 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c2 += t0 >> 26;
	t0 = (int32_t)0xFA70AADD * c16;
	c2 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c3 += t0 >> 26;
	t0 = 0x03D8D724 * c16;
	c3 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c4 += t0 >> 26;
	t0 = (int32_t)0xF96FDE93 * c16;
	c4 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c5 += t0 >> 26;
	t0 = (int32_t)0xFB65129D * c16;
	c5 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c6 += t0 >> 26;
	t0 = 0x063BB125 * c16;
	c6 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c7 += t0 >> 26;
	t0 = (int32_t)0xF8335DC1 * c16;
	c7 += (int64_t)((t0 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c8 += t0 >> 26;
	c8 += (int64_t)((c16 << 2) & (uint64_t)(int64_t)Curve448OrderField::LIMB_MASK);
	c9 += c16 >> 26;
	t0 = (c0 + Curve448OrderField::CARRY_ADD) >> 28;
	c0 -= (t0 << 28);
	c1 += t0;
	t0 = (c1 + Curve448OrderField::CARRY_ADD) >> 28;
	c1 -= (t0 << 28);
	c2 += t0;
	t0 = (c2 + Curve448OrderField::CARRY_ADD) >> 28;
	c2 -= (t0 << 28);
	c3 += t0;
	t0 = (c3 + Curve448OrderField::CARRY_ADD) >> 28;
	c3 -= (t0 << 28);
	c4 += t0;
	t0 = (c4 + Curve448OrderField::CARRY_ADD) >> 28;
	c4 -= (t0 << 28);
	c5 += t0;
	t0 = (c5 + Curve448OrderField::CARRY_ADD) >> 28;
	c5 -= (t0 << 28);
	c6 += t0;
	t0 = (c6 + Curve448OrderField::CARRY_ADD) >> 28;
	c6 -= (t0 << 28);
	c7 += t0;
	t0 = (c7 + Curve448OrderField::CARRY_ADD) >> 28;
	c7 -= (t0 << 28);
	c8 += t0;
	t0 = (c8 + Curve448OrderField::CARRY_ADD) >> 28;
	c8 -= (t0 << 28);
	c9 += t0;
	t0 = (c9 + Curve448OrderField::CARRY_ADD) >> 28;
	c9 -= (t0 << 28);
	c10 += t0;
	t0 = (c10 + Curve448OrderField::CARRY_ADD) >> 28;
	c10 -= (t0 << 28);
	c11 += t0;
	t0 = (c11 + Curve448OrderField::CARRY_ADD) >> 28;
	c11 -= (t0 << 28);
	c12 += t0;
	t0 = (c12 + Curve448OrderField::CARRY_ADD) >> 28;
	c12 -= (t0 << 28);
	c13 += t0;
	t0 = (c13 + Curve448OrderField::CARRY_ADD) >> 28;
	c13 -= (t0 << 28);
	c14 += t0;
	t0 = (c14 + Curve448OrderField::CARRY_ADD) >> 28;
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

void Curve448OrderField::mult($longs* a, $longs* b, $longs* r) {
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

void Curve448OrderField::reduce($longs* a) {
	carryReduce(a, $nc(a)->get(0), a->get(1), a->get(2), a->get(3), a->get(4), a->get(5), a->get(6), a->get(7), a->get(8), a->get(9), a->get(10), a->get(11), a->get(12), a->get(13), a->get(14), a->get(15));
}

void Curve448OrderField::square($longs* a, $longs* r) {
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

void clinit$Curve448OrderField($Class* class$) {
	$assignStatic(Curve448OrderField::MODULUS, Curve448OrderField::evaluateModulus());
}

Curve448OrderField::Curve448OrderField() {
}

$Class* Curve448OrderField::load$($String* name, bool initialize) {
	$loadClass(Curve448OrderField, name, initialize, &_Curve448OrderField_ClassInfo_, clinit$Curve448OrderField, allocate$Curve448OrderField);
	return class$;
}

$Class* Curve448OrderField::class$ = nullptr;

				} // intpoly
			} // math
		} // util
	} // security
} // sun