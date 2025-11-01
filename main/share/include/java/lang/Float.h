#ifndef _java_lang_Float_h_
#define _java_lang_Float_h_
//$ class java.lang.Float
//$ extends java.lang.Number
//$ implements java.lang.Comparable,java.lang.constant.Constable,java.lang.constant.ConstantDesc

#include <java/lang/Byte.h>
#include <java/lang/constant/ConstantDesc.h>

#pragma push_macro("BYTES")
#undef BYTES
#pragma push_macro("MAX_EXPONENT")
#undef MAX_EXPONENT
#pragma push_macro("MAX_VALUE")
#undef MAX_VALUE
#pragma push_macro("MIN_EXPONENT")
#undef MIN_EXPONENT
#pragma push_macro("MIN_NORMAL")
#undef MIN_NORMAL
#pragma push_macro("MIN_VALUE")
#undef MIN_VALUE
#pragma push_macro("NEGATIVE_INFINITY")
#undef NEGATIVE_INFINITY
#pragma push_macro("POSITIVE_INFINITY")
#undef POSITIVE_INFINITY
#pragma push_macro("SIZE")
#undef SIZE
#pragma push_macro("TYPE")
#undef TYPE

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

class $import Float : public ::java::lang::Number, public ::java::lang::Comparable, public ::java::lang::constant::Constable, public ::java::lang::constant::ConstantDesc {
	$class(Float, 0, ::java::lang::Number, ::java::lang::Comparable, ::java::lang::constant::Constable, ::java::lang::constant::ConstantDesc)
public:
	Float();
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(float value);
	void init$(double value);
	void init$($String* s);
	virtual int8_t byteValue() override;
	static int32_t compare(float f1, float f2);
	int32_t compareTo(::java::lang::Float* anotherFloat);
	virtual int32_t compareTo(Object$* anotherFloat) override;
	virtual ::java::util::Optional* describeConstable() override;
	virtual double doubleValue() override;
	virtual bool equals(Object$* obj) override;
	static int32_t floatToIntBits(float value);
	static int32_t floatToRawIntBits(float value);
	virtual float floatValue() override;
	virtual int32_t hashCode() override;
	static int32_t hashCode(float value);
	static float intBitsToFloat(int32_t bits);
	virtual int32_t intValue() override;
	static bool isFinite(float f);
	static bool isInfinite(float v);
	bool isInfinite();
	static bool isNaN(float v);
	bool isNaN();
	virtual int64_t longValue() override;
	static float max(float a, float b);
	static float min(float a, float b);
	static float parseFloat($String* s);
	virtual $Object* resolveConstantDesc(::java::lang::invoke::MethodHandles$Lookup* lookup) override;
	virtual int16_t shortValue() override;
	static float sum(float a, float b);
	static $String* toHexString(float f);
	static $String* toString(float f);
	virtual $String* toString() override;
	static ::java::lang::Float* valueOf($String* s);
	static ::java::lang::Float* valueOf(float f);
	static float POSITIVE_INFINITY;
	static float NEGATIVE_INFINITY;
	static float NaN;
	static float MAX_VALUE;
	static float MIN_NORMAL;
	static float MIN_VALUE;
	static const int32_t MAX_EXPONENT = 127;
	static const int32_t MIN_EXPONENT = (-126);
	static const int32_t SIZE = 32;
	static const int32_t BYTES = 4; // SIZE / ::java::lang::Byte::SIZE
	static $Class* TYPE;
	float value = 0.0;
	static const int64_t serialVersionUID = (int64_t)0xDAEDC9A2DB3CF0EC;
	static float mod(float a, float b);
};

	} // lang
} // java

#pragma pop_macro("BYTES")
#pragma pop_macro("MAX_EXPONENT")
#pragma pop_macro("MAX_VALUE")
#pragma pop_macro("MIN_EXPONENT")
#pragma pop_macro("MIN_NORMAL")
#pragma pop_macro("MIN_VALUE")
#pragma pop_macro("NEGATIVE_INFINITY")
#pragma pop_macro("POSITIVE_INFINITY")
#pragma pop_macro("SIZE")
#pragma pop_macro("TYPE")

#endif // _java_lang_Float_h_