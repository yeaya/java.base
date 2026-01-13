#ifndef _java_lang_Short_h_
#define _java_lang_Short_h_
//$ class java.lang.Short
//$ extends java.lang.Number
//$ implements java.lang.Comparable,java.lang.constant.Constable

#include <java/lang/Comparable.h>
#include <java/lang/Number.h>
#include <java/lang/constant/Constable.h>

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
	namespace util {
		class Optional;
	}
}

namespace java {
	namespace lang {

class $import Short : public ::java::lang::Number, public ::java::lang::Comparable, public ::java::lang::constant::Constable {
	$class(Short, 0, ::java::lang::Number, ::java::lang::Comparable, ::java::lang::constant::Constable)
public:
	Short();
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(int16_t value);
	void init$($String* s);
	virtual int8_t byteValue() override;
	static int32_t compare(int16_t x, int16_t y);
	int32_t compareTo(::java::lang::Short* anotherShort);
	virtual int32_t compareTo(Object$* anotherShort) override;
	static int32_t compareUnsigned(int16_t x, int16_t y);
	static ::java::lang::Short* decode($String* nm);
	virtual ::java::util::Optional* describeConstable() override;
	virtual double doubleValue() override;
	virtual bool equals(Object$* obj) override;
	virtual float floatValue() override;
	virtual int32_t hashCode() override;
	static int32_t hashCode(int16_t value);
	virtual int32_t intValue() override;
	virtual int64_t longValue() override;
	static int16_t parseShort($String* s, int32_t radix);
	static int16_t parseShort($String* s);
	static int16_t reverseBytes(int16_t i);
	virtual int16_t shortValue() override;
	static $String* toString(int16_t s);
	virtual $String* toString() override;
	static int32_t toUnsignedInt(int16_t x);
	static int64_t toUnsignedLong(int16_t x);
	static ::java::lang::Short* valueOf($String* s, int32_t radix);
	static ::java::lang::Short* valueOf($String* s);
	static ::java::lang::Short* valueOf(int16_t s);
	static const int16_t MIN_VALUE = (-32768);
	static const int16_t MAX_VALUE = 32767;
	static $Class* TYPE;
	int16_t value = 0;
	static const int32_t SIZE = 16;
	static const int32_t BYTES = 2; // SIZE / Byte.SIZE
	static const int64_t serialVersionUID = (int64_t)0x684D37133460DA52;
};

	} // lang
} // java

#pragma pop_macro("BYTES")
#pragma pop_macro("MAX_VALUE")
#pragma pop_macro("MIN_VALUE")
#pragma pop_macro("SIZE")
#pragma pop_macro("TYPE")

#endif // _java_lang_Short_h_