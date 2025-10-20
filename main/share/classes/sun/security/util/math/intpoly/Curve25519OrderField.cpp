#include <sun/security/util/math/intpoly/Curve25519OrderField.h>

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

$FieldInfo _Curve25519OrderField_FieldInfo_[] = {
	{"BITS_PER_LIMB", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Curve25519OrderField, BITS_PER_LIMB)},
	{"NUM_LIMBS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Curve25519OrderField, NUM_LIMBS)},
	{"MAX_ADDS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Curve25519OrderField, MAX_ADDS)},
	{"MODULUS", "Ljava/math/BigInteger;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Curve25519OrderField, MODULUS)},
	{"CARRY_ADD", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Curve25519OrderField, CARRY_ADD)},
	{"LIMB_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Curve25519OrderField, LIMB_MASK)},
	{}
};

$MethodInfo _Curve25519OrderField_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Curve25519OrderField::*)()>(&Curve25519OrderField::init$))},
	{"carryReduce", "([JJJJJJJJJJJJJJJJJJJJ)V", nullptr, $PRIVATE, $method(static_cast<void(Curve25519OrderField::*)($longs*,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t)>(&Curve25519OrderField::carryReduce))},
	{"carryReduce", "([JJJJJJJJJJJ)V", nullptr, $PRIVATE, $method(static_cast<void(Curve25519OrderField::*)($longs*,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t)>(&Curve25519OrderField::carryReduce))},
	{"carryReduce0", "([JJJJJJJJJJJJJJJJJJJJJ)V", nullptr, 0},
	{"carryReduce0", "([JJJJJJJJJJJJ)V", nullptr, 0},
	{"carryReduce1", "([JJJJJJJJJJJJJJJJJJJJJ)V", nullptr, 0},
	{"carryReduce2", "([JJJJJJJJJJJJJJJJJJJJJ)V", nullptr, 0},
	{"evaluateModulus", "()Ljava/math/BigInteger;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$BigInteger*(*)()>(&Curve25519OrderField::evaluateModulus))},
	{"finalCarryReduceLast", "([J)V", nullptr, $PROTECTED},
	{"mult", "([J[J[J)V", nullptr, $PROTECTED},
	{"reduce", "([J)V", nullptr, $PROTECTED},
	{"reduceIn", "([JJI)V", nullptr, $PROTECTED},
	{"square", "([J[J)V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _Curve25519OrderField_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.util.math.intpoly.Curve25519OrderField",
	"sun.security.util.math.intpoly.IntegerPolynomial",
	nullptr,
	_Curve25519OrderField_FieldInfo_,
	_Curve25519OrderField_MethodInfo_
};

$Object* allocate$Curve25519OrderField($Class* clazz) {
	return $of($alloc(Curve25519OrderField));
}

$BigInteger* Curve25519OrderField::MODULUS = nullptr;

void Curve25519OrderField::init$() {
	$IntegerPolynomial::init$(Curve25519OrderField::BITS_PER_LIMB, Curve25519OrderField::NUM_LIMBS, Curve25519OrderField::MAX_ADDS, Curve25519OrderField::MODULUS);
}

$BigInteger* Curve25519OrderField::evaluateModulus() {
	$init(Curve25519OrderField);
	$useLocalCurrentObjectStackCache();
	$var($BigInteger, result, $nc($($BigInteger::valueOf((int64_t)2)))->pow(252));
	$assign(result, $nc(result)->add($($BigInteger::valueOf((int64_t)0x00F5D3ED))));
	$assign(result, result->add($($nc($($nc($($BigInteger::valueOf((int64_t)2)))->pow(26)))->multiply($($BigInteger::valueOf((int64_t)0x0098C697))))));
	$assign(result, result->add($($nc($($nc($($BigInteger::valueOf((int64_t)2)))->pow(52)))->multiply($($BigInteger::valueOf((int64_t)0x01CD6581))))));
	$assign(result, result->subtract($($nc($($nc($($BigInteger::valueOf((int64_t)2)))->pow(78)))->multiply($($BigInteger::valueOf((int64_t)0x00857422))))));
	$assign(result, result->add($($nc($($nc($($BigInteger::valueOf((int64_t)2)))->pow(104)))->multiply($($BigInteger::valueOf((int64_t)0x0014DEFA))))));
	return result;
}

void Curve25519OrderField::reduceIn($longs* limbs, int64_t v, int32_t i) {
	int64_t t0 = (int32_t)0xFF0A2C13 * v;
	(*$nc(limbs))[i - 10] += (int64_t)((t0 << 8) & (uint64_t)(int64_t)Curve25519OrderField::LIMB_MASK);
	(*limbs)[i - 9] += t0 >> 18;
	int64_t t1 = (int32_t)0xFF673969 * v;
	(*limbs)[i - 9] += (int64_t)((t1 << 8) & (uint64_t)(int64_t)Curve25519OrderField::LIMB_MASK);
	(*limbs)[i - 8] += t1 >> 18;
	int64_t t2 = (int32_t)0xFE329A7F * v;
	(*limbs)[i - 8] += (int64_t)((t2 << 8) & (uint64_t)(int64_t)Curve25519OrderField::LIMB_MASK);
	(*limbs)[i - 7] += t2 >> 18;
	int64_t t3 = 0x00857422 * v;
	(*limbs)[i - 7] += (int64_t)((t3 << 8) & (uint64_t)(int64_t)Curve25519OrderField::LIMB_MASK);
	(*limbs)[i - 6] += t3 >> 18;
	int64_t t4 = (int32_t)0xFFEB2106 * v;
	(*limbs)[i - 6] += (int64_t)((t4 << 8) & (uint64_t)(int64_t)Curve25519OrderField::LIMB_MASK);
	(*limbs)[i - 5] += t4 >> 18;
}

void Curve25519OrderField::finalCarryReduceLast($longs* limbs) {
	int64_t c = $nc(limbs)->get(9) >> 18;
	(*limbs)[9] -= c << 18;
	int64_t t5 = (int32_t)0xFF0A2C13 * c;
	(*limbs)[0] += t5;
	t5 = (int32_t)0xFF673969 * c;
	(*limbs)[1] += t5;
	t5 = (int32_t)0xFE329A7F * c;
	(*limbs)[2] += t5;
	t5 = 0x00857422 * c;
	(*limbs)[3] += t5;
	t5 = (int32_t)0xFFEB2106 * c;
	(*limbs)[4] += t5;
}

void Curve25519OrderField::carryReduce($longs* r, int64_t c0, int64_t c1, int64_t c2, int64_t c3, int64_t c4, int64_t c5, int64_t c6, int64_t c7, int64_t c8, int64_t c9, int64_t c10, int64_t c11, int64_t c12, int64_t c13, int64_t c14, int64_t c15, int64_t c16, int64_t c17, int64_t c18) {
	int64_t c19 = 0;
	int64_t t0 = (c0 + Curve25519OrderField::CARRY_ADD) >> 26;
	c0 -= (t0 << 26);
	c1 += t0;
	t0 = (c1 + Curve25519OrderField::CARRY_ADD) >> 26;
	c1 -= (t0 << 26);
	c2 += t0;
	t0 = (c2 + Curve25519OrderField::CARRY_ADD) >> 26;
	c2 -= (t0 << 26);
	c3 += t0;
	t0 = (c3 + Curve25519OrderField::CARRY_ADD) >> 26;
	c3 -= (t0 << 26);
	c4 += t0;
	t0 = (c4 + Curve25519OrderField::CARRY_ADD) >> 26;
	c4 -= (t0 << 26);
	c5 += t0;
	t0 = (c5 + Curve25519OrderField::CARRY_ADD) >> 26;
	c5 -= (t0 << 26);
	c6 += t0;
	t0 = (c6 + Curve25519OrderField::CARRY_ADD) >> 26;
	c6 -= (t0 << 26);
	c7 += t0;
	t0 = (c7 + Curve25519OrderField::CARRY_ADD) >> 26;
	c7 -= (t0 << 26);
	c8 += t0;
	t0 = (c8 + Curve25519OrderField::CARRY_ADD) >> 26;
	c8 -= (t0 << 26);
	c9 += t0;
	t0 = (c9 + Curve25519OrderField::CARRY_ADD) >> 26;
	c9 -= (t0 << 26);
	c10 += t0;
	t0 = (c10 + Curve25519OrderField::CARRY_ADD) >> 26;
	c10 -= (t0 << 26);
	c11 += t0;
	t0 = (c11 + Curve25519OrderField::CARRY_ADD) >> 26;
	c11 -= (t0 << 26);
	c12 += t0;
	t0 = (c12 + Curve25519OrderField::CARRY_ADD) >> 26;
	c12 -= (t0 << 26);
	c13 += t0;
	t0 = (c13 + Curve25519OrderField::CARRY_ADD) >> 26;
	c13 -= (t0 << 26);
	c14 += t0;
	t0 = (c14 + Curve25519OrderField::CARRY_ADD) >> 26;
	c14 -= (t0 << 26);
	c15 += t0;
	t0 = (c15 + Curve25519OrderField::CARRY_ADD) >> 26;
	c15 -= (t0 << 26);
	c16 += t0;
	t0 = (c16 + Curve25519OrderField::CARRY_ADD) >> 26;
	c16 -= (t0 << 26);
	c17 += t0;
	t0 = (c17 + Curve25519OrderField::CARRY_ADD) >> 26;
	c17 -= (t0 << 26);
	c18 += t0;
	t0 = (c18 + Curve25519OrderField::CARRY_ADD) >> 26;
	c18 -= (t0 << 26);
	c19 += t0;
	carryReduce0(r, c0, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14, c15, c16, c17, c18, c19);
}

void Curve25519OrderField::carryReduce0($longs* r, int64_t c0, int64_t c1, int64_t c2, int64_t c3, int64_t c4, int64_t c5, int64_t c6, int64_t c7, int64_t c8, int64_t c9, int64_t c10, int64_t c11, int64_t c12, int64_t c13, int64_t c14, int64_t c15, int64_t c16, int64_t c17, int64_t c18, int64_t c19) {
	int64_t t0 = 0;
	t0 = (int32_t)0xFF0A2C13 * c19;
	c9 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)Curve25519OrderField::LIMB_MASK);
	c10 += t0 >> 18;
	t0 = (int32_t)0xFF673969 * c19;
	c10 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)Curve25519OrderField::LIMB_MASK);
	c11 += t0 >> 18;
	t0 = (int32_t)0xFE329A7F * c19;
	c11 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)Curve25519OrderField::LIMB_MASK);
	c12 += t0 >> 18;
	t0 = 0x00857422 * c19;
	c12 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)Curve25519OrderField::LIMB_MASK);
	c13 += t0 >> 18;
	t0 = (int32_t)0xFFEB2106 * c19;
	c13 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)Curve25519OrderField::LIMB_MASK);
	c14 += t0 >> 18;
	t0 = (int32_t)0xFF0A2C13 * c18;
	c8 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)Curve25519OrderField::LIMB_MASK);
	c9 += t0 >> 18;
	t0 = (int32_t)0xFF673969 * c18;
	c9 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)Curve25519OrderField::LIMB_MASK);
	c10 += t0 >> 18;
	t0 = (int32_t)0xFE329A7F * c18;
	c10 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)Curve25519OrderField::LIMB_MASK);
	c11 += t0 >> 18;
	t0 = 0x00857422 * c18;
	c11 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)Curve25519OrderField::LIMB_MASK);
	c12 += t0 >> 18;
	t0 = (int32_t)0xFFEB2106 * c18;
	c12 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)Curve25519OrderField::LIMB_MASK);
	c13 += t0 >> 18;
	t0 = (int32_t)0xFF0A2C13 * c17;
	c7 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)Curve25519OrderField::LIMB_MASK);
	c8 += t0 >> 18;
	t0 = (int32_t)0xFF673969 * c17;
	c8 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)Curve25519OrderField::LIMB_MASK);
	c9 += t0 >> 18;
	t0 = (int32_t)0xFE329A7F * c17;
	c9 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)Curve25519OrderField::LIMB_MASK);
	c10 += t0 >> 18;
	t0 = 0x00857422 * c17;
	c10 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)Curve25519OrderField::LIMB_MASK);
	c11 += t0 >> 18;
	t0 = (int32_t)0xFFEB2106 * c17;
	c11 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)Curve25519OrderField::LIMB_MASK);
	c12 += t0 >> 18;
	t0 = (int32_t)0xFF0A2C13 * c16;
	c6 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)Curve25519OrderField::LIMB_MASK);
	c7 += t0 >> 18;
	t0 = (int32_t)0xFF673969 * c16;
	c7 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)Curve25519OrderField::LIMB_MASK);
	c8 += t0 >> 18;
	t0 = (int32_t)0xFE329A7F * c16;
	c8 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)Curve25519OrderField::LIMB_MASK);
	c9 += t0 >> 18;
	t0 = 0x00857422 * c16;
	c9 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)Curve25519OrderField::LIMB_MASK);
	c10 += t0 >> 18;
	t0 = (int32_t)0xFFEB2106 * c16;
	c10 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)Curve25519OrderField::LIMB_MASK);
	c11 += t0 >> 18;
	t0 = (int32_t)0xFF0A2C13 * c15;
	c5 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)Curve25519OrderField::LIMB_MASK);
	c6 += t0 >> 18;
	t0 = (int32_t)0xFF673969 * c15;
	c6 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)Curve25519OrderField::LIMB_MASK);
	c7 += t0 >> 18;
	t0 = (int32_t)0xFE329A7F * c15;
	c7 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)Curve25519OrderField::LIMB_MASK);
	c8 += t0 >> 18;
	t0 = 0x00857422 * c15;
	c8 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)Curve25519OrderField::LIMB_MASK);
	c9 += t0 >> 18;
	t0 = (int32_t)0xFFEB2106 * c15;
	c9 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)Curve25519OrderField::LIMB_MASK);
	c10 += t0 >> 18;
	t0 = (int32_t)0xFF0A2C13 * c14;
	c4 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)Curve25519OrderField::LIMB_MASK);
	c5 += t0 >> 18;
	t0 = (int32_t)0xFF673969 * c14;
	c5 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)Curve25519OrderField::LIMB_MASK);
	c6 += t0 >> 18;
	t0 = (int32_t)0xFE329A7F * c14;
	c6 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)Curve25519OrderField::LIMB_MASK);
	c7 += t0 >> 18;
	t0 = 0x00857422 * c14;
	c7 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)Curve25519OrderField::LIMB_MASK);
	c8 += t0 >> 18;
	t0 = (int32_t)0xFFEB2106 * c14;
	c8 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)Curve25519OrderField::LIMB_MASK);
	c9 += t0 >> 18;
	t0 = (int32_t)0xFF0A2C13 * c13;
	c3 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)Curve25519OrderField::LIMB_MASK);
	c4 += t0 >> 18;
	t0 = (int32_t)0xFF673969 * c13;
	c4 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)Curve25519OrderField::LIMB_MASK);
	c5 += t0 >> 18;
	t0 = (int32_t)0xFE329A7F * c13;
	c5 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)Curve25519OrderField::LIMB_MASK);
	c6 += t0 >> 18;
	t0 = 0x00857422 * c13;
	c6 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)Curve25519OrderField::LIMB_MASK);
	c7 += t0 >> 18;
	t0 = (int32_t)0xFFEB2106 * c13;
	c7 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)Curve25519OrderField::LIMB_MASK);
	c8 += t0 >> 18;
	t0 = (int32_t)0xFF0A2C13 * c12;
	c2 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)Curve25519OrderField::LIMB_MASK);
	c3 += t0 >> 18;
	t0 = (int32_t)0xFF673969 * c12;
	c3 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)Curve25519OrderField::LIMB_MASK);
	c4 += t0 >> 18;
	t0 = (int32_t)0xFE329A7F * c12;
	c4 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)Curve25519OrderField::LIMB_MASK);
	c5 += t0 >> 18;
	t0 = 0x00857422 * c12;
	c5 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)Curve25519OrderField::LIMB_MASK);
	c6 += t0 >> 18;
	t0 = (int32_t)0xFFEB2106 * c12;
	c6 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)Curve25519OrderField::LIMB_MASK);
	c7 += t0 >> 18;
	t0 = (int32_t)0xFF0A2C13 * c11;
	c1 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)Curve25519OrderField::LIMB_MASK);
	c2 += t0 >> 18;
	t0 = (int32_t)0xFF673969 * c11;
	c2 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)Curve25519OrderField::LIMB_MASK);
	c3 += t0 >> 18;
	t0 = (int32_t)0xFE329A7F * c11;
	c3 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)Curve25519OrderField::LIMB_MASK);
	c4 += t0 >> 18;
	t0 = 0x00857422 * c11;
	c4 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)Curve25519OrderField::LIMB_MASK);
	c5 += t0 >> 18;
	t0 = (int32_t)0xFFEB2106 * c11;
	c5 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)Curve25519OrderField::LIMB_MASK);
	c6 += t0 >> 18;
	t0 = (int32_t)0xFF0A2C13 * c10;
	c0 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)Curve25519OrderField::LIMB_MASK);
	c1 += t0 >> 18;
	t0 = (int32_t)0xFF673969 * c10;
	c1 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)Curve25519OrderField::LIMB_MASK);
	c2 += t0 >> 18;
	t0 = (int32_t)0xFE329A7F * c10;
	c2 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)Curve25519OrderField::LIMB_MASK);
	c3 += t0 >> 18;
	t0 = 0x00857422 * c10;
	c3 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)Curve25519OrderField::LIMB_MASK);
	c4 += t0 >> 18;
	t0 = (int32_t)0xFFEB2106 * c10;
	c4 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)Curve25519OrderField::LIMB_MASK);
	c5 += t0 >> 18;
	c10 = 0;
	carryReduce1(r, c0, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14, c15, c16, c17, c18, c19);
}

void Curve25519OrderField::carryReduce1($longs* r, int64_t c0, int64_t c1, int64_t c2, int64_t c3, int64_t c4, int64_t c5, int64_t c6, int64_t c7, int64_t c8, int64_t c9, int64_t c10, int64_t c11, int64_t c12, int64_t c13, int64_t c14, int64_t c15, int64_t c16, int64_t c17, int64_t c18, int64_t c19) {
	int64_t t0 = 0;
	t0 = (c0 + Curve25519OrderField::CARRY_ADD) >> 26;
	c0 -= (t0 << 26);
	c1 += t0;
	t0 = (c1 + Curve25519OrderField::CARRY_ADD) >> 26;
	c1 -= (t0 << 26);
	c2 += t0;
	t0 = (c2 + Curve25519OrderField::CARRY_ADD) >> 26;
	c2 -= (t0 << 26);
	c3 += t0;
	t0 = (c3 + Curve25519OrderField::CARRY_ADD) >> 26;
	c3 -= (t0 << 26);
	c4 += t0;
	t0 = (c4 + Curve25519OrderField::CARRY_ADD) >> 26;
	c4 -= (t0 << 26);
	c5 += t0;
	t0 = (c5 + Curve25519OrderField::CARRY_ADD) >> 26;
	c5 -= (t0 << 26);
	c6 += t0;
	t0 = (c6 + Curve25519OrderField::CARRY_ADD) >> 26;
	c6 -= (t0 << 26);
	c7 += t0;
	t0 = (c7 + Curve25519OrderField::CARRY_ADD) >> 26;
	c7 -= (t0 << 26);
	c8 += t0;
	t0 = (c8 + Curve25519OrderField::CARRY_ADD) >> 26;
	c8 -= (t0 << 26);
	c9 += t0;
	t0 = (c9 + Curve25519OrderField::CARRY_ADD) >> 26;
	c9 -= (t0 << 26);
	c10 += t0;
	carryReduce2(r, c0, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14, c15, c16, c17, c18, c19);
}

void Curve25519OrderField::carryReduce2($longs* r, int64_t c0, int64_t c1, int64_t c2, int64_t c3, int64_t c4, int64_t c5, int64_t c6, int64_t c7, int64_t c8, int64_t c9, int64_t c10, int64_t c11, int64_t c12, int64_t c13, int64_t c14, int64_t c15, int64_t c16, int64_t c17, int64_t c18, int64_t c19) {
	int64_t t0 = 0;
	t0 = (int32_t)0xFF0A2C13 * c10;
	c0 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)Curve25519OrderField::LIMB_MASK);
	c1 += t0 >> 18;
	t0 = (int32_t)0xFF673969 * c10;
	c1 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)Curve25519OrderField::LIMB_MASK);
	c2 += t0 >> 18;
	t0 = (int32_t)0xFE329A7F * c10;
	c2 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)Curve25519OrderField::LIMB_MASK);
	c3 += t0 >> 18;
	t0 = 0x00857422 * c10;
	c3 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)Curve25519OrderField::LIMB_MASK);
	c4 += t0 >> 18;
	t0 = (int32_t)0xFFEB2106 * c10;
	c4 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)Curve25519OrderField::LIMB_MASK);
	c5 += t0 >> 18;
	t0 = (c0 + Curve25519OrderField::CARRY_ADD) >> 26;
	c0 -= (t0 << 26);
	c1 += t0;
	t0 = (c1 + Curve25519OrderField::CARRY_ADD) >> 26;
	c1 -= (t0 << 26);
	c2 += t0;
	t0 = (c2 + Curve25519OrderField::CARRY_ADD) >> 26;
	c2 -= (t0 << 26);
	c3 += t0;
	t0 = (c3 + Curve25519OrderField::CARRY_ADD) >> 26;
	c3 -= (t0 << 26);
	c4 += t0;
	t0 = (c4 + Curve25519OrderField::CARRY_ADD) >> 26;
	c4 -= (t0 << 26);
	c5 += t0;
	t0 = (c5 + Curve25519OrderField::CARRY_ADD) >> 26;
	c5 -= (t0 << 26);
	c6 += t0;
	t0 = (c6 + Curve25519OrderField::CARRY_ADD) >> 26;
	c6 -= (t0 << 26);
	c7 += t0;
	t0 = (c7 + Curve25519OrderField::CARRY_ADD) >> 26;
	c7 -= (t0 << 26);
	c8 += t0;
	t0 = (c8 + Curve25519OrderField::CARRY_ADD) >> 26;
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

void Curve25519OrderField::carryReduce($longs* r, int64_t c0, int64_t c1, int64_t c2, int64_t c3, int64_t c4, int64_t c5, int64_t c6, int64_t c7, int64_t c8, int64_t c9) {
	int64_t c10 = 0;
	int64_t t0 = (c0 + Curve25519OrderField::CARRY_ADD) >> 26;
	c0 -= (t0 << 26);
	c1 += t0;
	t0 = (c1 + Curve25519OrderField::CARRY_ADD) >> 26;
	c1 -= (t0 << 26);
	c2 += t0;
	t0 = (c2 + Curve25519OrderField::CARRY_ADD) >> 26;
	c2 -= (t0 << 26);
	c3 += t0;
	t0 = (c3 + Curve25519OrderField::CARRY_ADD) >> 26;
	c3 -= (t0 << 26);
	c4 += t0;
	t0 = (c4 + Curve25519OrderField::CARRY_ADD) >> 26;
	c4 -= (t0 << 26);
	c5 += t0;
	t0 = (c5 + Curve25519OrderField::CARRY_ADD) >> 26;
	c5 -= (t0 << 26);
	c6 += t0;
	t0 = (c6 + Curve25519OrderField::CARRY_ADD) >> 26;
	c6 -= (t0 << 26);
	c7 += t0;
	t0 = (c7 + Curve25519OrderField::CARRY_ADD) >> 26;
	c7 -= (t0 << 26);
	c8 += t0;
	t0 = (c8 + Curve25519OrderField::CARRY_ADD) >> 26;
	c8 -= (t0 << 26);
	c9 += t0;
	t0 = (c9 + Curve25519OrderField::CARRY_ADD) >> 26;
	c9 -= (t0 << 26);
	c10 += t0;
	carryReduce0(r, c0, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10);
}

void Curve25519OrderField::carryReduce0($longs* r, int64_t c0, int64_t c1, int64_t c2, int64_t c3, int64_t c4, int64_t c5, int64_t c6, int64_t c7, int64_t c8, int64_t c9, int64_t c10) {
	int64_t t0 = 0;
	t0 = (int32_t)0xFF0A2C13 * c10;
	c0 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)Curve25519OrderField::LIMB_MASK);
	c1 += t0 >> 18;
	t0 = (int32_t)0xFF673969 * c10;
	c1 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)Curve25519OrderField::LIMB_MASK);
	c2 += t0 >> 18;
	t0 = (int32_t)0xFE329A7F * c10;
	c2 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)Curve25519OrderField::LIMB_MASK);
	c3 += t0 >> 18;
	t0 = 0x00857422 * c10;
	c3 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)Curve25519OrderField::LIMB_MASK);
	c4 += t0 >> 18;
	t0 = (int32_t)0xFFEB2106 * c10;
	c4 += (int64_t)((t0 << 8) & (uint64_t)(int64_t)Curve25519OrderField::LIMB_MASK);
	c5 += t0 >> 18;
	t0 = (c0 + Curve25519OrderField::CARRY_ADD) >> 26;
	c0 -= (t0 << 26);
	c1 += t0;
	t0 = (c1 + Curve25519OrderField::CARRY_ADD) >> 26;
	c1 -= (t0 << 26);
	c2 += t0;
	t0 = (c2 + Curve25519OrderField::CARRY_ADD) >> 26;
	c2 -= (t0 << 26);
	c3 += t0;
	t0 = (c3 + Curve25519OrderField::CARRY_ADD) >> 26;
	c3 -= (t0 << 26);
	c4 += t0;
	t0 = (c4 + Curve25519OrderField::CARRY_ADD) >> 26;
	c4 -= (t0 << 26);
	c5 += t0;
	t0 = (c5 + Curve25519OrderField::CARRY_ADD) >> 26;
	c5 -= (t0 << 26);
	c6 += t0;
	t0 = (c6 + Curve25519OrderField::CARRY_ADD) >> 26;
	c6 -= (t0 << 26);
	c7 += t0;
	t0 = (c7 + Curve25519OrderField::CARRY_ADD) >> 26;
	c7 -= (t0 << 26);
	c8 += t0;
	t0 = (c8 + Curve25519OrderField::CARRY_ADD) >> 26;
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

void Curve25519OrderField::mult($longs* a, $longs* b, $longs* r) {
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

void Curve25519OrderField::reduce($longs* a) {
	carryReduce(a, $nc(a)->get(0), a->get(1), a->get(2), a->get(3), a->get(4), a->get(5), a->get(6), a->get(7), a->get(8), a->get(9));
}

void Curve25519OrderField::square($longs* a, $longs* r) {
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

void clinit$Curve25519OrderField($Class* class$) {
	$assignStatic(Curve25519OrderField::MODULUS, Curve25519OrderField::evaluateModulus());
}

Curve25519OrderField::Curve25519OrderField() {
}

$Class* Curve25519OrderField::load$($String* name, bool initialize) {
	$loadClass(Curve25519OrderField, name, initialize, &_Curve25519OrderField_ClassInfo_, clinit$Curve25519OrderField, allocate$Curve25519OrderField);
	return class$;
}

$Class* Curve25519OrderField::class$ = nullptr;

				} // intpoly
			} // math
		} // util
	} // security
} // sun