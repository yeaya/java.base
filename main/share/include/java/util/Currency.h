#ifndef _java_util_Currency_h_
#define _java_util_Currency_h_
//$ class java.util.Currency
//$ extends java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>

#pragma push_macro("A_TO_Z")
#undef A_TO_Z
#pragma push_macro("COUNTRY_TYPE_MASK")
#undef COUNTRY_TYPE_MASK
#pragma push_macro("COUNTRY_WITHOUT_CURRENCY_ENTRY")
#undef COUNTRY_WITHOUT_CURRENCY_ENTRY
#pragma push_macro("DISPLAYNAME")
#undef DISPLAYNAME
#pragma push_macro("INVALID_COUNTRY_ENTRY")
#undef INVALID_COUNTRY_ENTRY
#pragma push_macro("MAGIC_NUMBER")
#undef MAGIC_NUMBER
#pragma push_macro("NUMERIC_CODE_MASK")
#undef NUMERIC_CODE_MASK
#pragma push_macro("NUMERIC_CODE_SHIFT")
#undef NUMERIC_CODE_SHIFT
#pragma push_macro("SIMPLE_CASE_COUNTRY_DEFAULT_DIGITS_MASK")
#undef SIMPLE_CASE_COUNTRY_DEFAULT_DIGITS_MASK
#pragma push_macro("SIMPLE_CASE_COUNTRY_DEFAULT_DIGITS_SHIFT")
#undef SIMPLE_CASE_COUNTRY_DEFAULT_DIGITS_SHIFT
#pragma push_macro("SIMPLE_CASE_COUNTRY_FINAL_CHAR_MASK")
#undef SIMPLE_CASE_COUNTRY_FINAL_CHAR_MASK
#pragma push_macro("SIMPLE_CASE_COUNTRY_MASK")
#undef SIMPLE_CASE_COUNTRY_MASK
#pragma push_macro("SIMPLE_CASE_COUNTRY_MAX_DEFAULT_DIGITS")
#undef SIMPLE_CASE_COUNTRY_MAX_DEFAULT_DIGITS
#pragma push_macro("SPECIAL_CASE_COUNTRY_INDEX_DELTA")
#undef SPECIAL_CASE_COUNTRY_INDEX_DELTA
#pragma push_macro("SPECIAL_CASE_COUNTRY_INDEX_MASK")
#undef SPECIAL_CASE_COUNTRY_INDEX_MASK
#pragma push_macro("SPECIAL_CASE_COUNTRY_MASK")
#undef SPECIAL_CASE_COUNTRY_MASK
#pragma push_macro("SYMBOL")
#undef SYMBOL
#pragma push_macro("VALID_FORMAT_VERSION")
#undef VALID_FORMAT_VERSION

namespace java {
	namespace io {
		class DataInputStream;
	}
}
namespace java {
	namespace util {
		class Currency$CurrencyProperty;
		class HashSet;
		class List;
		class Locale;
		class Optional;
		class Properties;
		class Set;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentMap;
		}
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
		namespace stream {
			class Stream;
		}
	}
}

namespace java {
	namespace util {

class $import Currency : public ::java::io::Serializable {
	$class(Currency, 0, ::java::io::Serializable)
public:
	Currency();
	void init$($String* currencyCode, int32_t defaultFractionDigits, int32_t numericCode);
	static ::java::util::Set* getAvailableCurrencies();
	$String* getCurrencyCode();
	int32_t getDefaultFractionDigits();
	$String* getDisplayName();
	$String* getDisplayName(::java::util::Locale* locale);
	static ::java::util::Currency* getInstance($String* currencyCode);
	static ::java::util::Currency* getInstance($String* currencyCode, int32_t defaultFractionDigits, int32_t numericCode);
	static ::java::util::Currency* getInstance(::java::util::Locale* locale);
	static int32_t getMainTableEntry(char16_t char1, char16_t char2);
	int32_t getNumericCode();
	$String* getNumericCodeAsString();
	$String* getSymbol();
	$String* getSymbol(::java::util::Locale* locale);
	static ::java::util::List* getValidCurrencyData(::java::util::Properties* props, ::java::util::regex::Pattern* pattern);
	static ::java::util::Optional* lambda$getValidCurrencyData$0(::java::util::Properties* props, ::java::util::regex::Pattern* pattern, $String* k);
	static ::java::util::stream::Stream* lambda$getValidCurrencyData$1(::java::util::Optional* o);
	static $String* lambda$getValidCurrencyData$2(::java::util::Currency$CurrencyProperty* entry);
	static void lambda$getValidCurrencyData$3(::java::util::Currency$CurrencyProperty* prop);
	static void lambda$getValidCurrencyData$4(::java::util::List* propertyEntries, $String* curCode, ::java::util::List* list);
	static $ints* readIntArray(::java::io::DataInputStream* dis, int32_t count);
	static ::java::util::List* readOtherCurrencies(::java::io::DataInputStream* dis, int32_t count);
	$Object* readResolve();
	static ::java::util::List* readSpecialCases(::java::io::DataInputStream* dis, int32_t count);
	static void replaceCurrencyData(::java::util::Currency$CurrencyProperty* prop);
	static void setMainTableEntry(char16_t char1, char16_t char2, int32_t entry);
	virtual $String* toString() override;
	static void updateMainTableEntry($String* code, int32_t fraction, int32_t numeric);
	static const int64_t serialVersionUID = (int64_t)0xFDCD934A5911A91F;
	$String* currencyCode = nullptr;
	int32_t defaultFractionDigits = 0;
	int32_t numericCode = 0;
	static ::java::util::concurrent::ConcurrentMap* instances;
	static ::java::util::HashSet* available;
	static int32_t formatVersion;
	static int32_t dataVersion;
	static $ints* mainTable;
	static ::java::util::List* specialCasesList;
	static ::java::util::List* otherCurrenciesList;
	static const int32_t MAGIC_NUMBER = 0x43757244;
	static const int32_t A_TO_Z = 26; // ('Z' - 'A') + 1
	static const int32_t INVALID_COUNTRY_ENTRY = 127;
	static const int32_t COUNTRY_WITHOUT_CURRENCY_ENTRY = 512;
	static const int32_t SIMPLE_CASE_COUNTRY_MASK = 0;
	static const int32_t SIMPLE_CASE_COUNTRY_FINAL_CHAR_MASK = 31;
	static const int32_t SIMPLE_CASE_COUNTRY_DEFAULT_DIGITS_MASK = 480;
	static const int32_t SIMPLE_CASE_COUNTRY_DEFAULT_DIGITS_SHIFT = 5;
	static const int32_t SIMPLE_CASE_COUNTRY_MAX_DEFAULT_DIGITS = 9;
	static const int32_t SPECIAL_CASE_COUNTRY_MASK = 512;
	static const int32_t SPECIAL_CASE_COUNTRY_INDEX_MASK = 31;
	static const int32_t SPECIAL_CASE_COUNTRY_INDEX_DELTA = 1;
	static const int32_t COUNTRY_TYPE_MASK = 512; // SIMPLE_CASE_COUNTRY_MASK | SPECIAL_CASE_COUNTRY_MASK
	static const int32_t NUMERIC_CODE_MASK = 0x000FFC00;
	static const int32_t NUMERIC_CODE_SHIFT = 10;
	static const int32_t VALID_FORMAT_VERSION = 3;
	static const int32_t SYMBOL = 0;
	static const int32_t DISPLAYNAME = 1;
};

	} // util
} // java

#pragma pop_macro("A_TO_Z")
#pragma pop_macro("COUNTRY_TYPE_MASK")
#pragma pop_macro("COUNTRY_WITHOUT_CURRENCY_ENTRY")
#pragma pop_macro("DISPLAYNAME")
#pragma pop_macro("INVALID_COUNTRY_ENTRY")
#pragma pop_macro("MAGIC_NUMBER")
#pragma pop_macro("NUMERIC_CODE_MASK")
#pragma pop_macro("NUMERIC_CODE_SHIFT")
#pragma pop_macro("SIMPLE_CASE_COUNTRY_DEFAULT_DIGITS_MASK")
#pragma pop_macro("SIMPLE_CASE_COUNTRY_DEFAULT_DIGITS_SHIFT")
#pragma pop_macro("SIMPLE_CASE_COUNTRY_FINAL_CHAR_MASK")
#pragma pop_macro("SIMPLE_CASE_COUNTRY_MASK")
#pragma pop_macro("SIMPLE_CASE_COUNTRY_MAX_DEFAULT_DIGITS")
#pragma pop_macro("SPECIAL_CASE_COUNTRY_INDEX_DELTA")
#pragma pop_macro("SPECIAL_CASE_COUNTRY_INDEX_MASK")
#pragma pop_macro("SPECIAL_CASE_COUNTRY_MASK")
#pragma pop_macro("SYMBOL")
#pragma pop_macro("VALID_FORMAT_VERSION")

#endif // _java_util_Currency_h_