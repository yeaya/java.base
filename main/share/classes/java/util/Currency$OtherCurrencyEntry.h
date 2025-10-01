#ifndef _java_util_Currency$OtherCurrencyEntry_h_
#define _java_util_Currency$OtherCurrencyEntry_h_
//$ class java.util.Currency$OtherCurrencyEntry
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {

class Currency$OtherCurrencyEntry : public ::java::lang::Object {
	$class(Currency$OtherCurrencyEntry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Currency$OtherCurrencyEntry();
	void init$($String* currencyCode, int32_t fraction, int32_t numericCode);
	static ::java::util::Currency$OtherCurrencyEntry* findEntry($String* code);
	$String* currencyCode = nullptr;
	int32_t fraction = 0;
	int32_t numericCode = 0;
};

	} // util
} // java

#endif // _java_util_Currency$OtherCurrencyEntry_h_