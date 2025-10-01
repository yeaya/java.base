#include <jdk/internal/icu/impl/Punycode.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/ParseException.h>
#include <jdk/internal/icu/lang/UCharacter.h>
#include <jdk/internal/icu/text/UTF16.h>
#include <jcpp.h>

#undef SMALL_Z
#undef ZERO
#undef INITIAL_BIAS
#undef SMALL_A
#undef SKEW
#undef UINT_MAGIC
#undef DELIMITER
#undef BASE
#undef MAX_CP_COUNT
#undef CAPITAL_A
#undef INITIAL_N
#undef NINE
#undef ULONG_MAGIC
#undef TMAX
#undef TMIN
#undef HYPHEN
#undef CAPITAL_Z
#undef DAMP

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $StringBuffer = ::java::lang::StringBuffer;
using $ParseException = ::java::text::ParseException;
using $UCharacter = ::jdk::internal::icu::lang::UCharacter;
using $UTF16 = ::jdk::internal::icu::text::UTF16;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

$FieldInfo _Punycode_FieldInfo_[] = {
	{"BASE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Punycode, BASE)},
	{"TMIN", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Punycode, TMIN)},
	{"TMAX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Punycode, TMAX)},
	{"SKEW", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Punycode, SKEW)},
	{"DAMP", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Punycode, DAMP)},
	{"INITIAL_BIAS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Punycode, INITIAL_BIAS)},
	{"INITIAL_N", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Punycode, INITIAL_N)},
	{"HYPHEN", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Punycode, HYPHEN)},
	{"DELIMITER", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Punycode, DELIMITER)},
	{"ZERO", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Punycode, ZERO)},
	{"NINE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Punycode, NINE)},
	{"SMALL_A", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Punycode, SMALL_A)},
	{"SMALL_Z", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Punycode, SMALL_Z)},
	{"CAPITAL_A", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Punycode, CAPITAL_A)},
	{"CAPITAL_Z", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Punycode, CAPITAL_Z)},
	{"MAX_CP_COUNT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Punycode, MAX_CP_COUNT)},
	{"UINT_MAGIC", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Punycode, UINT_MAGIC)},
	{"ULONG_MAGIC", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Punycode, ULONG_MAGIC)},
	{"basicToDigit", "[I", nullptr, $STATIC | $FINAL, $staticField(Punycode, basicToDigit)},
	{}
};

$MethodInfo _Punycode_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Punycode::*)()>(&Punycode::init$))},
	{"adaptBias", "(IIZ)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t,bool)>(&Punycode::adaptBias))},
	{"asciiCaseMap", "(CZ)C", nullptr, $PRIVATE | $STATIC, $method(static_cast<char16_t(*)(char16_t,bool)>(&Punycode::asciiCaseMap))},
	{"decode", "(Ljava/lang/StringBuffer;[Z)Ljava/lang/StringBuffer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$StringBuffer*(*)($StringBuffer*,$booleans*)>(&Punycode::decode)), "java.text.ParseException"},
	{"digitToBasic", "(IZ)C", nullptr, $PRIVATE | $STATIC, $method(static_cast<char16_t(*)(int32_t,bool)>(&Punycode::digitToBasic))},
	{"encode", "(Ljava/lang/StringBuffer;[Z)Ljava/lang/StringBuffer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$StringBuffer*(*)($StringBuffer*,$booleans*)>(&Punycode::encode)), "java.text.ParseException"},
	{"isBasic", "(I)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(int32_t)>(&Punycode::isBasic))},
	{"isBasicUpperCase", "(I)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(int32_t)>(&Punycode::isBasicUpperCase))},
	{"isSurrogate", "(I)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(int32_t)>(&Punycode::isSurrogate))},
	{}
};

$ClassInfo _Punycode_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.icu.impl.Punycode",
	"java.lang.Object",
	nullptr,
	_Punycode_FieldInfo_,
	_Punycode_MethodInfo_
};

$Object* allocate$Punycode($Class* clazz) {
	return $of($alloc(Punycode));
}


$ints* Punycode::basicToDigit = nullptr;

void Punycode::init$() {
}

int32_t Punycode::adaptBias(int32_t delta, int32_t length, bool firstTime) {
	$init(Punycode);
	if (firstTime) {
		delta /= Punycode::DAMP;
	} else {
		delta /= 2;
	}
	delta += $div(delta, length);
	int32_t count = 0;
	for (; delta > ((Punycode::BASE - Punycode::TMIN) * Punycode::TMAX) / 2; count += Punycode::BASE) {
		delta /= (Punycode::BASE - Punycode::TMIN);
	}
	return count + ($div(((Punycode::BASE - Punycode::TMIN + 1) * delta), (delta + Punycode::SKEW)));
}

char16_t Punycode::asciiCaseMap(char16_t b, bool uppercase) {
	$init(Punycode);
	if (uppercase) {
		if (Punycode::SMALL_A <= b && b <= Punycode::SMALL_Z) {
			b -= (Punycode::SMALL_A - Punycode::CAPITAL_A);
		}
	} else if (Punycode::CAPITAL_A <= b && b <= Punycode::CAPITAL_Z) {
		b += (Punycode::SMALL_A - Punycode::CAPITAL_A);
	}
	return b;
}

char16_t Punycode::digitToBasic(int32_t digit, bool uppercase) {
	$init(Punycode);
	if (digit < 26) {
		if (uppercase) {
			return (char16_t)(Punycode::CAPITAL_A + digit);
		} else {
			return (char16_t)(Punycode::SMALL_A + digit);
		}
	} else {
		return (char16_t)((Punycode::ZERO - 26) + digit);
	}
}

$StringBuffer* Punycode::encode($StringBuffer* src, $booleans* caseFlags) {
	$init(Punycode);
	$var($ints, cpBuffer, $new($ints, Punycode::MAX_CP_COUNT));
	int32_t n = 0;
	int32_t delta = 0;
	int32_t handledCPCount = 0;
	int32_t basicLength = 0;
	int32_t destLength = 0;
	int32_t bias = 0;
	int32_t j = 0;
	int32_t m = 0;
	int32_t q = 0;
	int32_t k = 0;
	int32_t t = 0;
	int32_t srcCPCount = 0;
	char16_t c = 0;
	char16_t c2 = 0;
	int32_t srcLength = $nc(src)->length();
	int32_t destCapacity = Punycode::MAX_CP_COUNT;
	$var($chars, dest, $new($chars, destCapacity));
	$var($StringBuffer, result, $new($StringBuffer));
	srcCPCount = (destLength = 0);
	for (j = 0; j < srcLength; ++j) {
		if (srcCPCount == Punycode::MAX_CP_COUNT) {
			$throwNew($ParseException, "Too many input code points"_s, -1);
		}
		c = src->charAt(j);
		if (isBasic(c)) {
			if (destLength < destCapacity) {
				cpBuffer->set(srcCPCount++, 0);
				dest->set(destLength, caseFlags != nullptr ? asciiCaseMap(c, $nc(caseFlags)->get(j)) : c);
			}
			++destLength;
		} else {
			n = $sl((caseFlags != nullptr && caseFlags->get(j)) ? 1 : 0, 31);
			if (!$UTF16::isSurrogate(c)) {
				n |= c;
			} else {
				bool var$1 = $UTF16::isLeadSurrogate(c) && (j + 1) < srcLength;
				if (var$1 && $UTF16::isTrailSurrogate(c2 = src->charAt(j + 1))) {
					++j;
					n |= $UCharacter::getCodePoint(c, c2);
				} else {
					$throwNew($ParseException, "Illegal char found"_s, -1);
				}
			}
			cpBuffer->set(srcCPCount++, n);
		}
	}
	basicLength = destLength;
	if (basicLength > 0) {
		if (destLength < destCapacity) {
			dest->set(destLength, (char16_t)Punycode::DELIMITER);
		}
		++destLength;
	}
	n = Punycode::INITIAL_N;
	delta = 0;
	bias = Punycode::INITIAL_BIAS;
	for (handledCPCount = basicLength; handledCPCount < srcCPCount;) {
		for (m = 0x7FFFFFFF, j = 0; j < srcCPCount; ++j) {
			q = (int32_t)(cpBuffer->get(j) & (uint32_t)0x7FFFFFFF);
			if (n <= q && q < m) {
				m = q;
			}
		}
		if (m - n > $div((0x7FFFFFFF - Punycode::MAX_CP_COUNT - delta), (handledCPCount + 1))) {
			$throwNew($RuntimeException, "Internal program error"_s);
		}
		delta += (m - n) * (handledCPCount + 1);
		n = m;
		for (j = 0; j < srcCPCount; ++j) {
			q = (int32_t)(cpBuffer->get(j) & (uint32_t)0x7FFFFFFF);
			if (q < n) {
				++delta;
			} else if (q == n) {
				for (q = delta, k = Punycode::BASE;; k += Punycode::BASE) {
					t = k - bias;
					if (t < Punycode::TMIN) {
						t = Punycode::TMIN;
					} else if (k >= (bias + Punycode::TMAX)) {
						t = Punycode::TMAX;
					}
					if (q < t) {
						break;
					}
					if (destLength < destCapacity) {
						$nc(dest)->set(destLength++, digitToBasic(t + $mod((q - t), (Punycode::BASE - t)), false));
					}
					q = $div((q - t), (Punycode::BASE - t));
				}
				if (destLength < destCapacity) {
					$nc(dest)->set(destLength++, digitToBasic(q, ($nc(cpBuffer)->get(j) < 0)));
				}
				bias = adaptBias(delta, handledCPCount + 1, (handledCPCount == basicLength));
				delta = 0;
				++handledCPCount;
			}
		}
		++delta;
		++n;
	}
	return result->append(dest, 0, destLength);
}

bool Punycode::isBasic(int32_t ch) {
	$init(Punycode);
	return (ch < Punycode::INITIAL_N);
}

bool Punycode::isBasicUpperCase(int32_t ch) {
	$init(Punycode);
	return (Punycode::CAPITAL_A <= ch && ch <= Punycode::CAPITAL_Z);
}

bool Punycode::isSurrogate(int32_t ch) {
	$init(Punycode);
	return (((int32_t)((ch) & (uint32_t)-2048)) == 0x0000D800);
}

$StringBuffer* Punycode::decode($StringBuffer* src, $booleans* caseFlags) {
	$init(Punycode);
	int32_t srcLength = $nc(src)->length();
	$var($StringBuffer, result, $new($StringBuffer));
	int32_t n = 0;
	int32_t destLength = 0;
	int32_t i = 0;
	int32_t bias = 0;
	int32_t basicLength = 0;
	int32_t j = 0;
	int32_t in = 0;
	int32_t oldi = 0;
	int32_t w = 0;
	int32_t k = 0;
	int32_t digit = 0;
	int32_t t = 0;
	int32_t destCPCount = 0;
	int32_t firstSupplementaryIndex = 0;
	int32_t cpLength = 0;
	char16_t b = 0;
	int32_t destCapacity = Punycode::MAX_CP_COUNT;
	$var($chars, dest, $new($chars, destCapacity));
	for (j = srcLength; j > 0;) {
		if (src->charAt(--j) == Punycode::DELIMITER) {
			break;
		}
	}
	destLength = (basicLength = (destCPCount = j));
	while (j > 0) {
		b = src->charAt(--j);
		if (!isBasic(b)) {
			$throwNew($ParseException, "Illegal char found"_s, -1);
		}
		if (j < destCapacity) {
			dest->set(j, b);
			if (caseFlags != nullptr) {
				caseFlags->set(j, isBasicUpperCase(b));
			}
		}
	}
	n = Punycode::INITIAL_N;
	i = 0;
	bias = Punycode::INITIAL_BIAS;
	firstSupplementaryIndex = 0x3B9ACA00;
	for (in = basicLength > 0 ? basicLength + 1 : 0; in < srcLength;) {
		for (oldi = i, w = 1, k = Punycode::BASE;; k += Punycode::BASE) {
			if (in >= srcLength) {
				$throwNew($ParseException, "Illegal char found"_s, -1);
			}
			digit = $nc(Punycode::basicToDigit)->get((int8_t)src->charAt(in++));
			if (digit < 0) {
				$throwNew($ParseException, "Invalid char found"_s, -1);
			}
			if (digit > $div((0x7FFFFFFF - i), w)) {
				$throwNew($ParseException, "Illegal char found"_s, -1);
			}
			i += digit * w;
			t = k - bias;
			if (t < Punycode::TMIN) {
				t = Punycode::TMIN;
			} else if (k >= (bias + Punycode::TMAX)) {
				t = Punycode::TMAX;
			}
			if (digit < t) {
				break;
			}
			if (w > $div(0x7FFFFFFF, (Punycode::BASE - t))) {
				$throwNew($ParseException, "Illegal char found"_s, -1);
			}
			w *= Punycode::BASE - t;
		}
		++destCPCount;
		bias = adaptBias(i - oldi, destCPCount, (oldi == 0));
		if ($div(i, destCPCount) > (0x7FFFFFFF - n)) {
			$throwNew($ParseException, "Illegal char found"_s, -1);
		}
		n += $div(i, destCPCount);
		$modAssign(i, destCPCount);
		if (n > 0x0010FFFF || isSurrogate(n)) {
			$throwNew($ParseException, "Illegal char found"_s, -1);
		}
		cpLength = $UTF16::getCharCount(n);
		if ((destLength + cpLength) < destCapacity) {
			int32_t codeUnitIndex = 0;
			if (i <= firstSupplementaryIndex) {
				codeUnitIndex = i;
				if (cpLength > 1) {
					firstSupplementaryIndex = codeUnitIndex;
				} else {
					++firstSupplementaryIndex;
				}
			} else {
				codeUnitIndex = firstSupplementaryIndex;
				codeUnitIndex = $UTF16::moveCodePointOffset(dest, 0, destLength, codeUnitIndex, i - codeUnitIndex);
			}
			if (codeUnitIndex < destLength) {
				$System::arraycopy(dest, codeUnitIndex, dest, codeUnitIndex + cpLength, (destLength - codeUnitIndex));
				if (caseFlags != nullptr) {
					$System::arraycopy(caseFlags, codeUnitIndex, caseFlags, codeUnitIndex + cpLength, destLength - codeUnitIndex);
				}
			}
			if (cpLength == 1) {
				dest->set(codeUnitIndex, (char16_t)n);
			} else {
				dest->set(codeUnitIndex, $UTF16::getLeadSurrogate(n));
				dest->set(codeUnitIndex + 1, $UTF16::getTrailSurrogate(n));
			}
			if (caseFlags != nullptr) {
				caseFlags->set(codeUnitIndex, isBasicUpperCase(src->charAt(in - 1)));
				if (cpLength == 2) {
					caseFlags->set(codeUnitIndex + 1, false);
				}
			}
		}
		destLength += cpLength;
		++i;
	}
	result->append(dest, 0, destLength);
	return result;
}

void clinit$Punycode($Class* class$) {
	$assignStatic(Punycode::basicToDigit, $new($ints, {
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		26,
		27,
		28,
		29,
		30,
		31,
		32,
		33,
		34,
		35,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		0,
		1,
		2,
		3,
		4,
		5,
		6,
		7,
		8,
		9,
		10,
		11,
		12,
		13,
		14,
		15,
		16,
		17,
		18,
		19,
		20,
		21,
		22,
		23,
		24,
		25,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		0,
		1,
		2,
		3,
		4,
		5,
		6,
		7,
		8,
		9,
		10,
		11,
		12,
		13,
		14,
		15,
		16,
		17,
		18,
		19,
		20,
		21,
		22,
		23,
		24,
		25,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1
	}));
}

Punycode::Punycode() {
}

$Class* Punycode::load$($String* name, bool initialize) {
	$loadClass(Punycode, name, initialize, &_Punycode_ClassInfo_, clinit$Punycode, allocate$Punycode);
	return class$;
}

$Class* Punycode::class$ = nullptr;

			} // impl
		} // icu
	} // internal
} // jdk