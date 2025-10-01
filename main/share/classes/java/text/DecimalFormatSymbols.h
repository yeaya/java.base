#ifndef _java_text_DecimalFormatSymbols_h_
#define _java_text_DecimalFormatSymbols_h_
//$ class java.text.DecimalFormatSymbols
//$ extends java.lang.Cloneable
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>

namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace java {
	namespace util {
		class Currency;
		class Locale;
	}
}

namespace java {
	namespace text {

class $export DecimalFormatSymbols : public ::java::lang::Cloneable, public ::java::io::Serializable {
	$class(DecimalFormatSymbols, $NO_CLASS_INIT, ::java::lang::Cloneable, ::java::io::Serializable)
public:
	DecimalFormatSymbols();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual void finalize() override;
	void init$();
	void init$(::java::util::Locale* locale);
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	char16_t findNonFormatChar($String* src, char16_t defChar);
	static $Array<::java::util::Locale>* getAvailableLocales();
	virtual ::java::util::Currency* getCurrency();
	virtual $String* getCurrencySymbol();
	virtual char16_t getDecimalSeparator();
	virtual char16_t getDigit();
	virtual $String* getExponentSeparator();
	virtual char16_t getExponentialSymbol();
	virtual char16_t getGroupingSeparator();
	virtual $String* getInfinity();
	static ::java::text::DecimalFormatSymbols* getInstance();
	static ::java::text::DecimalFormatSymbols* getInstance(::java::util::Locale* locale);
	virtual $String* getInternationalCurrencySymbol();
	virtual char16_t getMinusSign();
	virtual $String* getMinusSignText();
	virtual char16_t getMonetaryDecimalSeparator();
	virtual char16_t getMonetaryGroupingSeparator();
	virtual $String* getNaN();
	virtual char16_t getPatternSeparator();
	virtual char16_t getPerMill();
	virtual $String* getPerMillText();
	virtual char16_t getPercent();
	virtual $String* getPercentText();
	virtual char16_t getZeroDigit();
	virtual int32_t hashCode() override;
	void initialize(::java::util::Locale* locale);
	void initializeCurrency(::java::util::Locale* locale);
	static bool lambda$findNonFormatChar$0(int32_t c);
	void readObject(::java::io::ObjectInputStream* stream);
	virtual void setCurrency(::java::util::Currency* currency);
	virtual void setCurrencySymbol($String* currency);
	virtual void setDecimalSeparator(char16_t decimalSeparator);
	virtual void setDigit(char16_t digit);
	virtual void setExponentSeparator($String* exp);
	virtual void setExponentialSymbol(char16_t exp);
	virtual void setGroupingSeparator(char16_t groupingSeparator);
	virtual void setInfinity($String* infinity);
	virtual void setInternationalCurrencySymbol($String* currencyCode);
	virtual void setMinusSign(char16_t minusSign);
	virtual void setMinusSignText($String* minusSignText);
	virtual void setMonetaryDecimalSeparator(char16_t sep);
	virtual void setMonetaryGroupingSeparator(char16_t monetaryGroupingSeparator);
	virtual void setNaN($String* NaN);
	virtual void setPatternSeparator(char16_t patternSeparator);
	virtual void setPerMill(char16_t perMill);
	virtual void setPerMillText($String* perMillText);
	virtual void setPercent(char16_t percent);
	virtual void setPercentText($String* percentText);
	virtual void setZeroDigit(char16_t zeroDigit);
	virtual $String* toString() override;
	char16_t zeroDigit = 0;
	char16_t groupingSeparator = 0;
	char16_t decimalSeparator = 0;
	char16_t perMill = 0;
	char16_t percent = 0;
	char16_t digit = 0;
	char16_t patternSeparator = 0;
	$String* infinity = nullptr;
	$String* NaN = nullptr;
	char16_t minusSign = 0;
	$String* currencySymbol = nullptr;
	$String* intlCurrencySymbol = nullptr;
	char16_t monetarySeparator = 0;
	char16_t exponential = 0;
	$String* exponentialSeparator = nullptr;
	::java::util::Locale* locale = nullptr;
	$String* perMillText = nullptr;
	$String* percentText = nullptr;
	$String* minusSignText = nullptr;
	char16_t monetaryGroupingSeparator = 0;
	::java::util::Currency* currency = nullptr;
	$volatile(bool) currencyInitialized = false;
	$volatile(int32_t) hashCode$ = 0;
	static const int64_t serialVersionUID = (int64_t)0x501D17990868939C;
	static const int32_t currentSerialVersion = 5;
	int32_t serialVersionOnStream = 0;
};

	} // text
} // java

#endif // _java_text_DecimalFormatSymbols_h_