#ifndef _Bug4990596$MutableInteger_h_
#define _Bug4990596$MutableInteger_h_
//$ class Bug4990596$MutableInteger
//$ extends java.lang.Number

#include <java/lang/Number.h>

class $export Bug4990596$MutableInteger : public ::java::lang::Number {
	$class(Bug4990596$MutableInteger, $NO_CLASS_INIT, ::java::lang::Number)
public:
	Bug4990596$MutableInteger();
	void init$();
	void init$(int32_t value);
	virtual double doubleValue() override;
	virtual float floatValue() override;
	virtual int32_t intValue() override;
	virtual int64_t longValue() override;
	int32_t value = 0;
};

#endif // _Bug4990596$MutableInteger_h_