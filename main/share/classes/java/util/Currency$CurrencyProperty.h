#ifndef _java_util_Currency$CurrencyProperty_h_
#define _java_util_Currency$CurrencyProperty_h_
//$ class java.util.Currency$CurrencyProperty
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}
namespace java {
	namespace util {
		class List;
		class Optional;
	}
}
namespace java {
	namespace util {
		namespace regex {
			class Pattern;
		}
	}
}

namespace java {
	namespace util {

class Currency$CurrencyProperty : public ::java::lang::Object {
	$class(Currency$CurrencyProperty, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Currency$CurrencyProperty();
	void init$($String* country, $String* currencyCode, int32_t fraction, int32_t numericCode, $String* date);
	static bool containsInconsistentInstances(::java::util::List* list);
	static ::java::util::Optional* getValidEntry($String* ctry, $String* curData, ::java::util::regex::Pattern* pattern);
	static void info($String* message, $Throwable* t);
	static bool isPastCutoverDate($String* s);
	static bool lambda$containsInconsistentInstances$1(int32_t numCode, int32_t fractionDigit, ::java::util::Currency$CurrencyProperty* prop);
	static int32_t lambda$getValidEntry$0(int32_t c);
	static ::java::util::Currency$CurrencyProperty* parseProperty($String* ctry, $String* curData, ::java::util::regex::Pattern* pattern);
	$String* country = nullptr;
	$String* currencyCode = nullptr;
	int32_t fraction = 0;
	int32_t numericCode = 0;
	$String* date = nullptr;
};

	} // util
} // java

#endif // _java_util_Currency$CurrencyProperty_h_