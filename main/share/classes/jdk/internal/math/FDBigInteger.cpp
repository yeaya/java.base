#include <jdk/internal/math/FDBigInteger.h>

#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigInteger.h>
#include <java/util/Arrays.h>
#include <jdk/internal/misc/CDS.h>
#include <jcpp.h>

#undef LONG_5_POW
#undef LONG_MASK
#undef MAX_FIVE_POW
#undef POW_5_CACHE
#undef S
#undef SMALL_5_POW
#undef ZERO

using $FDBigIntegerArray = $Array<::jdk::internal::math::FDBigInteger>;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $Arrays = ::java::util::Arrays;
using $CDS = ::jdk::internal::misc::CDS;

namespace jdk {
	namespace internal {
		namespace math {

$FieldInfo _FDBigInteger_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(FDBigInteger, $assertionsDisabled)},
	{"SMALL_5_POW", "[I", nullptr, $STATIC | $FINAL, $staticField(FDBigInteger, SMALL_5_POW)},
	{"LONG_5_POW", "[J", nullptr, $STATIC | $FINAL, $staticField(FDBigInteger, LONG_5_POW)},
	{"MAX_FIVE_POW", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FDBigInteger, MAX_FIVE_POW)},
	{"POW_5_CACHE", "[Ljdk/internal/math/FDBigInteger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FDBigInteger, POW_5_CACHE)},
	{"ZERO", "Ljdk/internal/math/FDBigInteger;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(FDBigInteger, ZERO)},
	{"archivedCaches", "[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $staticField(FDBigInteger, archivedCaches)},
	{"LONG_MASK", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FDBigInteger, LONG_MASK)},
	{"data", "[I", nullptr, $PRIVATE, $field(FDBigInteger, data)},
	{"offset", "I", nullptr, $PRIVATE, $field(FDBigInteger, offset)},
	{"nWords", "I", nullptr, $PRIVATE, $field(FDBigInteger, nWords)},
	{"isImmutable", "Z", nullptr, $PRIVATE, $field(FDBigInteger, isImmutable)},
	{}
};

$MethodInfo _FDBigInteger_MethodInfo_[] = {
	{"<init>", "([II)V", nullptr, $PRIVATE, $method(static_cast<void(FDBigInteger::*)($ints*,int32_t)>(&FDBigInteger::init$))},
	{"<init>", "(J[CII)V", nullptr, $PUBLIC, $method(static_cast<void(FDBigInteger::*)(int64_t,$chars*,int32_t,int32_t)>(&FDBigInteger::init$))},
	{"add", "(Ljdk/internal/math/FDBigInteger;)Ljdk/internal/math/FDBigInteger;", nullptr, $PRIVATE, $method(static_cast<FDBigInteger*(FDBigInteger::*)(FDBigInteger*)>(&FDBigInteger::add))},
	{"addAndCmp", "(Ljdk/internal/math/FDBigInteger;Ljdk/internal/math/FDBigInteger;)I", nullptr, $PUBLIC},
	{"big5pow", "(I)Ljdk/internal/math/FDBigInteger;", nullptr, $PRIVATE | $STATIC, $method(static_cast<FDBigInteger*(*)(int32_t)>(&FDBigInteger::big5pow))},
	{"big5powRec", "(I)Ljdk/internal/math/FDBigInteger;", nullptr, $PRIVATE | $STATIC, $method(static_cast<FDBigInteger*(*)(int32_t)>(&FDBigInteger::big5powRec))},
	{"checkZeroTail", "([II)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($ints*,int32_t)>(&FDBigInteger::checkZeroTail))},
	{"cmp", "(Ljdk/internal/math/FDBigInteger;)I", nullptr, $PUBLIC},
	{"cmpPow52", "(II)I", nullptr, $PUBLIC},
	{"getNormalizationBias", "()I", nullptr, $PUBLIC},
	{"leftInplaceSub", "(Ljdk/internal/math/FDBigInteger;)Ljdk/internal/math/FDBigInteger;", nullptr, $PUBLIC},
	{"leftShift", "([II[IIII)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($ints*,int32_t,$ints*,int32_t,int32_t,int32_t)>(&FDBigInteger::leftShift))},
	{"leftShift", "(I)Ljdk/internal/math/FDBigInteger;", nullptr, $PUBLIC},
	{"makeImmutable", "()V", nullptr, $PUBLIC},
	{"mult", "([II[II[I)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($ints*,int32_t,$ints*,int32_t,$ints*)>(&FDBigInteger::mult))},
	{"mult", "(I)Ljdk/internal/math/FDBigInteger;", nullptr, $PRIVATE, $method(static_cast<FDBigInteger*(FDBigInteger::*)(int32_t)>(&FDBigInteger::mult))},
	{"mult", "(Ljdk/internal/math/FDBigInteger;)Ljdk/internal/math/FDBigInteger;", nullptr, $PRIVATE, $method(static_cast<FDBigInteger*(FDBigInteger::*)(FDBigInteger*)>(&FDBigInteger::mult))},
	{"mult", "([III[I)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($ints*,int32_t,int32_t,$ints*)>(&FDBigInteger::mult))},
	{"mult", "([IIII[I)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($ints*,int32_t,int32_t,int32_t,$ints*)>(&FDBigInteger::mult))},
	{"multAddMe", "(II)V", nullptr, $PRIVATE, $method(static_cast<void(FDBigInteger::*)(int32_t,int32_t)>(&FDBigInteger::multAddMe))},
	{"multAndCarryBy10", "([II[I)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($ints*,int32_t,$ints*)>(&FDBigInteger::multAndCarryBy10))},
	{"multBy10", "()Ljdk/internal/math/FDBigInteger;", nullptr, $PUBLIC},
	{"multByPow52", "(II)Ljdk/internal/math/FDBigInteger;", nullptr, $PUBLIC},
	{"multDiffMe", "(JLjdk/internal/math/FDBigInteger;)J", nullptr, $PRIVATE, $method(static_cast<int64_t(FDBigInteger::*)(int64_t,FDBigInteger*)>(&FDBigInteger::multDiffMe))},
	{"quoRemIteration", "(Ljdk/internal/math/FDBigInteger;)I", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException"},
	{"rightInplaceSub", "(Ljdk/internal/math/FDBigInteger;)Ljdk/internal/math/FDBigInteger;", nullptr, $PUBLIC},
	{"size", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(FDBigInteger::*)()>(&FDBigInteger::size))},
	{"toBigInteger", "()Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{"toHexString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"trimLeadingZeros", "()V", nullptr, $PRIVATE, $method(static_cast<void(FDBigInteger::*)()>(&FDBigInteger::trimLeadingZeros))},
	{"valueOfMulPow52", "(JII)Ljdk/internal/math/FDBigInteger;", nullptr, $PUBLIC | $STATIC, $method(static_cast<FDBigInteger*(*)(int64_t,int32_t,int32_t)>(&FDBigInteger::valueOfMulPow52))},
	{"valueOfPow2", "(I)Ljdk/internal/math/FDBigInteger;", nullptr, $PRIVATE | $STATIC, $method(static_cast<FDBigInteger*(*)(int32_t)>(&FDBigInteger::valueOfPow2))},
	{"valueOfPow52", "(II)Ljdk/internal/math/FDBigInteger;", nullptr, $PUBLIC | $STATIC, $method(static_cast<FDBigInteger*(*)(int32_t,int32_t)>(&FDBigInteger::valueOfPow52))},
	{}
};

$ClassInfo _FDBigInteger_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.math.FDBigInteger",
	"java.lang.Object",
	nullptr,
	_FDBigInteger_FieldInfo_,
	_FDBigInteger_MethodInfo_
};

$Object* allocate$FDBigInteger($Class* clazz) {
	return $of($alloc(FDBigInteger));
}

bool FDBigInteger::$assertionsDisabled = false;
$ints* FDBigInteger::SMALL_5_POW = nullptr;
$longs* FDBigInteger::LONG_5_POW = nullptr;
$FDBigIntegerArray* FDBigInteger::POW_5_CACHE = nullptr;
FDBigInteger* FDBigInteger::ZERO = nullptr;
$ObjectArray* FDBigInteger::archivedCaches = nullptr;

void FDBigInteger::init$($ints* data, int32_t offset) {
	this->isImmutable = false;
	$set(this, data, data);
	this->offset = offset;
	this->nWords = $nc(data)->length;
	trimLeadingZeros();
}

void FDBigInteger::init$(int64_t lValue, $chars* digits, int32_t kDigits, int32_t nDigits) {
	this->isImmutable = false;
	int32_t n = $Math::max((nDigits + 8) / 9, 2);
	$set(this, data, $new($ints, n));
	$nc(this->data)->set(0, (int32_t)lValue);
	$nc(this->data)->set(1, (int32_t)((int64_t)((uint64_t)lValue >> 32)));
	this->offset = 0;
	this->nWords = 2;
	int32_t i = kDigits;
	int32_t limit = nDigits - 5;
	int32_t v = 0;
	while (i < limit) {
		int32_t ilim = i + 5;
		v = (int32_t)$nc(digits)->get(i++) - (int32_t)u'0';
		while (i < ilim) {
			v = 10 * v + (int32_t)digits->get(i++) - (int32_t)u'0';
		}
		multAddMe(0x000186A0, v);
	}
	int32_t factor = 1;
	v = 0;
	while (i < nDigits) {
		v = 10 * v + (int32_t)$nc(digits)->get(i++) - (int32_t)u'0';
		factor *= 10;
	}
	if (factor != 1) {
		multAddMe(factor, v);
	}
	trimLeadingZeros();
}

FDBigInteger* FDBigInteger::valueOfPow52(int32_t p5, int32_t p2) {
	$init(FDBigInteger);
	if (p5 != 0) {
		if (p2 == 0) {
			return big5pow(p5);
		} else {
			if (p5 < $nc(FDBigInteger::SMALL_5_POW)->length) {
				int32_t pow5 = $nc(FDBigInteger::SMALL_5_POW)->get(p5);
				int32_t wordcount = p2 >> 5;
				int32_t bitcount = (int32_t)(p2 & (uint32_t)31);
				if (bitcount == 0) {
					return $new(FDBigInteger, $$new($ints, {pow5}), wordcount);
				} else {
					return $new(FDBigInteger, $$new($ints, {
						$sl(pow5, bitcount),
						$usr(pow5, 32 - bitcount)
					}), wordcount);
				}
			} else {
				return $nc($(big5pow(p5)))->leftShift(p2);
			}
		}
	} else {
		return valueOfPow2(p2);
	}
}

FDBigInteger* FDBigInteger::valueOfMulPow52(int64_t value, int32_t p5, int32_t p2) {
	$init(FDBigInteger);
	if (!FDBigInteger::$assertionsDisabled && !(p5 >= 0)) {
		$throwNew($AssertionError, p5);
	}
	if (!FDBigInteger::$assertionsDisabled && !(p2 >= 0)) {
		$throwNew($AssertionError, p2);
	}
	int32_t v0 = (int32_t)value;
	int32_t v1 = (int32_t)((int64_t)((uint64_t)value >> 32));
	int32_t wordcount = p2 >> 5;
	int32_t bitcount = (int32_t)(p2 & (uint32_t)31);
	if (p5 != 0) {
		if (p5 < $nc(FDBigInteger::SMALL_5_POW)->length) {
			int64_t pow5 = (int64_t)($nc(FDBigInteger::SMALL_5_POW)->get(p5) & (uint64_t)FDBigInteger::LONG_MASK);
			int64_t carry = ((int64_t)(v0 & (uint64_t)FDBigInteger::LONG_MASK)) * pow5;
			v0 = (int32_t)carry;
			$usrAssign(carry, 32);
			carry = ((int64_t)(v1 & (uint64_t)FDBigInteger::LONG_MASK)) * pow5 + carry;
			v1 = (int32_t)carry;
			int32_t v2 = (int32_t)((int64_t)((uint64_t)carry >> 32));
			if (bitcount == 0) {
				return $new(FDBigInteger, $$new($ints, {
					v0,
					v1,
					v2
				}), wordcount);
			} else {
				return $new(FDBigInteger, $$new($ints, {
					$sl(v0, bitcount),
					($sl(v1, bitcount)) | ($usr(v0, 32 - bitcount)),
					($sl(v2, bitcount)) | ($usr(v1, 32 - bitcount)),
					$usr(v2, 32 - bitcount)
				}), wordcount);
			}
		} else {
			$var(FDBigInteger, pow5, big5pow(p5));
			$var($ints, r, nullptr);
			if (v1 == 0) {
				$assign(r, $new($ints, $nc(pow5)->nWords + 1 + ((p2 != 0) ? 1 : 0)));
				mult(pow5->data, pow5->nWords, v0, r);
			} else {
				$assign(r, $new($ints, $nc(pow5)->nWords + 2 + ((p2 != 0) ? 1 : 0)));
				mult(pow5->data, pow5->nWords, v0, v1, r);
			}
			return ($$new(FDBigInteger, r, $nc(pow5)->offset))->leftShift(p2);
		}
	} else if (p2 != 0) {
		if (bitcount == 0) {
			return $new(FDBigInteger, $$new($ints, {
				v0,
				v1
			}), wordcount);
		} else {
			return $new(FDBigInteger, $$new($ints, {
				$sl(v0, bitcount),
				($sl(v1, bitcount)) | ($usr(v0, 32 - bitcount)),
				$usr(v1, 32 - bitcount)
			}), wordcount);
		}
	}
	return $new(FDBigInteger, $$new($ints, {
		v0,
		v1
	}), 0);
}

FDBigInteger* FDBigInteger::valueOfPow2(int32_t p2) {
	$init(FDBigInteger);
	int32_t wordcount = p2 >> 5;
	int32_t bitcount = (int32_t)(p2 & (uint32_t)31);
	return $new(FDBigInteger, $$new($ints, {$sl(1, bitcount)}), wordcount);
}

void FDBigInteger::trimLeadingZeros() {
	int32_t i = this->nWords;
	bool var$0 = i > 0;
	if (var$0 && ($nc(this->data)->get(--i) == 0)) {
		while (i > 0 && $nc(this->data)->get(i - 1) == 0) {
			--i;
		}
		this->nWords = i;
		if (i == 0) {
			this->offset = 0;
		}
	}
}

int32_t FDBigInteger::getNormalizationBias() {
	if (this->nWords == 0) {
		$throwNew($IllegalArgumentException, "Zero value cannot be normalized"_s);
	}
	int32_t zeros = $Integer::numberOfLeadingZeros($nc(this->data)->get(this->nWords - 1));
	return (zeros < 4) ? 28 + zeros : zeros - 4;
}

void FDBigInteger::leftShift($ints* src, int32_t idx, $ints* result, int32_t bitcount, int32_t anticount, int32_t prev) {
	$init(FDBigInteger);
	for (; idx > 0; --idx) {
		int32_t v = ($sl(prev, bitcount));
		prev = $nc(src)->get(idx - 1);
		v |= ($usr(prev, anticount));
		$nc(result)->set(idx, v);
	}
	int32_t v = $sl(prev, bitcount);
	$nc(result)->set(0, v);
}

FDBigInteger* FDBigInteger::leftShift(int32_t shift) {
	if (shift == 0 || this->nWords == 0) {
		return this;
	}
	int32_t wordcount = shift >> 5;
	int32_t bitcount = (int32_t)(shift & (uint32_t)31);
	if (this->isImmutable) {
		if (bitcount == 0) {
			return $new(FDBigInteger, $($Arrays::copyOf(this->data, this->nWords)), this->offset + wordcount);
		} else {
			int32_t anticount = 32 - bitcount;
			int32_t idx = this->nWords - 1;
			int32_t prev = $nc(this->data)->get(idx);
			int32_t hi = $usr(prev, anticount);
			$var($ints, result, nullptr);
			if (hi != 0) {
				$assign(result, $new($ints, this->nWords + 1));
				result->set(this->nWords, hi);
			} else {
				$assign(result, $new($ints, this->nWords));
			}
			leftShift(this->data, idx, result, bitcount, anticount, prev);
			return $new(FDBigInteger, result, this->offset + wordcount);
		}
	} else {
		if (bitcount != 0) {
			int32_t anticount = 32 - bitcount;
			if (($sl($nc(this->data)->get(0), bitcount)) == 0) {
				int32_t idx = 0;
				int32_t prev = $nc(this->data)->get(idx);
				for (; idx < this->nWords - 1; ++idx) {
					int32_t v = ($usr(prev, anticount));
					prev = $nc(this->data)->get(idx + 1);
					v |= ($sl(prev, bitcount));
					$nc(this->data)->set(idx, v);
				}
				int32_t v = $usr(prev, anticount);
				$nc(this->data)->set(idx, v);
				if (v == 0) {
					--this->nWords;
				}
				++this->offset;
			} else {
				int32_t idx = this->nWords - 1;
				int32_t prev = $nc(this->data)->get(idx);
				int32_t hi = $usr(prev, anticount);
				$var($ints, result, this->data);
				$var($ints, src, this->data);
				if (hi != 0) {
					if (this->nWords == $nc(this->data)->length) {
						$set(this, data, ($assign(result, $new($ints, this->nWords + 1))));
					}
					$nc(result)->set(this->nWords++, hi);
				}
				leftShift(src, idx, result, bitcount, anticount, prev);
			}
		}
		this->offset += wordcount;
		return this;
	}
}

int32_t FDBigInteger::size() {
	return this->nWords + this->offset;
}

int32_t FDBigInteger::quoRemIteration(FDBigInteger* S) {
	if (!FDBigInteger::$assertionsDisabled && ! !this->isImmutable) {
		$throwNew($AssertionError, $of("cannot modify immutable value"_s));
	}
	int32_t thSize = this->size();
	int32_t sSize = $nc(S)->size();
	if (thSize < sSize) {
		int32_t p = multAndCarryBy10(this->data, this->nWords, this->data);
		if (p != 0) {
			$nc(this->data)->set(this->nWords++, p);
		} else {
			trimLeadingZeros();
		}
		return 0;
	} else if (thSize > sSize) {
		$throwNew($IllegalArgumentException, "disparate values"_s);
	}
	int64_t q = $div(((int64_t)($nc(this->data)->get(this->nWords - 1) & (uint64_t)FDBigInteger::LONG_MASK)), ((int64_t)($nc(S->data)->get(S->nWords - 1) & (uint64_t)FDBigInteger::LONG_MASK)));
	int64_t diff = multDiffMe(q, S);
	if (diff != (int64_t)0) {
		int64_t sum = 0;
		int32_t tStart = S->offset - this->offset;
		$var($ints, sd, S->data);
		$var($ints, td, this->data);
		while (sum == (int64_t)0) {
			{
				int32_t sIndex = 0;
				int32_t tIndex = tStart;
				for (; tIndex < this->nWords; ++sIndex, ++tIndex) {
					sum += ((int64_t)($nc(td)->get(tIndex) & (uint64_t)FDBigInteger::LONG_MASK)) + ((int64_t)($nc(sd)->get(sIndex) & (uint64_t)FDBigInteger::LONG_MASK));
					td->set(tIndex, (int32_t)sum);
					$usrAssign(sum, 32);
				}
			}
			if (!FDBigInteger::$assertionsDisabled && !(sum == 0 || sum == 1)) {
				$throwNew($AssertionError, sum);
			}
			q -= 1;
		}
	}
	int32_t p = multAndCarryBy10(this->data, this->nWords, this->data);
	if (!FDBigInteger::$assertionsDisabled && !(p == 0)) {
		$throwNew($AssertionError, p);
	}
	trimLeadingZeros();
	return (int32_t)q;
}

FDBigInteger* FDBigInteger::multBy10() {
	if (this->nWords == 0) {
		return this;
	}
	if (this->isImmutable) {
		$var($ints, res, $new($ints, this->nWords + 1));
		res->set(this->nWords, multAndCarryBy10(this->data, this->nWords, res));
		return $new(FDBigInteger, res, this->offset);
	} else {
		int32_t p = multAndCarryBy10(this->data, this->nWords, this->data);
		if (p != 0) {
			if (this->nWords == $nc(this->data)->length) {
				if ($nc(this->data)->get(0) == 0) {
					$System::arraycopy(this->data, 1, this->data, 0, --this->nWords);
					++this->offset;
				} else {
					$set(this, data, $Arrays::copyOf(this->data, $nc(this->data)->length + 1));
				}
			}
			$nc(this->data)->set(this->nWords++, p);
		} else {
			trimLeadingZeros();
		}
		return this;
	}
}

FDBigInteger* FDBigInteger::multByPow52(int32_t p5, int32_t p2) {
	if (this->nWords == 0) {
		return this;
	}
	$var(FDBigInteger, res, this);
	if (p5 != 0) {
		$var($ints, r, nullptr);
		int32_t extraSize = (p2 != 0) ? 1 : 0;
		if (p5 < $nc(FDBigInteger::SMALL_5_POW)->length) {
			$assign(r, $new($ints, this->nWords + 1 + extraSize));
			mult(this->data, this->nWords, $nc(FDBigInteger::SMALL_5_POW)->get(p5), r);
			$assign(res, $new(FDBigInteger, r, this->offset));
		} else {
			$var(FDBigInteger, pow5, big5pow(p5));
			$assign(r, $new($ints, this->nWords + $nc(pow5)->size() + extraSize));
			mult(this->data, this->nWords, pow5->data, pow5->nWords, r);
			$assign(res, $new(FDBigInteger, r, this->offset + pow5->offset));
		}
	}
	return res->leftShift(p2);
}

void FDBigInteger::mult($ints* s1, int32_t s1Len, $ints* s2, int32_t s2Len, $ints* dst) {
	$init(FDBigInteger);
	for (int32_t i = 0; i < s1Len; ++i) {
		int64_t v = (int64_t)($nc(s1)->get(i) & (uint64_t)FDBigInteger::LONG_MASK);
		int64_t p = 0;
		for (int32_t j = 0; j < s2Len; ++j) {
			p += ((int64_t)($nc(dst)->get(i + j) & (uint64_t)FDBigInteger::LONG_MASK)) + v * ((int64_t)($nc(s2)->get(j) & (uint64_t)FDBigInteger::LONG_MASK));
			dst->set(i + j, (int32_t)p);
			$usrAssign(p, 32);
		}
		$nc(dst)->set(i + s2Len, (int32_t)p);
	}
}

FDBigInteger* FDBigInteger::leftInplaceSub(FDBigInteger* subtrahend) {
	bool var$0 = !FDBigInteger::$assertionsDisabled;
	if (var$0) {
		int32_t var$1 = this->size();
		var$0 = !(var$1 >= $nc(subtrahend)->size());
	}
	if (var$0) {
		$throwNew($AssertionError, $of("result should be positive"_s));
	}
	$var(FDBigInteger, minuend, nullptr);
	if (this->isImmutable) {
		$assign(minuend, $new(FDBigInteger, $cast($ints, $($nc(this->data)->clone())), this->offset));
	} else {
		$assign(minuend, this);
	}
	int32_t offsetDiff = $nc(subtrahend)->offset - $nc(minuend)->offset;
	$var($ints, sData, subtrahend->data);
	$var($ints, mData, minuend->data);
	int32_t subLen = subtrahend->nWords;
	int32_t minLen = minuend->nWords;
	if (offsetDiff < 0) {
		int32_t rLen = minLen - offsetDiff;
		if (rLen < $nc(mData)->length) {
			$System::arraycopy(mData, 0, mData, -offsetDiff, minLen);
			$Arrays::fill(mData, 0, -offsetDiff, 0);
		} else {
			$var($ints, r, $new($ints, rLen));
			$System::arraycopy(mData, 0, r, -offsetDiff, minLen);
			$set(minuend, data, ($assign(mData, r)));
		}
		minuend->offset = subtrahend->offset;
		minuend->nWords = (minLen = rLen);
		offsetDiff = 0;
	}
	int64_t borrow = 0;
	int32_t mIndex = offsetDiff;
	for (int32_t sIndex = 0; sIndex < subLen && mIndex < minLen; ++sIndex, ++mIndex) {
		int64_t diff = ((int64_t)($nc(mData)->get(mIndex) & (uint64_t)FDBigInteger::LONG_MASK)) - ((int64_t)($nc(sData)->get(sIndex) & (uint64_t)FDBigInteger::LONG_MASK)) + borrow;
		mData->set(mIndex, (int32_t)diff);
		borrow = diff >> 32;
	}
	for (; borrow != 0 && mIndex < minLen; ++mIndex) {
		int64_t diff = ((int64_t)($nc(mData)->get(mIndex) & (uint64_t)FDBigInteger::LONG_MASK)) + borrow;
		mData->set(mIndex, (int32_t)diff);
		borrow = diff >> 32;
	}
	if (!FDBigInteger::$assertionsDisabled && !(borrow == (int64_t)0)) {
		$throwNew($AssertionError, borrow);
	}
	minuend->trimLeadingZeros();
	return minuend;
}

FDBigInteger* FDBigInteger::rightInplaceSub(FDBigInteger* subtrahend$renamed) {
	$var(FDBigInteger, subtrahend, subtrahend$renamed);
	bool var$0 = !FDBigInteger::$assertionsDisabled;
	if (var$0) {
		int32_t var$1 = this->size();
		var$0 = !(var$1 >= $nc(subtrahend)->size());
	}
	if (var$0) {
		$throwNew($AssertionError, $of("result should be positive"_s));
	}
	$var(FDBigInteger, minuend, this);
	if ($nc(subtrahend)->isImmutable) {
		$assign(subtrahend, $new(FDBigInteger, $cast($ints, $($nc(subtrahend->data)->clone())), subtrahend->offset));
	}
	int32_t offsetDiff = minuend->offset - $nc(subtrahend)->offset;
	$var($ints, sData, subtrahend->data);
	$var($ints, mData, minuend->data);
	int32_t subLen = subtrahend->nWords;
	int32_t minLen = minuend->nWords;
	if (offsetDiff < 0) {
		int32_t rLen = minLen;
		if (rLen < $nc(sData)->length) {
			$System::arraycopy(sData, 0, sData, -offsetDiff, subLen);
			$Arrays::fill(sData, 0, -offsetDiff, 0);
		} else {
			$var($ints, r, $new($ints, rLen));
			$System::arraycopy(sData, 0, r, -offsetDiff, subLen);
			$set(subtrahend, data, ($assign(sData, r)));
		}
		subtrahend->offset = minuend->offset;
		subLen -= offsetDiff;
		offsetDiff = 0;
	} else {
		int32_t rLen = minLen + offsetDiff;
		if (rLen >= $nc(sData)->length) {
			$set(subtrahend, data, ($assign(sData, $Arrays::copyOf(sData, rLen))));
		}
	}
	int32_t sIndex = 0;
	int64_t borrow = 0;
	for (; sIndex < offsetDiff; ++sIndex) {
		int64_t diff = (int64_t)0 - ((int64_t)($nc(sData)->get(sIndex) & (uint64_t)FDBigInteger::LONG_MASK)) + borrow;
		sData->set(sIndex, (int32_t)diff);
		borrow = diff >> 32;
	}
	for (int32_t mIndex = 0; mIndex < minLen; ++sIndex, ++mIndex) {
		int64_t diff = ((int64_t)($nc(mData)->get(mIndex) & (uint64_t)FDBigInteger::LONG_MASK)) - ((int64_t)($nc(sData)->get(sIndex) & (uint64_t)FDBigInteger::LONG_MASK)) + borrow;
		sData->set(sIndex, (int32_t)diff);
		borrow = diff >> 32;
	}
	if (!FDBigInteger::$assertionsDisabled && !(borrow == (int64_t)0)) {
		$throwNew($AssertionError, borrow);
	}
	subtrahend->nWords = sIndex;
	subtrahend->trimLeadingZeros();
	return subtrahend;
}

int32_t FDBigInteger::checkZeroTail($ints* a, int32_t from) {
	$init(FDBigInteger);
	while (from > 0) {
		if ($nc(a)->get(--from) != 0) {
			return 1;
		}
	}
	return 0;
}

int32_t FDBigInteger::cmp(FDBigInteger* other) {
	int32_t aSize = this->nWords + this->offset;
	int32_t bSize = $nc(other)->nWords + other->offset;
	if (aSize > bSize) {
		return 1;
	} else if (aSize < bSize) {
		return -1;
	}
	int32_t aLen = this->nWords;
	int32_t bLen = other->nWords;
	while (aLen > 0 && bLen > 0) {
		int32_t a = $nc(this->data)->get(--aLen);
		int32_t b = $nc(other->data)->get(--bLen);
		if (a != b) {
			return (((int64_t)(a & (uint64_t)FDBigInteger::LONG_MASK)) < ((int64_t)(b & (uint64_t)FDBigInteger::LONG_MASK))) ? -1 : 1;
		}
	}
	if (aLen > 0) {
		return checkZeroTail(this->data, aLen);
	}
	if (bLen > 0) {
		return -checkZeroTail(other->data, bLen);
	}
	return 0;
}

int32_t FDBigInteger::cmpPow52(int32_t p5, int32_t p2) {
	if (p5 == 0) {
		int32_t wordcount = p2 >> 5;
		int32_t bitcount = (int32_t)(p2 & (uint32_t)31);
		int32_t size = this->nWords + this->offset;
		if (size > wordcount + 1) {
			return 1;
		} else if (size < wordcount + 1) {
			return -1;
		}
		int32_t a = $nc(this->data)->get(this->nWords - 1);
		int32_t b = $sl(1, bitcount);
		if (a != b) {
			return (((int64_t)(a & (uint64_t)FDBigInteger::LONG_MASK)) < ((int64_t)(b & (uint64_t)FDBigInteger::LONG_MASK))) ? -1 : 1;
		}
		return checkZeroTail(this->data, this->nWords - 1);
	}
	return this->cmp($($nc($(big5pow(p5)))->leftShift(p2)));
}

int32_t FDBigInteger::addAndCmp(FDBigInteger* x, FDBigInteger* y) {
	$var(FDBigInteger, big, nullptr);
	$var(FDBigInteger, small, nullptr);
	int32_t xSize = $nc(x)->size();
	int32_t ySize = $nc(y)->size();
	int32_t bSize = 0;
	int32_t sSize = 0;
	if (xSize >= ySize) {
		$assign(big, x);
		$assign(small, y);
		bSize = xSize;
		sSize = ySize;
	} else {
		$assign(big, y);
		$assign(small, x);
		bSize = ySize;
		sSize = xSize;
	}
	int32_t thSize = this->size();
	if (bSize == 0) {
		return thSize == 0 ? 0 : 1;
	}
	if (sSize == 0) {
		return this->cmp(big);
	}
	if (bSize > thSize) {
		return -1;
	}
	if (bSize + 1 < thSize) {
		return 1;
	}
	int64_t top = ((int64_t)($nc($nc(big)->data)->get(big->nWords - 1) & (uint64_t)FDBigInteger::LONG_MASK));
	if (sSize == bSize) {
		top += ((int64_t)($nc($nc(small)->data)->get(small->nWords - 1) & (uint64_t)FDBigInteger::LONG_MASK));
	}
	if (((int64_t)((uint64_t)top >> 32)) == 0) {
		if (((int64_t)((uint64_t)(top + 1) >> 32)) == 0) {
			if (bSize < thSize) {
				return 1;
			}
			int64_t v = ((int64_t)($nc(this->data)->get(this->nWords - 1) & (uint64_t)FDBigInteger::LONG_MASK));
			if (v < top) {
				return -1;
			}
			if (v > top + 1) {
				return 1;
			}
		}
	} else {
		if (bSize + 1 > thSize) {
			return -1;
		}
		$usrAssign(top, 32);
		int64_t v = ((int64_t)($nc(this->data)->get(this->nWords - 1) & (uint64_t)FDBigInteger::LONG_MASK));
		if (v < top) {
			return -1;
		}
		if (v > top + 1) {
			return 1;
		}
	}
	return this->cmp($(big->add(small)));
}

void FDBigInteger::makeImmutable() {
	this->isImmutable = true;
}

FDBigInteger* FDBigInteger::mult(int32_t i) {
	if (this->nWords == 0) {
		return this;
	}
	$var($ints, r, $new($ints, this->nWords + 1));
	mult(this->data, this->nWords, i, r);
	return $new(FDBigInteger, r, this->offset);
}

FDBigInteger* FDBigInteger::mult(FDBigInteger* other) {
	if (this->nWords == 0) {
		return this;
	}
	if (this->size() == 1) {
		return $nc(other)->mult($nc(this->data)->get(0));
	}
	if ($nc(other)->nWords == 0) {
		return other;
	}
	if ($nc(other)->size() == 1) {
		return this->mult($nc(other->data)->get(0));
	}
	$var($ints, r, $new($ints, this->nWords + $nc(other)->nWords));
	mult(this->data, this->nWords, other->data, other->nWords, r);
	return $new(FDBigInteger, r, this->offset + other->offset);
}

FDBigInteger* FDBigInteger::add(FDBigInteger* other) {
	$var(FDBigInteger, big, nullptr);
	$var(FDBigInteger, small, nullptr);
	int32_t bigLen = 0;
	int32_t smallLen = 0;
	int32_t tSize = this->size();
	int32_t oSize = $nc(other)->size();
	if (tSize >= oSize) {
		$assign(big, this);
		bigLen = tSize;
		$assign(small, other);
		smallLen = oSize;
	} else {
		$assign(big, other);
		bigLen = oSize;
		$assign(small, this);
		smallLen = tSize;
	}
	$var($ints, r, $new($ints, bigLen + 1));
	int32_t i = 0;
	int64_t carry = 0;
	for (; i < smallLen; ++i) {
		carry += (i < $nc(big)->offset ? (int64_t)0 : ((int64_t)($nc($nc(big)->data)->get(i - big->offset) & (uint64_t)FDBigInteger::LONG_MASK))) + (i < $nc(small)->offset ? (int64_t)0 : ((int64_t)($nc($nc(small)->data)->get(i - small->offset) & (uint64_t)FDBigInteger::LONG_MASK)));
		r->set(i, (int32_t)carry);
		carry >>= 32;
	}
	for (; i < bigLen; ++i) {
		carry += (i < $nc(big)->offset ? (int64_t)0 : ((int64_t)($nc($nc(big)->data)->get(i - big->offset) & (uint64_t)FDBigInteger::LONG_MASK)));
		r->set(i, (int32_t)carry);
		carry >>= 32;
	}
	r->set(bigLen, (int32_t)carry);
	return $new(FDBigInteger, r, 0);
}

void FDBigInteger::multAddMe(int32_t iv, int32_t addend) {
	int64_t v = (int64_t)(iv & (uint64_t)FDBigInteger::LONG_MASK);
	int64_t p = v * ((int64_t)($nc(this->data)->get(0) & (uint64_t)FDBigInteger::LONG_MASK)) + ((int64_t)(addend & (uint64_t)FDBigInteger::LONG_MASK));
	$nc(this->data)->set(0, (int32_t)p);
	$usrAssign(p, 32);
	for (int32_t i = 1; i < this->nWords; ++i) {
		p += v * ((int64_t)($nc(this->data)->get(i) & (uint64_t)FDBigInteger::LONG_MASK));
		$nc(this->data)->set(i, (int32_t)p);
		$usrAssign(p, 32);
	}
	if (p != (int64_t)0) {
		$nc(this->data)->set(this->nWords++, (int32_t)p);
	}
}

int64_t FDBigInteger::multDiffMe(int64_t q, FDBigInteger* S) {
	int64_t diff = 0;
	if (q != 0) {
		int32_t deltaSize = $nc(S)->offset - this->offset;
		if (deltaSize >= 0) {
			$var($ints, sd, S->data);
			$var($ints, td, this->data);
			{
				int32_t sIndex = 0;
				int32_t tIndex = deltaSize;
				for (; sIndex < S->nWords; ++sIndex, ++tIndex) {
					diff += ((int64_t)($nc(td)->get(tIndex) & (uint64_t)FDBigInteger::LONG_MASK)) - q * ((int64_t)($nc(sd)->get(sIndex) & (uint64_t)FDBigInteger::LONG_MASK));
					td->set(tIndex, (int32_t)diff);
					diff >>= 32;
				}
			}
		} else {
			deltaSize = -deltaSize;
			$var($ints, rd, $new($ints, this->nWords + deltaSize));
			int32_t sIndex = 0;
			int32_t rIndex = 0;
			$var($ints, sd, S->data);
			for (; rIndex < deltaSize && sIndex < S->nWords; ++sIndex, ++rIndex) {
				diff -= q * ((int64_t)($nc(sd)->get(sIndex) & (uint64_t)FDBigInteger::LONG_MASK));
				rd->set(rIndex, (int32_t)diff);
				diff >>= 32;
			}
			int32_t tIndex = 0;
			$var($ints, td, this->data);
			for (; sIndex < S->nWords; ++sIndex, ++tIndex, ++rIndex) {
				diff += ((int64_t)($nc(td)->get(tIndex) & (uint64_t)FDBigInteger::LONG_MASK)) - q * ((int64_t)($nc(sd)->get(sIndex) & (uint64_t)FDBigInteger::LONG_MASK));
				rd->set(rIndex, (int32_t)diff);
				diff >>= 32;
			}
			this->nWords += deltaSize;
			this->offset -= deltaSize;
			$set(this, data, rd);
		}
	}
	return diff;
}

int32_t FDBigInteger::multAndCarryBy10($ints* src, int32_t srcLen, $ints* dst) {
	$init(FDBigInteger);
	int64_t carry = 0;
	for (int32_t i = 0; i < srcLen; ++i) {
		int64_t product = ((int64_t)($nc(src)->get(i) & (uint64_t)FDBigInteger::LONG_MASK)) * (int64_t)10 + carry;
		$nc(dst)->set(i, (int32_t)product);
		carry = (int64_t)((uint64_t)product >> 32);
	}
	return (int32_t)carry;
}

void FDBigInteger::mult($ints* src, int32_t srcLen, int32_t value, $ints* dst) {
	$init(FDBigInteger);
	int64_t val = (int64_t)(value & (uint64_t)FDBigInteger::LONG_MASK);
	int64_t carry = 0;
	for (int32_t i = 0; i < srcLen; ++i) {
		int64_t product = ((int64_t)($nc(src)->get(i) & (uint64_t)FDBigInteger::LONG_MASK)) * val + carry;
		$nc(dst)->set(i, (int32_t)product);
		carry = (int64_t)((uint64_t)product >> 32);
	}
	$nc(dst)->set(srcLen, (int32_t)carry);
}

void FDBigInteger::mult($ints* src, int32_t srcLen, int32_t v0, int32_t v1, $ints* dst) {
	$init(FDBigInteger);
	int64_t v = (int64_t)(v0 & (uint64_t)FDBigInteger::LONG_MASK);
	int64_t carry = 0;
	for (int32_t j = 0; j < srcLen; ++j) {
		int64_t product = v * ((int64_t)($nc(src)->get(j) & (uint64_t)FDBigInteger::LONG_MASK)) + carry;
		$nc(dst)->set(j, (int32_t)product);
		carry = (int64_t)((uint64_t)product >> 32);
	}
	$nc(dst)->set(srcLen, (int32_t)carry);
	v = (int64_t)(v1 & (uint64_t)FDBigInteger::LONG_MASK);
	carry = 0;
	for (int32_t j = 0; j < srcLen; ++j) {
		int64_t product = ((int64_t)(dst->get(j + 1) & (uint64_t)FDBigInteger::LONG_MASK)) + v * ((int64_t)($nc(src)->get(j) & (uint64_t)FDBigInteger::LONG_MASK)) + carry;
		dst->set(j + 1, (int32_t)product);
		carry = (int64_t)((uint64_t)product >> 32);
	}
	dst->set(srcLen + 1, (int32_t)carry);
}

FDBigInteger* FDBigInteger::big5pow(int32_t p) {
	$init(FDBigInteger);
	if (!FDBigInteger::$assertionsDisabled && !(p >= 0)) {
		$throwNew($AssertionError, p);
	}
	if (p < FDBigInteger::MAX_FIVE_POW) {
		return $nc(FDBigInteger::POW_5_CACHE)->get(p);
	}
	return big5powRec(p);
}

FDBigInteger* FDBigInteger::big5powRec(int32_t p) {
	$init(FDBigInteger);
	if (p < FDBigInteger::MAX_FIVE_POW) {
		return $nc(FDBigInteger::POW_5_CACHE)->get(p);
	}
	int32_t q = 0;
	int32_t r = 0;
	q = p >> 1;
	r = p - q;
	$var(FDBigInteger, bigq, big5powRec(q));
	if (r < $nc(FDBigInteger::SMALL_5_POW)->length) {
		return $nc(bigq)->mult($nc(FDBigInteger::SMALL_5_POW)->get(r));
	} else {
		return $nc(bigq)->mult($(big5powRec(r)));
	}
}

$String* FDBigInteger::toHexString() {
	if (this->nWords == 0) {
		return "0"_s;
	}
	$var($StringBuilder, sb, $new($StringBuilder, (this->nWords + this->offset) * 8));
	for (int32_t i = this->nWords - 1; i >= 0; --i) {
		$var($String, subStr, $Integer::toHexString($nc(this->data)->get(i)));
		for (int32_t j = $nc(subStr)->length(); j < 8; ++j) {
			sb->append(u'0');
		}
		sb->append(subStr);
	}
	for (int32_t i = this->offset; i > 0; --i) {
		sb->append("00000000"_s);
	}
	return sb->toString();
}

$BigInteger* FDBigInteger::toBigInteger() {
	$var($bytes, magnitude, $new($bytes, this->nWords * 4 + 1));
	for (int32_t i = 0; i < this->nWords; ++i) {
		int32_t w = $nc(this->data)->get(i);
		magnitude->set(magnitude->length - 4 * i - 1, (int8_t)w);
		magnitude->set(magnitude->length - 4 * i - 2, (int8_t)(w >> 8));
		magnitude->set(magnitude->length - 4 * i - 3, (int8_t)(w >> 16));
		magnitude->set(magnitude->length - 4 * i - 4, (int8_t)(w >> 24));
	}
	return $$new($BigInteger, magnitude)->shiftLeft(this->offset * 32);
}

$String* FDBigInteger::toString() {
	return $nc($(toBigInteger()))->toString();
}

void clinit$FDBigInteger($Class* class$) {
	FDBigInteger::$assertionsDisabled = !FDBigInteger::class$->desiredAssertionStatus();
	{
		$CDS::initializeFromArchive(FDBigInteger::class$);
		$var($ObjectArray, caches, FDBigInteger::archivedCaches);
		if (caches == nullptr) {
			$var($longs, long5pow, $new($longs, {
				(int64_t)1,
				(int64_t)5,
				(int64_t)5 * 5,
				(int64_t)5 * 5 * 5,
				(int64_t)5 * 5 * 5 * 5,
				(int64_t)5 * 5 * 5 * 5 * 5,
				(int64_t)5 * 5 * 5 * 5 * 5 * 5,
				(int64_t)5 * 5 * 5 * 5 * 5 * 5 * 5,
				(int64_t)5 * 5 * 5 * 5 * 5 * 5 * 5 * 5,
				(int64_t)5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5,
				(int64_t)5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5,
				(int64_t)5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5,
				(int64_t)5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5,
				(int64_t)5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5,
				(int64_t)5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5,
				(int64_t)5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5,
				(int64_t)5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5,
				(int64_t)5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5,
				(int64_t)5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5,
				(int64_t)5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5,
				(int64_t)5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5,
				(int64_t)5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5,
				(int64_t)5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5,
				(int64_t)5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5,
				(int64_t)5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5,
				(int64_t)5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5,
				(int64_t)5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5
			}));
			$var($ints, small5pow, $new($ints, {
				1,
				5,
				5 * 5,
				5 * 5 * 5,
				5 * 5 * 5 * 5,
				5 * 5 * 5 * 5 * 5,
				5 * 5 * 5 * 5 * 5 * 5,
				5 * 5 * 5 * 5 * 5 * 5 * 5,
				5 * 5 * 5 * 5 * 5 * 5 * 5 * 5,
				5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5,
				5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5,
				5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5,
				5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5,
				5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5
			}));
			$var($FDBigIntegerArray, pow5cache, $new($FDBigIntegerArray, FDBigInteger::MAX_FIVE_POW));
			int32_t i = 0;
			while (i < small5pow->length) {
				$var(FDBigInteger, pow5, $new(FDBigInteger, $$new($ints, {small5pow->get(i)}), 0));
				pow5->makeImmutable();
				pow5cache->set(i, pow5);
				++i;
			}
			$var(FDBigInteger, prev, pow5cache->get(i - 1));
			while (i < FDBigInteger::MAX_FIVE_POW) {
				pow5cache->set(i, $assign(prev, $nc(prev)->mult(5)));
				prev->makeImmutable();
				++i;
			}
			$var(FDBigInteger, zero, $new(FDBigInteger, $$new($ints, 0), 0));
			zero->makeImmutable();
			$assignStatic(FDBigInteger::archivedCaches, ($assign(caches, $new($ObjectArray, {
				$of(small5pow),
				$of(long5pow),
				$of(pow5cache),
				$of(zero)
			}))));
		}
		$assignStatic(FDBigInteger::SMALL_5_POW, $cast($ints, $nc(caches)->get(0)));
		$assignStatic(FDBigInteger::LONG_5_POW, $cast($longs, caches->get(1)));
		$assignStatic(FDBigInteger::POW_5_CACHE, $cast($FDBigIntegerArray, caches->get(2)));
		$assignStatic(FDBigInteger::ZERO, $cast(FDBigInteger, caches->get(3)));
	}
}

FDBigInteger::FDBigInteger() {
}

$Class* FDBigInteger::load$($String* name, bool initialize) {
	$loadClass(FDBigInteger, name, initialize, &_FDBigInteger_ClassInfo_, clinit$FDBigInteger, allocate$FDBigInteger);
	return class$;
}

$Class* FDBigInteger::class$ = nullptr;

		} // math
	} // internal
} // jdk