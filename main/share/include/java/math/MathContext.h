#ifndef _java_math_MathContext_h_
#define _java_math_MathContext_h_
//$ class java.math.MathContext
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

#pragma push_macro("DECIMAL128")
#undef DECIMAL128
#pragma push_macro("DECIMAL32")
#undef DECIMAL32
#pragma push_macro("DECIMAL64")
#undef DECIMAL64
#pragma push_macro("DEFAULT_DIGITS")
#undef DEFAULT_DIGITS
#pragma push_macro("DEFAULT_ROUNDINGMODE")
#undef DEFAULT_ROUNDINGMODE
#pragma push_macro("MIN_DIGITS")
#undef MIN_DIGITS
#pragma push_macro("UNLIMITED")
#undef UNLIMITED

namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace java {
	namespace math {
		class RoundingMode;
	}
}

namespace java {
	namespace math {

class $import MathContext : public ::java::io::Serializable {
	$class(MathContext, 0, ::java::io::Serializable)
public:
	MathContext();
	void init$(int32_t setPrecision);
	void init$(int32_t setPrecision, ::java::math::RoundingMode* setRoundingMode);
	void init$($String* val);
	virtual bool equals(Object$* x) override;
	int32_t getPrecision();
	::java::math::RoundingMode* getRoundingMode();
	virtual int32_t hashCode() override;
	void readObject(::java::io::ObjectInputStream* s);
	virtual $String* toString() override;
	static const int32_t DEFAULT_DIGITS = 9;
	static ::java::math::RoundingMode* DEFAULT_ROUNDINGMODE;
	static const int32_t MIN_DIGITS = 0;
	static const int64_t serialVersionUID = (int64_t)0x4D6F25C81F7601FF;
	static ::java::math::MathContext* UNLIMITED;
	static ::java::math::MathContext* DECIMAL32;
	static ::java::math::MathContext* DECIMAL64;
	static ::java::math::MathContext* DECIMAL128;
	int32_t precision = 0;
	::java::math::RoundingMode* roundingMode = nullptr;
};

	} // math
} // java

#pragma pop_macro("DECIMAL128")
#pragma pop_macro("DECIMAL32")
#pragma pop_macro("DECIMAL64")
#pragma pop_macro("DEFAULT_DIGITS")
#pragma pop_macro("DEFAULT_ROUNDINGMODE")
#pragma pop_macro("MIN_DIGITS")
#pragma pop_macro("UNLIMITED")

#endif // _java_math_MathContext_h_