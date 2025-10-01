#ifndef _java_util_Currency$SpecialCaseEntry_h_
#define _java_util_Currency$SpecialCaseEntry_h_
//$ class java.util.Currency$SpecialCaseEntry
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {

class Currency$SpecialCaseEntry : public ::java::lang::Object {
	$class(Currency$SpecialCaseEntry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Currency$SpecialCaseEntry();
	void init$(int64_t cutOverTime, $String* oldCurrency, $String* newCurrency, int32_t oldCurrencyFraction, int32_t newCurrencyFraction, int32_t oldCurrencyNumericCode, int32_t newCurrencyNumericCode);
	void init$($String* currencyCode, int32_t fraction, int32_t numericCode);
	static int32_t currencyCodeIndex($String* code);
	static $ints* findEntry($String* code);
	static int32_t indexOf($String* code, int32_t fraction, int32_t numeric);
	static int32_t toIndex(int32_t tableEntry);
	int64_t cutOverTime = 0;
	$String* oldCurrency = nullptr;
	$String* newCurrency = nullptr;
	int32_t oldCurrencyFraction = 0;
	int32_t newCurrencyFraction = 0;
	int32_t oldCurrencyNumericCode = 0;
	int32_t newCurrencyNumericCode = 0;
};

	} // util
} // java

#endif // _java_util_Currency$SpecialCaseEntry_h_