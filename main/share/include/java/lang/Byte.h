#ifndef _java_lang_Byte_h_
#define _java_lang_Byte_h_
//$ class java.lang.Byte
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

class $import Byte : public ::java::lang::Number, public ::java::lang::Comparable, public ::java::lang::constant::Constable {
	$class(Byte, $PRELOAD, ::java::lang::Number, ::java::lang::Comparable, ::java::lang::constant::Constable)
public:
	Byte();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(int8_t value);
	void init$($String* s);
	virtual int8_t byteValue() override;
	static int32_t compare(int8_t x, int8_t y);
	int32_t compareTo(::java::lang::Byte* anotherByte);
	virtual int32_t compareTo(Object$* anotherByte) override;
	static int32_t compareUnsigned(int8_t x, int8_t y);
	static ::java::lang::Byte* decode($String* nm);
	virtual ::java::util::Optional* describeConstable() override;
	virtual double doubleValue() override;
	virtual bool equals(Object$* obj) override;
	virtual float floatValue() override;
	virtual int32_t hashCode() override;
	static int32_t hashCode(int8_t value);
	virtual int32_t intValue() override;
	virtual int64_t longValue() override;
	static int8_t parseByte($String* s, int32_t radix);
	static int8_t parseByte($String* s);
	virtual int16_t shortValue() override;
	static $String* toString(int8_t b);
	virtual $String* toString() override;
	static int32_t toUnsignedInt(int8_t x);
	static int64_t toUnsignedLong(int8_t x);
	static ::java::lang::Byte* valueOf(int8_t b);
	static ::java::lang::Byte* valueOf($String* s, int32_t radix);
	static ::java::lang::Byte* valueOf($String* s);
	static const int8_t MIN_VALUE = (-128);
	static const int8_t MAX_VALUE = 127;
	static $Class* TYPE;
	int8_t value = 0;
	static const int32_t SIZE = 8;
	static const int32_t BYTES = 1; // SIZE / ::java::lang::Byte::SIZE
	static const int64_t serialVersionUID = (int64_t)0x9C4E6084EE50F51C;
};

	} // lang
} // java

#pragma pop_macro("BYTES")
#pragma pop_macro("MAX_VALUE")
#pragma pop_macro("MIN_VALUE")
#pragma pop_macro("SIZE")
#pragma pop_macro("TYPE")

#endif // _java_lang_Byte_h_