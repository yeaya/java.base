#ifndef _java_lang_Long_h_
#define _java_lang_Long_h_
//$ class java.lang.Long
//$ extends java.lang.Number
//$ implements java.lang.Comparable,java.lang.constant.Constable,java.lang.constant.ConstantDesc

#include <java/lang/Array.h>
#include <java/lang/Byte.h>
#include <java/lang/constant/ConstantDesc.h>

#pragma push_macro("BYTES")
#undef BYTES
#pragma push_macro("SIZE")
#undef SIZE
#pragma push_macro("MAX_VALUE")
#undef MAX_VALUE
#pragma push_macro("MIN_VALUE")
#undef MIN_VALUE
#pragma push_macro("TYPE")
#undef TYPE

namespace java {
	namespace lang {
		class CharSequence;
	}
}
namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandles$Lookup;
		}
	}
}
namespace java {
	namespace math {
		class BigInteger;
	}
}
namespace java {
	namespace util {
		class Optional;
	}
}

namespace java {
	namespace lang {

class $export Long : public ::java::lang::Number, public ::java::lang::Comparable, public ::java::lang::constant::Constable, public ::java::lang::constant::ConstantDesc {
	$class(Long, 0, ::java::lang::Number, ::java::lang::Comparable, ::java::lang::constant::Constable, ::java::lang::constant::ConstantDesc)
public:
	Long();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(int64_t value);
	void init$($String* s);
	static int32_t bitCount(int64_t i);
	virtual int8_t byteValue() override;
	static int32_t compare(int64_t x, int64_t y);
	int32_t compareTo(::java::lang::Long* anotherLong);
	virtual int32_t compareTo(Object$* anotherLong) override;
	static int32_t compareUnsigned(int64_t x, int64_t y);
	static ::java::lang::Long* decode($String* nm);
	virtual ::java::util::Optional* describeConstable() override;
	static int64_t divideUnsigned(int64_t dividend, int64_t divisor);
	virtual double doubleValue() override;
	virtual bool equals(Object$* obj) override;
	static $String* fastUUID(int64_t lsb, int64_t msb);
	virtual float floatValue() override;
	static void formatUnsignedLong0(int64_t val, int32_t shift, $bytes* buf, int32_t offset, int32_t len);
	static void formatUnsignedLong0UTF16(int64_t val, int32_t shift, $bytes* buf, int32_t offset, int32_t len);
	static int32_t getChars(int64_t i, int32_t index, $bytes* buf);
	static ::java::lang::Long* getLong($String* nm);
	static ::java::lang::Long* getLong($String* nm, int64_t val);
	static ::java::lang::Long* getLong($String* nm, ::java::lang::Long* val);
	virtual int32_t hashCode() override;
	static int32_t hashCode(int64_t value);
	static int64_t highestOneBit(int64_t i);
	virtual int32_t intValue() override;
	virtual int64_t longValue() override;
	static int64_t lowestOneBit(int64_t i);
	static int64_t max(int64_t a, int64_t b);
	static int64_t min(int64_t a, int64_t b);
	static int32_t numberOfLeadingZeros(int64_t i);
	static int32_t numberOfTrailingZeros(int64_t i);
	static int64_t parseLong($String* s, int32_t radix);
	static int64_t parseLong(::java::lang::CharSequence* s, int32_t beginIndex, int32_t endIndex, int32_t radix);
	static int64_t parseLong($String* s);
	static int64_t parseUnsignedLong($String* s, int32_t radix);
	static int64_t parseUnsignedLong(::java::lang::CharSequence* s, int32_t beginIndex, int32_t endIndex, int32_t radix);
	static int64_t parseUnsignedLong($String* s);
	static int64_t remainderUnsigned(int64_t dividend, int64_t divisor);
	virtual $Object* resolveConstantDesc(::java::lang::invoke::MethodHandles$Lookup* lookup) override;
	static int64_t reverse(int64_t i);
	static int64_t reverseBytes(int64_t i);
	static int64_t rotateLeft(int64_t i, int32_t distance);
	static int64_t rotateRight(int64_t i, int32_t distance);
	virtual int16_t shortValue() override;
	static int32_t signum(int64_t i);
	static int32_t stringSize(int64_t x);
	static int64_t sum(int64_t a, int64_t b);
	static $String* toBinaryString(int64_t i);
	static $String* toHexString(int64_t i);
	static $String* toOctalString(int64_t i);
	static $String* toString(int64_t i, int32_t radix);
	static $String* toString(int64_t i);
	virtual $String* toString() override;
	static $String* toStringUTF16(int64_t i, int32_t radix);
	static ::java::math::BigInteger* toUnsignedBigInteger(int64_t i);
	static $String* toUnsignedString(int64_t i, int32_t radix);
	static $String* toUnsignedString(int64_t i);
	static $String* toUnsignedString0(int64_t val, int32_t shift);
	static ::java::lang::Long* valueOf($String* s, int32_t radix);
	static ::java::lang::Long* valueOf($String* s);
	static ::java::lang::Long* valueOf(int64_t l);
	static const int64_t MIN_VALUE = (int64_t)0x8000000000000000;
	static const int64_t MAX_VALUE = (int64_t)0x7FFFFFFFFFFFFFFF;
	static $Class* TYPE;
	int64_t value = 0;
	static const int32_t SIZE = 64;
	static const int32_t BYTES = 8; // SIZE / ::java::lang::Byte::SIZE
	static const int64_t serialVersionUID = (int64_t)0x3B8BE490CC8F23DF;
};

	} // lang
} // java

#pragma pop_macro("BYTES")
#pragma pop_macro("SIZE")
#pragma pop_macro("MAX_VALUE")
#pragma pop_macro("MIN_VALUE")
#pragma pop_macro("TYPE")

#endif // _java_lang_Long_h_