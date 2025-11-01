#ifndef _java_lang_Double_h_
#define _java_lang_Double_h_
//$ class java.lang.Double
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

class $export Double : public ::java::lang::Number, public ::java::lang::Comparable, public ::java::lang::constant::Constable, public ::java::lang::constant::ConstantDesc {
	$class(Double, 0, ::java::lang::Number, ::java::lang::Comparable, ::java::lang::constant::Constable, ::java::lang::constant::ConstantDesc)
public:
	Double();
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(double value);
	void init$($String* s);
	virtual int8_t byteValue() override;
	static int32_t compare(double d1, double d2);
	int32_t compareTo(::java::lang::Double* anotherDouble);
	virtual int32_t compareTo(Object$* anotherDouble) override;
	virtual ::java::util::Optional* describeConstable() override;
	static int64_t doubleToLongBits(double value);
	static int64_t doubleToRawLongBits(double value);
	virtual double doubleValue() override;
	virtual bool equals(Object$* obj) override;
	virtual float floatValue() override;
	virtual int32_t hashCode() override;
	static int32_t hashCode(double value);
	virtual int32_t intValue() override;
	static bool isFinite(double d);
	static bool isInfinite(double v);
	bool isInfinite();
	static bool isNaN(double v);
	bool isNaN();
	static double longBitsToDouble(int64_t bits);
	virtual int64_t longValue() override;
	static double max(double a, double b);
	static double min(double a, double b);
	static double parseDouble($String* s);
	virtual $Object* resolveConstantDesc(::java::lang::invoke::MethodHandles$Lookup* lookup) override;
	virtual int16_t shortValue() override;
	static double sum(double a, double b);
	static $String* toHexString(double d);
	static $String* toString(double d);
	virtual $String* toString() override;
	static ::java::lang::Double* valueOf($String* s);
	static ::java::lang::Double* valueOf(double d);
	static double POSITIVE_INFINITY;
	static double NEGATIVE_INFINITY;
	static double NaN;
	static double MAX_VALUE;
	static double MIN_NORMAL;
	static double MIN_VALUE;
	static const int32_t MAX_EXPONENT = 1023;
	static const int32_t MIN_EXPONENT = (-1022);
	static const int32_t SIZE = 64;
	static const int32_t BYTES = 8; // SIZE / ::java::lang::Byte::SIZE
	static $Class* TYPE;
	double value = 0.0;
	static const int64_t serialVersionUID = (int64_t)0x80B3C24A296BFB04;
	static double mod(double a, double b);
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

#endif // _java_lang_Double_h_