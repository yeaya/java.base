#ifndef _jdk_internal_math_FDBigInteger_h_
#define _jdk_internal_math_FDBigInteger_h_
//$ class jdk.internal.math.FDBigInteger
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("MAX_FIVE_POW")
#undef MAX_FIVE_POW
#pragma push_macro("ZERO")
#undef ZERO
#pragma push_macro("S")
#undef S
#pragma push_macro("SMALL_5_POW")
#undef SMALL_5_POW
#pragma push_macro("LONG_MASK")
#undef LONG_MASK
#pragma push_macro("POW_5_CACHE")
#undef POW_5_CACHE
#pragma push_macro("LONG_5_POW")
#undef LONG_5_POW

namespace java {
	namespace math {
		class BigInteger;
	}
}

namespace jdk {
	namespace internal {
		namespace math {

class $import FDBigInteger : public ::java::lang::Object {
	$class(FDBigInteger, 0, ::java::lang::Object)
public:
	FDBigInteger();
	void init$($ints* data, int32_t offset);
	void init$(int64_t lValue, $chars* digits, int32_t kDigits, int32_t nDigits);
	::jdk::internal::math::FDBigInteger* add(::jdk::internal::math::FDBigInteger* other);
	virtual int32_t addAndCmp(::jdk::internal::math::FDBigInteger* x, ::jdk::internal::math::FDBigInteger* y);
	static ::jdk::internal::math::FDBigInteger* big5pow(int32_t p);
	static ::jdk::internal::math::FDBigInteger* big5powRec(int32_t p);
	static int32_t checkZeroTail($ints* a, int32_t from);
	virtual int32_t cmp(::jdk::internal::math::FDBigInteger* other);
	virtual int32_t cmpPow52(int32_t p5, int32_t p2);
	virtual int32_t getNormalizationBias();
	virtual ::jdk::internal::math::FDBigInteger* leftInplaceSub(::jdk::internal::math::FDBigInteger* subtrahend);
	static void leftShift($ints* src, int32_t idx, $ints* result, int32_t bitcount, int32_t anticount, int32_t prev);
	virtual ::jdk::internal::math::FDBigInteger* leftShift(int32_t shift);
	virtual void makeImmutable();
	static void mult($ints* s1, int32_t s1Len, $ints* s2, int32_t s2Len, $ints* dst);
	::jdk::internal::math::FDBigInteger* mult(int32_t i);
	::jdk::internal::math::FDBigInteger* mult(::jdk::internal::math::FDBigInteger* other);
	static void mult($ints* src, int32_t srcLen, int32_t value, $ints* dst);
	static void mult($ints* src, int32_t srcLen, int32_t v0, int32_t v1, $ints* dst);
	void multAddMe(int32_t iv, int32_t addend);
	static int32_t multAndCarryBy10($ints* src, int32_t srcLen, $ints* dst);
	virtual ::jdk::internal::math::FDBigInteger* multBy10();
	virtual ::jdk::internal::math::FDBigInteger* multByPow52(int32_t p5, int32_t p2);
	int64_t multDiffMe(int64_t q, ::jdk::internal::math::FDBigInteger* S);
	virtual int32_t quoRemIteration(::jdk::internal::math::FDBigInteger* S);
	virtual ::jdk::internal::math::FDBigInteger* rightInplaceSub(::jdk::internal::math::FDBigInteger* subtrahend);
	int32_t size();
	virtual ::java::math::BigInteger* toBigInteger();
	virtual $String* toHexString();
	virtual $String* toString() override;
	void trimLeadingZeros();
	static ::jdk::internal::math::FDBigInteger* valueOfMulPow52(int64_t value, int32_t p5, int32_t p2);
	static ::jdk::internal::math::FDBigInteger* valueOfPow2(int32_t p2);
	static ::jdk::internal::math::FDBigInteger* valueOfPow52(int32_t p5, int32_t p2);
	static bool $assertionsDisabled;
	static $ints* SMALL_5_POW;
	static $longs* LONG_5_POW;
	static const int32_t MAX_FIVE_POW = 340;
	static $Array<::jdk::internal::math::FDBigInteger>* POW_5_CACHE;
	static ::jdk::internal::math::FDBigInteger* ZERO;
	static $ObjectArray* archivedCaches;
	static const int64_t LONG_MASK = (int64_t)0x00000000FFFFFFFF;
	$ints* data = nullptr;
	int32_t offset = 0;
	int32_t nWords = 0;
	bool isImmutable = false;
};

		} // math
	} // internal
} // jdk

#pragma pop_macro("MAX_FIVE_POW")
#pragma pop_macro("ZERO")
#pragma pop_macro("S")
#pragma pop_macro("SMALL_5_POW")
#pragma pop_macro("LONG_MASK")
#pragma pop_macro("POW_5_CACHE")
#pragma pop_macro("LONG_5_POW")

#endif // _jdk_internal_math_FDBigInteger_h_