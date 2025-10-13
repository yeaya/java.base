#ifndef _java_text_DigitList_h_
#define _java_text_DigitList_h_
//$ class java.text.DigitList
//$ extends java.lang.Cloneable

#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>

#pragma push_macro("LONG_MIN_REP")
#undef LONG_MIN_REP
#pragma push_macro("MAX_COUNT")
#undef MAX_COUNT

namespace java {
	namespace lang {
		class StringBuffer;
	}
}
namespace java {
	namespace math {
		class BigDecimal;
		class BigInteger;
		class RoundingMode;
	}
}

namespace java {
	namespace text {

class DigitList : public ::java::lang::Cloneable {
	$class(DigitList, 0, ::java::lang::Cloneable)
public:
	DigitList();
	void init$();
	void append(char16_t digit);
	void clear();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	void extendDigits(int32_t len);
	bool fitsIntoLong(bool isPositive, bool ignoreNegativeZero);
	::java::math::BigDecimal* getBigDecimal();
	$chars* getDataChars(int32_t length);
	double getDouble();
	int64_t getLong();
	::java::lang::StringBuffer* getStringBuffer();
	virtual int32_t hashCode() override;
	bool isLongMIN_VALUE();
	bool isZero();
	static int32_t parseInt($chars* str, int32_t offset, int32_t strLen);
	void round(int32_t maximumDigits, bool alreadyRounded, bool valueExactAsDecimal);
	void set(bool isNegative, double source, int32_t maximumFractionDigits);
	void set(bool isNegative, double source, int32_t maximumDigits, bool fixedPoint);
	void set(bool isNegative, $String* s, bool roundedUp, bool valueExactAsDecimal, int32_t maximumDigits, bool fixedPoint);
	void set(bool isNegative, int64_t source);
	void set(bool isNegative, int64_t source, int32_t maximumDigits);
	void set(bool isNegative, ::java::math::BigDecimal* source, int32_t maximumDigits, bool fixedPoint);
	void set(bool isNegative, ::java::math::BigInteger* source, int32_t maximumDigits);
	void setRoundingMode(::java::math::RoundingMode* r);
	bool shouldRoundUp(int32_t maximumDigits, bool alreadyRounded, bool valueExactAsDecimal);
	virtual $String* toString() override;
	static bool $assertionsDisabled;
	static const int32_t MAX_COUNT = 19;
	int32_t decimalAt = 0;
	int32_t count = 0;
	$chars* digits = nullptr;
	$chars* data = nullptr;
	::java::math::RoundingMode* roundingMode = nullptr;
	bool isNegative = false;
	static $chars* LONG_MIN_REP;
	::java::lang::StringBuffer* tempBuffer = nullptr;
};

	} // text
} // java

#pragma pop_macro("LONG_MIN_REP")
#pragma pop_macro("MAX_COUNT")

#endif // _java_text_DigitList_h_