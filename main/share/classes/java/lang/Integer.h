#ifndef _java_lang_Integer_h_
#define _java_lang_Integer_h_
//$ class java.lang.Integer
//$ extends java.lang.Number
//$ implements java.lang.Comparable,java.lang.constant.Constable,java.lang.constant.ConstantDesc

#include <java/lang/Array.h>
#include <java/lang/Byte.h>
#include <java/lang/constant/ConstantDesc.h>

#pragma push_macro("BYTES")
#undef BYTES
#pragma push_macro("MAX_VALUE")
#undef MAX_VALUE
#pragma push_macro("MIN_VALUE")
#undef MIN_VALUE
#pragma push_macro("SIZE")
#undef SIZE
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
	namespace util {
		class Optional;
	}
}

namespace java {
	namespace lang {

class $export Integer : public ::java::lang::Number, public ::java::lang::Comparable, public ::java::lang::constant::Constable, public ::java::lang::constant::ConstantDesc {
	$class(Integer, $PRELOAD, ::java::lang::Number, ::java::lang::Comparable, ::java::lang::constant::Constable, ::java::lang::constant::ConstantDesc)
public:
	Integer();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(int32_t value);
	void init$($String* s);
	static int32_t bitCount(int32_t i);
	virtual int8_t byteValue() override;
	static int32_t compare(int32_t x, int32_t y);
	int32_t compareTo(::java::lang::Integer* anotherInteger);
	virtual int32_t compareTo(Object$* anotherInteger) override;
	static int32_t compareUnsigned(int32_t x, int32_t y);
	static ::java::lang::Integer* decode($String* nm);
	virtual ::java::util::Optional* describeConstable() override;
	static int32_t divideUnsigned(int32_t dividend, int32_t divisor);
	virtual double doubleValue() override;
	virtual bool equals(Object$* obj) override;
	virtual float floatValue() override;
	static void formatUnsignedInt(int32_t val, int32_t shift, $bytes* buf, int32_t len);
	static void formatUnsignedIntUTF16(int32_t val, int32_t shift, $bytes* buf, int32_t len);
	static int32_t getChars(int32_t i, int32_t index, $bytes* buf);
	static ::java::lang::Integer* getInteger($String* nm);
	static ::java::lang::Integer* getInteger($String* nm, int32_t val);
	static ::java::lang::Integer* getInteger($String* nm, ::java::lang::Integer* val);
	virtual int32_t hashCode() override;
	static int32_t hashCode(int32_t value);
	static int32_t highestOneBit(int32_t i);
	virtual int32_t intValue() override;
	virtual int64_t longValue() override;
	static int32_t lowestOneBit(int32_t i);
	static int32_t max(int32_t a, int32_t b);
	static int32_t min(int32_t a, int32_t b);
	static int32_t numberOfLeadingZeros(int32_t i);
	static int32_t numberOfTrailingZeros(int32_t i);
	static int32_t parseInt($String* s, int32_t radix);
	static int32_t parseInt(::java::lang::CharSequence* s, int32_t beginIndex, int32_t endIndex, int32_t radix);
	static int32_t parseInt($String* s);
	static int32_t parseUnsignedInt($String* s, int32_t radix);
	static int32_t parseUnsignedInt(::java::lang::CharSequence* s, int32_t beginIndex, int32_t endIndex, int32_t radix);
	static int32_t parseUnsignedInt($String* s);
	static int32_t remainderUnsigned(int32_t dividend, int32_t divisor);
	virtual $Object* resolveConstantDesc(::java::lang::invoke::MethodHandles$Lookup* lookup) override;
	static int32_t reverse(int32_t i);
	static int32_t reverseBytes(int32_t i);
	static int32_t rotateLeft(int32_t i, int32_t distance);
	static int32_t rotateRight(int32_t i, int32_t distance);
	virtual int16_t shortValue() override;
	static int32_t signum(int32_t i);
	static int32_t stringSize(int32_t x);
	static int32_t sum(int32_t a, int32_t b);
	static $String* toBinaryString(int32_t i);
	static $String* toHexString(int32_t i);
	static $String* toOctalString(int32_t i);
	static $String* toString(int32_t i, int32_t radix);
	static $String* toString(int32_t i);
	virtual $String* toString() override;
	static $String* toStringUTF16(int32_t i, int32_t radix);
	static int64_t toUnsignedLong(int32_t x);
	static $String* toUnsignedString(int32_t i, int32_t radix);
	static $String* toUnsignedString(int32_t i);
	static $String* toUnsignedString0(int32_t val, int32_t shift);
	static ::java::lang::Integer* valueOf($String* s, int32_t radix);
	static ::java::lang::Integer* valueOf($String* s);
	static ::java::lang::Integer* valueOf(int32_t i);
	static const int32_t MIN_VALUE = 0x80000000;
	static const int32_t MAX_VALUE = 0x7FFFFFFF;
	static $Class* TYPE;
	static $chars* digits;
	static $bytes* DigitTens;
	static $bytes* DigitOnes;
	static $ints* sizeTable;
	int32_t value = 0;
	static const int32_t SIZE = 32;
	static const int32_t BYTES = 4; // SIZE / ::java::lang::Byte::SIZE
	static const int64_t serialVersionUID = (int64_t)0x12E2A0A4F7818738;
};

	} // lang
} // java

#pragma pop_macro("BYTES")
#pragma pop_macro("MAX_VALUE")
#pragma pop_macro("MIN_VALUE")
#pragma pop_macro("SIZE")
#pragma pop_macro("TYPE")

#endif // _java_lang_Integer_h_