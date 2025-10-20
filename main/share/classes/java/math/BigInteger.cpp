#include <java/math/BigInteger.h>

#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream$PutField.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/ObjectStreamField.h>
#include <java/io/StreamCorruptedException.h>
#include <java/lang/ArithmeticException.h>
#include <java/lang/Array.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Byte.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/Number.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/Short.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigDecimal.h>
#include <java/math/BigInteger$UnsafeHolder.h>
#include <java/math/BitSieve.h>
#include <java/math/MutableBigInteger.h>
#include <java/util/Arrays.h>
#include <java/util/Objects.h>
#include <java/util/Random.h>
#include <java/util/concurrent/ThreadLocalRandom.h>
#include <jdk/internal/math/DoubleConsts.h>
#include <jdk/internal/math/FloatConsts.h>
#include <jcpp.h>

#undef BURNIKEL_ZIEGLER_OFFSET
#undef BURNIKEL_ZIEGLER_THRESHOLD
#undef DEFAULT_PRIME_CERTAINTY
#undef EXP_BIAS
#undef INFLATED
#undef KARATSUBA_SQUARE_THRESHOLD
#undef KARATSUBA_THRESHOLD
#undef LOG_TWO
#undef LONG_MASK
#undef MAX_CONSTANT
#undef MAX_EXPONENT
#undef MAX_MAG_LENGTH
#undef MAX_RADIX
#undef MAX_VALUE
#undef MIN_RADIX
#undef MIN_VALUE
#undef MONTGOMERY_INTRINSIC_THRESHOLD
#undef MULTIPLY_SQUARE_THRESHOLD
#undef NEGATIVE_INFINITY
#undef NEGATIVE_ONE
#undef NUM_ZEROS
#undef ONE
#undef POSITIVE_INFINITY
#undef PRIME_SEARCH_BIT_LENGTH_LIMIT
#undef SCHOENHAGE_BASE_CONVERSION_THRESHOLD
#undef SIGNIFICAND_WIDTH
#undef SIGNIF_BIT_MASK
#undef SIGN_BIT_MASK
#undef SIZE
#undef SMALL_PRIME_PRODUCT
#undef SMALL_PRIME_THRESHOLD
#undef TEN
#undef TOOM_COOK_SQUARE_THRESHOLD
#undef TOOM_COOK_THRESHOLD
#undef TWO
#undef TYPE
#undef ZERO
#undef ZEROS

using $ObjectStreamFieldArray = $Array<::java::io::ObjectStreamField>;
using $BigIntegerArray = $Array<::java::math::BigInteger>;
using $intArray2 = $Array<int32_t, 2>;
using $BigIntegerArray2 = $Array<::java::math::BigInteger, 2>;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ObjectOutputStream$PutField = ::java::io::ObjectOutputStream$PutField;
using $ObjectStreamField = ::java::io::ObjectStreamField;
using $StreamCorruptedException = ::java::io::StreamCorruptedException;
using $ArithmeticException = ::java::lang::ArithmeticException;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $AssertionError = ::java::lang::AssertionError;
using $Byte = ::java::lang::Byte;
using $CharSequence = ::java::lang::CharSequence;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Number = ::java::lang::Number;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $Short = ::java::lang::Short;
using $BigDecimal = ::java::math::BigDecimal;
using $BigInteger$UnsafeHolder = ::java::math::BigInteger$UnsafeHolder;
using $BitSieve = ::java::math::BitSieve;
using $MutableBigInteger = ::java::math::MutableBigInteger;
using $Arrays = ::java::util::Arrays;
using $Objects = ::java::util::Objects;
using $Random = ::java::util::Random;
using $ThreadLocalRandom = ::java::util::concurrent::ThreadLocalRandom;
using $DoubleConsts = ::jdk::internal::math::DoubleConsts;
using $FloatConsts = ::jdk::internal::math::FloatConsts;

namespace java {
	namespace math {

$CompoundAttribute _BigInteger_FieldAnnotations_posConst[] = {
	{"Ljdk/internal/vm/annotation/Stable;", nullptr},
	{}
};

$CompoundAttribute _BigInteger_FieldAnnotations_negConst[] = {
	{"Ljdk/internal/vm/annotation/Stable;", nullptr},
	{}
};

$CompoundAttribute _BigInteger_MethodAnnotations_implMontgomeryMultiply55[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _BigInteger_MethodAnnotations_implMontgomerySquare57[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _BigInteger_MethodAnnotations_implMulAdd58[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _BigInteger_MethodAnnotations_implMultiplyToLen60[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _BigInteger_MethodAnnotations_implSquareToLen61[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _BigInteger_MethodAnnotations_shiftLeftImplWorker121[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _BigInteger_MethodAnnotations_shiftRightImplWorker124[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$FieldInfo _BigInteger_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(BigInteger, $assertionsDisabled)},
	{"signum", "I", nullptr, $FINAL, $field(BigInteger, signum$)},
	{"mag", "[I", nullptr, $FINAL, $field(BigInteger, mag)},
	{"bitCountPlusOne", "I", nullptr, $PRIVATE, $field(BigInteger, bitCountPlusOne)},
	{"bitLengthPlusOne", "I", nullptr, $PRIVATE, $field(BigInteger, bitLengthPlusOne)},
	{"lowestSetBitPlusTwo", "I", nullptr, $PRIVATE, $field(BigInteger, lowestSetBitPlusTwo)},
	{"firstNonzeroIntNumPlusTwo", "I", nullptr, $PRIVATE, $field(BigInteger, firstNonzeroIntNumPlusTwo)},
	{"LONG_MASK", "J", nullptr, $STATIC | $FINAL, $constField(BigInteger, LONG_MASK)},
	{"MAX_MAG_LENGTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BigInteger, MAX_MAG_LENGTH)},
	{"PRIME_SEARCH_BIT_LENGTH_LIMIT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BigInteger, PRIME_SEARCH_BIT_LENGTH_LIMIT)},
	{"KARATSUBA_THRESHOLD", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BigInteger, KARATSUBA_THRESHOLD)},
	{"TOOM_COOK_THRESHOLD", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BigInteger, TOOM_COOK_THRESHOLD)},
	{"KARATSUBA_SQUARE_THRESHOLD", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BigInteger, KARATSUBA_SQUARE_THRESHOLD)},
	{"TOOM_COOK_SQUARE_THRESHOLD", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BigInteger, TOOM_COOK_SQUARE_THRESHOLD)},
	{"BURNIKEL_ZIEGLER_THRESHOLD", "I", nullptr, $STATIC | $FINAL, $constField(BigInteger, BURNIKEL_ZIEGLER_THRESHOLD)},
	{"BURNIKEL_ZIEGLER_OFFSET", "I", nullptr, $STATIC | $FINAL, $constField(BigInteger, BURNIKEL_ZIEGLER_OFFSET)},
	{"SCHOENHAGE_BASE_CONVERSION_THRESHOLD", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BigInteger, SCHOENHAGE_BASE_CONVERSION_THRESHOLD)},
	{"MULTIPLY_SQUARE_THRESHOLD", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BigInteger, MULTIPLY_SQUARE_THRESHOLD)},
	{"MONTGOMERY_INTRINSIC_THRESHOLD", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BigInteger, MONTGOMERY_INTRINSIC_THRESHOLD)},
	{"bitsPerDigit", "[J", nullptr, $PRIVATE | $STATIC, $staticField(BigInteger, bitsPerDigit)},
	{"SMALL_PRIME_THRESHOLD", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BigInteger, SMALL_PRIME_THRESHOLD)},
	{"DEFAULT_PRIME_CERTAINTY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BigInteger, DEFAULT_PRIME_CERTAINTY)},
	{"SMALL_PRIME_PRODUCT", "Ljava/math/BigInteger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BigInteger, SMALL_PRIME_PRODUCT)},
	{"MAX_CONSTANT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BigInteger, MAX_CONSTANT)},
	{"posConst", "[Ljava/math/BigInteger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BigInteger, posConst), _BigInteger_FieldAnnotations_posConst},
	{"negConst", "[Ljava/math/BigInteger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BigInteger, negConst), _BigInteger_FieldAnnotations_negConst},
	{"powerCache", "[[Ljava/math/BigInteger;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(BigInteger, powerCache)},
	{"logCache", "[D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BigInteger, logCache)},
	{"LOG_TWO", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BigInteger, LOG_TWO)},
	{"ZERO", "Ljava/math/BigInteger;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BigInteger, ZERO)},
	{"ONE", "Ljava/math/BigInteger;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BigInteger, ONE)},
	{"TWO", "Ljava/math/BigInteger;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BigInteger, TWO)},
	{"NEGATIVE_ONE", "Ljava/math/BigInteger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BigInteger, NEGATIVE_ONE)},
	{"TEN", "Ljava/math/BigInteger;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BigInteger, TEN)},
	{"bnExpModThreshTable", "[I", nullptr, $STATIC, $staticField(BigInteger, bnExpModThreshTable)},
	{"NUM_ZEROS", "I", nullptr, $PRIVATE | $STATIC, $staticField(BigInteger, NUM_ZEROS)},
	{"ZEROS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BigInteger, ZEROS)},
	{"digitsPerLong", "[I", nullptr, $PRIVATE | $STATIC, $staticField(BigInteger, digitsPerLong)},
	{"longRadix", "[Ljava/math/BigInteger;", nullptr, $PRIVATE | $STATIC, $staticField(BigInteger, longRadix)},
	{"digitsPerInt", "[I", nullptr, $PRIVATE | $STATIC, $staticField(BigInteger, digitsPerInt)},
	{"intRadix", "[I", nullptr, $PRIVATE | $STATIC, $staticField(BigInteger, intRadix)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BigInteger, serialVersionUID)},
	{"serialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BigInteger, serialPersistentFields)},
	{}
};

$MethodInfo _BigInteger_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "([BII)V", nullptr, $PUBLIC, $method(static_cast<void(BigInteger::*)($bytes*,int32_t,int32_t)>(&BigInteger::init$))},
	{"<init>", "([B)V", nullptr, $PUBLIC, $method(static_cast<void(BigInteger::*)($bytes*)>(&BigInteger::init$))},
	{"<init>", "([I)V", nullptr, $PRIVATE, $method(static_cast<void(BigInteger::*)($ints*)>(&BigInteger::init$))},
	{"<init>", "(I[BII)V", nullptr, $PUBLIC, $method(static_cast<void(BigInteger::*)(int32_t,$bytes*,int32_t,int32_t)>(&BigInteger::init$))},
	{"<init>", "(I[B)V", nullptr, $PUBLIC, $method(static_cast<void(BigInteger::*)(int32_t,$bytes*)>(&BigInteger::init$))},
	{"<init>", "(I[I)V", nullptr, $PRIVATE, $method(static_cast<void(BigInteger::*)(int32_t,$ints*)>(&BigInteger::init$))},
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(static_cast<void(BigInteger::*)($String*,int32_t)>(&BigInteger::init$))},
	{"<init>", "([CII)V", nullptr, 0, $method(static_cast<void(BigInteger::*)($chars*,int32_t,int32_t)>(&BigInteger::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(BigInteger::*)($String*)>(&BigInteger::init$))},
	{"<init>", "(ILjava/util/Random;)V", nullptr, $PUBLIC, $method(static_cast<void(BigInteger::*)(int32_t,$Random*)>(&BigInteger::init$))},
	{"<init>", "(IILjava/util/Random;)V", nullptr, $PUBLIC, $method(static_cast<void(BigInteger::*)(int32_t,int32_t,$Random*)>(&BigInteger::init$))},
	{"<init>", "([II)V", nullptr, 0, $method(static_cast<void(BigInteger::*)($ints*,int32_t)>(&BigInteger::init$))},
	{"<init>", "([BI)V", nullptr, $PRIVATE, $method(static_cast<void(BigInteger::*)($bytes*,int32_t)>(&BigInteger::init$))},
	{"<init>", "(J)V", nullptr, $PRIVATE, $method(static_cast<void(BigInteger::*)(int64_t)>(&BigInteger::init$))},
	{"abs", "()Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{"add", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{"add", "(J)Ljava/math/BigInteger;", nullptr, 0},
	{"add", "([IJ)[I", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ints*(*)($ints*,int64_t)>(&BigInteger::add))},
	{"add", "([I[I)[I", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ints*(*)($ints*,$ints*)>(&BigInteger::add))},
	{"addOne", "([IIII)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($ints*,int32_t,int32_t,int32_t)>(&BigInteger::addOne))},
	{"and", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{"andNot", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{"bitCount", "()I", nullptr, $PUBLIC},
	{"bitLength", "([II)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($ints*,int32_t)>(&BigInteger::bitLength))},
	{"bitLength", "()I", nullptr, $PUBLIC},
	{"bitLengthForInt", "(I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&BigInteger::bitLengthForInt))},
	{"byteValueExact", "()B", nullptr, $PUBLIC},
	{"checkRange", "()V", nullptr, $PRIVATE, $method(static_cast<void(BigInteger::*)()>(&BigInteger::checkRange))},
	{"clearBit", "(I)Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{"compareMagnitude", "(Ljava/math/BigInteger;)I", nullptr, $FINAL, $method(static_cast<int32_t(BigInteger::*)(BigInteger*)>(&BigInteger::compareMagnitude))},
	{"compareMagnitude", "(J)I", nullptr, $FINAL, $method(static_cast<int32_t(BigInteger::*)(int64_t)>(&BigInteger::compareMagnitude))},
	{"compareTo", "(Ljava/math/BigInteger;)I", nullptr, $PUBLIC},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"destructiveMulAdd", "([III)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($ints*,int32_t,int32_t)>(&BigInteger::destructiveMulAdd))},
	{"divide", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{"divideAndRemainder", "(Ljava/math/BigInteger;)[Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{"divideAndRemainderBurnikelZiegler", "(Ljava/math/BigInteger;)[Ljava/math/BigInteger;", nullptr, $PRIVATE, $method(static_cast<$BigIntegerArray*(BigInteger::*)(BigInteger*)>(&BigInteger::divideAndRemainderBurnikelZiegler))},
	{"divideAndRemainderKnuth", "(Ljava/math/BigInteger;)[Ljava/math/BigInteger;", nullptr, $PRIVATE, $method(static_cast<$BigIntegerArray*(BigInteger::*)(BigInteger*)>(&BigInteger::divideAndRemainderKnuth))},
	{"divideBurnikelZiegler", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;", nullptr, $PRIVATE, $method(static_cast<BigInteger*(BigInteger::*)(BigInteger*)>(&BigInteger::divideBurnikelZiegler))},
	{"divideKnuth", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;", nullptr, $PRIVATE, $method(static_cast<BigInteger*(BigInteger::*)(BigInteger*)>(&BigInteger::divideKnuth))},
	{"doubleValue", "()D", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"exactDivideBy3", "()Ljava/math/BigInteger;", nullptr, $PRIVATE, $method(static_cast<BigInteger*(BigInteger::*)()>(&BigInteger::exactDivideBy3))},
	{"firstNonzeroIntNum", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(BigInteger::*)()>(&BigInteger::firstNonzeroIntNum))},
	{"flipBit", "(I)Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{"floatValue", "()F", nullptr, $PUBLIC},
	{"gcd", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{"getInt", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(BigInteger::*)(int32_t)>(&BigInteger::getInt))},
	{"getLower", "(I)Ljava/math/BigInteger;", nullptr, $PRIVATE, $method(static_cast<BigInteger*(BigInteger::*)(int32_t)>(&BigInteger::getLower))},
	{"getLowestSetBit", "()I", nullptr, $PUBLIC},
	{"getPrimeSearchLen", "(I)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&BigInteger::getPrimeSearchLen))},
	{"getRadixConversionCache", "(II)Ljava/math/BigInteger;", nullptr, $PRIVATE | $STATIC, $method(static_cast<BigInteger*(*)(int32_t,int32_t)>(&BigInteger::getRadixConversionCache))},
	{"getToomSlice", "(IIII)Ljava/math/BigInteger;", nullptr, $PRIVATE, $method(static_cast<BigInteger*(BigInteger::*)(int32_t,int32_t,int32_t,int32_t)>(&BigInteger::getToomSlice))},
	{"getUpper", "(I)Ljava/math/BigInteger;", nullptr, $PRIVATE, $method(static_cast<BigInteger*(BigInteger::*)(int32_t)>(&BigInteger::getUpper))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"implMontgomeryMultiply", "([I[I[IIJ[I)[I", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ints*(*)($ints*,$ints*,$ints*,int32_t,int64_t,$ints*)>(&BigInteger::implMontgomeryMultiply)), nullptr, nullptr, _BigInteger_MethodAnnotations_implMontgomeryMultiply55},
	{"implMontgomeryMultiplyChecks", "([I[I[II[I)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($ints*,$ints*,$ints*,int32_t,$ints*)>(&BigInteger::implMontgomeryMultiplyChecks)), "java.lang.RuntimeException"},
	{"implMontgomerySquare", "([I[IIJ[I)[I", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ints*(*)($ints*,$ints*,int32_t,int64_t,$ints*)>(&BigInteger::implMontgomerySquare)), nullptr, nullptr, _BigInteger_MethodAnnotations_implMontgomerySquare57},
	{"implMulAdd", "([I[IIII)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($ints*,$ints*,int32_t,int32_t,int32_t)>(&BigInteger::implMulAdd)), nullptr, nullptr, _BigInteger_MethodAnnotations_implMulAdd58},
	{"implMulAddCheck", "([I[IIII)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($ints*,$ints*,int32_t,int32_t,int32_t)>(&BigInteger::implMulAddCheck))},
	{"implMultiplyToLen", "([II[II[I)[I", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ints*(*)($ints*,int32_t,$ints*,int32_t,$ints*)>(&BigInteger::implMultiplyToLen)), nullptr, nullptr, _BigInteger_MethodAnnotations_implMultiplyToLen60},
	{"implSquareToLen", "([II[II)[I", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<$ints*(*)($ints*,int32_t,$ints*,int32_t)>(&BigInteger::implSquareToLen)), nullptr, nullptr, _BigInteger_MethodAnnotations_implSquareToLen61},
	{"implSquareToLenChecks", "([II[II)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($ints*,int32_t,$ints*,int32_t)>(&BigInteger::implSquareToLenChecks)), "java.lang.RuntimeException"},
	{"intArrayCmpToLen", "([I[II)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($ints*,$ints*,int32_t)>(&BigInteger::intArrayCmpToLen))},
	{"intLength", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(BigInteger::*)()>(&BigInteger::intLength))},
	{"intValue", "()I", nullptr, $PUBLIC},
	{"intValueExact", "()I", nullptr, $PUBLIC},
	{"isProbablePrime", "(I)Z", nullptr, $PUBLIC},
	{"jacobiSymbol", "(ILjava/math/BigInteger;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t,BigInteger*)>(&BigInteger::jacobiSymbol))},
	{"javaIncrement", "([I)[I", nullptr, 0},
	{"largePrime", "(IILjava/util/Random;)Ljava/math/BigInteger;", nullptr, $PRIVATE | $STATIC, $method(static_cast<BigInteger*(*)(int32_t,int32_t,$Random*)>(&BigInteger::largePrime))},
	{"leftShift", "([III)[I", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ints*(*)($ints*,int32_t,int32_t)>(&BigInteger::leftShift))},
	{"longValue", "()J", nullptr, $PUBLIC},
	{"longValueExact", "()J", nullptr, $PUBLIC},
	{"lucasLehmerSequence", "(ILjava/math/BigInteger;Ljava/math/BigInteger;)Ljava/math/BigInteger;", nullptr, $PRIVATE | $STATIC, $method(static_cast<BigInteger*(*)(int32_t,BigInteger*,BigInteger*)>(&BigInteger::lucasLehmerSequence))},
	{"magSerializedForm", "()[B", nullptr, $PRIVATE, $method(static_cast<$bytes*(BigInteger::*)()>(&BigInteger::magSerializedForm))},
	{"makePositive", "([BII)[I", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ints*(*)($bytes*,int32_t,int32_t)>(&BigInteger::makePositive))},
	{"makePositive", "([I)[I", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ints*(*)($ints*)>(&BigInteger::makePositive))},
	{"materialize", "([II)[I", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ints*(*)($ints*,int32_t)>(&BigInteger::materialize))},
	{"max", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{"min", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{"mod", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{"mod2", "(I)Ljava/math/BigInteger;", nullptr, $PRIVATE, $method(static_cast<BigInteger*(BigInteger::*)(int32_t)>(&BigInteger::mod2))},
	{"modInverse", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{"modPow", "(Ljava/math/BigInteger;Ljava/math/BigInteger;)Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{"modPow2", "(Ljava/math/BigInteger;I)Ljava/math/BigInteger;", nullptr, $PRIVATE, $method(static_cast<BigInteger*(BigInteger::*)(BigInteger*,int32_t)>(&BigInteger::modPow2))},
	{"montReduce", "([I[III)[I", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ints*(*)($ints*,$ints*,int32_t,int32_t)>(&BigInteger::montReduce))},
	{"montgomeryMultiply", "([I[I[IIJ[I)[I", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ints*(*)($ints*,$ints*,$ints*,int32_t,int64_t,$ints*)>(&BigInteger::montgomeryMultiply))},
	{"montgomerySquare", "([I[IIJ[I)[I", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ints*(*)($ints*,$ints*,int32_t,int64_t,$ints*)>(&BigInteger::montgomerySquare))},
	{"mulAdd", "([I[IIII)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($ints*,$ints*,int32_t,int32_t,int32_t)>(&BigInteger::mulAdd))},
	{"multiply", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{"multiply", "(Ljava/math/BigInteger;Z)Ljava/math/BigInteger;", nullptr, $PRIVATE, $method(static_cast<BigInteger*(BigInteger::*)(BigInteger*,bool)>(&BigInteger::multiply))},
	{"multiply", "(J)Ljava/math/BigInteger;", nullptr, 0},
	{"multiplyByInt", "([III)Ljava/math/BigInteger;", nullptr, $PRIVATE | $STATIC, $method(static_cast<BigInteger*(*)($ints*,int32_t,int32_t)>(&BigInteger::multiplyByInt))},
	{"multiplyKaratsuba", "(Ljava/math/BigInteger;Ljava/math/BigInteger;)Ljava/math/BigInteger;", nullptr, $PRIVATE | $STATIC, $method(static_cast<BigInteger*(*)(BigInteger*,BigInteger*)>(&BigInteger::multiplyKaratsuba))},
	{"multiplyToLen", "([II[II[I)[I", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ints*(*)($ints*,int32_t,$ints*,int32_t,$ints*)>(&BigInteger::multiplyToLen))},
	{"multiplyToLenCheck", "([II)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($ints*,int32_t)>(&BigInteger::multiplyToLenCheck))},
	{"multiplyToomCook3", "(Ljava/math/BigInteger;Ljava/math/BigInteger;)Ljava/math/BigInteger;", nullptr, $PRIVATE | $STATIC, $method(static_cast<BigInteger*(*)(BigInteger*,BigInteger*)>(&BigInteger::multiplyToomCook3))},
	{"negate", "()Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{"nextProbablePrime", "()Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{"not", "()Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{"oddModPow", "(Ljava/math/BigInteger;Ljava/math/BigInteger;)Ljava/math/BigInteger;", nullptr, $PRIVATE, $method(static_cast<BigInteger*(BigInteger::*)(BigInteger*,BigInteger*)>(&BigInteger::oddModPow))},
	{"or", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{"padWithZeros", "(Ljava/lang/StringBuilder;I)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($StringBuilder*,int32_t)>(&BigInteger::padWithZeros))},
	{"parseInt", "([CII)I", nullptr, $PRIVATE, $method(static_cast<int32_t(BigInteger::*)($chars*,int32_t,int32_t)>(&BigInteger::parseInt))},
	{"passesLucasLehmer", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(BigInteger::*)()>(&BigInteger::passesLucasLehmer))},
	{"passesMillerRabin", "(ILjava/util/Random;)Z", nullptr, $PRIVATE, $method(static_cast<bool(BigInteger::*)(int32_t,$Random*)>(&BigInteger::passesMillerRabin))},
	{"pow", "(I)Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{"primeToCertainty", "(ILjava/util/Random;)Z", nullptr, 0},
	{"primitiveLeftShift", "([III)V", nullptr, $STATIC, $method(static_cast<void(*)($ints*,int32_t,int32_t)>(&BigInteger::primitiveLeftShift))},
	{"primitiveRightShift", "([III)V", nullptr, $STATIC, $method(static_cast<void(*)($ints*,int32_t,int32_t)>(&BigInteger::primitiveRightShift))},
	{"probablePrime", "(ILjava/util/Random;)Ljava/math/BigInteger;", nullptr, $PUBLIC | $STATIC, $method(static_cast<BigInteger*(*)(int32_t,$Random*)>(&BigInteger::probablePrime))},
	{"randomBits", "(ILjava/util/Random;)[B", nullptr, $PRIVATE | $STATIC, $method(static_cast<$bytes*(*)(int32_t,$Random*)>(&BigInteger::randomBits))},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(BigInteger::*)($ObjectInputStream*)>(&BigInteger::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"remainder", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{"remainderBurnikelZiegler", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;", nullptr, $PRIVATE, $method(static_cast<BigInteger*(BigInteger::*)(BigInteger*)>(&BigInteger::remainderBurnikelZiegler))},
	{"remainderKnuth", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;", nullptr, $PRIVATE, $method(static_cast<BigInteger*(BigInteger::*)(BigInteger*)>(&BigInteger::remainderKnuth))},
	{"reportOverflow", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&BigInteger::reportOverflow))},
	{"setBit", "(I)Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{"shiftLeft", "(I)Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{"shiftLeft", "([II)[I", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ints*(*)($ints*,int32_t)>(&BigInteger::shiftLeft))},
	{"shiftLeftImplWorker", "([I[IIII)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($ints*,$ints*,int32_t,int32_t,int32_t)>(&BigInteger::shiftLeftImplWorker)), nullptr, nullptr, _BigInteger_MethodAnnotations_shiftLeftImplWorker121},
	{"shiftRight", "(I)Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{"shiftRightImpl", "(I)Ljava/math/BigInteger;", nullptr, $PRIVATE, $method(static_cast<BigInteger*(BigInteger::*)(int32_t)>(&BigInteger::shiftRightImpl))},
	{"shiftRightImplWorker", "([I[IIII)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($ints*,$ints*,int32_t,int32_t,int32_t)>(&BigInteger::shiftRightImplWorker)), nullptr, nullptr, _BigInteger_MethodAnnotations_shiftRightImplWorker124},
	{"shortValueExact", "()S", nullptr, $PUBLIC},
	{"signBit", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(BigInteger::*)()>(&BigInteger::signBit))},
	{"signInt", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(BigInteger::*)()>(&BigInteger::signInt))},
	{"signum", "()I", nullptr, $PUBLIC},
	{"smallPrime", "(IILjava/util/Random;)Ljava/math/BigInteger;", nullptr, $PRIVATE | $STATIC, $method(static_cast<BigInteger*(*)(int32_t,int32_t,$Random*)>(&BigInteger::smallPrime))},
	{"smallToString", "(ILjava/lang/StringBuilder;I)V", nullptr, $PRIVATE, $method(static_cast<void(BigInteger::*)(int32_t,$StringBuilder*,int32_t)>(&BigInteger::smallToString))},
	{"sqrt", "()Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{"sqrtAndRemainder", "()[Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{"square", "()Ljava/math/BigInteger;", nullptr, $PRIVATE, $method(static_cast<BigInteger*(BigInteger::*)()>(&BigInteger::square))},
	{"square", "(Z)Ljava/math/BigInteger;", nullptr, $PRIVATE, $method(static_cast<BigInteger*(BigInteger::*)(bool)>(&BigInteger::square))},
	{"squareKaratsuba", "()Ljava/math/BigInteger;", nullptr, $PRIVATE, $method(static_cast<BigInteger*(BigInteger::*)()>(&BigInteger::squareKaratsuba))},
	{"squareToLen", "([II[I)[I", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<$ints*(*)($ints*,int32_t,$ints*)>(&BigInteger::squareToLen))},
	{"squareToomCook3", "()Ljava/math/BigInteger;", nullptr, $PRIVATE, $method(static_cast<BigInteger*(BigInteger::*)()>(&BigInteger::squareToomCook3))},
	{"stripLeadingZeroBytes", "([BII)[I", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ints*(*)($bytes*,int32_t,int32_t)>(&BigInteger::stripLeadingZeroBytes))},
	{"stripLeadingZeroInts", "([I)[I", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ints*(*)($ints*)>(&BigInteger::stripLeadingZeroInts))},
	{"subN", "([I[II)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($ints*,$ints*,int32_t)>(&BigInteger::subN))},
	{"subtract", "(J[I)[I", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ints*(*)(int64_t,$ints*)>(&BigInteger::subtract))},
	{"subtract", "([IJ)[I", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ints*(*)($ints*,int64_t)>(&BigInteger::subtract))},
	{"subtract", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{"subtract", "([I[I)[I", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ints*(*)($ints*,$ints*)>(&BigInteger::subtract))},
	{"testBit", "(I)Z", nullptr, $PUBLIC},
	{"toByteArray", "()[B", nullptr, $PUBLIC},
	{"toString", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"toString", "(Ljava/math/BigInteger;Ljava/lang/StringBuilder;II)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(BigInteger*,$StringBuilder*,int32_t,int32_t)>(&BigInteger::toString))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"trustedStripLeadingZeroInts", "([I)[I", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ints*(*)($ints*)>(&BigInteger::trustedStripLeadingZeroInts))},
	{"valueOf", "(J)Ljava/math/BigInteger;", nullptr, $PUBLIC | $STATIC, $method(static_cast<BigInteger*(*)(int64_t)>(&BigInteger::valueOf))},
	{"valueOf", "([I)Ljava/math/BigInteger;", nullptr, $PRIVATE | $STATIC, $method(static_cast<BigInteger*(*)($ints*)>(&BigInteger::valueOf))},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(BigInteger::*)($ObjectOutputStream*)>(&BigInteger::writeObject)), "java.io.IOException"},
	{"xor", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BigInteger_InnerClassesInfo_[] = {
	{"java.math.BigInteger$UnsafeHolder", "java.math.BigInteger", "UnsafeHolder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _BigInteger_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.math.BigInteger",
	"java.lang.Number",
	"java.lang.Comparable",
	_BigInteger_FieldInfo_,
	_BigInteger_MethodInfo_,
	"Ljava/lang/Number;Ljava/lang/Comparable<Ljava/math/BigInteger;>;",
	nullptr,
	_BigInteger_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.math.BigInteger$UnsafeHolder"
};

$Object* allocate$BigInteger($Class* clazz) {
	return $of($alloc(BigInteger));
}

$Object* BigInteger::clone() {
	 return this->$Number::clone();
}

void BigInteger::finalize() {
	this->$Number::finalize();
}

bool BigInteger::$assertionsDisabled = false;
$longs* BigInteger::bitsPerDigit = nullptr;
BigInteger* BigInteger::SMALL_PRIME_PRODUCT = nullptr;
$BigIntegerArray* BigInteger::posConst = nullptr;
$BigIntegerArray* BigInteger::negConst = nullptr;

$volatile($BigIntegerArray2*) BigInteger::powerCache = nullptr;

$doubles* BigInteger::logCache = nullptr;

double BigInteger::LOG_TWO = 0.0;

BigInteger* BigInteger::ZERO = nullptr;

BigInteger* BigInteger::ONE = nullptr;

BigInteger* BigInteger::TWO = nullptr;

BigInteger* BigInteger::NEGATIVE_ONE = nullptr;

BigInteger* BigInteger::TEN = nullptr;
$ints* BigInteger::bnExpModThreshTable = nullptr;
int32_t BigInteger::NUM_ZEROS = 0;
$String* BigInteger::ZEROS = nullptr;
$ints* BigInteger::digitsPerLong = nullptr;
$BigIntegerArray* BigInteger::longRadix = nullptr;
$ints* BigInteger::digitsPerInt = nullptr;
$ints* BigInteger::intRadix = nullptr;

$ObjectStreamFieldArray* BigInteger::serialPersistentFields = nullptr;

void BigInteger::init$($bytes* val, int32_t off, int32_t len) {
	$Number::init$();
	if ($nc(val)->length == 0) {
		$throwNew($NumberFormatException, "Zero length BigInteger"_s);
	}
	$Objects::checkFromIndexSize(off, len, $nc(val)->length);
	if ($nc(val)->get(off) < 0) {
		$set(this, mag, makePositive(val, off, len));
		this->signum$ = -1;
	} else {
		$set(this, mag, stripLeadingZeroBytes(val, off, len));
		this->signum$ = ($nc(this->mag)->length == 0 ? 0 : 1);
	}
	if ($nc(this->mag)->length >= BigInteger::MAX_MAG_LENGTH) {
		checkRange();
	}
}

void BigInteger::init$($bytes* val) {
	BigInteger::init$(val, 0, $nc(val)->length);
}

void BigInteger::init$($ints* val) {
	$Number::init$();
	if ($nc(val)->length == 0) {
		$throwNew($NumberFormatException, "Zero length BigInteger"_s);
	}
	if ($nc(val)->get(0) < 0) {
		$set(this, mag, makePositive(val));
		this->signum$ = -1;
	} else {
		$set(this, mag, trustedStripLeadingZeroInts(val));
		this->signum$ = ($nc(this->mag)->length == 0 ? 0 : 1);
	}
	if ($nc(this->mag)->length >= BigInteger::MAX_MAG_LENGTH) {
		checkRange();
	}
}

void BigInteger::init$(int32_t signum, $bytes* magnitude, int32_t off, int32_t len) {
	$useLocalCurrentObjectStackCache();
	$Number::init$();
	if (signum < -1 || signum > 1) {
		$throw($$new($NumberFormatException, "Invalid signum value"_s));
	}
	$Objects::checkFromIndexSize(off, len, $nc(magnitude)->length);
	$set(this, mag, stripLeadingZeroBytes(magnitude, off, len));
	if ($nc(this->mag)->length == 0) {
		this->signum$ = 0;
	} else {
		if (signum == 0) {
			$throw($$new($NumberFormatException, "signum-magnitude mismatch"_s));
		}
		this->signum$ = signum;
	}
	if ($nc(this->mag)->length >= BigInteger::MAX_MAG_LENGTH) {
		checkRange();
	}
}

void BigInteger::init$(int32_t signum, $bytes* magnitude) {
	BigInteger::init$(signum, magnitude, 0, $nc(magnitude)->length);
}

void BigInteger::init$(int32_t signum, $ints* magnitude) {
	$useLocalCurrentObjectStackCache();
	$Number::init$();
	$set(this, mag, stripLeadingZeroInts(magnitude));
	if (signum < -1 || signum > 1) {
		$throw($$new($NumberFormatException, "Invalid signum value"_s));
	}
	if ($nc(this->mag)->length == 0) {
		this->signum$ = 0;
	} else {
		if (signum == 0) {
			$throw($$new($NumberFormatException, "signum-magnitude mismatch"_s));
		}
		this->signum$ = signum;
	}
	if ($nc(this->mag)->length >= BigInteger::MAX_MAG_LENGTH) {
		checkRange();
	}
}

void BigInteger::init$($String* val, int32_t radix) {
	$useLocalCurrentObjectStackCache();
	$Number::init$();
	int32_t cursor = 0;
	int32_t numDigits = 0;
	int32_t len = $nc(val)->length();
	if (radix < $Character::MIN_RADIX || radix > $Character::MAX_RADIX) {
		$throwNew($NumberFormatException, "Radix out of range"_s);
	}
	if (len == 0) {
		$throwNew($NumberFormatException, "Zero length BigInteger"_s);
	}
	int32_t sign = 1;
	int32_t index1 = val->lastIndexOf((int32_t)u'-');
	int32_t index2 = val->lastIndexOf((int32_t)u'+');
	if (index1 >= 0) {
		if (index1 != 0 || index2 >= 0) {
			$throwNew($NumberFormatException, "Illegal embedded sign character"_s);
		}
		sign = -1;
		cursor = 1;
	} else if (index2 >= 0) {
		if (index2 != 0) {
			$throwNew($NumberFormatException, "Illegal embedded sign character"_s);
		}
		cursor = 1;
	}
	if (cursor == len) {
		$throwNew($NumberFormatException, "Zero length BigInteger"_s);
	}
	while (cursor < len && $Character::digit(val->charAt(cursor), radix) == 0) {
		++cursor;
	}
	if (cursor == len) {
		this->signum$ = 0;
		$set(this, mag, $nc(BigInteger::ZERO)->mag);
		return;
	}
	numDigits = len - cursor;
	this->signum$ = sign;
	int64_t numBits = ((int64_t)((uint64_t)(numDigits * $nc(BigInteger::bitsPerDigit)->get(radix)) >> 10)) + 1;
	if (numBits + 31 >= ((int64_t)1 << 32)) {
		reportOverflow();
	}
	int32_t numWords = (int32_t)((uint32_t)(int32_t)(numBits + 31) >> 5);
	$var($ints, magnitude, $new($ints, numWords));
	int32_t firstGroupLen = $mod(numDigits, $nc(BigInteger::digitsPerInt)->get(radix));
	if (firstGroupLen == 0) {
		firstGroupLen = $nc(BigInteger::digitsPerInt)->get(radix);
	}
	int32_t var$0 = cursor;
	$var($String, group, val->substring(var$0, cursor += firstGroupLen));
	magnitude->set(numWords - 1, $Integer::parseInt(group, radix));
	if (magnitude->get(numWords - 1) < 0) {
		$throwNew($NumberFormatException, "Illegal digit"_s);
	}
	int32_t superRadix = $nc(BigInteger::intRadix)->get(radix);
	int32_t groupVal = 0;
	while (cursor < len) {
		int32_t var$1 = cursor;
		$assign(group, val->substring(var$1, cursor += $nc(BigInteger::digitsPerInt)->get(radix)));
		groupVal = $Integer::parseInt(group, radix);
		if (groupVal < 0) {
			$throwNew($NumberFormatException, "Illegal digit"_s);
		}
		destructiveMulAdd(magnitude, superRadix, groupVal);
	}
	$set(this, mag, trustedStripLeadingZeroInts(magnitude));
	if ($nc(this->mag)->length >= BigInteger::MAX_MAG_LENGTH) {
		checkRange();
	}
}

void BigInteger::init$($chars* val, int32_t sign, int32_t len) {
	$useLocalCurrentObjectStackCache();
	$Number::init$();
	int32_t cursor = 0;
	int32_t numDigits = 0;
	while (cursor < len && $Character::digit($nc(val)->get(cursor), 10) == 0) {
		++cursor;
	}
	if (cursor == len) {
		this->signum$ = 0;
		$set(this, mag, $nc(BigInteger::ZERO)->mag);
		return;
	}
	numDigits = len - cursor;
	this->signum$ = sign;
	int32_t numWords = 0;
	if (len < 10) {
		numWords = 1;
	} else {
		int64_t numBits = ((int64_t)((uint64_t)(numDigits * $nc(BigInteger::bitsPerDigit)->get(10)) >> 10)) + 1;
		if (numBits + 31 >= ((int64_t)1 << 32)) {
			reportOverflow();
		}
		numWords = (int32_t)((uint32_t)(int32_t)(numBits + 31) >> 5);
	}
	$var($ints, magnitude, $new($ints, numWords));
	int32_t firstGroupLen = $mod(numDigits, $nc(BigInteger::digitsPerInt)->get(10));
	if (firstGroupLen == 0) {
		firstGroupLen = $nc(BigInteger::digitsPerInt)->get(10);
	}
	$var($chars, var$0, val);
	int32_t var$1 = cursor;
	magnitude->set(numWords - 1, parseInt(var$0, var$1, cursor += firstGroupLen));
	while (cursor < len) {
		$var($chars, var$2, val);
		int32_t var$3 = cursor;
		int32_t groupVal = parseInt(var$2, var$3, cursor += $nc(BigInteger::digitsPerInt)->get(10));
		destructiveMulAdd(magnitude, $nc(BigInteger::intRadix)->get(10), groupVal);
	}
	$set(this, mag, trustedStripLeadingZeroInts(magnitude));
	if ($nc(this->mag)->length >= BigInteger::MAX_MAG_LENGTH) {
		checkRange();
	}
}

int32_t BigInteger::parseInt($chars* source, int32_t start, int32_t end) {
	$useLocalCurrentObjectStackCache();
	int32_t result = $Character::digit($nc(source)->get(start++), 10);
	if (result == -1) {
		$throwNew($NumberFormatException, $$new($String, source));
	}
	for (int32_t index = start; index < end; ++index) {
		int32_t nextVal = $Character::digit($nc(source)->get(index), 10);
		if (nextVal == -1) {
			$throwNew($NumberFormatException, $$new($String, source));
		}
		result = 10 * result + nextVal;
	}
	return result;
}

void BigInteger::destructiveMulAdd($ints* x, int32_t y, int32_t z) {
	$init(BigInteger);
	int64_t ylong = (int64_t)(y & (uint64_t)BigInteger::LONG_MASK);
	int64_t zlong = (int64_t)(z & (uint64_t)BigInteger::LONG_MASK);
	int32_t len = $nc(x)->length;
	int64_t product = 0;
	int64_t carry = 0;
	for (int32_t i = len - 1; i >= 0; --i) {
		product = ylong * ((int64_t)(x->get(i) & (uint64_t)BigInteger::LONG_MASK)) + carry;
		x->set(i, (int32_t)product);
		carry = (int64_t)((uint64_t)product >> 32);
	}
	int64_t sum = ((int64_t)(x->get(len - 1) & (uint64_t)BigInteger::LONG_MASK)) + zlong;
	x->set(len - 1, (int32_t)sum);
	carry = (int64_t)((uint64_t)sum >> 32);
	for (int32_t i = len - 2; i >= 0; --i) {
		sum = ((int64_t)(x->get(i) & (uint64_t)BigInteger::LONG_MASK)) + carry;
		x->set(i, (int32_t)sum);
		carry = (int64_t)((uint64_t)sum >> 32);
	}
}

void BigInteger::init$($String* val) {
	BigInteger::init$(val, 10);
}

void BigInteger::init$(int32_t numBits, $Random* rnd) {
	$useLocalCurrentObjectStackCache();
	$Number::init$();
	$var($bytes, magnitude, randomBits(numBits, rnd));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$set(this, mag, stripLeadingZeroBytes(magnitude, 0, $nc(magnitude)->length));
			if ($nc(this->mag)->length == 0) {
				this->signum$ = 0;
			} else {
				this->signum$ = 1;
			}
			if ($nc(this->mag)->length >= BigInteger::MAX_MAG_LENGTH) {
				checkRange();
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$Arrays::fill(magnitude, (int8_t)0);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$bytes* BigInteger::randomBits(int32_t numBits, $Random* rnd) {
	$init(BigInteger);
	if (numBits < 0) {
		$throwNew($IllegalArgumentException, "numBits must be non-negative"_s);
	}
	int32_t numBytes = (int32_t)(((int64_t)numBits + 7) / 8);
	$var($bytes, randomBits, $new($bytes, numBytes));
	if (numBytes > 0) {
		$nc(rnd)->nextBytes(randomBits);
		int32_t excessBits = 8 * numBytes - numBits;
		(*randomBits)[0] &= (uint8_t)(($sl(1, 8 - excessBits)) - 1);
	}
	return randomBits;
}

void BigInteger::init$(int32_t bitLength, int32_t certainty, $Random* rnd) {
	$Number::init$();
	$var(BigInteger, prime, nullptr);
	if (bitLength < 2) {
		$throwNew($ArithmeticException, "bitLength < 2"_s);
	}
	$assign(prime, bitLength < BigInteger::SMALL_PRIME_THRESHOLD ? smallPrime(bitLength, certainty, rnd) : largePrime(bitLength, certainty, rnd));
	this->signum$ = 1;
	$set(this, mag, $nc(prime)->mag);
}

BigInteger* BigInteger::probablePrime(int32_t bitLength, $Random* rnd) {
	$init(BigInteger);
	if (bitLength < 2) {
		$throwNew($ArithmeticException, "bitLength < 2"_s);
	}
	return (bitLength < BigInteger::SMALL_PRIME_THRESHOLD ? smallPrime(bitLength, BigInteger::DEFAULT_PRIME_CERTAINTY, rnd) : largePrime(bitLength, BigInteger::DEFAULT_PRIME_CERTAINTY, rnd));
}

BigInteger* BigInteger::smallPrime(int32_t bitLength, int32_t certainty, $Random* rnd) {
	$init(BigInteger);
	$useLocalCurrentObjectStackCache();
	int32_t magLen = (int32_t)((uint32_t)(bitLength + 31) >> 5);
	$var($ints, temp, $new($ints, magLen));
	int32_t highBit = $sl(1, (int32_t)((bitLength + 31) & (uint32_t)31));
	int32_t highMask = (highBit << 1) - 1;
	while (true) {
		for (int32_t i = 0; i < magLen; ++i) {
			temp->set(i, $nc(rnd)->nextInt());
		}
		temp->set(0, ((int32_t)(temp->get(0) & (uint32_t)highMask)) | highBit);
		if (bitLength > 2) {
			(*temp)[magLen - 1] |= 1;
		}
		$var(BigInteger, p, $new(BigInteger, temp, 1));
		if (bitLength > 6) {
			int64_t r = $nc($(p->remainder(BigInteger::SMALL_PRIME_PRODUCT)))->longValue();
			if ((r % 3 == 0) || (r % 5 == 0) || (r % 7 == 0) || (r % 11 == 0) || (r % 13 == 0) || (r % 17 == 0) || (r % 19 == 0) || (r % 23 == 0) || (r % 29 == 0) || (r % 31 == 0) || (r % 37 == 0) || (r % 41 == 0)) {
				continue;
			}
		}
		if (bitLength < 4) {
			return p;
		}
		if (p->primeToCertainty(certainty, rnd)) {
			return p;
		}
	}
}

BigInteger* BigInteger::largePrime(int32_t bitLength, int32_t certainty, $Random* rnd) {
	$init(BigInteger);
	$useLocalCurrentObjectStackCache();
	$var(BigInteger, p, nullptr);
	$assign(p, $$new(BigInteger, bitLength, rnd)->setBit(bitLength - 1));
	(*$nc($nc(p)->mag))[$nc(p->mag)->length - 1] &= (uint32_t)-2;
	int32_t searchLen = getPrimeSearchLen(bitLength);
	$var($BitSieve, searchSieve, $new($BitSieve, p, searchLen));
	$var(BigInteger, candidate, searchSieve->retrieve(p, certainty, rnd));
	while ((candidate == nullptr) || ($nc(candidate)->bitLength() != bitLength)) {
		$assign(p, p->add($(BigInteger::valueOf((int64_t)(2 * searchLen)))));
		if ($nc(p)->bitLength() != bitLength) {
			$assign(p, $$new(BigInteger, bitLength, rnd)->setBit(bitLength - 1));
		}
		(*$nc($nc(p)->mag))[$nc(p->mag)->length - 1] &= (uint32_t)-2;
		$assign(searchSieve, $new($BitSieve, p, searchLen));
		$assign(candidate, searchSieve->retrieve(p, certainty, rnd));
	}
	return candidate;
}

BigInteger* BigInteger::nextProbablePrime() {
	$useLocalCurrentObjectStackCache();
	if (this->signum$ < 0) {
		$throwNew($ArithmeticException, $$str({"start < 0: "_s, this}));
	}
	if ((this->signum$ == 0) || this->equals(BigInteger::ONE)) {
		return BigInteger::TWO;
	}
	$var(BigInteger, result, this->add(BigInteger::ONE));
	if ($nc(result)->bitLength() < BigInteger::SMALL_PRIME_THRESHOLD) {
		if (!result->testBit(0)) {
			$assign(result, result->add(BigInteger::ONE));
		}
		while (true) {
			if ($nc(result)->bitLength() > 6) {
				int64_t r = $nc($(result->remainder(BigInteger::SMALL_PRIME_PRODUCT)))->longValue();
				if ((r % 3 == 0) || (r % 5 == 0) || (r % 7 == 0) || (r % 11 == 0) || (r % 13 == 0) || (r % 17 == 0) || (r % 19 == 0) || (r % 23 == 0) || (r % 29 == 0) || (r % 31 == 0) || (r % 37 == 0) || (r % 41 == 0)) {
					$assign(result, result->add(BigInteger::TWO));
					continue;
				}
			}
			if ($nc(result)->bitLength() < 4) {
				return result;
			}
			if ($nc(result)->primeToCertainty(BigInteger::DEFAULT_PRIME_CERTAINTY, nullptr)) {
				return result;
			}
			$assign(result, $nc(result)->add(BigInteger::TWO));
		}
	}
	if ($nc(result)->testBit(0)) {
		$assign(result, result->subtract(BigInteger::ONE));
	}
	int32_t searchLen = getPrimeSearchLen($nc(result)->bitLength());
	while (true) {
		$var($BitSieve, searchSieve, $new($BitSieve, result, searchLen));
		$var(BigInteger, candidate, searchSieve->retrieve(result, BigInteger::DEFAULT_PRIME_CERTAINTY, nullptr));
		if (candidate != nullptr) {
			return candidate;
		}
		$assign(result, $nc(result)->add($(BigInteger::valueOf((int64_t)(2 * searchLen)))));
	}
}

int32_t BigInteger::getPrimeSearchLen(int32_t bitLength) {
	$init(BigInteger);
	if (bitLength > BigInteger::PRIME_SEARCH_BIT_LENGTH_LIMIT + 1) {
		$throwNew($ArithmeticException, "Prime search implementation restriction on bitLength"_s);
	}
	return bitLength / 20 * 64;
}

bool BigInteger::primeToCertainty(int32_t certainty, $Random* random) {
	int32_t rounds = 0;
	int32_t n = ($Math::min(certainty, $Integer::MAX_VALUE - 1) + 1) / 2;
	int32_t sizeInBits = this->bitLength();
	if (sizeInBits < 100) {
		rounds = 50;
		rounds = n < rounds ? n : rounds;
		return passesMillerRabin(rounds, random);
	}
	if (sizeInBits < 256) {
		rounds = 27;
	} else if (sizeInBits < 512) {
		rounds = 15;
	} else if (sizeInBits < 768) {
		rounds = 8;
	} else if (sizeInBits < 1024) {
		rounds = 4;
	} else {
		rounds = 2;
	}
	rounds = n < rounds ? n : rounds;
	bool var$0 = passesMillerRabin(rounds, random);
	return var$0 && passesLucasLehmer();
}

bool BigInteger::passesLucasLehmer() {
	$useLocalCurrentObjectStackCache();
	$var(BigInteger, thisPlusOne, this->add(BigInteger::ONE));
	int32_t d = 5;
	while (jacobiSymbol(d, this) != -1) {
		d = (d < 0) ? $Math::abs(d) + 2 : -(d + 2);
	}
	$var(BigInteger, u, lucasLehmerSequence(d, thisPlusOne, this));
	return $nc($($nc(u)->mod(this)))->equals(BigInteger::ZERO);
}

int32_t BigInteger::jacobiSymbol(int32_t p, BigInteger* n) {
	$init(BigInteger);
	$useLocalCurrentObjectStackCache();
	if (p == 0) {
		return 0;
	}
	int32_t j = 1;
	int32_t u = $nc($nc(n)->mag)->get($nc(n->mag)->length - 1);
	if (p < 0) {
		p = -p;
		int32_t n8 = (int32_t)(u & (uint32_t)7);
		if ((n8 == 3) || (n8 == 7)) {
			j = -j;
		}
	}
	while (((int32_t)(p & (uint32_t)3)) == 0) {
		p >>= 2;
	}
	if (((int32_t)(p & (uint32_t)1)) == 0) {
		p >>= 1;
		if (((int32_t)((u ^ (u >> 1)) & (uint32_t)2)) != 0) {
			j = -j;
		}
	}
	if (p == 1) {
		return j;
	}
	if (((int32_t)(((int32_t)(p & (uint32_t)u)) & (uint32_t)2)) != 0) {
		j = -j;
	}
	u = $nc($(n->mod($(BigInteger::valueOf((int64_t)p)))))->intValue();
	while (u != 0) {
		while (((int32_t)(u & (uint32_t)3)) == 0) {
			u >>= 2;
		}
		if (((int32_t)(u & (uint32_t)1)) == 0) {
			u >>= 1;
			if (((int32_t)((p ^ (p >> 1)) & (uint32_t)2)) != 0) {
				j = -j;
			}
		}
		if (u == 1) {
			return j;
		}
		if (!BigInteger::$assertionsDisabled && !(u < p)) {
			$throwNew($AssertionError);
		}
		int32_t t = u;
		u = p;
		p = t;
		if (((int32_t)(((int32_t)(u & (uint32_t)p)) & (uint32_t)2)) != 0) {
			j = -j;
		}
		$modAssign(u, p);
	}
	return 0;
}

BigInteger* BigInteger::lucasLehmerSequence(int32_t z, BigInteger* k, BigInteger* n) {
	$init(BigInteger);
	$useLocalCurrentObjectStackCache();
	$var(BigInteger, d, BigInteger::valueOf((int64_t)z));
	$var(BigInteger, u, BigInteger::ONE);
	$var(BigInteger, u2, nullptr);
	$var(BigInteger, v, BigInteger::ONE);
	$var(BigInteger, v2, nullptr);
	for (int32_t i = $nc(k)->bitLength() - 2; i >= 0; --i) {
		$assign(u2, $nc($($nc(u)->multiply(v)))->mod(n));
		$assign(v2, $nc($($nc($($nc(v)->square()))->add($($nc(d)->multiply($(u->square()))))))->mod(n));
		if ($nc(v2)->testBit(0)) {
			$assign(v2, v2->subtract(n));
		}
		$assign(v2, $nc(v2)->shiftRight(1));
		$assign(u, u2);
		$assign(v, v2);
		if (k->testBit(i)) {
			$assign(u2, $nc($(u->add(v)))->mod(n));
			if ($nc(u2)->testBit(0)) {
				$assign(u2, u2->subtract(n));
			}
			$assign(u2, $nc(u2)->shiftRight(1));
			$assign(v2, $nc($(v->add($($nc(d)->multiply(u)))))->mod(n));
			if ($nc(v2)->testBit(0)) {
				$assign(v2, v2->subtract(n));
			}
			$assign(v2, $nc(v2)->shiftRight(1));
			$assign(u, u2);
			$assign(v, v2);
		}
	}
	return u;
}

bool BigInteger::passesMillerRabin(int32_t iterations, $Random* rnd$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Random, rnd, rnd$renamed);
	$var(BigInteger, thisMinusOne, this->subtract(BigInteger::ONE));
	$var(BigInteger, m, thisMinusOne);
	int32_t a = $nc(m)->getLowestSetBit();
	$assign(m, m->shiftRight(a));
	if (rnd == nullptr) {
		$assign(rnd, $ThreadLocalRandom::current());
	}
	for (int32_t i = 0; i < iterations; ++i) {
		$var(BigInteger, b, nullptr);
		bool var$0 = false;
		do {
			$assign(b, $new(BigInteger, this->bitLength(), rnd));
			var$0 = $nc(b)->compareTo(BigInteger::ONE) <= 0;
		} while (var$0 || $nc(b)->compareTo(this) >= 0);
		int32_t j = 0;
		$var(BigInteger, z, b->modPow(m, this));
		while (true) {
			bool var$1 = (j == 0 && $nc(z)->equals(BigInteger::ONE));
			if (!(!(var$1 || $nc(z)->equals(thisMinusOne)))) {
				break;
			}
			{
				bool var$2 = j > 0 && z->equals(BigInteger::ONE);
				if (var$2 || ++j == a) {
					return false;
				}
				$assign(z, z->modPow(BigInteger::TWO, this));
			}
		}
	}
	return true;
}

void BigInteger::init$($ints* magnitude, int32_t signum) {
	$Number::init$();
	this->signum$ = ($nc(magnitude)->length == 0 ? 0 : signum);
	$set(this, mag, magnitude);
	if ($nc(this->mag)->length >= BigInteger::MAX_MAG_LENGTH) {
		checkRange();
	}
}

void BigInteger::init$($bytes* magnitude, int32_t signum) {
	$Number::init$();
	this->signum$ = ($nc(magnitude)->length == 0 ? 0 : signum);
	$set(this, mag, stripLeadingZeroBytes(magnitude, 0, $nc(magnitude)->length));
	if ($nc(this->mag)->length >= BigInteger::MAX_MAG_LENGTH) {
		checkRange();
	}
}

void BigInteger::checkRange() {
	if ($nc(this->mag)->length > BigInteger::MAX_MAG_LENGTH || $nc(this->mag)->length == BigInteger::MAX_MAG_LENGTH && $nc(this->mag)->get(0) < 0) {
		reportOverflow();
	}
}

void BigInteger::reportOverflow() {
	$init(BigInteger);
	$throwNew($ArithmeticException, "BigInteger would overflow supported range"_s);
}

BigInteger* BigInteger::valueOf(int64_t val) {
	$init(BigInteger);
	if (val == 0) {
		return BigInteger::ZERO;
	}
	if (val > 0 && val <= BigInteger::MAX_CONSTANT) {
		return $nc(BigInteger::posConst)->get((int32_t)val);
	} else if (val < 0 && val >= -BigInteger::MAX_CONSTANT) {
		return $nc(BigInteger::negConst)->get((int32_t)-val);
	}
	return $new(BigInteger, val);
}

void BigInteger::init$(int64_t val) {
	$Number::init$();
	if (val < 0) {
		val = -val;
		this->signum$ = -1;
	} else {
		this->signum$ = 1;
	}
	int32_t highWord = (int32_t)((int64_t)((uint64_t)val >> 32));
	if (highWord == 0) {
		$set(this, mag, $new($ints, 1));
		$nc(this->mag)->set(0, (int32_t)val);
	} else {
		$set(this, mag, $new($ints, 2));
		$nc(this->mag)->set(0, highWord);
		$nc(this->mag)->set(1, (int32_t)val);
	}
}

BigInteger* BigInteger::valueOf($ints* val) {
	$init(BigInteger);
	return ($nc(val)->get(0) > 0 ? $new(BigInteger, val, 1) : $new(BigInteger, val));
}

BigInteger* BigInteger::add(BigInteger* val) {
	$useLocalCurrentObjectStackCache();
	if ($nc(val)->signum$ == 0) {
		return this;
	}
	if (this->signum$ == 0) {
		return val;
	}
	if ($nc(val)->signum$ == this->signum$) {
		return $new(BigInteger, $(add(this->mag, val->mag)), this->signum$);
	}
	int32_t cmp = compareMagnitude(val);
	if (cmp == 0) {
		return BigInteger::ZERO;
	}
	$var($ints, resultMag, cmp > 0 ? subtract(this->mag, $nc(val)->mag) : subtract($nc(val)->mag, this->mag));
	$assign(resultMag, trustedStripLeadingZeroInts(resultMag));
	return $new(BigInteger, resultMag, cmp == this->signum$ ? 1 : -1);
}

BigInteger* BigInteger::add(int64_t val) {
	$useLocalCurrentObjectStackCache();
	if (val == 0) {
		return this;
	}
	if (this->signum$ == 0) {
		return valueOf(val);
	}
	if ($Long::signum(val) == this->signum$) {
		return $new(BigInteger, $(add(this->mag, $Math::abs(val))), this->signum$);
	}
	int32_t cmp = compareMagnitude(val);
	if (cmp == 0) {
		return BigInteger::ZERO;
	}
	$var($ints, resultMag, cmp > 0 ? subtract(this->mag, $Math::abs(val)) : subtract($Math::abs(val), this->mag));
	$assign(resultMag, trustedStripLeadingZeroInts(resultMag));
	return $new(BigInteger, resultMag, cmp == this->signum$ ? 1 : -1);
}

$ints* BigInteger::add($ints* x, int64_t val) {
	$init(BigInteger);
	$useLocalCurrentObjectStackCache();
	$var($ints, y, nullptr);
	int64_t sum = 0;
	int32_t xIndex = $nc(x)->length;
	$var($ints, result, nullptr);
	int32_t highWord = (int32_t)((int64_t)((uint64_t)val >> 32));
	if (highWord == 0) {
		$assign(result, $new($ints, xIndex));
		sum = ((int64_t)(x->get(--xIndex) & (uint64_t)BigInteger::LONG_MASK)) + val;
		result->set(xIndex, (int32_t)sum);
	} else if (xIndex == 1) {
		$assign(result, $new($ints, 2));
		sum = val + ((int64_t)(x->get(0) & (uint64_t)BigInteger::LONG_MASK));
		result->set(1, (int32_t)sum);
		result->set(0, (int32_t)((int64_t)((uint64_t)sum >> 32)));
		return result;
	} else {
		$assign(result, $new($ints, xIndex));
		sum = ((int64_t)(x->get(--xIndex) & (uint64_t)BigInteger::LONG_MASK)) + ((int64_t)(val & (uint64_t)BigInteger::LONG_MASK));
		result->set(xIndex, (int32_t)sum);
		sum = ((int64_t)(x->get(--xIndex) & (uint64_t)BigInteger::LONG_MASK)) + ((int64_t)(highWord & (uint64_t)BigInteger::LONG_MASK)) + ((int64_t)((uint64_t)sum >> 32));
		result->set(xIndex, (int32_t)sum);
	}
	bool carry = ((int64_t)((uint64_t)sum >> 32) != 0);
	while (xIndex > 0 && carry) {
		int32_t var$0 = --xIndex;
		carry = (($nc(result)->set(var$0, x->get(xIndex) + 1)) == 0);
	}
	while (xIndex > 0) {
		int32_t var$1 = --xIndex;
		$nc(result)->set(var$1, x->get(xIndex));
	}
	if (carry) {
		$var($ints, bigger, $new($ints, $nc(result)->length + 1));
		$System::arraycopy(result, 0, bigger, 1, result->length);
		bigger->set(0, 1);
		return bigger;
	}
	return result;
}

$ints* BigInteger::add($ints* x$renamed, $ints* y$renamed) {
	$init(BigInteger);
	$useLocalCurrentObjectStackCache();
	$var($ints, x, x$renamed);
	$var($ints, y, y$renamed);
	if ($nc(x)->length < $nc(y)->length) {
		$var($ints, tmp, x);
		$assign(x, y);
		$assign(y, tmp);
	}
	int32_t xIndex = $nc(x)->length;
	int32_t yIndex = $nc(y)->length;
	$var($ints, result, $new($ints, xIndex));
	int64_t sum = 0;
	if (yIndex == 1) {
		sum = ((int64_t)(x->get(--xIndex) & (uint64_t)BigInteger::LONG_MASK)) + ((int64_t)(y->get(0) & (uint64_t)BigInteger::LONG_MASK));
		result->set(xIndex, (int32_t)sum);
	} else {
		while (yIndex > 0) {
			sum = ((int64_t)(x->get(--xIndex) & (uint64_t)BigInteger::LONG_MASK)) + ((int64_t)(y->get(--yIndex) & (uint64_t)BigInteger::LONG_MASK)) + ((int64_t)((uint64_t)sum >> 32));
			result->set(xIndex, (int32_t)sum);
		}
	}
	bool carry = ((int64_t)((uint64_t)sum >> 32) != 0);
	while (xIndex > 0 && carry) {
		int32_t var$0 = --xIndex;
		carry = ((result->set(var$0, x->get(xIndex) + 1)) == 0);
	}
	while (xIndex > 0) {
		int32_t var$1 = --xIndex;
		result->set(var$1, x->get(xIndex));
	}
	if (carry) {
		$var($ints, bigger, $new($ints, result->length + 1));
		$System::arraycopy(result, 0, bigger, 1, result->length);
		bigger->set(0, 1);
		return bigger;
	}
	return result;
}

$ints* BigInteger::subtract(int64_t val, $ints* little) {
	$init(BigInteger);
	$useLocalCurrentObjectStackCache();
	int32_t highWord = (int32_t)((int64_t)((uint64_t)val >> 32));
	if (highWord == 0) {
		$var($ints, result, $new($ints, 1));
		result->set(0, (int32_t)(val - ((int64_t)($nc(little)->get(0) & (uint64_t)BigInteger::LONG_MASK))));
		return result;
	} else {
		$var($ints, result, $new($ints, 2));
		if ($nc(little)->length == 1) {
			int64_t difference = ((int64_t)((int32_t)val & (uint64_t)BigInteger::LONG_MASK)) - ((int64_t)(little->get(0) & (uint64_t)BigInteger::LONG_MASK));
			result->set(1, (int32_t)difference);
			bool borrow = (difference >> 32 != 0);
			if (borrow) {
				result->set(0, highWord - 1);
			} else {
				result->set(0, highWord);
			}
			return result;
		} else {
			int64_t difference = ((int64_t)((int32_t)val & (uint64_t)BigInteger::LONG_MASK)) - ((int64_t)(little->get(1) & (uint64_t)BigInteger::LONG_MASK));
			result->set(1, (int32_t)difference);
			difference = ((int64_t)(highWord & (uint64_t)BigInteger::LONG_MASK)) - ((int64_t)(little->get(0) & (uint64_t)BigInteger::LONG_MASK)) + (difference >> 32);
			result->set(0, (int32_t)difference);
			return result;
		}
	}
}

$ints* BigInteger::subtract($ints* big, int64_t val) {
	$init(BigInteger);
	int32_t highWord = (int32_t)((int64_t)((uint64_t)val >> 32));
	int32_t bigIndex = $nc(big)->length;
	$var($ints, result, $new($ints, bigIndex));
	int64_t difference = 0;
	if (highWord == 0) {
		difference = ((int64_t)(big->get(--bigIndex) & (uint64_t)BigInteger::LONG_MASK)) - val;
		result->set(bigIndex, (int32_t)difference);
	} else {
		difference = ((int64_t)(big->get(--bigIndex) & (uint64_t)BigInteger::LONG_MASK)) - ((int64_t)(val & (uint64_t)BigInteger::LONG_MASK));
		result->set(bigIndex, (int32_t)difference);
		difference = ((int64_t)(big->get(--bigIndex) & (uint64_t)BigInteger::LONG_MASK)) - ((int64_t)(highWord & (uint64_t)BigInteger::LONG_MASK)) + (difference >> 32);
		result->set(bigIndex, (int32_t)difference);
	}
	bool borrow = (difference >> 32 != 0);
	while (bigIndex > 0 && borrow) {
		int32_t var$0 = --bigIndex;
		borrow = ((result->set(var$0, big->get(bigIndex) - 1)) == -1);
	}
	while (bigIndex > 0) {
		int32_t var$1 = --bigIndex;
		result->set(var$1, big->get(bigIndex));
	}
	return result;
}

BigInteger* BigInteger::subtract(BigInteger* val) {
	$useLocalCurrentObjectStackCache();
	if ($nc(val)->signum$ == 0) {
		return this;
	}
	if (this->signum$ == 0) {
		return $nc(val)->negate();
	}
	if ($nc(val)->signum$ != this->signum$) {
		return $new(BigInteger, $(add(this->mag, val->mag)), this->signum$);
	}
	int32_t cmp = compareMagnitude(val);
	if (cmp == 0) {
		return BigInteger::ZERO;
	}
	$var($ints, resultMag, cmp > 0 ? subtract(this->mag, $nc(val)->mag) : subtract($nc(val)->mag, this->mag));
	$assign(resultMag, trustedStripLeadingZeroInts(resultMag));
	return $new(BigInteger, resultMag, cmp == this->signum$ ? 1 : -1);
}

$ints* BigInteger::subtract($ints* big, $ints* little) {
	$init(BigInteger);
	int32_t bigIndex = $nc(big)->length;
	$var($ints, result, $new($ints, bigIndex));
	int32_t littleIndex = $nc(little)->length;
	int64_t difference = 0;
	while (littleIndex > 0) {
		difference = ((int64_t)(big->get(--bigIndex) & (uint64_t)BigInteger::LONG_MASK)) - ((int64_t)(little->get(--littleIndex) & (uint64_t)BigInteger::LONG_MASK)) + (difference >> 32);
		result->set(bigIndex, (int32_t)difference);
	}
	bool borrow = (difference >> 32 != 0);
	while (bigIndex > 0 && borrow) {
		int32_t var$0 = --bigIndex;
		borrow = ((result->set(var$0, big->get(bigIndex) - 1)) == -1);
	}
	while (bigIndex > 0) {
		int32_t var$1 = --bigIndex;
		result->set(var$1, big->get(bigIndex));
	}
	return result;
}

BigInteger* BigInteger::multiply(BigInteger* val) {
	return multiply(val, false);
}

BigInteger* BigInteger::multiply(BigInteger* val, bool isRecursion) {
	if ($nc(val)->signum$ == 0 || this->signum$ == 0) {
		return BigInteger::ZERO;
	}
	int32_t xlen = $nc(this->mag)->length;
	if (val == this && xlen > BigInteger::MULTIPLY_SQUARE_THRESHOLD) {
		return square();
	}
	int32_t ylen = $nc($nc(val)->mag)->length;
	if ((xlen < BigInteger::KARATSUBA_THRESHOLD) || (ylen < BigInteger::KARATSUBA_THRESHOLD)) {
		int32_t resultSign = this->signum$ == val->signum$ ? 1 : -1;
		if ($nc(val->mag)->length == 1) {
			return multiplyByInt(this->mag, $nc(val->mag)->get(0), resultSign);
		}
		if ($nc(this->mag)->length == 1) {
			return multiplyByInt(val->mag, $nc(this->mag)->get(0), resultSign);
		}
		$var($ints, result, multiplyToLen(this->mag, xlen, val->mag, ylen, nullptr));
		$assign(result, trustedStripLeadingZeroInts(result));
		return $new(BigInteger, result, resultSign);
	} else if ((xlen < BigInteger::TOOM_COOK_THRESHOLD) && (ylen < BigInteger::TOOM_COOK_THRESHOLD)) {
		return multiplyKaratsuba(this, val);
	} else {
		if (!isRecursion) {
			int32_t var$0 = bitLength(this->mag, $nc(this->mag)->length);
			if (var$0 + bitLength(val->mag, $nc(val->mag)->length) > (int64_t)32 * BigInteger::MAX_MAG_LENGTH) {
				reportOverflow();
			}
		}
		return multiplyToomCook3(this, val);
	}
}

BigInteger* BigInteger::multiplyByInt($ints* x, int32_t y, int32_t sign) {
	$init(BigInteger);
	$useLocalCurrentObjectStackCache();
	if ($Integer::bitCount(y) == 1) {
		return $new(BigInteger, $(shiftLeft(x, $Integer::numberOfTrailingZeros(y))), sign);
	}
	int32_t xlen = $nc(x)->length;
	$var($ints, rmag, $new($ints, xlen + 1));
	int64_t carry = 0;
	int64_t yl = (int64_t)(y & (uint64_t)BigInteger::LONG_MASK);
	int32_t rstart = rmag->length - 1;
	for (int32_t i = xlen - 1; i >= 0; --i) {
		int64_t product = ((int64_t)(x->get(i) & (uint64_t)BigInteger::LONG_MASK)) * yl + carry;
		rmag->set(rstart--, (int32_t)product);
		carry = (int64_t)((uint64_t)product >> 32);
	}
	if (carry == (int64_t)0) {
		$assign(rmag, $Arrays::copyOfRange(rmag, 1, rmag->length));
	} else {
		rmag->set(rstart, (int32_t)carry);
	}
	return $new(BigInteger, rmag, sign);
}

BigInteger* BigInteger::multiply(int64_t v) {
	$useLocalCurrentObjectStackCache();
	if (v == 0 || this->signum$ == 0) {
		return BigInteger::ZERO;
	}
	if (v == $BigDecimal::INFLATED) {
		return multiply($(BigInteger::valueOf(v)));
	}
	int32_t rsign = (v > 0 ? this->signum$ : -this->signum$);
	if (v < 0) {
		v = -v;
	}
	int64_t dh = (int64_t)((uint64_t)v >> 32);
	int64_t dl = (int64_t)(v & (uint64_t)BigInteger::LONG_MASK);
	int32_t xlen = $nc(this->mag)->length;
	$var($ints, value, this->mag);
	$var($ints, rmag, (dh == (int64_t)0) ? ($new($ints, xlen + 1)) : ($new($ints, xlen + 2)));
	int64_t carry = 0;
	int32_t rstart = $nc(rmag)->length - 1;
	for (int32_t i = xlen - 1; i >= 0; --i) {
		int64_t product = ((int64_t)($nc(value)->get(i) & (uint64_t)BigInteger::LONG_MASK)) * dl + carry;
		rmag->set(rstart--, (int32_t)product);
		carry = (int64_t)((uint64_t)product >> 32);
	}
	rmag->set(rstart, (int32_t)carry);
	if (dh != (int64_t)0) {
		carry = 0;
		rstart = rmag->length - 2;
		for (int32_t i = xlen - 1; i >= 0; --i) {
			int64_t product = ((int64_t)($nc(value)->get(i) & (uint64_t)BigInteger::LONG_MASK)) * dh + ((int64_t)(rmag->get(rstart) & (uint64_t)BigInteger::LONG_MASK)) + carry;
			rmag->set(rstart--, (int32_t)product);
			carry = (int64_t)((uint64_t)product >> 32);
		}
		rmag->set(0, (int32_t)carry);
	}
	if (carry == (int64_t)0) {
		$assign(rmag, $Arrays::copyOfRange(rmag, 1, rmag->length));
	}
	return $new(BigInteger, rmag, rsign);
}

$ints* BigInteger::multiplyToLen($ints* x, int32_t xlen, $ints* y, int32_t ylen, $ints* z) {
	$init(BigInteger);
	multiplyToLenCheck(x, xlen);
	multiplyToLenCheck(y, ylen);
	return implMultiplyToLen(x, xlen, y, ylen, z);
}

$ints* BigInteger::implMultiplyToLen($ints* x, int32_t xlen, $ints* y, int32_t ylen, $ints* z$renamed) {
	$init(BigInteger);
	$var($ints, z, z$renamed);
	int32_t xstart = xlen - 1;
	int32_t ystart = ylen - 1;
	if (z == nullptr || $nc(z)->length < (xlen + ylen)) {
		$assign(z, $new($ints, xlen + ylen));
	}
	int64_t carry = 0;
	{
		int32_t j = ystart;
		int32_t k = ystart + 1 + xstart;
		for (; j >= 0; --j, --k) {
			int64_t product = ((int64_t)($nc(y)->get(j) & (uint64_t)BigInteger::LONG_MASK)) * ((int64_t)($nc(x)->get(xstart) & (uint64_t)BigInteger::LONG_MASK)) + carry;
			$nc(z)->set(k, (int32_t)product);
			carry = (int64_t)((uint64_t)product >> 32);
		}
	}
	$nc(z)->set(xstart, (int32_t)carry);
	for (int32_t i = xstart - 1; i >= 0; --i) {
		carry = 0;
		{
			int32_t j = ystart;
			int32_t k = ystart + 1 + i;
			for (; j >= 0; --j, --k) {
				int64_t product = ((int64_t)($nc(y)->get(j) & (uint64_t)BigInteger::LONG_MASK)) * ((int64_t)($nc(x)->get(i) & (uint64_t)BigInteger::LONG_MASK)) + ((int64_t)(z->get(k) & (uint64_t)BigInteger::LONG_MASK)) + carry;
				z->set(k, (int32_t)product);
				carry = (int64_t)((uint64_t)product >> 32);
			}
		}
		z->set(i, (int32_t)carry);
	}
	return z;
}

void BigInteger::multiplyToLenCheck($ints* array, int32_t length) {
	$init(BigInteger);
	if (length <= 0) {
		return;
	}
	$Objects::requireNonNull(array);
	if (length > array->length) {
		$throwNew($ArrayIndexOutOfBoundsException, length - 1);
	}
}

BigInteger* BigInteger::multiplyKaratsuba(BigInteger* x, BigInteger* y) {
	$init(BigInteger);
	$useLocalCurrentObjectStackCache();
	int32_t xlen = $nc($nc(x)->mag)->length;
	int32_t ylen = $nc($nc(y)->mag)->length;
	int32_t half = ($Math::max(xlen, ylen) + 1) / 2;
	$var(BigInteger, xl, x->getLower(half));
	$var(BigInteger, xh, x->getUpper(half));
	$var(BigInteger, yl, y->getLower(half));
	$var(BigInteger, yh, y->getUpper(half));
	$var(BigInteger, p1, $nc(xh)->multiply(yh));
	$var(BigInteger, p2, $nc(xl)->multiply(yl));
	$var(BigInteger, p3, $nc($(xh->add(xl)))->multiply($($nc(yh)->add(yl))));
	$var(BigInteger, result, $nc($($nc($($nc($($nc(p1)->shiftLeft(32 * half)))->add($($nc($($nc(p3)->subtract(p1)))->subtract(p2)))))->shiftLeft(32 * half)))->add(p2));
	if (x->signum$ != y->signum$) {
		return $nc(result)->negate();
	} else {
		return result;
	}
}

BigInteger* BigInteger::multiplyToomCook3(BigInteger* a, BigInteger* b) {
	$init(BigInteger);
	$useLocalCurrentObjectStackCache();
	int32_t alen = $nc($nc(a)->mag)->length;
	int32_t blen = $nc($nc(b)->mag)->length;
	int32_t largest = $Math::max(alen, blen);
	int32_t k = (largest + 2) / 3;
	int32_t r = largest - 2 * k;
	$var(BigInteger, a0, nullptr);
	$var(BigInteger, a1, nullptr);
	$var(BigInteger, a2, nullptr);
	$var(BigInteger, b0, nullptr);
	$var(BigInteger, b1, nullptr);
	$var(BigInteger, b2, nullptr);
	$assign(a2, a->getToomSlice(k, r, 0, largest));
	$assign(a1, a->getToomSlice(k, r, 1, largest));
	$assign(a0, a->getToomSlice(k, r, 2, largest));
	$assign(b2, b->getToomSlice(k, r, 0, largest));
	$assign(b1, b->getToomSlice(k, r, 1, largest));
	$assign(b0, b->getToomSlice(k, r, 2, largest));
	$var(BigInteger, v0, nullptr);
	$var(BigInteger, v1, nullptr);
	$var(BigInteger, v2, nullptr);
	$var(BigInteger, vm1, nullptr);
	$var(BigInteger, vinf, nullptr);
	$var(BigInteger, t1, nullptr);
	$var(BigInteger, t2, nullptr);
	$var(BigInteger, tm1, nullptr);
	$var(BigInteger, da1, nullptr);
	$var(BigInteger, db1, nullptr);
	$assign(v0, $nc(a0)->multiply(b0, true));
	$assign(da1, $nc(a2)->add(a0));
	$assign(db1, $nc(b2)->add(b0));
	$assign(vm1, $nc($($nc(da1)->subtract(a1)))->multiply($($nc(db1)->subtract(b1)), true));
	$assign(da1, da1->add(a1));
	$assign(db1, $nc(db1)->add(b1));
	$assign(v1, da1->multiply(db1, true));
	$assign(v2, $nc($($nc($($nc($(da1->add(a2)))->shiftLeft(1)))->subtract(a0)))->multiply($($nc($($nc($(db1->add(b2)))->shiftLeft(1)))->subtract(b0)), true));
	$assign(vinf, a2->multiply(b2, true));
	$assign(t2, $nc($($nc(v2)->subtract(vm1)))->exactDivideBy3());
	$assign(tm1, $nc($($nc(v1)->subtract(vm1)))->shiftRight(1));
	$assign(t1, v1->subtract(v0));
	$assign(t2, $nc($($nc(t2)->subtract(t1)))->shiftRight(1));
	$assign(t1, $nc($($nc(t1)->subtract(tm1)))->subtract(vinf));
	$assign(t2, t2->subtract($($nc(vinf)->shiftLeft(1))));
	$assign(tm1, $nc(tm1)->subtract(t2));
	int32_t ss = k * 32;
	$var(BigInteger, result, $nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc(vinf)->shiftLeft(ss)))->add(t2)))->shiftLeft(ss)))->add(t1)))->shiftLeft(ss)))->add(tm1)))->shiftLeft(ss)))->add(v0));
	if (a->signum$ != b->signum$) {
		return $nc(result)->negate();
	} else {
		return result;
	}
}

BigInteger* BigInteger::getToomSlice(int32_t lowerSize, int32_t upperSize, int32_t slice, int32_t fullsize) {
	$useLocalCurrentObjectStackCache();
	int32_t start = 0;
	int32_t end = 0;
	int32_t sliceSize = 0;
	int32_t len = 0;
	int32_t offset = 0;
	len = $nc(this->mag)->length;
	offset = fullsize - len;
	if (slice == 0) {
		start = 0 - offset;
		end = upperSize - 1 - offset;
	} else {
		start = upperSize + (slice - 1) * lowerSize - offset;
		end = start + lowerSize - 1;
	}
	if (start < 0) {
		start = 0;
	}
	if (end < 0) {
		return BigInteger::ZERO;
	}
	sliceSize = (end - start) + 1;
	if (sliceSize <= 0) {
		return BigInteger::ZERO;
	}
	if (start == 0 && sliceSize >= len) {
		return this->abs();
	}
	$var($ints, intSlice, $new($ints, sliceSize));
	$System::arraycopy(this->mag, start, intSlice, 0, sliceSize);
	return $new(BigInteger, $(trustedStripLeadingZeroInts(intSlice)), 1);
}

BigInteger* BigInteger::exactDivideBy3() {
	int32_t len = $nc(this->mag)->length;
	$var($ints, result, $new($ints, len));
	int64_t x = 0;
	int64_t w = 0;
	int64_t q = 0;
	int64_t borrow = 0;
	borrow = 0;
	for (int32_t i = len - 1; i >= 0; --i) {
		x = ((int64_t)($nc(this->mag)->get(i) & (uint64_t)BigInteger::LONG_MASK));
		w = x - borrow;
		if (borrow > x) {
			borrow = 1;
		} else {
			borrow = 0;
		}
		q = (int64_t)((w * (int64_t)0x00000000AAAAAAAB) & (uint64_t)BigInteger::LONG_MASK);
		result->set(i, (int32_t)q);
		if (q >= (int64_t)1431655766) {
			++borrow;
			if (q >= (int64_t)0x00000000AAAAAAAB) {
				++borrow;
			}
		}
	}
	$assign(result, trustedStripLeadingZeroInts(result));
	return $new(BigInteger, result, this->signum$);
}

BigInteger* BigInteger::getLower(int32_t n) {
	$useLocalCurrentObjectStackCache();
	int32_t len = $nc(this->mag)->length;
	if (len <= n) {
		return abs();
	}
	$var($ints, lowerInts, $new($ints, n));
	$System::arraycopy(this->mag, len - n, lowerInts, 0, n);
	return $new(BigInteger, $(trustedStripLeadingZeroInts(lowerInts)), 1);
}

BigInteger* BigInteger::getUpper(int32_t n) {
	$useLocalCurrentObjectStackCache();
	int32_t len = $nc(this->mag)->length;
	if (len <= n) {
		return BigInteger::ZERO;
	}
	int32_t upperLen = len - n;
	$var($ints, upperInts, $new($ints, upperLen));
	$System::arraycopy(this->mag, 0, upperInts, 0, upperLen);
	return $new(BigInteger, $(trustedStripLeadingZeroInts(upperInts)), 1);
}

BigInteger* BigInteger::square() {
	return square(false);
}

BigInteger* BigInteger::square(bool isRecursion) {
	$useLocalCurrentObjectStackCache();
	if (this->signum$ == 0) {
		return BigInteger::ZERO;
	}
	int32_t len = $nc(this->mag)->length;
	if (len < BigInteger::KARATSUBA_SQUARE_THRESHOLD) {
		$var($ints, z, squareToLen(this->mag, len, nullptr));
		return $new(BigInteger, $(trustedStripLeadingZeroInts(z)), 1);
	} else if (len < BigInteger::TOOM_COOK_SQUARE_THRESHOLD) {
		return squareKaratsuba();
	} else {
		if (!isRecursion) {
			if (bitLength(this->mag, $nc(this->mag)->length) > (int64_t)16 * BigInteger::MAX_MAG_LENGTH) {
				reportOverflow();
			}
		}
		return squareToomCook3();
	}
}

$ints* BigInteger::squareToLen($ints* x, int32_t len, $ints* z$renamed) {
	$init(BigInteger);
	$var($ints, z, z$renamed);
	int32_t zlen = len << 1;
	if (z == nullptr || $nc(z)->length < zlen) {
		$assign(z, $new($ints, zlen));
	}
	implSquareToLenChecks(x, len, z, zlen);
	return implSquareToLen(x, len, z, zlen);
}

void BigInteger::implSquareToLenChecks($ints* x, int32_t len, $ints* z, int32_t zlen) {
	$init(BigInteger);
	$useLocalCurrentObjectStackCache();
	if (len < 1) {
		$throwNew($IllegalArgumentException, $$str({"invalid input length: "_s, $$str(len)}));
	}
	if (len > $nc(x)->length) {
		$throwNew($IllegalArgumentException, $$str({"input length out of bound: "_s, $$str(len), " > "_s, $$str(x->length)}));
	}
	if (len * 2 > $nc(z)->length) {
		$throwNew($IllegalArgumentException, $$str({"input length out of bound: "_s, $$str((len * 2)), " > "_s, $$str(z->length)}));
	}
	if (zlen < 1) {
		$throwNew($IllegalArgumentException, $$str({"invalid input length: "_s, $$str(zlen)}));
	}
	if (zlen > $nc(z)->length) {
		$throwNew($IllegalArgumentException, $$str({"input length out of bound: "_s, $$str(len), " > "_s, $$str(z->length)}));
	}
}

$ints* BigInteger::implSquareToLen($ints* x, int32_t len, $ints* z, int32_t zlen) {
	$init(BigInteger);
	int32_t lastProductLowWord = 0;
	{
		int32_t j = 0;
		int32_t i = 0;
		for (; j < len; ++j) {
			int64_t piece = ((int64_t)($nc(x)->get(j) & (uint64_t)BigInteger::LONG_MASK));
			int64_t product = piece * piece;
			$nc(z)->set(i++, (lastProductLowWord << 31) | (int32_t)((int64_t)((uint64_t)product >> 33)));
			z->set(i++, (int32_t)((int64_t)((uint64_t)product >> 1)));
			lastProductLowWord = (int32_t)product;
		}
	}
	{
		int32_t i = len;
		int32_t offset = 1;
		for (; i > 0; --i, offset += 2) {
			int32_t t = $nc(x)->get(i - 1);
			t = mulAdd(z, x, offset, i - 1, t);
			addOne(z, offset - 1, i, t);
		}
	}
	primitiveLeftShift(z, zlen, 1);
	(*$nc(z))[zlen - 1] |= (int32_t)($nc(x)->get(len - 1) & (uint32_t)1);
	return z;
}

BigInteger* BigInteger::squareKaratsuba() {
	$useLocalCurrentObjectStackCache();
	int32_t half = ($nc(this->mag)->length + 1) / 2;
	$var(BigInteger, xl, getLower(half));
	$var(BigInteger, xh, getUpper(half));
	$var(BigInteger, xhs, $nc(xh)->square());
	$var(BigInteger, xls, $nc(xl)->square());
	return $nc($($nc($($nc($($nc(xhs)->shiftLeft(half * 32)))->add($($nc($($nc($(xl->add(xh)))->square()))->subtract($(xhs->add(xls)))))))->shiftLeft(half * 32)))->add(xls);
}

BigInteger* BigInteger::squareToomCook3() {
	$useLocalCurrentObjectStackCache();
	int32_t len = $nc(this->mag)->length;
	int32_t k = (len + 2) / 3;
	int32_t r = len - 2 * k;
	$var(BigInteger, a0, nullptr);
	$var(BigInteger, a1, nullptr);
	$var(BigInteger, a2, nullptr);
	$assign(a2, getToomSlice(k, r, 0, len));
	$assign(a1, getToomSlice(k, r, 1, len));
	$assign(a0, getToomSlice(k, r, 2, len));
	$var(BigInteger, v0, nullptr);
	$var(BigInteger, v1, nullptr);
	$var(BigInteger, v2, nullptr);
	$var(BigInteger, vm1, nullptr);
	$var(BigInteger, vinf, nullptr);
	$var(BigInteger, t1, nullptr);
	$var(BigInteger, t2, nullptr);
	$var(BigInteger, tm1, nullptr);
	$var(BigInteger, da1, nullptr);
	$assign(v0, $nc(a0)->square(true));
	$assign(da1, $nc(a2)->add(a0));
	$assign(vm1, $nc($($nc(da1)->subtract(a1)))->square(true));
	$assign(da1, da1->add(a1));
	$assign(v1, da1->square(true));
	$assign(vinf, a2->square(true));
	$assign(v2, $nc($($nc($($nc($(da1->add(a2)))->shiftLeft(1)))->subtract(a0)))->square(true));
	$assign(t2, $nc($($nc(v2)->subtract(vm1)))->exactDivideBy3());
	$assign(tm1, $nc($($nc(v1)->subtract(vm1)))->shiftRight(1));
	$assign(t1, v1->subtract(v0));
	$assign(t2, $nc($($nc(t2)->subtract(t1)))->shiftRight(1));
	$assign(t1, $nc($($nc(t1)->subtract(tm1)))->subtract(vinf));
	$assign(t2, t2->subtract($($nc(vinf)->shiftLeft(1))));
	$assign(tm1, $nc(tm1)->subtract(t2));
	int32_t ss = k * 32;
	return $nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc(vinf)->shiftLeft(ss)))->add(t2)))->shiftLeft(ss)))->add(t1)))->shiftLeft(ss)))->add(tm1)))->shiftLeft(ss)))->add(v0);
}

BigInteger* BigInteger::divide(BigInteger* val) {
	if ($nc($nc(val)->mag)->length < BigInteger::BURNIKEL_ZIEGLER_THRESHOLD || $nc(this->mag)->length - $nc($nc(val)->mag)->length < BigInteger::BURNIKEL_ZIEGLER_OFFSET) {
		return divideKnuth(val);
	} else {
		return divideBurnikelZiegler(val);
	}
}

BigInteger* BigInteger::divideKnuth(BigInteger* val) {
	$useLocalCurrentObjectStackCache();
	$var($MutableBigInteger, q, $new($MutableBigInteger));
	$var($MutableBigInteger, a, $new($MutableBigInteger, this->mag));
	$var($MutableBigInteger, b, $new($MutableBigInteger, $nc(val)->mag));
	a->divideKnuth(b, q, false);
	return q->toBigInteger(this->signum$ * $nc(val)->signum$);
}

$BigIntegerArray* BigInteger::divideAndRemainder(BigInteger* val) {
	if ($nc($nc(val)->mag)->length < BigInteger::BURNIKEL_ZIEGLER_THRESHOLD || $nc(this->mag)->length - $nc($nc(val)->mag)->length < BigInteger::BURNIKEL_ZIEGLER_OFFSET) {
		return divideAndRemainderKnuth(val);
	} else {
		return divideAndRemainderBurnikelZiegler(val);
	}
}

$BigIntegerArray* BigInteger::divideAndRemainderKnuth(BigInteger* val) {
	$useLocalCurrentObjectStackCache();
	$var($BigIntegerArray, result, $new($BigIntegerArray, 2));
	$var($MutableBigInteger, q, $new($MutableBigInteger));
	$var($MutableBigInteger, a, $new($MutableBigInteger, this->mag));
	$var($MutableBigInteger, b, $new($MutableBigInteger, $nc(val)->mag));
	$var($MutableBigInteger, r, a->divideKnuth(b, q));
	result->set(0, $(q->toBigInteger(this->signum$ == $nc(val)->signum$ ? 1 : -1)));
	result->set(1, $($nc(r)->toBigInteger(this->signum$)));
	return result;
}

BigInteger* BigInteger::remainder(BigInteger* val) {
	if ($nc($nc(val)->mag)->length < BigInteger::BURNIKEL_ZIEGLER_THRESHOLD || $nc(this->mag)->length - $nc($nc(val)->mag)->length < BigInteger::BURNIKEL_ZIEGLER_OFFSET) {
		return remainderKnuth(val);
	} else {
		return remainderBurnikelZiegler(val);
	}
}

BigInteger* BigInteger::remainderKnuth(BigInteger* val) {
	$useLocalCurrentObjectStackCache();
	$var($MutableBigInteger, q, $new($MutableBigInteger));
	$var($MutableBigInteger, a, $new($MutableBigInteger, this->mag));
	$var($MutableBigInteger, b, $new($MutableBigInteger, $nc(val)->mag));
	return $nc($(a->divideKnuth(b, q)))->toBigInteger(this->signum$);
}

BigInteger* BigInteger::divideBurnikelZiegler(BigInteger* val) {
	return $nc($(divideAndRemainderBurnikelZiegler(val)))->get(0);
}

BigInteger* BigInteger::remainderBurnikelZiegler(BigInteger* val) {
	return $nc($(divideAndRemainderBurnikelZiegler(val)))->get(1);
}

$BigIntegerArray* BigInteger::divideAndRemainderBurnikelZiegler(BigInteger* val) {
	$useLocalCurrentObjectStackCache();
	$var($MutableBigInteger, q, $new($MutableBigInteger));
	$var($MutableBigInteger, r, $$new($MutableBigInteger, this)->divideAndRemainderBurnikelZiegler($$new($MutableBigInteger, val), q));
	$var(BigInteger, qBigInt, q->isZero() ? BigInteger::ZERO : q->toBigInteger(this->signum$ * $nc(val)->signum$));
	$var(BigInteger, rBigInt, $nc(r)->isZero() ? BigInteger::ZERO : $nc(r)->toBigInteger(this->signum$));
	return $new($BigIntegerArray, {
		qBigInt,
		rBigInt
	});
}

BigInteger* BigInteger::pow(int32_t exponent) {
	$useLocalCurrentObjectStackCache();
	if (exponent < 0) {
		$throwNew($ArithmeticException, "Negative exponent"_s);
	}
	if (this->signum$ == 0) {
		return (exponent == 0 ? BigInteger::ONE : this);
	}
	$var(BigInteger, partToSquare, this->abs());
	int32_t powersOfTwo = $nc(partToSquare)->getLowestSetBit();
	int64_t bitsToShiftLong = (int64_t)powersOfTwo * exponent;
	if (bitsToShiftLong > $Integer::MAX_VALUE) {
		reportOverflow();
	}
	int32_t bitsToShift = (int32_t)bitsToShiftLong;
	int32_t remainingBits = 0;
	if (powersOfTwo > 0) {
		$assign(partToSquare, partToSquare->shiftRight(powersOfTwo));
		remainingBits = $nc(partToSquare)->bitLength();
		if (remainingBits == 1) {
			if (this->signum$ < 0 && ((int32_t)(exponent & (uint32_t)1)) == 1) {
				return $nc(BigInteger::NEGATIVE_ONE)->shiftLeft(bitsToShift);
			} else {
				return $nc(BigInteger::ONE)->shiftLeft(bitsToShift);
			}
		}
	} else {
		remainingBits = partToSquare->bitLength();
		if (remainingBits == 1) {
			if (this->signum$ < 0 && ((int32_t)(exponent & (uint32_t)1)) == 1) {
				return BigInteger::NEGATIVE_ONE;
			} else {
				return BigInteger::ONE;
			}
		}
	}
	int64_t scaleFactor = (int64_t)remainingBits * exponent;
	if ($nc(partToSquare->mag)->length == 1 && scaleFactor <= 62) {
		int32_t newSign = (this->signum$ < 0 && ((int32_t)(exponent & (uint32_t)1)) == 1 ? -1 : 1);
		int64_t result = 1;
		int64_t baseToPow2 = (int64_t)($nc(partToSquare->mag)->get(0) & (uint64_t)BigInteger::LONG_MASK);
		int32_t workingExponent = exponent;
		while (workingExponent != 0) {
			if (((int32_t)(workingExponent & (uint32_t)1)) == 1) {
				result = result * baseToPow2;
			}
			if (($usrAssign(workingExponent, 1)) != 0) {
				baseToPow2 = baseToPow2 * baseToPow2;
			}
		}
		if (powersOfTwo > 0) {
			if (bitsToShift + scaleFactor <= 62) {
				return valueOf(($sl(result, bitsToShift)) * newSign);
			} else {
				return $nc($(valueOf(result * newSign)))->shiftLeft(bitsToShift);
			}
		} else {
			return valueOf(result * newSign);
		}
	} else {
		if ($div((int64_t)bitLength() * exponent, $Integer::SIZE) > BigInteger::MAX_MAG_LENGTH) {
			reportOverflow();
		}
		$var(BigInteger, answer, BigInteger::ONE);
		int32_t workingExponent = exponent;
		while (workingExponent != 0) {
			if (((int32_t)(workingExponent & (uint32_t)1)) == 1) {
				$assign(answer, $nc(answer)->multiply(partToSquare));
			}
			if (($usrAssign(workingExponent, 1)) != 0) {
				$assign(partToSquare, $nc(partToSquare)->square());
			}
		}
		if (powersOfTwo > 0) {
			$assign(answer, $nc(answer)->shiftLeft(bitsToShift));
		}
		if (this->signum$ < 0 && ((int32_t)(exponent & (uint32_t)1)) == 1) {
			return $nc(answer)->negate();
		} else {
			return answer;
		}
	}
}

BigInteger* BigInteger::sqrt() {
	$useLocalCurrentObjectStackCache();
	if (this->signum$ < 0) {
		$throwNew($ArithmeticException, "Negative BigInteger"_s);
	}
	return $nc($($$new($MutableBigInteger, this->mag)->sqrt()))->toBigInteger();
}

$BigIntegerArray* BigInteger::sqrtAndRemainder() {
	$useLocalCurrentObjectStackCache();
	$var(BigInteger, s, sqrt());
	$var(BigInteger, r, this->subtract($($nc(s)->square())));
	if (!BigInteger::$assertionsDisabled && !($nc(r)->compareTo(BigInteger::ZERO) >= 0)) {
		$throwNew($AssertionError);
	}
	return $new($BigIntegerArray, {
		s,
		r
	});
}

BigInteger* BigInteger::gcd(BigInteger* val) {
	$useLocalCurrentObjectStackCache();
	if ($nc(val)->signum$ == 0) {
		return this->abs();
	} else if (this->signum$ == 0) {
		return val->abs();
	}
	$var($MutableBigInteger, a, $new($MutableBigInteger, this));
	$var($MutableBigInteger, b, $new($MutableBigInteger, val));
	$var($MutableBigInteger, result, a->hybridGCD(b));
	return $nc(result)->toBigInteger(1);
}

int32_t BigInteger::bitLengthForInt(int32_t n) {
	$init(BigInteger);
	return 32 - $Integer::numberOfLeadingZeros(n);
}

$ints* BigInteger::leftShift($ints* a, int32_t len, int32_t n) {
	$init(BigInteger);
	$useLocalCurrentObjectStackCache();
	int32_t nInts = (int32_t)((uint32_t)n >> 5);
	int32_t nBits = (int32_t)(n & (uint32_t)31);
	int32_t bitsInHighWord = bitLengthForInt($nc(a)->get(0));
	if (n <= (32 - bitsInHighWord)) {
		primitiveLeftShift(a, len, nBits);
		return a;
	} else if (nBits <= (32 - bitsInHighWord)) {
		$var($ints, result, $new($ints, nInts + len));
		$System::arraycopy(a, 0, result, 0, len);
		primitiveLeftShift(result, result->length, nBits);
		return result;
	} else {
		$var($ints, result, $new($ints, nInts + len + 1));
		$System::arraycopy(a, 0, result, 0, len);
		primitiveRightShift(result, result->length, 32 - nBits);
		return result;
	}
}

void BigInteger::primitiveRightShift($ints* a, int32_t len, int32_t n) {
	$init(BigInteger);
	$Objects::checkFromToIndex(0, len, $nc(a)->length);
	shiftRightImplWorker(a, a, 1, n, len - 1);
	$usrAssign((*$nc(a))[0], n);
}

void BigInteger::primitiveLeftShift($ints* a, int32_t len, int32_t n) {
	$init(BigInteger);
	if (len == 0 || n == 0) {
		return;
	}
	$Objects::checkFromToIndex(0, len, $nc(a)->length);
	shiftLeftImplWorker(a, a, 0, n, len - 1);
	(*$nc(a))[len - 1] <<= n;
}

int32_t BigInteger::bitLength($ints* val, int32_t len) {
	$init(BigInteger);
	if (len == 0) {
		return 0;
	}
	return ((len - 1) << 5) + bitLengthForInt($nc(val)->get(0));
}

BigInteger* BigInteger::abs() {
	return (this->signum$ >= 0 ? this : this->negate());
}

BigInteger* BigInteger::negate() {
	return $new(BigInteger, this->mag, -this->signum$);
}

int32_t BigInteger::signum() {
	return this->signum$;
}

BigInteger* BigInteger::mod(BigInteger* m) {
	if ($nc(m)->signum$ <= 0) {
		$throwNew($ArithmeticException, "BigInteger: modulus not positive"_s);
	}
	$var(BigInteger, result, this->remainder(m));
	return ($nc(result)->signum$ >= 0 ? result : $nc(result)->add(m));
}

BigInteger* BigInteger::modPow(BigInteger* exponent$renamed, BigInteger* m) {
	$useLocalCurrentObjectStackCache();
	$var(BigInteger, exponent, exponent$renamed);
	if ($nc(m)->signum$ <= 0) {
		$throwNew($ArithmeticException, "BigInteger: modulus not positive"_s);
	}
	if ($nc(exponent)->signum$ == 0) {
		return ($nc(m)->equals(BigInteger::ONE) ? BigInteger::ZERO : BigInteger::ONE);
	}
	if (this->equals(BigInteger::ONE)) {
		return ($nc(m)->equals(BigInteger::ONE) ? BigInteger::ZERO : BigInteger::ONE);
	}
	if (this->equals(BigInteger::ZERO) && $nc(exponent)->signum$ >= 0) {
		return BigInteger::ZERO;
	}
	bool var$0 = this->equals($nc(BigInteger::negConst)->get(1));
	if (var$0 && (!$nc(exponent)->testBit(0))) {
		return ($nc(m)->equals(BigInteger::ONE) ? BigInteger::ZERO : BigInteger::ONE);
	}
	bool invertResult = false;
	if (invertResult = ($nc(exponent)->signum$ < 0)) {
		$assign(exponent, exponent->negate());
	}
	$var(BigInteger, base, this->signum$ < 0 || this->compareTo(m) >= 0 ? this->mod(m) : this);
	$var(BigInteger, result, nullptr);
	if ($nc(m)->testBit(0)) {
		$assign(result, $nc(base)->oddModPow(exponent, m));
	} else {
		int32_t p = m->getLowestSetBit();
		$var(BigInteger, m1, m->shiftRight(p));
		$var(BigInteger, m2, $nc(BigInteger::ONE)->shiftLeft(p));
		$var(BigInteger, base2, this->signum$ < 0 || this->compareTo(m1) >= 0 ? this->mod(m1) : this);
		$var(BigInteger, a1, $nc(m1)->equals(BigInteger::ONE) ? BigInteger::ZERO : $nc(base2)->oddModPow(exponent, m1));
		$var(BigInteger, a2, $nc(base)->modPow2(exponent, p));
		$var(BigInteger, y1, $nc(m2)->modInverse(m1));
		$var(BigInteger, y2, $nc(m1)->modInverse(m2));
		if ($nc(m->mag)->length < BigInteger::MAX_MAG_LENGTH / 2) {
			$assign(result, $nc($($nc($($nc($($nc(a1)->multiply(m2)))->multiply(y1)))->add($($nc($($nc(a2)->multiply(m1)))->multiply(y2)))))->mod(m));
		} else {
			$var($MutableBigInteger, t1, $new($MutableBigInteger));
			$$new($MutableBigInteger, $($nc(a1)->multiply(m2)))->multiply($$new($MutableBigInteger, y1), t1);
			$var($MutableBigInteger, t2, $new($MutableBigInteger));
			$$new($MutableBigInteger, $($nc(a2)->multiply(m1)))->multiply($$new($MutableBigInteger, y2), t2);
			t1->add(t2);
			$var($MutableBigInteger, q, $new($MutableBigInteger));
			$assign(result, $nc($(t1->divide($$new($MutableBigInteger, m), q)))->toBigInteger());
		}
	}
	return (invertResult ? $nc(result)->modInverse(m) : result);
}

$ints* BigInteger::montgomeryMultiply($ints* a, $ints* b, $ints* n, int32_t len, int64_t inv, $ints* product$renamed) {
	$init(BigInteger);
	$useLocalCurrentObjectStackCache();
	$var($ints, product, product$renamed);
	implMontgomeryMultiplyChecks(a, b, n, len, product);
	if (len > BigInteger::MONTGOMERY_INTRINSIC_THRESHOLD) {
		$assign(product, multiplyToLen(a, len, b, len, product));
		return montReduce(product, n, len, (int32_t)inv);
	} else {
		return implMontgomeryMultiply(a, b, n, len, inv, $(materialize(product, len)));
	}
}

$ints* BigInteger::montgomerySquare($ints* a, $ints* n, int32_t len, int64_t inv, $ints* product$renamed) {
	$init(BigInteger);
	$useLocalCurrentObjectStackCache();
	$var($ints, product, product$renamed);
	implMontgomeryMultiplyChecks(a, a, n, len, product);
	if (len > BigInteger::MONTGOMERY_INTRINSIC_THRESHOLD) {
		$assign(product, squareToLen(a, len, product));
		return montReduce(product, n, len, (int32_t)inv);
	} else {
		return implMontgomerySquare(a, n, len, inv, $(materialize(product, len)));
	}
}

void BigInteger::implMontgomeryMultiplyChecks($ints* a, $ints* b, $ints* n, int32_t len, $ints* product) {
	$init(BigInteger);
	$useLocalCurrentObjectStackCache();
	if (len % 2 != 0) {
		$throwNew($IllegalArgumentException, $$str({"input array length must be even: "_s, $$str(len)}));
	}
	if (len < 1) {
		$throwNew($IllegalArgumentException, $$str({"invalid input length: "_s, $$str(len)}));
	}
	if (len > $nc(a)->length || len > $nc(b)->length || len > $nc(n)->length || (product != nullptr && len > product->length)) {
		$throwNew($IllegalArgumentException, $$str({"input array length out of bound: "_s, $$str(len)}));
	}
}

$ints* BigInteger::materialize($ints* z$renamed, int32_t len) {
	$init(BigInteger);
	$var($ints, z, z$renamed);
	if (z == nullptr || $nc(z)->length < len) {
		$assign(z, $new($ints, len));
	}
	return z;
}

$ints* BigInteger::implMontgomeryMultiply($ints* a, $ints* b, $ints* n, int32_t len, int64_t inv, $ints* product$renamed) {
	$init(BigInteger);
	$var($ints, product, product$renamed);
	$assign(product, multiplyToLen(a, len, b, len, product));
	return montReduce(product, n, len, (int32_t)inv);
}

$ints* BigInteger::implMontgomerySquare($ints* a, $ints* n, int32_t len, int64_t inv, $ints* product$renamed) {
	$init(BigInteger);
	$var($ints, product, product$renamed);
	$assign(product, squareToLen(a, len, product));
	return montReduce(product, n, len, (int32_t)inv);
}

BigInteger* BigInteger::oddModPow(BigInteger* y, BigInteger* z) {
	$useLocalCurrentObjectStackCache();
	if ($nc(y)->equals(BigInteger::ONE)) {
		return this;
	}
	if (this->signum$ == 0) {
		return BigInteger::ZERO;
	}
	$var($ints, base, $cast($ints, $nc(this->mag)->clone()));
	$var($ints, exp, $nc(y)->mag);
	$var($ints, mod, $nc(z)->mag);
	int32_t modLen = $nc(mod)->length;
	if (((int32_t)(modLen & (uint32_t)1)) != 0) {
		$var($ints, x, $new($ints, modLen + 1));
		$System::arraycopy(mod, 0, x, 1, modLen);
		$assign(mod, x);
		++modLen;
	}
	int32_t wbits = 0;
	int32_t ebits = bitLength(exp, $nc(exp)->length);
	if ((ebits != 17) || ($nc(exp)->get(0) != 0x00010001)) {
		while (ebits > $nc(BigInteger::bnExpModThreshTable)->get(wbits)) {
			++wbits;
		}
	}
	int32_t tblmask = $sl(1, wbits);
	$var($intArray2, table, $new($intArray2, tblmask));
	for (int32_t i = 0; i < tblmask; ++i) {
		table->set(i, $$new($ints, modLen));
	}
	int64_t n0 = ((int64_t)(mod->get(modLen - 1) & (uint64_t)BigInteger::LONG_MASK)) + (((int64_t)(mod->get(modLen - 2) & (uint64_t)BigInteger::LONG_MASK)) << 32);
	int64_t inv = -$MutableBigInteger::inverseMod64(n0);
	$var($ints, a, leftShift(base, base->length, modLen << 5));
	$var($MutableBigInteger, q, $new($MutableBigInteger));
	$var($MutableBigInteger, a2, $new($MutableBigInteger, a));
	$var($MutableBigInteger, b2, $new($MutableBigInteger, mod));
	b2->normalize();
	$var($MutableBigInteger, r, a2->divide(b2, q));
	table->set(0, $($nc(r)->toIntArray()));
	if ($nc(table->get(0))->length < modLen) {
		int32_t offset = modLen - $nc(table->get(0))->length;
		$var($ints, t2, $new($ints, modLen));
		$System::arraycopy(table->get(0), 0, t2, offset, $nc(table->get(0))->length);
		table->set(0, t2);
	}
	$var($ints, b, montgomerySquare(table->get(0), mod, modLen, inv, nullptr));
	$var($ints, t, $Arrays::copyOf(b, modLen));
	for (int32_t i = 1; i < tblmask; ++i) {
		table->set(i, $(montgomeryMultiply(t, table->get(i - 1), mod, modLen, inv, nullptr)));
	}
	int32_t bitpos = $sl(1, (int32_t)((ebits - 1) & (uint32_t)(32 - 1)));
	int32_t buf = 0;
	int32_t elen = $nc(exp)->length;
	int32_t eIndex = 0;
	for (int32_t i = 0; i <= wbits; ++i) {
		buf = (buf << 1) | ((((int32_t)(exp->get(eIndex) & (uint32_t)bitpos)) != 0) ? 1 : 0);
		$usrAssign(bitpos, 1);
		if (bitpos == 0) {
			++eIndex;
			bitpos = $sl(1, 32 - 1);
			--elen;
		}
	}
	int32_t multpos = ebits;
	--ebits;
	bool isone = true;
	multpos = ebits - wbits;
	while (((int32_t)(buf & (uint32_t)1)) == 0) {
		$usrAssign(buf, 1);
		++multpos;
	}
	$var($ints, mult, table->get((int32_t)((uint32_t)buf >> 1)));
	buf = 0;
	if (multpos == ebits) {
		isone = false;
	}
	while (true) {
		--ebits;
		buf <<= 1;
		if (elen != 0) {
			buf |= (((int32_t)(exp->get(eIndex) & (uint32_t)bitpos)) != 0) ? 1 : 0;
			$usrAssign(bitpos, 1);
			if (bitpos == 0) {
				++eIndex;
				bitpos = $sl(1, 32 - 1);
				--elen;
			}
		}
		if (((int32_t)(buf & (uint32_t)tblmask)) != 0) {
			multpos = ebits - wbits;
			while (((int32_t)(buf & (uint32_t)1)) == 0) {
				$usrAssign(buf, 1);
				++multpos;
			}
			$assign(mult, table->get((int32_t)((uint32_t)buf >> 1)));
			buf = 0;
		}
		if (ebits == multpos) {
			if (isone) {
				$assign(b, $cast($ints, $nc(mult)->clone()));
				isone = false;
			} else {
				$assign(t, b);
				$assign(a, montgomeryMultiply(t, mult, mod, modLen, inv, a));
				$assign(t, a);
				$assign(a, b);
				$assign(b, t);
			}
		}
		if (ebits == 0) {
			break;
		}
		if (!isone) {
			$assign(t, b);
			$assign(a, montgomerySquare(t, mod, modLen, inv, a));
			$assign(t, a);
			$assign(a, b);
			$assign(b, t);
		}
	}
	$var($ints, t2, $new($ints, 2 * modLen));
	$System::arraycopy(b, 0, t2, modLen, modLen);
	$assign(b, montReduce(t2, mod, modLen, (int32_t)inv));
	$assign(t2, $Arrays::copyOf(b, modLen));
	return $new(BigInteger, 1, t2);
}

$ints* BigInteger::montReduce($ints* n, $ints* mod, int32_t mlen, int32_t inv) {
	$init(BigInteger);
	int32_t c = 0;
	int32_t len = mlen;
	int32_t offset = 0;
	do {
		int32_t nEnd = $nc(n)->get(n->length - 1 - offset);
		int32_t carry = mulAdd(n, mod, offset, mlen, inv * nEnd);
		c += addOne(n, offset, mlen, carry);
		++offset;
	} while (--len > 0);
	while (c > 0) {
		c += subN(n, mod, mlen);
	}
	while (intArrayCmpToLen(n, mod, mlen) >= 0) {
		subN(n, mod, mlen);
	}
	return n;
}

int32_t BigInteger::intArrayCmpToLen($ints* arg1, $ints* arg2, int32_t len) {
	$init(BigInteger);
	for (int32_t i = 0; i < len; ++i) {
		int64_t b1 = (int64_t)($nc(arg1)->get(i) & (uint64_t)BigInteger::LONG_MASK);
		int64_t b2 = (int64_t)($nc(arg2)->get(i) & (uint64_t)BigInteger::LONG_MASK);
		if (b1 < b2) {
			return -1;
		}
		if (b1 > b2) {
			return 1;
		}
	}
	return 0;
}

int32_t BigInteger::subN($ints* a, $ints* b, int32_t len) {
	$init(BigInteger);
	int64_t sum = 0;
	while (--len >= 0) {
		sum = ((int64_t)($nc(a)->get(len) & (uint64_t)BigInteger::LONG_MASK)) - ((int64_t)($nc(b)->get(len) & (uint64_t)BigInteger::LONG_MASK)) + (sum >> 32);
		a->set(len, (int32_t)sum);
	}
	return (int32_t)(sum >> 32);
}

int32_t BigInteger::mulAdd($ints* out, $ints* in, int32_t offset, int32_t len, int32_t k) {
	$init(BigInteger);
	implMulAddCheck(out, in, offset, len, k);
	return implMulAdd(out, in, offset, len, k);
}

void BigInteger::implMulAddCheck($ints* out, $ints* in, int32_t offset, int32_t len, int32_t k) {
	$init(BigInteger);
	$useLocalCurrentObjectStackCache();
	if (len > $nc(in)->length) {
		$throwNew($IllegalArgumentException, $$str({"input length is out of bound: "_s, $$str(len), " > "_s, $$str(in->length)}));
	}
	if (offset < 0) {
		$throwNew($IllegalArgumentException, $$str({"input offset is invalid: "_s, $$str(offset)}));
	}
	if (offset > ($nc(out)->length - 1)) {
		$throwNew($IllegalArgumentException, $$str({"input offset is out of bound: "_s, $$str(offset), " > "_s, $$str((out->length - 1))}));
	}
	if (len > ($nc(out)->length - offset)) {
		$throwNew($IllegalArgumentException, $$str({"input len is out of bound: "_s, $$str(len), " > "_s, $$str((out->length - offset))}));
	}
}

int32_t BigInteger::implMulAdd($ints* out, $ints* in, int32_t offset, int32_t len, int32_t k) {
	$init(BigInteger);
	int64_t kLong = (int64_t)(k & (uint64_t)BigInteger::LONG_MASK);
	int64_t carry = 0;
	offset = $nc(out)->length - offset - 1;
	for (int32_t j = len - 1; j >= 0; --j) {
		int64_t product = ((int64_t)($nc(in)->get(j) & (uint64_t)BigInteger::LONG_MASK)) * kLong + ((int64_t)(out->get(offset) & (uint64_t)BigInteger::LONG_MASK)) + carry;
		out->set(offset--, (int32_t)product);
		carry = (int64_t)((uint64_t)product >> 32);
	}
	return (int32_t)carry;
}

int32_t BigInteger::addOne($ints* a, int32_t offset, int32_t mlen, int32_t carry) {
	$init(BigInteger);
	offset = $nc(a)->length - 1 - mlen - offset;
	int64_t t = ((int64_t)(a->get(offset) & (uint64_t)BigInteger::LONG_MASK)) + ((int64_t)(carry & (uint64_t)BigInteger::LONG_MASK));
	a->set(offset, (int32_t)t);
	if (((int64_t)((uint64_t)t >> 32)) == 0) {
		return 0;
	}
	while (--mlen >= 0) {
		if (--offset < 0) {
			return 1;
		} else {
			++(*a)[offset];
			if (a->get(offset) != 0) {
				return 0;
			}
		}
	}
	return 1;
}

BigInteger* BigInteger::modPow2(BigInteger* exponent, int32_t p) {
	$useLocalCurrentObjectStackCache();
	$var(BigInteger, result, BigInteger::ONE);
	$var(BigInteger, baseToPow2, this->mod2(p));
	int32_t expOffset = 0;
	int32_t limit = $nc(exponent)->bitLength();
	if (this->testBit(0)) {
		limit = (p - 1) < limit ? (p - 1) : limit;
	}
	while (expOffset < limit) {
		if (exponent->testBit(expOffset)) {
			$assign(result, $nc($($nc(result)->multiply(baseToPow2)))->mod2(p));
		}
		++expOffset;
		if (expOffset < limit) {
			$assign(baseToPow2, $nc($($nc(baseToPow2)->square()))->mod2(p));
		}
	}
	return result;
}

BigInteger* BigInteger::mod2(int32_t p) {
	if (bitLength() <= p) {
		return this;
	}
	int32_t numInts = (int32_t)((uint32_t)(p + 31) >> 5);
	$var($ints, mag, $new($ints, numInts));
	$System::arraycopy(this->mag, ($nc(this->mag)->length - numInts), mag, 0, numInts);
	int32_t excessBits = (numInts << 5) - p;
	(*mag)[0] &= (uint32_t)(($sl((int64_t)1, 32 - excessBits)) - 1);
	return (mag->get(0) == 0 ? $new(BigInteger, 1, mag) : $new(BigInteger, mag, 1));
}

BigInteger* BigInteger::modInverse(BigInteger* m) {
	$useLocalCurrentObjectStackCache();
	if ($nc(m)->signum$ != 1) {
		$throwNew($ArithmeticException, "BigInteger: modulus not positive"_s);
	}
	if ($nc(m)->equals(BigInteger::ONE)) {
		return BigInteger::ZERO;
	}
	$var(BigInteger, modVal, this);
	if (this->signum$ < 0 || (this->compareMagnitude(m) >= 0)) {
		$assign(modVal, this->mod(m));
	}
	if (modVal->equals(BigInteger::ONE)) {
		return BigInteger::ONE;
	}
	$var($MutableBigInteger, a, $new($MutableBigInteger, modVal));
	$var($MutableBigInteger, b, $new($MutableBigInteger, m));
	$var($MutableBigInteger, result, a->mutableModInverse(b));
	return $nc(result)->toBigInteger(1);
}

BigInteger* BigInteger::shiftLeft(int32_t n) {
	if (this->signum$ == 0) {
		return BigInteger::ZERO;
	}
	if (n > 0) {
		return $new(BigInteger, $(shiftLeft(this->mag, n)), this->signum$);
	} else if (n == 0) {
		return this;
	} else {
		return shiftRightImpl(-n);
	}
}

$ints* BigInteger::shiftLeft($ints* mag, int32_t n) {
	$init(BigInteger);
	int32_t nInts = (int32_t)((uint32_t)n >> 5);
	int32_t nBits = (int32_t)(n & (uint32_t)31);
	int32_t magLen = $nc(mag)->length;
	$var($ints, newMag, nullptr);
	if (nBits == 0) {
		$assign(newMag, $new($ints, magLen + nInts));
		$System::arraycopy(mag, 0, newMag, 0, magLen);
	} else {
		int32_t i = 0;
		int32_t nBits2 = 32 - nBits;
		int32_t highBits = $usr(mag->get(0), nBits2);
		if (highBits != 0) {
			$assign(newMag, $new($ints, magLen + nInts + 1));
			newMag->set(i++, highBits);
		} else {
			$assign(newMag, $new($ints, magLen + nInts));
		}
		int32_t numIter = magLen - 1;
		$Objects::checkFromToIndex(0, numIter + 1, mag->length);
		$Objects::checkFromToIndex(i, numIter + i + 1, $nc(newMag)->length);
		shiftLeftImplWorker(newMag, mag, i, nBits, numIter);
		$nc(newMag)->set(numIter + i, $sl(mag->get(numIter), nBits));
	}
	return newMag;
}

void BigInteger::shiftLeftImplWorker($ints* newArr, $ints* oldArr, int32_t newIdx, int32_t shiftCount, int32_t numIter) {
	$init(BigInteger);
	int32_t shiftCountRight = 32 - shiftCount;
	int32_t oldIdx = 0;
	while (oldIdx < numIter) {
		int32_t var$0 = ($sl($nc(oldArr)->get(oldIdx++), shiftCount));
		$nc(newArr)->set(newIdx++, var$0 | ($usr(oldArr->get(oldIdx), shiftCountRight)));
	}
}

BigInteger* BigInteger::shiftRight(int32_t n) {
	if (this->signum$ == 0) {
		return BigInteger::ZERO;
	}
	if (n > 0) {
		return shiftRightImpl(n);
	} else if (n == 0) {
		return this;
	} else {
		return $new(BigInteger, $(shiftLeft(this->mag, -n)), this->signum$);
	}
}

BigInteger* BigInteger::shiftRightImpl(int32_t n) {
	int32_t nInts = (int32_t)((uint32_t)n >> 5);
	int32_t nBits = (int32_t)(n & (uint32_t)31);
	int32_t magLen = $nc(this->mag)->length;
	$var($ints, newMag, nullptr);
	if (nInts >= magLen) {
		return (this->signum$ >= 0 ? BigInteger::ZERO : $nc(BigInteger::negConst)->get(1));
	}
	if (nBits == 0) {
		int32_t newMagLen = magLen - nInts;
		$assign(newMag, $Arrays::copyOf(this->mag, newMagLen));
	} else {
		int32_t i = 0;
		int32_t highBits = $usr($nc(this->mag)->get(0), nBits);
		if (highBits != 0) {
			$assign(newMag, $new($ints, magLen - nInts));
			newMag->set(i++, highBits);
		} else {
			$assign(newMag, $new($ints, magLen - nInts - 1));
		}
		int32_t numIter = magLen - nInts - 1;
		$Objects::checkFromToIndex(0, numIter + 1, $nc(this->mag)->length);
		$Objects::checkFromToIndex(i, numIter + i, $nc(newMag)->length);
		shiftRightImplWorker(newMag, this->mag, i, nBits, numIter);
	}
	if (this->signum$ < 0) {
		bool onesLost = false;
		{
			int32_t i = magLen - 1;
			int32_t j = magLen - nInts;
			for (; i >= j && !onesLost; --i) {
				onesLost = ($nc(this->mag)->get(i) != 0);
			}
		}
		if (!onesLost && nBits != 0) {
			onesLost = ($sl($nc(this->mag)->get(magLen - nInts - 1), 32 - nBits) != 0);
		}
		if (onesLost) {
			$assign(newMag, javaIncrement(newMag));
		}
	}
	return $new(BigInteger, newMag, this->signum$);
}

void BigInteger::shiftRightImplWorker($ints* newArr, $ints* oldArr, int32_t newIdx, int32_t shiftCount, int32_t numIter) {
	$init(BigInteger);
	int32_t shiftCountLeft = 32 - shiftCount;
	int32_t idx = numIter;
	int32_t nidx = (newIdx == 0) ? numIter - 1 : numIter;
	while (nidx >= newIdx) {
		int32_t var$0 = ($usr($nc(oldArr)->get(idx--), shiftCount));
		$nc(newArr)->set(nidx--, var$0 | ($sl(oldArr->get(idx), shiftCountLeft)));
	}
}

$ints* BigInteger::javaIncrement($ints* val$renamed) {
	$var($ints, val, val$renamed);
	int32_t lastSum = 0;
	for (int32_t i = $nc(val)->length - 1; i >= 0 && lastSum == 0; --i) {
		lastSum = ((*val)[i] += 1);
	}
	if (lastSum == 0) {
		$assign(val, $new($ints, val->length + 1));
		val->set(0, 1);
	}
	return val;
}

BigInteger* BigInteger::and$(BigInteger* val) {
	int32_t var$0 = intLength();
	$var($ints, result, $new($ints, $Math::max(var$0, $nc(val)->intLength())));
	for (int32_t i = 0; i < result->length; ++i) {
		int32_t var$1 = getInt(result->length - i - 1);
		result->set(i, ((int32_t)(var$1 & (uint32_t)$nc(val)->getInt(result->length - i - 1))));
	}
	return valueOf(result);
}

BigInteger* BigInteger::or$(BigInteger* val) {
	int32_t var$0 = intLength();
	$var($ints, result, $new($ints, $Math::max(var$0, $nc(val)->intLength())));
	for (int32_t i = 0; i < result->length; ++i) {
		int32_t var$1 = getInt(result->length - i - 1);
		result->set(i, (var$1 | $nc(val)->getInt(result->length - i - 1)));
	}
	return valueOf(result);
}

BigInteger* BigInteger::xor$(BigInteger* val) {
	int32_t var$0 = intLength();
	$var($ints, result, $new($ints, $Math::max(var$0, $nc(val)->intLength())));
	for (int32_t i = 0; i < result->length; ++i) {
		int32_t var$1 = getInt(result->length - i - 1);
		result->set(i, (var$1 ^ $nc(val)->getInt(result->length - i - 1)));
	}
	return valueOf(result);
}

BigInteger* BigInteger::not$() {
	$var($ints, result, $new($ints, intLength()));
	for (int32_t i = 0; i < result->length; ++i) {
		result->set(i, ~getInt(result->length - i - 1));
	}
	return valueOf(result);
}

BigInteger* BigInteger::andNot(BigInteger* val) {
	int32_t var$0 = intLength();
	$var($ints, result, $new($ints, $Math::max(var$0, $nc(val)->intLength())));
	for (int32_t i = 0; i < result->length; ++i) {
		int32_t var$1 = getInt(result->length - i - 1);
		result->set(i, ((int32_t)(var$1 & (uint32_t)~$nc(val)->getInt(result->length - i - 1))));
	}
	return valueOf(result);
}

bool BigInteger::testBit(int32_t n) {
	if (n < 0) {
		$throwNew($ArithmeticException, "Negative bit address"_s);
	}
	return ((int32_t)(getInt((int32_t)((uint32_t)n >> 5)) & (uint32_t)($sl(1, (int32_t)(n & (uint32_t)31))))) != 0;
}

BigInteger* BigInteger::setBit(int32_t n) {
	if (n < 0) {
		$throwNew($ArithmeticException, "Negative bit address"_s);
	}
	int32_t intNum = (int32_t)((uint32_t)n >> 5);
	$var($ints, result, $new($ints, $Math::max(intLength(), intNum + 2)));
	for (int32_t i = 0; i < result->length; ++i) {
		result->set(result->length - i - 1, getInt(i));
	}
	(*result)[result->length - intNum - 1] |= ($sl(1, (int32_t)(n & (uint32_t)31)));
	return valueOf(result);
}

BigInteger* BigInteger::clearBit(int32_t n) {
	if (n < 0) {
		$throwNew($ArithmeticException, "Negative bit address"_s);
	}
	int32_t intNum = (int32_t)((uint32_t)n >> 5);
	$var($ints, result, $new($ints, $Math::max(intLength(), ((int32_t)((uint32_t)(n + 1) >> 5)) + 1)));
	for (int32_t i = 0; i < result->length; ++i) {
		result->set(result->length - i - 1, getInt(i));
	}
	(*result)[result->length - intNum - 1] &= (uint32_t)~($sl(1, (int32_t)(n & (uint32_t)31)));
	return valueOf(result);
}

BigInteger* BigInteger::flipBit(int32_t n) {
	if (n < 0) {
		$throwNew($ArithmeticException, "Negative bit address"_s);
	}
	int32_t intNum = (int32_t)((uint32_t)n >> 5);
	$var($ints, result, $new($ints, $Math::max(intLength(), intNum + 2)));
	for (int32_t i = 0; i < result->length; ++i) {
		result->set(result->length - i - 1, getInt(i));
	}
	(*result)[result->length - intNum - 1] ^= ($sl(1, (int32_t)(n & (uint32_t)31)));
	return valueOf(result);
}

int32_t BigInteger::getLowestSetBit() {
	int32_t lsb = this->lowestSetBitPlusTwo - 2;
	if (lsb == -2) {
		lsb = 0;
		if (this->signum$ == 0) {
			lsb -= 1;
		} else {
			int32_t i = 0;
			int32_t b = 0;
			for (i = 0; (b = getInt(i)) == 0; ++i) {
			}
			lsb += (i << 5) + $Integer::numberOfTrailingZeros(b);
		}
		this->lowestSetBitPlusTwo = lsb + 2;
	}
	return lsb;
}

int32_t BigInteger::bitLength() {
	int32_t n = this->bitLengthPlusOne - 1;
	if (n == -1) {
		$var($ints, m, this->mag);
		int32_t len = $nc(m)->length;
		if (len == 0) {
			n = 0;
		} else {
			int32_t magBitLength = ((len - 1) << 5) + bitLengthForInt($nc(this->mag)->get(0));
			if (this->signum$ < 0) {
				bool pow2 = ($Integer::bitCount($nc(this->mag)->get(0)) == 1);
				for (int32_t i = 1; i < len && pow2; ++i) {
					pow2 = ($nc(this->mag)->get(i) == 0);
				}
				n = (pow2 ? magBitLength - 1 : magBitLength);
			} else {
				n = magBitLength;
			}
		}
		this->bitLengthPlusOne = n + 1;
	}
	return n;
}

int32_t BigInteger::bitCount() {
	int32_t bc = this->bitCountPlusOne - 1;
	if (bc == -1) {
		bc = 0;
		for (int32_t i = 0; i < $nc(this->mag)->length; ++i) {
			bc += $Integer::bitCount($nc(this->mag)->get(i));
		}
		if (this->signum$ < 0) {
			int32_t magTrailingZeroCount = 0;
			int32_t j = 0;
			for (j = $nc(this->mag)->length - 1; $nc(this->mag)->get(j) == 0; --j) {
				magTrailingZeroCount += 32;
			}
			magTrailingZeroCount += $Integer::numberOfTrailingZeros($nc(this->mag)->get(j));
			bc += magTrailingZeroCount - 1;
		}
		this->bitCountPlusOne = bc + 1;
	}
	return bc;
}

bool BigInteger::isProbablePrime(int32_t certainty) {
	if (certainty <= 0) {
		return true;
	}
	$var(BigInteger, w, this->abs());
	if ($nc(w)->equals(BigInteger::TWO)) {
		return true;
	}
	bool var$0 = !$nc(w)->testBit(0);
	if (var$0 || $nc(w)->equals(BigInteger::ONE)) {
		return false;
	}
	return $nc(w)->primeToCertainty(certainty, nullptr);
}

int32_t BigInteger::compareTo(BigInteger* val) {
	if (this->signum$ == $nc(val)->signum$) {

		int32_t var$0 = 0;
		switch (this->signum$) {
		case 1:
			{
				var$0 = compareMagnitude(val);
				break;
			}
		case -1:
			{
				var$0 = val->compareMagnitude(this);
				break;
			}
		default:
			{
				var$0 = 0;
				break;
			}
		}
		return var$0;
	}
	return this->signum$ > $nc(val)->signum$ ? 1 : -1;
}

int32_t BigInteger::compareMagnitude(BigInteger* val) {
	$useLocalCurrentObjectStackCache();
	$var($ints, m1, this->mag);
	int32_t len1 = $nc(m1)->length;
	$var($ints, m2, $nc(val)->mag);
	int32_t len2 = $nc(m2)->length;
	if (len1 < len2) {
		return -1;
	}
	if (len1 > len2) {
		return 1;
	}
	for (int32_t i = 0; i < len1; ++i) {
		int32_t a = m1->get(i);
		int32_t b = m2->get(i);
		if (a != b) {
			return (((int64_t)(a & (uint64_t)BigInteger::LONG_MASK)) < ((int64_t)(b & (uint64_t)BigInteger::LONG_MASK))) ? -1 : 1;
		}
	}
	return 0;
}

int32_t BigInteger::compareMagnitude(int64_t val) {
	if (!BigInteger::$assertionsDisabled && !(val != $Long::MIN_VALUE)) {
		$throwNew($AssertionError);
	}
	$var($ints, m1, this->mag);
	int32_t len = $nc(m1)->length;
	if (len > 2) {
		return 1;
	}
	if (val < 0) {
		val = -val;
	}
	int32_t highWord = (int32_t)((int64_t)((uint64_t)val >> 32));
	if (highWord == 0) {
		if (len < 1) {
			return -1;
		}
		if (len > 1) {
			return 1;
		}
		int32_t a = m1->get(0);
		int32_t b = (int32_t)val;
		if (a != b) {
			return (((int64_t)(a & (uint64_t)BigInteger::LONG_MASK)) < ((int64_t)(b & (uint64_t)BigInteger::LONG_MASK))) ? -1 : 1;
		}
		return 0;
	} else {
		if (len < 2) {
			return -1;
		}
		int32_t a = m1->get(0);
		int32_t b = highWord;
		if (a != b) {
			return (((int64_t)(a & (uint64_t)BigInteger::LONG_MASK)) < ((int64_t)(b & (uint64_t)BigInteger::LONG_MASK))) ? -1 : 1;
		}
		a = m1->get(1);
		b = (int32_t)val;
		if (a != b) {
			return (((int64_t)(a & (uint64_t)BigInteger::LONG_MASK)) < ((int64_t)(b & (uint64_t)BigInteger::LONG_MASK))) ? -1 : 1;
		}
		return 0;
	}
}

bool BigInteger::equals(Object$* x) {
	$useLocalCurrentObjectStackCache();
	if ($equals(x, this)) {
		return true;
	}
	$var(BigInteger, xInt, nullptr);
	bool var$0 = $instanceOf(BigInteger, x);
	if (var$0) {
		$assign(xInt, $cast(BigInteger, x));
		var$0 = true;
	}
	if (!(var$0)) {
		return false;
	}
	if ($nc(xInt)->signum$ != this->signum$) {
		return false;
	}
	$var($ints, m, this->mag);
	int32_t len = $nc(m)->length;
	$var($ints, xm, $nc(xInt)->mag);
	if (len != $nc(xm)->length) {
		return false;
	}
	for (int32_t i = 0; i < len; ++i) {
		if ($nc(xm)->get(i) != m->get(i)) {
			return false;
		}
	}
	return true;
}

BigInteger* BigInteger::min(BigInteger* val) {
	return (compareTo(val) < 0 ? this : val);
}

BigInteger* BigInteger::max(BigInteger* val) {
	return (compareTo(val) > 0 ? this : val);
}

int32_t BigInteger::hashCode() {
	int32_t hashCode = 0;
	for (int32_t i = 0; i < $nc(this->mag)->length; ++i) {
		hashCode = (int32_t)(31 * hashCode + ((int64_t)($nc(this->mag)->get(i) & (uint64_t)BigInteger::LONG_MASK)));
	}
	return hashCode * this->signum$;
}

$String* BigInteger::toString(int32_t radix) {
	$useLocalCurrentObjectStackCache();
	if (this->signum$ == 0) {
		return "0"_s;
	}
	if (radix < $Character::MIN_RADIX || radix > $Character::MAX_RADIX) {
		radix = 10;
	}
	$var(BigInteger, abs, this->abs());
	int32_t b = $nc(abs)->bitLength();
	int32_t numChars = $cast(int32_t, ($Math::floor(b * BigInteger::LOG_TWO / $nc(BigInteger::logCache)->get(radix)) + 1)) + (this->signum$ < 0 ? 1 : 0);
	$var($StringBuilder, sb, $new($StringBuilder, numChars));
	if (this->signum$ < 0) {
		sb->append(u'-');
	}
	toString(abs, sb, radix, 0);
	return sb->toString();
}

void BigInteger::padWithZeros($StringBuilder* buf, int32_t numZeros) {
	$init(BigInteger);
	while (numZeros >= BigInteger::NUM_ZEROS) {
		$nc(buf)->append(BigInteger::ZEROS);
		numZeros -= BigInteger::NUM_ZEROS;
	}
	if (numZeros > 0) {
		$nc(buf)->append(static_cast<$CharSequence*>(BigInteger::ZEROS), 0, numZeros);
	}
}

void BigInteger::smallToString(int32_t radix, $StringBuilder* buf, int32_t digits) {
	$useLocalCurrentObjectStackCache();
	if (!BigInteger::$assertionsDisabled && !(this->signum$ >= 0)) {
		$throwNew($AssertionError);
	}
	if (this->signum$ == 0) {
		padWithZeros(buf, digits);
		return;
	}
	int32_t maxNumDigitGroups = (4 * $nc(this->mag)->length + 6) / 7;
	$var($longs, digitGroups, $new($longs, maxNumDigitGroups));
	$var(BigInteger, tmp, this);
	int32_t numGroups = 0;
	while ($nc(tmp)->signum$ != 0) {
		$var(BigInteger, d, $nc(BigInteger::longRadix)->get(radix));
		$var($MutableBigInteger, q, $new($MutableBigInteger));
		$var($MutableBigInteger, a, $new($MutableBigInteger, tmp->mag));
		$var($MutableBigInteger, b, $new($MutableBigInteger, $nc(d)->mag));
		$var($MutableBigInteger, r, a->divide(b, q));
		$var(BigInteger, q2, q->toBigInteger(tmp->signum$ * $nc(d)->signum$));
		$var(BigInteger, r2, $nc(r)->toBigInteger(tmp->signum$ * $nc(d)->signum$));
		digitGroups->set(numGroups++, $nc(r2)->longValue());
		$assign(tmp, q2);
	}
	$var($String, s, $Long::toString(digitGroups->get(numGroups - 1), radix));
	padWithZeros(buf, digits - ($nc(s)->length() + (numGroups - 1) * $nc(BigInteger::digitsPerLong)->get(radix)));
	$nc(buf)->append(s);
	for (int32_t i = numGroups - 2; i >= 0; --i) {
		$assign(s, $Long::toString(digitGroups->get(i), radix));
		int32_t numLeadingZeros = $nc(BigInteger::digitsPerLong)->get(radix) - $nc(s)->length();
		if (numLeadingZeros != 0) {
			buf->append(static_cast<$CharSequence*>(BigInteger::ZEROS), 0, numLeadingZeros);
		}
		buf->append(s);
	}
}

void BigInteger::toString(BigInteger* u, $StringBuilder* sb, int32_t radix, int32_t digits) {
	$init(BigInteger);
	$useLocalCurrentObjectStackCache();
	if (!BigInteger::$assertionsDisabled && !($nc(u)->signum() >= 0)) {
		$throwNew($AssertionError);
	}
	if ($nc($nc(u)->mag)->length <= BigInteger::SCHOENHAGE_BASE_CONVERSION_THRESHOLD) {
		u->smallToString(radix, sb, digits);
		return;
	}
	int32_t b = $nc(u)->bitLength();
	int32_t n = (int32_t)$Math::round($Math::log(b * BigInteger::LOG_TWO / $nc(BigInteger::logCache)->get(radix)) / BigInteger::LOG_TWO - 1.0);
	$var(BigInteger, v, getRadixConversionCache(radix, n));
	$var($BigIntegerArray, results, nullptr);
	$assign(results, u->divideAndRemainder(v));
	int32_t expectedDigits = $sl(1, n);
	toString($nc(results)->get(0), sb, radix, digits - expectedDigits);
	toString($nc(results)->get(1), sb, radix, expectedDigits);
}

BigInteger* BigInteger::getRadixConversionCache(int32_t radix, int32_t exponent) {
	$init(BigInteger);
	$useLocalCurrentObjectStackCache();
	$var($BigIntegerArray, cacheLine, $nc(BigInteger::powerCache)->get(radix));
	if (exponent < $nc(cacheLine)->length) {
		return cacheLine->get(exponent);
	}
	int32_t oldLength = $nc(cacheLine)->length;
	$assign(cacheLine, $fcast($BigIntegerArray, $Arrays::copyOf(cacheLine, exponent + 1)));
	for (int32_t i = oldLength; i <= exponent; ++i) {
		cacheLine->set(i, $($nc(cacheLine->get(i - 1))->pow(2)));
	}
	$var($BigIntegerArray2, pc, BigInteger::powerCache);
	if (exponent >= $nc($nc(pc)->get(radix))->length) {
		$assign(pc, $cast($BigIntegerArray2, pc->clone()));
		pc->set(radix, cacheLine);
		$assignStatic(BigInteger::powerCache, pc);
	}
	return cacheLine->get(exponent);
}

$String* BigInteger::toString() {
	return toString(10);
}

$bytes* BigInteger::toByteArray() {
	int32_t byteLen = bitLength() / 8 + 1;
	$var($bytes, byteArray, $new($bytes, byteLen));
	{
		int32_t i = byteLen - 1;
		int32_t bytesCopied = 4;
		int32_t nextInt = 0;
		int32_t intIndex = 0;
		for (; i >= 0; --i) {
			if (bytesCopied == 4) {
				nextInt = getInt(intIndex++);
				bytesCopied = 1;
			} else {
				$usrAssign(nextInt, 8);
				++bytesCopied;
			}
			byteArray->set(i, (int8_t)nextInt);
		}
	}
	return byteArray;
}

int32_t BigInteger::intValue() {
	int32_t result = 0;
	result = getInt(0);
	return result;
}

int64_t BigInteger::longValue() {
	int64_t result = 0;
	for (int32_t i = 1; i >= 0; --i) {
		result = (result << 32) + ((int64_t)(getInt(i) & (uint64_t)BigInteger::LONG_MASK));
	}
	return result;
}

float BigInteger::floatValue() {
	if (this->signum$ == 0) {
		return 0.0f;
	}
	int32_t exponent = (($nc(this->mag)->length - 1) << 5) + bitLengthForInt($nc(this->mag)->get(0)) - 1;
	if (exponent < $Long::SIZE - 1) {
		return (float)longValue();
	} else if (exponent > $Float::MAX_EXPONENT) {
		$init($Float);
		return this->signum$ > 0 ? $Float::POSITIVE_INFINITY : $Float::NEGATIVE_INFINITY;
	}
	int32_t shift = exponent - $FloatConsts::SIGNIFICAND_WIDTH;
	int32_t twiceSignifFloor = 0;
	int32_t nBits = (int32_t)(shift & (uint32_t)31);
	int32_t nBits2 = 32 - nBits;
	if (nBits == 0) {
		twiceSignifFloor = $nc(this->mag)->get(0);
	} else {
		twiceSignifFloor = $usr($nc(this->mag)->get(0), nBits);
		if (twiceSignifFloor == 0) {
			twiceSignifFloor = ($sl($nc(this->mag)->get(0), nBits2)) | ($usr($nc(this->mag)->get(1), nBits));
		}
	}
	int32_t signifFloor = twiceSignifFloor >> 1;
	signifFloor &= (uint32_t)$FloatConsts::SIGNIF_BIT_MASK;
	bool increment = ((int32_t)(twiceSignifFloor & (uint32_t)1)) != 0 && (((int32_t)(signifFloor & (uint32_t)1)) != 0 || $nc($(abs()))->getLowestSetBit() < shift);
	int32_t signifRounded = increment ? signifFloor + 1 : signifFloor;
	int32_t bits = $sl(exponent + $FloatConsts::EXP_BIAS, $FloatConsts::SIGNIFICAND_WIDTH - 1);
	bits += signifRounded;
	bits |= (int32_t)(this->signum$ & (uint32_t)$FloatConsts::SIGN_BIT_MASK);
	return $Float::intBitsToFloat(bits);
}

double BigInteger::doubleValue() {
	if (this->signum$ == 0) {
		return 0.0;
	}
	int32_t exponent = (($nc(this->mag)->length - 1) << 5) + bitLengthForInt($nc(this->mag)->get(0)) - 1;
	if (exponent < $Long::SIZE - 1) {
		return (double)longValue();
	} else if (exponent > $Double::MAX_EXPONENT) {
		$init($Double);
		return this->signum$ > 0 ? $Double::POSITIVE_INFINITY : $Double::NEGATIVE_INFINITY;
	}
	int32_t shift = exponent - $DoubleConsts::SIGNIFICAND_WIDTH;
	int64_t twiceSignifFloor = 0;
	int32_t nBits = (int32_t)(shift & (uint32_t)31);
	int32_t nBits2 = 32 - nBits;
	int32_t highBits = 0;
	int32_t lowBits = 0;
	if (nBits == 0) {
		highBits = $nc(this->mag)->get(0);
		lowBits = $nc(this->mag)->get(1);
	} else {
		highBits = $usr($nc(this->mag)->get(0), nBits);
		lowBits = ($sl($nc(this->mag)->get(0), nBits2)) | ($usr($nc(this->mag)->get(1), nBits));
		if (highBits == 0) {
			highBits = lowBits;
			lowBits = ($sl($nc(this->mag)->get(1), nBits2)) | ($usr($nc(this->mag)->get(2), nBits));
		}
	}
	twiceSignifFloor = (((int64_t)(highBits & (uint64_t)BigInteger::LONG_MASK)) << 32) | ((int64_t)(lowBits & (uint64_t)BigInteger::LONG_MASK));
	int64_t signifFloor = twiceSignifFloor >> 1;
	signifFloor &= (uint64_t)$DoubleConsts::SIGNIF_BIT_MASK;
	bool increment = ((int64_t)(twiceSignifFloor & (uint64_t)(int64_t)1)) != 0 && (((int64_t)(signifFloor & (uint64_t)(int64_t)1)) != 0 || $nc($(abs()))->getLowestSetBit() < shift);
	int64_t signifRounded = increment ? signifFloor + 1 : signifFloor;
	int64_t bits = $sl((int64_t)(exponent + $DoubleConsts::EXP_BIAS), $DoubleConsts::SIGNIFICAND_WIDTH - 1);
	bits += signifRounded;
	bits |= (int64_t)(this->signum$ & (uint64_t)$DoubleConsts::SIGN_BIT_MASK);
	return $Double::longBitsToDouble(bits);
}

$ints* BigInteger::stripLeadingZeroInts($ints* val) {
	$init(BigInteger);
	int32_t vlen = $nc(val)->length;
	int32_t keep = 0;
	for (keep = 0; keep < vlen && val->get(keep) == 0; ++keep) {
	}
	return $Arrays::copyOfRange(val, keep, vlen);
}

$ints* BigInteger::trustedStripLeadingZeroInts($ints* val) {
	$init(BigInteger);
	int32_t vlen = $nc(val)->length;
	int32_t keep = 0;
	for (keep = 0; keep < vlen && val->get(keep) == 0; ++keep) {
	}
	return keep == 0 ? val : $Arrays::copyOfRange(val, keep, vlen);
}

$ints* BigInteger::stripLeadingZeroBytes($bytes* a, int32_t off, int32_t len) {
	$init(BigInteger);
	int32_t indexBound = off + len;
	int32_t keep = 0;
	for (keep = off; keep < indexBound && $nc(a)->get(keep) == 0; ++keep) {
	}
	int32_t intLength = (int32_t)((uint32_t)((indexBound - keep) + 3) >> 2);
	$var($ints, result, $new($ints, intLength));
	int32_t b = indexBound - 1;
	for (int32_t i = intLength - 1; i >= 0; --i) {
		result->set(i, (int32_t)($nc(a)->get(b--) & (uint32_t)255));
		int32_t bytesRemaining = b - keep + 1;
		int32_t bytesToTransfer = $Math::min(3, bytesRemaining);
		for (int32_t j = 8; j <= (bytesToTransfer << 3); j += 8) {
			(*result)[i] |= ($sl((int32_t)(a->get(b--) & (uint32_t)255), j));
		}
	}
	return result;
}

$ints* BigInteger::makePositive($bytes* a, int32_t off, int32_t len) {
	$init(BigInteger);
	int32_t keep = 0;
	int32_t k = 0;
	int32_t indexBound = off + len;
	for (keep = off; keep < indexBound && $nc(a)->get(keep) == -1; ++keep) {
	}
	for (k = keep; k < indexBound && $nc(a)->get(k) == 0; ++k) {
	}
	int32_t extraByte = (k == indexBound) ? 1 : 0;
	int32_t intLength = (int32_t)((uint32_t)((indexBound - keep + extraByte) + 3) >> 2);
	$var($ints, result, $new($ints, intLength));
	int32_t b = indexBound - 1;
	for (int32_t i = intLength - 1; i >= 0; --i) {
		result->set(i, (int32_t)($nc(a)->get(b--) & (uint32_t)255));
		int32_t numBytesToTransfer = $Math::min(3, b - keep + 1);
		if (numBytesToTransfer < 0) {
			numBytesToTransfer = 0;
		}
		for (int32_t j = 8; j <= 8 * numBytesToTransfer; j += 8) {
			(*result)[i] |= ($sl((int32_t)(a->get(b--) & (uint32_t)255), j));
		}
		int32_t mask = $usr(-1, 8 * (3 - numBytesToTransfer));
		result->set(i, (int32_t)(~result->get(i) & (uint32_t)mask));
	}
	for (int32_t i = result->length - 1; i >= 0; --i) {
		result->set(i, (int32_t)(((int64_t)(result->get(i) & (uint64_t)BigInteger::LONG_MASK)) + 1));
		if (result->get(i) != 0) {
			break;
		}
	}
	return result;
}

$ints* BigInteger::makePositive($ints* a) {
	$init(BigInteger);
	int32_t keep = 0;
	int32_t j = 0;
	for (keep = 0; keep < $nc(a)->length && a->get(keep) == -1; ++keep) {
	}
	for (j = keep; j < $nc(a)->length && a->get(j) == 0; ++j) {
	}
	int32_t extraInt = (j == $nc(a)->length ? 1 : 0);
	$var($ints, result, $new($ints, $nc(a)->length - keep + extraInt));
	for (int32_t i = keep; i < a->length; ++i) {
		result->set(i - keep + extraInt, ~a->get(i));
	}
	for (int32_t i = result->length - 1; ++(*result)[i] == 0; --i) {
	}
	return result;
}

int32_t BigInteger::intLength() {
	return ((int32_t)((uint32_t)bitLength() >> 5)) + 1;
}

int32_t BigInteger::signBit() {
	return this->signum$ < 0 ? 1 : 0;
}

int32_t BigInteger::signInt() {
	return this->signum$ < 0 ? -1 : 0;
}

int32_t BigInteger::getInt(int32_t n) {
	if (n < 0) {
		return 0;
	}
	if (n >= $nc(this->mag)->length) {
		return signInt();
	}
	int32_t magInt = $nc(this->mag)->get($nc(this->mag)->length - n - 1);
	return (this->signum$ >= 0 ? magInt : (n <= firstNonzeroIntNum() ? -magInt : ~magInt));
}

int32_t BigInteger::firstNonzeroIntNum() {
	int32_t fn = this->firstNonzeroIntNumPlusTwo - 2;
	if (fn == -2) {
		int32_t i = 0;
		int32_t mlen = $nc(this->mag)->length;
		for (i = mlen - 1; i >= 0 && $nc(this->mag)->get(i) == 0; --i) {
		}
		fn = mlen - i - 1;
		this->firstNonzeroIntNumPlusTwo = fn + 2;
	}
	return fn;
}

void BigInteger::readObject($ObjectInputStream* s) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectInputStream$GetField, fields, $nc(s)->readFields());
	int32_t sign = $nc(fields)->get("signum"_s, -2);
	$var($bytes, magnitude, $cast($bytes, fields->get("magnitude"_s, ($Object*)nullptr)));
	if (sign < -1 || sign > 1) {
		$var($String, message, "BigInteger: Invalid signum value"_s);
		if (fields->defaulted("signum"_s)) {
			$assign(message, "BigInteger: Signum not present in stream"_s);
		}
		$throwNew($StreamCorruptedException, message);
	}
	$var($ints, mag, stripLeadingZeroBytes(magnitude, 0, $nc(magnitude)->length));
	if (($nc(mag)->length == 0) != (sign == 0)) {
		$var($String, message, "BigInteger: signum-magnitude mismatch"_s);
		if (fields->defaulted("magnitude"_s)) {
			$assign(message, "BigInteger: Magnitude not present in stream"_s);
		}
		$throwNew($StreamCorruptedException, message);
	}
	$BigInteger$UnsafeHolder::putSign(this, sign);
	$BigInteger$UnsafeHolder::putMag(this, mag);
	if ($nc(mag)->length >= BigInteger::MAX_MAG_LENGTH) {
		try {
			checkRange();
		} catch ($ArithmeticException&) {
			$var($ArithmeticException, e, $catch());
			$throwNew($StreamCorruptedException, "BigInteger: Out of the supported range"_s);
		}
	}
}

void BigInteger::writeObject($ObjectOutputStream* s) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectOutputStream$PutField, fields, $nc(s)->putFields());
	$nc(fields)->put("signum"_s, this->signum$);
	fields->put("magnitude"_s, $($of(magSerializedForm())));
	fields->put("bitCount"_s, -1);
	fields->put("bitLength"_s, -1);
	fields->put("lowestSetBit"_s, -2);
	fields->put("firstNonzeroByteNum"_s, -2);
	s->writeFields();
}

$bytes* BigInteger::magSerializedForm() {
	int32_t len = $nc(this->mag)->length;
	int32_t bitLen = (len == 0 ? 0 : ((len - 1) << 5) + bitLengthForInt($nc(this->mag)->get(0)));
	int32_t byteLen = (int32_t)((uint32_t)(bitLen + 7) >> 3);
	$var($bytes, result, $new($bytes, byteLen));
	{
		int32_t i = byteLen - 1;
		int32_t bytesCopied = 4;
		int32_t intIndex = len - 1;
		int32_t nextInt = 0;
		for (; i >= 0; --i) {
			if (bytesCopied == 4) {
				nextInt = $nc(this->mag)->get(intIndex--);
				bytesCopied = 1;
			} else {
				$usrAssign(nextInt, 8);
				++bytesCopied;
			}
			result->set(i, (int8_t)nextInt);
		}
	}
	return result;
}

int64_t BigInteger::longValueExact() {
	if ($nc(this->mag)->length <= 2 && bitLength() <= 63) {
		return longValue();
	} else {
		$throwNew($ArithmeticException, "BigInteger out of long range"_s);
	}
}

int32_t BigInteger::intValueExact() {
	if ($nc(this->mag)->length <= 1 && bitLength() <= 31) {
		return intValue();
	} else {
		$throwNew($ArithmeticException, "BigInteger out of int range"_s);
	}
}

int16_t BigInteger::shortValueExact() {
	if ($nc(this->mag)->length <= 1 && bitLength() <= 31) {
		int32_t value = intValue();
		if (value >= $Short::MIN_VALUE && value <= $Short::MAX_VALUE) {
			return shortValue();
		}
	}
	$throwNew($ArithmeticException, "BigInteger out of short range"_s);
}

int8_t BigInteger::byteValueExact() {
	if ($nc(this->mag)->length <= 1 && bitLength() <= 31) {
		int32_t value = intValue();
		if (value >= $Byte::MIN_VALUE && value <= $Byte::MAX_VALUE) {
			return byteValue();
		}
	}
	$throwNew($ArithmeticException, "BigInteger out of byte range"_s);
}

int32_t BigInteger::compareTo(Object$* val) {
	return this->compareTo($cast(BigInteger, val));
}

void clinit$BigInteger($Class* class$) {
	$useLocalCurrentObjectStackCache();
	BigInteger::$assertionsDisabled = !BigInteger::class$->desiredAssertionStatus();
	$assignStatic(BigInteger::bitsPerDigit, $new($longs, {
		(int64_t)0,
		(int64_t)0,
		(int64_t)1024,
		(int64_t)1624,
		(int64_t)2048,
		(int64_t)2378,
		(int64_t)2648,
		(int64_t)2875,
		(int64_t)3072,
		(int64_t)3247,
		(int64_t)3402,
		(int64_t)3543,
		(int64_t)3672,
		(int64_t)3790,
		(int64_t)3899,
		(int64_t)4001,
		(int64_t)4096,
		(int64_t)4186,
		(int64_t)4271,
		(int64_t)4350,
		(int64_t)4426,
		(int64_t)4498,
		(int64_t)4567,
		(int64_t)4633,
		(int64_t)4696,
		(int64_t)4756,
		(int64_t)4814,
		(int64_t)4870,
		(int64_t)4923,
		(int64_t)4975,
		(int64_t)5025,
		(int64_t)5074,
		(int64_t)5120,
		(int64_t)5166,
		(int64_t)5210,
		(int64_t)5253,
		(int64_t)5295
	}));
	$assignStatic(BigInteger::SMALL_PRIME_PRODUCT, BigInteger::valueOf((int64_t)3 * 5 * 7 * 11 * 13 * 17 * 19 * 23 * 29 * 31 * 37 * 41));
	$assignStatic(BigInteger::posConst, $new($BigIntegerArray, BigInteger::MAX_CONSTANT + 1));
	$assignStatic(BigInteger::negConst, $new($BigIntegerArray, BigInteger::MAX_CONSTANT + 1));
	BigInteger::LOG_TWO = $Math::log(2.0);
	{
		for (int32_t i = 1; i <= BigInteger::MAX_CONSTANT; ++i) {
			$var($ints, magnitude, $new($ints, 1));
			magnitude->set(0, i);
			$nc(BigInteger::posConst)->set(i, $$new(BigInteger, magnitude, 1));
			$nc(BigInteger::negConst)->set(i, $$new(BigInteger, magnitude, -1));
		}
		$assignStatic(BigInteger::powerCache, $new($BigIntegerArray2, $Character::MAX_RADIX + 1));
		$assignStatic(BigInteger::logCache, $new($doubles, $Character::MAX_RADIX + 1));
		for (int32_t i = $Character::MIN_RADIX; i <= $Character::MAX_RADIX; ++i) {
			$nc(BigInteger::powerCache)->set(i, $$new($BigIntegerArray, {$(BigInteger::valueOf((int64_t)i))}));
			$nc(BigInteger::logCache)->set(i, $Math::log((double)i));
		}
	}
	$assignStatic(BigInteger::ZERO, $new(BigInteger, $$new($ints, 0), 0));
	$assignStatic(BigInteger::ONE, BigInteger::valueOf((int64_t)1));
	$assignStatic(BigInteger::TWO, BigInteger::valueOf((int64_t)2));
	$assignStatic(BigInteger::NEGATIVE_ONE, BigInteger::valueOf((int64_t)-1));
	$assignStatic(BigInteger::TEN, BigInteger::valueOf((int64_t)10));
	$assignStatic(BigInteger::bnExpModThreshTable, $new($ints, {
		7,
		25,
		81,
		241,
		673,
		1793,
		$Integer::MAX_VALUE
	}));
	BigInteger::NUM_ZEROS = 63;
	$assignStatic(BigInteger::ZEROS, "0"_s->repeat(BigInteger::NUM_ZEROS));
	$assignStatic(BigInteger::digitsPerLong, $new($ints, {
		0,
		0,
		62,
		39,
		31,
		27,
		24,
		22,
		20,
		19,
		18,
		18,
		17,
		17,
		16,
		16,
		15,
		15,
		15,
		14,
		14,
		14,
		14,
		13,
		13,
		13,
		13,
		13,
		13,
		12,
		12,
		12,
		12,
		12,
		12,
		12,
		12
	}));
	$assignStatic(BigInteger::longRadix, $new($BigIntegerArray, {
		(BigInteger*)nullptr,
		(BigInteger*)nullptr,
		$(BigInteger::valueOf((int64_t)0x4000000000000000)),
		$(BigInteger::valueOf((int64_t)0x383D9170B85FF80B)),
		$(BigInteger::valueOf((int64_t)0x4000000000000000)),
		$(BigInteger::valueOf((int64_t)0x6765C793FA10079D)),
		$(BigInteger::valueOf((int64_t)0x41C21CB8E1000000)),
		$(BigInteger::valueOf((int64_t)0x3642798750226111)),
		$(BigInteger::valueOf((int64_t)0x1000000000000000)),
		$(BigInteger::valueOf((int64_t)0x12BF307AE81FFD59)),
		$(BigInteger::valueOf((int64_t)0x0DE0B6B3A7640000)),
		$(BigInteger::valueOf((int64_t)0x4D28CB56C33FA539)),
		$(BigInteger::valueOf((int64_t)0x1ECA170C00000000)),
		$(BigInteger::valueOf((int64_t)0x780C7372621BD74D)),
		$(BigInteger::valueOf((int64_t)0x1E39A5057D810000)),
		$(BigInteger::valueOf((int64_t)0x5B27AC993DF97701)),
		$(BigInteger::valueOf((int64_t)0x1000000000000000)),
		$(BigInteger::valueOf((int64_t)0x27B95E997E21D9F1)),
		$(BigInteger::valueOf((int64_t)0x5DA0E1E53C5C8000)),
		$(BigInteger::valueOf((int64_t)0x0B16A458EF403F19)),
		$(BigInteger::valueOf((int64_t)0x16BCC41E90000000)),
		$(BigInteger::valueOf((int64_t)0x2D04B7FDD9C0EF49)),
		$(BigInteger::valueOf((int64_t)0x5658597BCAA24000)),
		$(BigInteger::valueOf((int64_t)0x06FEB266931A75B7)),
		$(BigInteger::valueOf((int64_t)0x0C29E98000000000)),
		$(BigInteger::valueOf((int64_t)0x14ADF4B7320334B9)),
		$(BigInteger::valueOf((int64_t)0x226ED36478BFA000)),
		$(BigInteger::valueOf((int64_t)0x383D9170B85FF80B)),
		$(BigInteger::valueOf((int64_t)0x5A3C23E39C000000)),
		$(BigInteger::valueOf((int64_t)0x04E900ABB53E6B71)),
		$(BigInteger::valueOf((int64_t)0x07600EC618141000)),
		$(BigInteger::valueOf((int64_t)0x0AEE5720EE830681)),
		$(BigInteger::valueOf((int64_t)0x1000000000000000)),
		$(BigInteger::valueOf((int64_t)0x172588AD4F5F0981)),
		$(BigInteger::valueOf((int64_t)0x211E44F7D02C1000)),
		$(BigInteger::valueOf((int64_t)0x2EE56725F06E5C71)),
		$(BigInteger::valueOf((int64_t)0x41C21CB8E1000000))
	}));
	$assignStatic(BigInteger::digitsPerInt, $new($ints, {
		0,
		0,
		30,
		19,
		15,
		13,
		11,
		11,
		10,
		9,
		9,
		8,
		8,
		8,
		8,
		7,
		7,
		7,
		7,
		7,
		7,
		7,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		5
	}));
	$assignStatic(BigInteger::intRadix, $new($ints, {
		0,
		0,
		0x40000000,
		0x4546B3DB,
		0x40000000,
		0x48C27395,
		0x159FD800,
		0x75DB9C97,
		0x40000000,
		0x17179149,
		0x3B9ACA00,
		0x0CC6DB61,
		0x19A10000,
		0x309F1021,
		0x57F6C100,
		0x0A2F1B6F,
		0x10000000,
		0x18754571,
		0x247DBC80,
		0x3547667B,
		0x4C4B4000,
		0x6B5A6E1D,
		0x06C20A40,
		0x08D2D931,
		0x0B640000,
		0x0E8D4A51,
		0x1269AE40,
		0x17179149,
		0x1CB91000,
		0x23744899,
		0x2B73A840,
		0x34E63B41,
		0x40000000,
		0x4CFA3CC1,
		0x5C13D840,
		0x6D91B519,
		0x039AA400
	}));
		$init($Integer);
		$load($bytes);
	$assignStatic(BigInteger::serialPersistentFields, $new($ObjectStreamFieldArray, {
		$$new($ObjectStreamField, "signum"_s, $Integer::TYPE),
		$$new($ObjectStreamField, "magnitude"_s, $getClass($bytes)),
		$$new($ObjectStreamField, "bitCount"_s, $Integer::TYPE),
		$$new($ObjectStreamField, "bitLength"_s, $Integer::TYPE),
		$$new($ObjectStreamField, "firstNonzeroByteNum"_s, $Integer::TYPE),
		$$new($ObjectStreamField, "lowestSetBit"_s, $Integer::TYPE)
	}));
}

BigInteger::BigInteger() {
}

$Class* BigInteger::load$($String* name, bool initialize) {
	$loadClass(BigInteger, name, initialize, &_BigInteger_ClassInfo_, clinit$BigInteger, allocate$BigInteger);
	return class$;
}

$Class* BigInteger::class$ = nullptr;

	} // math
} // java