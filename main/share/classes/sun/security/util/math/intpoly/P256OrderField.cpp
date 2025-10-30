#include <sun/security/util/math/intpoly/P256OrderField.h>

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

$FieldInfo _P256OrderField_FieldInfo_[] = {
	{"BITS_PER_LIMB", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(P256OrderField, BITS_PER_LIMB)},
	{"NUM_LIMBS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(P256OrderField, NUM_LIMBS)},
	{"MAX_ADDS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(P256OrderField, MAX_ADDS)},
	{"MODULUS", "Ljava/math/BigInteger;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(P256OrderField, MODULUS)},
	{"CARRY_ADD", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(P256OrderField, CARRY_ADD)},
	{"LIMB_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(P256OrderField, LIMB_MASK)},
	{}
};

$MethodInfo _P256OrderField_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(P256OrderField::*)()>(&P256OrderField::init$))},
	{"carryReduce", "([JJJJJJJJJJJJJJJJJJJJ)V", nullptr, $PRIVATE, $method(static_cast<void(P256OrderField::*)($longs*,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t)>(&P256OrderField::carryReduce))},
	{"carryReduce", "([JJJJJJJJJJJ)V", nullptr, $PRIVATE, $method(static_cast<void(P256OrderField::*)($longs*,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t)>(&P256OrderField::carryReduce))},
	{"carryReduce0", "([JJJJJJJJJJJJJJJJJJJJJ)V", nullptr, 0},
	{"carryReduce0", "([JJJJJJJJJJJJ)V", nullptr, 0},
	{"carryReduce1", "([JJJJJJJJJJJJJJJJJJJJJ)V", nullptr, 0},
	{"carryReduce2", "([JJJJJJJJJJJJJJJJJJJJJ)V", nullptr, 0},
	{"evaluateModulus", "()Ljava/math/BigInteger;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$BigInteger*(*)()>(&P256OrderField::evaluateModulus))},
	{"finalCarryReduceLast", "([J)V", nullptr, $PROTECTED},
	{"mult", "([J[J[J)V", nullptr, $PROTECTED},
	{"reduce", "([J)V", nullptr, $PROTECTED},
	{"reduceIn", "([JJI)V", nullptr, $PROTECTED},
	{"square", "([J[J)V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _P256OrderField_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.util.math.intpoly.P256OrderField",
	"sun.security.util.math.intpoly.IntegerPolynomial",
	nullptr,
	_P256OrderField_FieldInfo_,
	_P256OrderField_MethodInfo_
};

$Object* allocate$P256OrderField($Class* clazz) {
	return $of($alloc(P256OrderField));
}

$BigInteger* P256OrderField::MODULUS = nullptr;

void P256OrderField::init$() {
	$IntegerPolynomial::init$(P256OrderField::BITS_PER_LIMB, P256OrderField::NUM_LIMBS, P256OrderField::MAX_ADDS, P256OrderField::MODULUS);
}

$BigInteger* P256OrderField::evaluateModulus() {
	$init(P256OrderField);
	$useLocalCurrentObjectStackCache();
	$var($BigInteger, result, $nc($($BigInteger::valueOf((int64_t)2)))->pow(256));
	$assign(result, $nc(result)->add($($BigInteger::valueOf((int64_t)0x00632551))));
	$assign(result, result->subtract($($nc($($nc($($BigInteger::valueOf((int64_t)2)))->pow(26)))->multiply($($BigInteger::valueOf((int64_t)0x018D4F41))))));
	$assign(result, result->add($($nc($($nc($($BigInteger::valueOf((int64_t)2)))->pow(52)))->multiply($($BigInteger::valueOf((int64_t)0x01E84F3C))))));
	$assign(result, result->subtract($($nc($($nc($($BigInteger::valueOf((int64_t)2)))->pow(78)))->multiply($($BigInteger::valueOf((int64_t)0x014963A2))))));
	$assign(result, result->subtract($($nc($($nc($($BigInteger::valueOf((int64_t)2)))->pow(104)))->multiply($($BigInteger::valueOf((int64_t)0x00431905))))));
	$assign(result, result->add($($nc($($nc($($BigInteger::valueOf((int64_t)2)))->pow(182)))->multiply($($BigInteger::valueOf((int64_t)1024))))));
	$assign(result, result->subtract($($nc($($nc($($BigInteger::valueOf((int64_t)2)))->pow(208)))->multiply($($BigInteger::valueOf((int64_t)0x00010000))))));
	return result;
}

void P256OrderField::reduceIn($longs* limbs, int64_t v, int32_t i) {
	int64_t t0 = (int32_t)0xFF9CDAAF * v;
	(*$nc(limbs))[i - 10] += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	(*limbs)[i - 9] += t0 >> 22;
	int64_t t1 = 0x018D4F41 * v;
	(*limbs)[i - 9] += (int64_t)((t1 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	(*limbs)[i - 8] += t1 >> 22;
	int64_t t2 = (int32_t)0xFE17B0C4 * v;
	(*limbs)[i - 8] += (int64_t)((t2 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	(*limbs)[i - 7] += t2 >> 22;
	int64_t t3 = 0x014963A2 * v;
	(*limbs)[i - 7] += (int64_t)((t3 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	(*limbs)[i - 6] += t3 >> 22;
	int64_t t4 = 0x00431905 * v;
	(*limbs)[i - 6] += (int64_t)((t4 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	(*limbs)[i - 5] += t4 >> 22;
	int64_t t5 = -1024 * v;
	(*limbs)[i - 3] += (int64_t)((t5 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	(*limbs)[i - 2] += t5 >> 22;
	int64_t t6 = 0x00010000 * v;
	(*limbs)[i - 2] += (int64_t)((t6 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	(*limbs)[i - 1] += t6 >> 22;
}

void P256OrderField::finalCarryReduceLast($longs* limbs) {
	int64_t c = $nc(limbs)->get(9) >> 22;
	(*limbs)[9] -= c << 22;
	int64_t t7 = (int32_t)0xFF9CDAAF * c;
	(*limbs)[0] += t7;
	t7 = 0x018D4F41 * c;
	(*limbs)[1] += t7;
	t7 = (int32_t)0xFE17B0C4 * c;
	(*limbs)[2] += t7;
	t7 = 0x014963A2 * c;
	(*limbs)[3] += t7;
	t7 = 0x00431905 * c;
	(*limbs)[4] += t7;
	t7 = -1024 * c;
	(*limbs)[7] += t7;
	t7 = 0x00010000 * c;
	(*limbs)[8] += t7;
}

void P256OrderField::carryReduce($longs* r, int64_t c0, int64_t c1, int64_t c2, int64_t c3, int64_t c4, int64_t c5, int64_t c6, int64_t c7, int64_t c8, int64_t c9, int64_t c10, int64_t c11, int64_t c12, int64_t c13, int64_t c14, int64_t c15, int64_t c16, int64_t c17, int64_t c18) {
	int64_t c19 = 0;
	int64_t t0 = (c0 + P256OrderField::CARRY_ADD) >> 26;
	c0 -= (t0 << 26);
	c1 += t0;
	t0 = (c1 + P256OrderField::CARRY_ADD) >> 26;
	c1 -= (t0 << 26);
	c2 += t0;
	t0 = (c2 + P256OrderField::CARRY_ADD) >> 26;
	c2 -= (t0 << 26);
	c3 += t0;
	t0 = (c3 + P256OrderField::CARRY_ADD) >> 26;
	c3 -= (t0 << 26);
	c4 += t0;
	t0 = (c4 + P256OrderField::CARRY_ADD) >> 26;
	c4 -= (t0 << 26);
	c5 += t0;
	t0 = (c5 + P256OrderField::CARRY_ADD) >> 26;
	c5 -= (t0 << 26);
	c6 += t0;
	t0 = (c6 + P256OrderField::CARRY_ADD) >> 26;
	c6 -= (t0 << 26);
	c7 += t0;
	t0 = (c7 + P256OrderField::CARRY_ADD) >> 26;
	c7 -= (t0 << 26);
	c8 += t0;
	t0 = (c8 + P256OrderField::CARRY_ADD) >> 26;
	c8 -= (t0 << 26);
	c9 += t0;
	t0 = (c9 + P256OrderField::CARRY_ADD) >> 26;
	c9 -= (t0 << 26);
	c10 += t0;
	t0 = (c10 + P256OrderField::CARRY_ADD) >> 26;
	c10 -= (t0 << 26);
	c11 += t0;
	t0 = (c11 + P256OrderField::CARRY_ADD) >> 26;
	c11 -= (t0 << 26);
	c12 += t0;
	t0 = (c12 + P256OrderField::CARRY_ADD) >> 26;
	c12 -= (t0 << 26);
	c13 += t0;
	t0 = (c13 + P256OrderField::CARRY_ADD) >> 26;
	c13 -= (t0 << 26);
	c14 += t0;
	t0 = (c14 + P256OrderField::CARRY_ADD) >> 26;
	c14 -= (t0 << 26);
	c15 += t0;
	t0 = (c15 + P256OrderField::CARRY_ADD) >> 26;
	c15 -= (t0 << 26);
	c16 += t0;
	t0 = (c16 + P256OrderField::CARRY_ADD) >> 26;
	c16 -= (t0 << 26);
	c17 += t0;
	t0 = (c17 + P256OrderField::CARRY_ADD) >> 26;
	c17 -= (t0 << 26);
	c18 += t0;
	t0 = (c18 + P256OrderField::CARRY_ADD) >> 26;
	c18 -= (t0 << 26);
	c19 += t0;
	carryReduce0(r, c0, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14, c15, c16, c17, c18, c19);
}

void P256OrderField::carryReduce0($longs* r, int64_t c0, int64_t c1, int64_t c2, int64_t c3, int64_t c4, int64_t c5, int64_t c6, int64_t c7, int64_t c8, int64_t c9, int64_t c10, int64_t c11, int64_t c12, int64_t c13, int64_t c14, int64_t c15, int64_t c16, int64_t c17, int64_t c18, int64_t c19) {
	int64_t t0 = 0;
	t0 = (int32_t)0xFF9CDAAF * c19;
	c9 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c10 += t0 >> 22;
	t0 = 0x018D4F41 * c19;
	c10 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c11 += t0 >> 22;
	t0 = (int32_t)0xFE17B0C4 * c19;
	c11 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c12 += t0 >> 22;
	t0 = 0x014963A2 * c19;
	c12 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c13 += t0 >> 22;
	t0 = 0x00431905 * c19;
	c13 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c14 += t0 >> 22;
	t0 = -1024 * c19;
	c16 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c17 += t0 >> 22;
	t0 = 0x00010000 * c19;
	c17 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c18 += t0 >> 22;
	t0 = (int32_t)0xFF9CDAAF * c18;
	c8 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c9 += t0 >> 22;
	t0 = 0x018D4F41 * c18;
	c9 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c10 += t0 >> 22;
	t0 = (int32_t)0xFE17B0C4 * c18;
	c10 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c11 += t0 >> 22;
	t0 = 0x014963A2 * c18;
	c11 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c12 += t0 >> 22;
	t0 = 0x00431905 * c18;
	c12 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c13 += t0 >> 22;
	t0 = -1024 * c18;
	c15 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c16 += t0 >> 22;
	t0 = 0x00010000 * c18;
	c16 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c17 += t0 >> 22;
	t0 = (int32_t)0xFF9CDAAF * c17;
	c7 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c8 += t0 >> 22;
	t0 = 0x018D4F41 * c17;
	c8 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c9 += t0 >> 22;
	t0 = (int32_t)0xFE17B0C4 * c17;
	c9 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c10 += t0 >> 22;
	t0 = 0x014963A2 * c17;
	c10 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c11 += t0 >> 22;
	t0 = 0x00431905 * c17;
	c11 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c12 += t0 >> 22;
	t0 = -1024 * c17;
	c14 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c15 += t0 >> 22;
	t0 = 0x00010000 * c17;
	c15 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c16 += t0 >> 22;
	t0 = (int32_t)0xFF9CDAAF * c16;
	c6 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c7 += t0 >> 22;
	t0 = 0x018D4F41 * c16;
	c7 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c8 += t0 >> 22;
	t0 = (int32_t)0xFE17B0C4 * c16;
	c8 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c9 += t0 >> 22;
	t0 = 0x014963A2 * c16;
	c9 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c10 += t0 >> 22;
	t0 = 0x00431905 * c16;
	c10 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c11 += t0 >> 22;
	t0 = -1024 * c16;
	c13 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c14 += t0 >> 22;
	t0 = 0x00010000 * c16;
	c14 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c15 += t0 >> 22;
	t0 = (int32_t)0xFF9CDAAF * c15;
	c5 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c6 += t0 >> 22;
	t0 = 0x018D4F41 * c15;
	c6 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c7 += t0 >> 22;
	t0 = (int32_t)0xFE17B0C4 * c15;
	c7 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c8 += t0 >> 22;
	t0 = 0x014963A2 * c15;
	c8 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c9 += t0 >> 22;
	t0 = 0x00431905 * c15;
	c9 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c10 += t0 >> 22;
	t0 = -1024 * c15;
	c12 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c13 += t0 >> 22;
	t0 = 0x00010000 * c15;
	c13 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c14 += t0 >> 22;
	t0 = (int32_t)0xFF9CDAAF * c14;
	c4 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c5 += t0 >> 22;
	t0 = 0x018D4F41 * c14;
	c5 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c6 += t0 >> 22;
	t0 = (int32_t)0xFE17B0C4 * c14;
	c6 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c7 += t0 >> 22;
	t0 = 0x014963A2 * c14;
	c7 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c8 += t0 >> 22;
	t0 = 0x00431905 * c14;
	c8 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c9 += t0 >> 22;
	t0 = -1024 * c14;
	c11 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c12 += t0 >> 22;
	t0 = 0x00010000 * c14;
	c12 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c13 += t0 >> 22;
	t0 = (int32_t)0xFF9CDAAF * c13;
	c3 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c4 += t0 >> 22;
	t0 = 0x018D4F41 * c13;
	c4 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c5 += t0 >> 22;
	t0 = (int32_t)0xFE17B0C4 * c13;
	c5 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c6 += t0 >> 22;
	t0 = 0x014963A2 * c13;
	c6 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c7 += t0 >> 22;
	t0 = 0x00431905 * c13;
	c7 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c8 += t0 >> 22;
	t0 = -1024 * c13;
	c10 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c11 += t0 >> 22;
	t0 = 0x00010000 * c13;
	c11 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c12 += t0 >> 22;
	t0 = (int32_t)0xFF9CDAAF * c12;
	c2 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c3 += t0 >> 22;
	t0 = 0x018D4F41 * c12;
	c3 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c4 += t0 >> 22;
	t0 = (int32_t)0xFE17B0C4 * c12;
	c4 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c5 += t0 >> 22;
	t0 = 0x014963A2 * c12;
	c5 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c6 += t0 >> 22;
	t0 = 0x00431905 * c12;
	c6 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c7 += t0 >> 22;
	t0 = -1024 * c12;
	c9 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c10 += t0 >> 22;
	t0 = 0x00010000 * c12;
	c10 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c11 += t0 >> 22;
	t0 = (int32_t)0xFF9CDAAF * c11;
	c1 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c2 += t0 >> 22;
	t0 = 0x018D4F41 * c11;
	c2 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c3 += t0 >> 22;
	t0 = (int32_t)0xFE17B0C4 * c11;
	c3 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c4 += t0 >> 22;
	t0 = 0x014963A2 * c11;
	c4 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c5 += t0 >> 22;
	t0 = 0x00431905 * c11;
	c5 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c6 += t0 >> 22;
	t0 = -1024 * c11;
	c8 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c9 += t0 >> 22;
	t0 = 0x00010000 * c11;
	c9 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c10 += t0 >> 22;
	t0 = (int32_t)0xFF9CDAAF * c10;
	c0 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c1 += t0 >> 22;
	t0 = 0x018D4F41 * c10;
	c1 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c2 += t0 >> 22;
	t0 = (int32_t)0xFE17B0C4 * c10;
	c2 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c3 += t0 >> 22;
	t0 = 0x014963A2 * c10;
	c3 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c4 += t0 >> 22;
	t0 = 0x00431905 * c10;
	c4 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c5 += t0 >> 22;
	t0 = -1024 * c10;
	c7 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c8 += t0 >> 22;
	t0 = 0x00010000 * c10;
	c8 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c9 += t0 >> 22;
	c10 = 0;
	carryReduce1(r, c0, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14, c15, c16, c17, c18, c19);
}

void P256OrderField::carryReduce1($longs* r, int64_t c0, int64_t c1, int64_t c2, int64_t c3, int64_t c4, int64_t c5, int64_t c6, int64_t c7, int64_t c8, int64_t c9, int64_t c10, int64_t c11, int64_t c12, int64_t c13, int64_t c14, int64_t c15, int64_t c16, int64_t c17, int64_t c18, int64_t c19) {
	int64_t t0 = 0;
	t0 = (c0 + P256OrderField::CARRY_ADD) >> 26;
	c0 -= (t0 << 26);
	c1 += t0;
	t0 = (c1 + P256OrderField::CARRY_ADD) >> 26;
	c1 -= (t0 << 26);
	c2 += t0;
	t0 = (c2 + P256OrderField::CARRY_ADD) >> 26;
	c2 -= (t0 << 26);
	c3 += t0;
	t0 = (c3 + P256OrderField::CARRY_ADD) >> 26;
	c3 -= (t0 << 26);
	c4 += t0;
	t0 = (c4 + P256OrderField::CARRY_ADD) >> 26;
	c4 -= (t0 << 26);
	c5 += t0;
	t0 = (c5 + P256OrderField::CARRY_ADD) >> 26;
	c5 -= (t0 << 26);
	c6 += t0;
	t0 = (c6 + P256OrderField::CARRY_ADD) >> 26;
	c6 -= (t0 << 26);
	c7 += t0;
	t0 = (c7 + P256OrderField::CARRY_ADD) >> 26;
	c7 -= (t0 << 26);
	c8 += t0;
	t0 = (c8 + P256OrderField::CARRY_ADD) >> 26;
	c8 -= (t0 << 26);
	c9 += t0;
	t0 = (c9 + P256OrderField::CARRY_ADD) >> 26;
	c9 -= (t0 << 26);
	c10 += t0;
	carryReduce2(r, c0, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14, c15, c16, c17, c18, c19);
}

void P256OrderField::carryReduce2($longs* r, int64_t c0, int64_t c1, int64_t c2, int64_t c3, int64_t c4, int64_t c5, int64_t c6, int64_t c7, int64_t c8, int64_t c9, int64_t c10, int64_t c11, int64_t c12, int64_t c13, int64_t c14, int64_t c15, int64_t c16, int64_t c17, int64_t c18, int64_t c19) {
	int64_t t0 = 0;
	t0 = (int32_t)0xFF9CDAAF * c10;
	c0 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c1 += t0 >> 22;
	t0 = 0x018D4F41 * c10;
	c1 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c2 += t0 >> 22;
	t0 = (int32_t)0xFE17B0C4 * c10;
	c2 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c3 += t0 >> 22;
	t0 = 0x014963A2 * c10;
	c3 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c4 += t0 >> 22;
	t0 = 0x00431905 * c10;
	c4 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c5 += t0 >> 22;
	t0 = -1024 * c10;
	c7 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c8 += t0 >> 22;
	t0 = 0x00010000 * c10;
	c8 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c9 += t0 >> 22;
	t0 = (c0 + P256OrderField::CARRY_ADD) >> 26;
	c0 -= (t0 << 26);
	c1 += t0;
	t0 = (c1 + P256OrderField::CARRY_ADD) >> 26;
	c1 -= (t0 << 26);
	c2 += t0;
	t0 = (c2 + P256OrderField::CARRY_ADD) >> 26;
	c2 -= (t0 << 26);
	c3 += t0;
	t0 = (c3 + P256OrderField::CARRY_ADD) >> 26;
	c3 -= (t0 << 26);
	c4 += t0;
	t0 = (c4 + P256OrderField::CARRY_ADD) >> 26;
	c4 -= (t0 << 26);
	c5 += t0;
	t0 = (c5 + P256OrderField::CARRY_ADD) >> 26;
	c5 -= (t0 << 26);
	c6 += t0;
	t0 = (c6 + P256OrderField::CARRY_ADD) >> 26;
	c6 -= (t0 << 26);
	c7 += t0;
	t0 = (c7 + P256OrderField::CARRY_ADD) >> 26;
	c7 -= (t0 << 26);
	c8 += t0;
	t0 = (c8 + P256OrderField::CARRY_ADD) >> 26;
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

void P256OrderField::carryReduce($longs* r, int64_t c0, int64_t c1, int64_t c2, int64_t c3, int64_t c4, int64_t c5, int64_t c6, int64_t c7, int64_t c8, int64_t c9) {
	int64_t c10 = 0;
	int64_t t0 = (c0 + P256OrderField::CARRY_ADD) >> 26;
	c0 -= (t0 << 26);
	c1 += t0;
	t0 = (c1 + P256OrderField::CARRY_ADD) >> 26;
	c1 -= (t0 << 26);
	c2 += t0;
	t0 = (c2 + P256OrderField::CARRY_ADD) >> 26;
	c2 -= (t0 << 26);
	c3 += t0;
	t0 = (c3 + P256OrderField::CARRY_ADD) >> 26;
	c3 -= (t0 << 26);
	c4 += t0;
	t0 = (c4 + P256OrderField::CARRY_ADD) >> 26;
	c4 -= (t0 << 26);
	c5 += t0;
	t0 = (c5 + P256OrderField::CARRY_ADD) >> 26;
	c5 -= (t0 << 26);
	c6 += t0;
	t0 = (c6 + P256OrderField::CARRY_ADD) >> 26;
	c6 -= (t0 << 26);
	c7 += t0;
	t0 = (c7 + P256OrderField::CARRY_ADD) >> 26;
	c7 -= (t0 << 26);
	c8 += t0;
	t0 = (c8 + P256OrderField::CARRY_ADD) >> 26;
	c8 -= (t0 << 26);
	c9 += t0;
	t0 = (c9 + P256OrderField::CARRY_ADD) >> 26;
	c9 -= (t0 << 26);
	c10 += t0;
	carryReduce0(r, c0, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10);
}

void P256OrderField::carryReduce0($longs* r, int64_t c0, int64_t c1, int64_t c2, int64_t c3, int64_t c4, int64_t c5, int64_t c6, int64_t c7, int64_t c8, int64_t c9, int64_t c10) {
	int64_t t0 = 0;
	t0 = (int32_t)0xFF9CDAAF * c10;
	c0 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c1 += t0 >> 22;
	t0 = 0x018D4F41 * c10;
	c1 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c2 += t0 >> 22;
	t0 = (int32_t)0xFE17B0C4 * c10;
	c2 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c3 += t0 >> 22;
	t0 = 0x014963A2 * c10;
	c3 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c4 += t0 >> 22;
	t0 = 0x00431905 * c10;
	c4 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c5 += t0 >> 22;
	t0 = -1024 * c10;
	c7 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c8 += t0 >> 22;
	t0 = 0x00010000 * c10;
	c8 += (int64_t)((t0 << 4) & (uint64_t)(int64_t)P256OrderField::LIMB_MASK);
	c9 += t0 >> 22;
	t0 = (c0 + P256OrderField::CARRY_ADD) >> 26;
	c0 -= (t0 << 26);
	c1 += t0;
	t0 = (c1 + P256OrderField::CARRY_ADD) >> 26;
	c1 -= (t0 << 26);
	c2 += t0;
	t0 = (c2 + P256OrderField::CARRY_ADD) >> 26;
	c2 -= (t0 << 26);
	c3 += t0;
	t0 = (c3 + P256OrderField::CARRY_ADD) >> 26;
	c3 -= (t0 << 26);
	c4 += t0;
	t0 = (c4 + P256OrderField::CARRY_ADD) >> 26;
	c4 -= (t0 << 26);
	c5 += t0;
	t0 = (c5 + P256OrderField::CARRY_ADD) >> 26;
	c5 -= (t0 << 26);
	c6 += t0;
	t0 = (c6 + P256OrderField::CARRY_ADD) >> 26;
	c6 -= (t0 << 26);
	c7 += t0;
	t0 = (c7 + P256OrderField::CARRY_ADD) >> 26;
	c7 -= (t0 << 26);
	c8 += t0;
	t0 = (c8 + P256OrderField::CARRY_ADD) >> 26;
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

void P256OrderField::mult($longs* a, $longs* b, $longs* r) {
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

void P256OrderField::reduce($longs* a) {
	carryReduce(a, $nc(a)->get(0), a->get(1), a->get(2), a->get(3), a->get(4), a->get(5), a->get(6), a->get(7), a->get(8), a->get(9));
}

void P256OrderField::square($longs* a, $longs* r) {
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

void clinit$P256OrderField($Class* class$) {
	$assignStatic(P256OrderField::MODULUS, P256OrderField::evaluateModulus());
}

P256OrderField::P256OrderField() {
}

$Class* P256OrderField::load$($String* name, bool initialize) {
	$loadClass(P256OrderField, name, initialize, &_P256OrderField_ClassInfo_, clinit$P256OrderField, allocate$P256OrderField);
	return class$;
}

$Class* P256OrderField::class$ = nullptr;

				} // intpoly
			} // math
		} // util
	} // security
} // sun