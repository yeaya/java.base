#include <java/util/Currency$CurrencyProperty.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/text/ParseException.h>
#include <java/text/SimpleDateFormat.h>
#include <java/util/Currency.h>
#include <java/util/Date.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <java/util/Optional.h>
#include <java/util/TimeZone.h>
#include <java/util/function/IntUnaryOperator.h>
#include <java/util/function/Predicate.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern.h>
#include <java/util/stream/IntStream.h>
#include <java/util/stream/Stream.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef INFO
#undef ROOT

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $ParseException = ::java::text::ParseException;
using $SimpleDateFormat = ::java::text::SimpleDateFormat;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $Optional = ::java::util::Optional;
using $TimeZone = ::java::util::TimeZone;
using $IntUnaryOperator = ::java::util::function::IntUnaryOperator;
using $Predicate = ::java::util::function::Predicate;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern = ::java::util::regex::Pattern;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace java {
	namespace util {

class Currency$CurrencyProperty$$Lambda$lambda$getValidEntry$0 : public $IntUnaryOperator {
	$class(Currency$CurrencyProperty$$Lambda$lambda$getValidEntry$0, $NO_CLASS_INIT, $IntUnaryOperator)
public:
	void init$() {
	}
	virtual int32_t applyAsInt(int32_t c) override {
		 return Currency$CurrencyProperty::lambda$getValidEntry$0(c);
	}
};
$Class* Currency$CurrencyProperty$$Lambda$lambda$getValidEntry$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Currency$CurrencyProperty$$Lambda$lambda$getValidEntry$0, init$, void)},
		{"applyAsInt", "(I)I", nullptr, $PUBLIC, $virtualMethod(Currency$CurrencyProperty$$Lambda$lambda$getValidEntry$0, applyAsInt, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.Currency$CurrencyProperty$$Lambda$lambda$getValidEntry$0",
		"java.lang.Object",
		"java.util.function.IntUnaryOperator",
		nullptr,
		methodInfos$$
	};
	$loadClass(Currency$CurrencyProperty$$Lambda$lambda$getValidEntry$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Currency$CurrencyProperty$$Lambda$lambda$getValidEntry$0);
	});
	return class$;
}
$Class* Currency$CurrencyProperty$$Lambda$lambda$getValidEntry$0::class$ = nullptr;

class Currency$CurrencyProperty$$Lambda$lambda$containsInconsistentInstances$1$1 : public $Predicate {
	$class(Currency$CurrencyProperty$$Lambda$lambda$containsInconsistentInstances$1$1, $NO_CLASS_INIT, $Predicate)
public:
	void init$(int32_t numCode, int32_t fractionDigit) {
		this->numCode = numCode;
		this->fractionDigit = fractionDigit;
	}
	virtual bool test(Object$* prop) override {
		 return Currency$CurrencyProperty::lambda$containsInconsistentInstances$1(numCode, fractionDigit, $cast(Currency$CurrencyProperty, prop));
	}
	int32_t numCode = 0;
	int32_t fractionDigit = 0;
};
$Class* Currency$CurrencyProperty$$Lambda$lambda$containsInconsistentInstances$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"numCode", "I", nullptr, $PUBLIC, $field(Currency$CurrencyProperty$$Lambda$lambda$containsInconsistentInstances$1$1, numCode)},
		{"fractionDigit", "I", nullptr, $PUBLIC, $field(Currency$CurrencyProperty$$Lambda$lambda$containsInconsistentInstances$1$1, fractionDigit)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(II)V", nullptr, $PUBLIC, $method(Currency$CurrencyProperty$$Lambda$lambda$containsInconsistentInstances$1$1, init$, void, int32_t, int32_t)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Currency$CurrencyProperty$$Lambda$lambda$containsInconsistentInstances$1$1, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.Currency$CurrencyProperty$$Lambda$lambda$containsInconsistentInstances$1$1",
		"java.lang.Object",
		"java.util.function.Predicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Currency$CurrencyProperty$$Lambda$lambda$containsInconsistentInstances$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Currency$CurrencyProperty$$Lambda$lambda$containsInconsistentInstances$1$1);
	});
	return class$;
}
$Class* Currency$CurrencyProperty$$Lambda$lambda$containsInconsistentInstances$1$1::class$ = nullptr;

void Currency$CurrencyProperty::init$($String* country, $String* currencyCode, int32_t fraction, int32_t numericCode, $String* date) {
	$set(this, country, country);
	$set(this, currencyCode, currencyCode);
	this->fraction = fraction;
	this->numericCode = numericCode;
	$set(this, date, date);
}

$Optional* Currency$CurrencyProperty::getValidEntry($String* ctry, $String* curData, $Pattern* pattern) {
	$useLocalObjectStack();
	$var(Currency$CurrencyProperty, prop, nullptr);
	if ($nc(ctry)->length() != 2) {
	} else {
		$assign(prop, parseProperty(ctry, curData, pattern));
		if (prop == nullptr || (prop->date == nullptr && $$nc($($nc(curData)->chars())->map($$new(Currency$CurrencyProperty$$Lambda$lambda$getValidEntry$0)))->sum() >= 3)) {
			$assign(prop, nullptr);
		} else if (prop->fraction > 9) {
			$assign(prop, nullptr);
		} else {
			try {
				if (prop->date != nullptr && !isPastCutoverDate(prop->date)) {
					$assign(prop, nullptr);
				}
			} catch ($ParseException& ex) {
				$assign(prop, nullptr);
			}
		}
	}
	if (prop == nullptr) {
		info($$str({"The property entry for "_s, ctry, " is invalid. Ignored."_s}), nullptr);
	}
	return $Optional::ofNullable(prop);
}

Currency$CurrencyProperty* Currency$CurrencyProperty::parseProperty($String* ctry, $String* curData, $Pattern* pattern) {
	$useLocalObjectStack();
	$var($Matcher, m, $nc(pattern)->matcher(curData));
	if (!$nc(m)->find()) {
		return nullptr;
	} else {
		$var($String, var$0, m->group(1));
		int32_t var$1 = $Integer::parseInt($(m->group(3)));
		int32_t var$2 = $Integer::parseInt($(m->group(2)));
		return $new(Currency$CurrencyProperty, ctry, var$0, var$1, var$2, $(m->group(4)));
	}
}

bool Currency$CurrencyProperty::containsInconsistentInstances($List* list) {
	$useLocalObjectStack();
	int32_t numCode = $nc(($$cast(Currency$CurrencyProperty, $nc(list)->get(0))))->numericCode;
	int32_t fractionDigit = $nc(($$cast(Currency$CurrencyProperty, list->get(0))))->fraction;
	return $$nc(list->stream())->anyMatch($$new(Currency$CurrencyProperty$$Lambda$lambda$containsInconsistentInstances$1$1, numCode, fractionDigit));
}

bool Currency$CurrencyProperty::isPastCutoverDate($String* s) {
	$useLocalObjectStack();
	$init($Locale);
	$var($SimpleDateFormat, format, $new($SimpleDateFormat, "yyyy-MM-dd\'T\'HH:mm:ss"_s, $Locale::ROOT));
	format->setTimeZone($($TimeZone::getTimeZone("UTC"_s)));
	format->setLenient(false);
	int64_t time = $$nc(format->parse($($nc(s)->trim())))->getTime();
	return $System::currentTimeMillis() > time;
}

void Currency$CurrencyProperty::info($String* message, $Throwable* t) {
	$var($PlatformLogger, logger, $PlatformLogger::getLogger("java.util.Currency"_s));
	$init($PlatformLogger$Level);
	if ($nc(logger)->isLoggable($PlatformLogger$Level::INFO)) {
		if (t != nullptr) {
			logger->info(message, t);
		} else {
			logger->info(message);
		}
	}
}

bool Currency$CurrencyProperty::lambda$containsInconsistentInstances$1(int32_t numCode, int32_t fractionDigit, Currency$CurrencyProperty* prop) {
	return $nc(prop)->numericCode != numCode || prop->fraction != fractionDigit;
}

int32_t Currency$CurrencyProperty::lambda$getValidEntry$0(int32_t c) {
	return c == u',' ? 1 : 0;
}

Currency$CurrencyProperty::Currency$CurrencyProperty() {
}

$Class* Currency$CurrencyProperty::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.util.Currency$CurrencyProperty$$Lambda$lambda$getValidEntry$0")) {
			return Currency$CurrencyProperty$$Lambda$lambda$getValidEntry$0::load$(name, initialize);
		}
		if (name->equals("java.util.Currency$CurrencyProperty$$Lambda$lambda$containsInconsistentInstances$1$1")) {
			return Currency$CurrencyProperty$$Lambda$lambda$containsInconsistentInstances$1$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"country", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Currency$CurrencyProperty, country)},
		{"currencyCode", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Currency$CurrencyProperty, currencyCode)},
		{"fraction", "I", nullptr, $PRIVATE | $FINAL, $field(Currency$CurrencyProperty, fraction)},
		{"numericCode", "I", nullptr, $PRIVATE | $FINAL, $field(Currency$CurrencyProperty, numericCode)},
		{"date", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Currency$CurrencyProperty, date)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;IILjava/lang/String;)V", nullptr, $PRIVATE, $method(Currency$CurrencyProperty, init$, void, $String*, $String*, int32_t, int32_t, $String*)},
		{"containsInconsistentInstances", "(Ljava/util/List;)Z", "(Ljava/util/List<Ljava/util/Currency$CurrencyProperty;>;)Z", $PRIVATE | $STATIC, $staticMethod(Currency$CurrencyProperty, containsInconsistentInstances, bool, $List*)},
		{"getValidEntry", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/regex/Pattern;)Ljava/util/Optional;", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/regex/Pattern;)Ljava/util/Optional<Ljava/util/Currency$CurrencyProperty;>;", $PRIVATE | $STATIC, $staticMethod(Currency$CurrencyProperty, getValidEntry, $Optional*, $String*, $String*, $Pattern*)},
		{"info", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(Currency$CurrencyProperty, info, void, $String*, $Throwable*)},
		{"isPastCutoverDate", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(Currency$CurrencyProperty, isPastCutoverDate, bool, $String*), "java.text.ParseException"},
		{"lambda$containsInconsistentInstances$1", "(IILjava/util/Currency$CurrencyProperty;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Currency$CurrencyProperty, lambda$containsInconsistentInstances$1, bool, int32_t, int32_t, Currency$CurrencyProperty*)},
		{"lambda$getValidEntry$0", "(I)I", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Currency$CurrencyProperty, lambda$getValidEntry$0, int32_t, int32_t)},
		{"parseProperty", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/regex/Pattern;)Ljava/util/Currency$CurrencyProperty;", nullptr, $PRIVATE | $STATIC, $staticMethod(Currency$CurrencyProperty, parseProperty, Currency$CurrencyProperty*, $String*, $String*, $Pattern*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.Currency$CurrencyProperty", "java.util.Currency", "CurrencyProperty", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.Currency$CurrencyProperty",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.Currency"
	};
	$loadClass(Currency$CurrencyProperty, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Currency$CurrencyProperty);
	});
	return class$;
}

$Class* Currency$CurrencyProperty::class$ = nullptr;

	} // util
} // java