#include <java/time/format/DecimalStyle.h>

#include <java/text/DecimalFormatSymbols.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/HashSet.h>
#include <java/util/Locale$Category.h>
#include <java/util/Locale.h>
#include <java/util/Objects.h>
#include <java/util/Set.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/concurrent/ConcurrentMap.h>
#include <jcpp.h>

#undef CACHE
#undef FORMAT
#undef STANDARD

using $LocaleArray = $Array<::java::util::Locale>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $MethodInfo = ::java::lang::MethodInfo;
using $DecimalFormatSymbols = ::java::text::DecimalFormatSymbols;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $HashSet = ::java::util::HashSet;
using $Locale = ::java::util::Locale;
using $Locale$Category = ::java::util::Locale$Category;
using $Objects = ::java::util::Objects;
using $Set = ::java::util::Set;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $ConcurrentMap = ::java::util::concurrent::ConcurrentMap;

namespace java {
	namespace time {
		namespace format {

$FieldInfo _DecimalStyle_FieldInfo_[] = {
	{"STANDARD", "Ljava/time/format/DecimalStyle;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DecimalStyle, STANDARD)},
	{"CACHE", "Ljava/util/concurrent/ConcurrentMap;", "Ljava/util/concurrent/ConcurrentMap<Ljava/util/Locale;Ljava/time/format/DecimalStyle;>;", $PRIVATE | $STATIC | $FINAL, $staticField(DecimalStyle, CACHE)},
	{"zeroDigit", "C", nullptr, $PRIVATE | $FINAL, $field(DecimalStyle, zeroDigit)},
	{"positiveSign", "C", nullptr, $PRIVATE | $FINAL, $field(DecimalStyle, positiveSign)},
	{"negativeSign", "C", nullptr, $PRIVATE | $FINAL, $field(DecimalStyle, negativeSign)},
	{"decimalSeparator", "C", nullptr, $PRIVATE | $FINAL, $field(DecimalStyle, decimalSeparator)},
	{}
};

$MethodInfo _DecimalStyle_MethodInfo_[] = {
	{"<init>", "(CCCC)V", nullptr, $PRIVATE, $method(static_cast<void(DecimalStyle::*)(char16_t,char16_t,char16_t,char16_t)>(&DecimalStyle::init$))},
	{"convertNumberToI18N", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, 0, $method(static_cast<$String*(DecimalStyle::*)($String*)>(&DecimalStyle::convertNumberToI18N))},
	{"convertToDigit", "(C)I", nullptr, 0, $method(static_cast<int32_t(DecimalStyle::*)(char16_t)>(&DecimalStyle::convertToDigit))},
	{"create", "(Ljava/util/Locale;)Ljava/time/format/DecimalStyle;", nullptr, $PRIVATE | $STATIC, $method(static_cast<DecimalStyle*(*)($Locale*)>(&DecimalStyle::create))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getAvailableLocales", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/util/Locale;>;", $PUBLIC | $STATIC, $method(static_cast<$Set*(*)()>(&DecimalStyle::getAvailableLocales))},
	{"getDecimalSeparator", "()C", nullptr, $PUBLIC, $method(static_cast<char16_t(DecimalStyle::*)()>(&DecimalStyle::getDecimalSeparator))},
	{"getNegativeSign", "()C", nullptr, $PUBLIC, $method(static_cast<char16_t(DecimalStyle::*)()>(&DecimalStyle::getNegativeSign))},
	{"getPositiveSign", "()C", nullptr, $PUBLIC, $method(static_cast<char16_t(DecimalStyle::*)()>(&DecimalStyle::getPositiveSign))},
	{"getZeroDigit", "()C", nullptr, $PUBLIC, $method(static_cast<char16_t(DecimalStyle::*)()>(&DecimalStyle::getZeroDigit))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"of", "(Ljava/util/Locale;)Ljava/time/format/DecimalStyle;", nullptr, $PUBLIC | $STATIC, $method(static_cast<DecimalStyle*(*)($Locale*)>(&DecimalStyle::of))},
	{"ofDefaultLocale", "()Ljava/time/format/DecimalStyle;", nullptr, $PUBLIC | $STATIC, $method(static_cast<DecimalStyle*(*)()>(&DecimalStyle::ofDefaultLocale))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"withDecimalSeparator", "(C)Ljava/time/format/DecimalStyle;", nullptr, $PUBLIC, $method(static_cast<DecimalStyle*(DecimalStyle::*)(char16_t)>(&DecimalStyle::withDecimalSeparator))},
	{"withNegativeSign", "(C)Ljava/time/format/DecimalStyle;", nullptr, $PUBLIC, $method(static_cast<DecimalStyle*(DecimalStyle::*)(char16_t)>(&DecimalStyle::withNegativeSign))},
	{"withPositiveSign", "(C)Ljava/time/format/DecimalStyle;", nullptr, $PUBLIC, $method(static_cast<DecimalStyle*(DecimalStyle::*)(char16_t)>(&DecimalStyle::withPositiveSign))},
	{"withZeroDigit", "(C)Ljava/time/format/DecimalStyle;", nullptr, $PUBLIC, $method(static_cast<DecimalStyle*(DecimalStyle::*)(char16_t)>(&DecimalStyle::withZeroDigit))},
	{}
};

$ClassInfo _DecimalStyle_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.time.format.DecimalStyle",
	"java.lang.Object",
	nullptr,
	_DecimalStyle_FieldInfo_,
	_DecimalStyle_MethodInfo_
};

$Object* allocate$DecimalStyle($Class* clazz) {
	return $of($alloc(DecimalStyle));
}

DecimalStyle* DecimalStyle::STANDARD = nullptr;
$ConcurrentMap* DecimalStyle::CACHE = nullptr;

$Set* DecimalStyle::getAvailableLocales() {
	$init(DecimalStyle);
	$useLocalCurrentObjectStackCache();
	$var($LocaleArray, l, $DecimalFormatSymbols::getAvailableLocales());
	$var($Set, locales, $new($HashSet, $nc(l)->length));
	$Collections::addAll(locales, l);
	return locales;
}

DecimalStyle* DecimalStyle::ofDefaultLocale() {
	$init(DecimalStyle);
	$init($Locale$Category);
	return of($($Locale::getDefault($Locale$Category::FORMAT)));
}

DecimalStyle* DecimalStyle::of($Locale* locale) {
	$init(DecimalStyle);
	$Objects::requireNonNull($of(locale), "locale"_s);
	$var(DecimalStyle, info, $cast(DecimalStyle, $nc(DecimalStyle::CACHE)->get(locale)));
	if (info == nullptr) {
		$assign(info, create(locale));
		$nc(DecimalStyle::CACHE)->putIfAbsent(locale, info);
		$assign(info, $cast(DecimalStyle, $nc(DecimalStyle::CACHE)->get(locale)));
	}
	return info;
}

DecimalStyle* DecimalStyle::create($Locale* locale) {
	$init(DecimalStyle);
	$var($DecimalFormatSymbols, oldSymbols, $DecimalFormatSymbols::getInstance(locale));
	char16_t zeroDigit = $nc(oldSymbols)->getZeroDigit();
	char16_t positiveSign = u'+';
	char16_t negativeSign = oldSymbols->getMinusSign();
	char16_t decimalSeparator = oldSymbols->getDecimalSeparator();
	if (zeroDigit == u'0' && negativeSign == u'-' && decimalSeparator == u'.') {
		return DecimalStyle::STANDARD;
	}
	return $new(DecimalStyle, zeroDigit, positiveSign, negativeSign, decimalSeparator);
}

void DecimalStyle::init$(char16_t zeroChar, char16_t positiveSignChar, char16_t negativeSignChar, char16_t decimalPointChar) {
	this->zeroDigit = zeroChar;
	this->positiveSign = positiveSignChar;
	this->negativeSign = negativeSignChar;
	this->decimalSeparator = decimalPointChar;
}

char16_t DecimalStyle::getZeroDigit() {
	return this->zeroDigit;
}

DecimalStyle* DecimalStyle::withZeroDigit(char16_t zeroDigit) {
	if (zeroDigit == this->zeroDigit) {
		return this;
	}
	return $new(DecimalStyle, zeroDigit, this->positiveSign, this->negativeSign, this->decimalSeparator);
}

char16_t DecimalStyle::getPositiveSign() {
	return this->positiveSign;
}

DecimalStyle* DecimalStyle::withPositiveSign(char16_t positiveSign) {
	if (positiveSign == this->positiveSign) {
		return this;
	}
	return $new(DecimalStyle, this->zeroDigit, positiveSign, this->negativeSign, this->decimalSeparator);
}

char16_t DecimalStyle::getNegativeSign() {
	return this->negativeSign;
}

DecimalStyle* DecimalStyle::withNegativeSign(char16_t negativeSign) {
	if (negativeSign == this->negativeSign) {
		return this;
	}
	return $new(DecimalStyle, this->zeroDigit, this->positiveSign, negativeSign, this->decimalSeparator);
}

char16_t DecimalStyle::getDecimalSeparator() {
	return this->decimalSeparator;
}

DecimalStyle* DecimalStyle::withDecimalSeparator(char16_t decimalSeparator) {
	if (decimalSeparator == this->decimalSeparator) {
		return this;
	}
	return $new(DecimalStyle, this->zeroDigit, this->positiveSign, this->negativeSign, decimalSeparator);
}

int32_t DecimalStyle::convertToDigit(char16_t ch) {
	int32_t val = ch - this->zeroDigit;
	return (val >= 0 && val <= 9) ? val : -1;
}

$String* DecimalStyle::convertNumberToI18N($String* numericText) {
	if (this->zeroDigit == u'0') {
		return numericText;
	}
	int32_t diff = this->zeroDigit - u'0';
	$var($chars, array, $nc(numericText)->toCharArray());
	for (int32_t i = 0; i < array->length; ++i) {
		array->set(i, (char16_t)(array->get(i) + diff));
	}
	return $new($String, array);
}

bool DecimalStyle::equals(Object$* obj) {
	if ($equals(this, obj)) {
		return true;
	}
	$var(DecimalStyle, other, nullptr);
	bool var$4 = $instanceOf(DecimalStyle, obj);
	if (var$4) {
		$assign(other, $cast(DecimalStyle, obj));
		var$4 = true;
	}
	bool var$3 = var$4;
	bool var$2 = var$3 && this->zeroDigit == $nc(other)->zeroDigit;
	bool var$1 = var$2 && this->positiveSign == other->positiveSign;
	bool var$0 = var$1 && this->negativeSign == other->negativeSign;
	return (var$0 && this->decimalSeparator == other->decimalSeparator);
}

int32_t DecimalStyle::hashCode() {
	return this->zeroDigit + this->positiveSign + this->negativeSign + this->decimalSeparator;
}

$String* DecimalStyle::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({"DecimalStyle["_s, $$str(this->zeroDigit), $$str(this->positiveSign), $$str(this->negativeSign), $$str(this->decimalSeparator), "]"_s});
}

void clinit$DecimalStyle($Class* class$) {
	$assignStatic(DecimalStyle::STANDARD, $new(DecimalStyle, u'0', u'+', u'-', u'.'));
	$assignStatic(DecimalStyle::CACHE, $new($ConcurrentHashMap, 16, 0.75f, 2));
}

DecimalStyle::DecimalStyle() {
}

$Class* DecimalStyle::load$($String* name, bool initialize) {
	$loadClass(DecimalStyle, name, initialize, &_DecimalStyle_ClassInfo_, clinit$DecimalStyle, allocate$DecimalStyle);
	return class$;
}

$Class* DecimalStyle::class$ = nullptr;

		} // format
	} // time
} // java