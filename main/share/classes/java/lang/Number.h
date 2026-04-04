#ifndef _java_lang_Number_h_
#define _java_lang_Number_h_
//$ class java.lang.Number
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

namespace java {
	namespace lang {

class $export Number : public ::java::io::Serializable {
	$class(Number, $PRELOAD | $PREINIT | $NO_CLASS_INIT, ::java::io::Serializable)
public:
	Number();
	void init$();
	virtual int8_t byteValue();
	virtual double doubleValue() {return 0.0;}
	virtual float floatValue() {return 0.0;}
	virtual int32_t intValue() {return 0;}
	virtual int64_t longValue() {return 0;}
	virtual int16_t shortValue();
	static const int64_t serialVersionUID = (int64_t)0x86ac951d0b94e08b;
};

	} // lang
} // java

#endif // _java_lang_Number_h_