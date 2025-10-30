#include <java/util/Currency$CurrencyProperty.h>

#include <java/io/Serializable.h>
#include <java/lang/CharSequence.h>
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
using $Boolean = ::java::lang::Boolean;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $DateFormat = ::java::text::DateFormat;
using $ParseException = ::java::text::ParseException;
using $SimpleDateFormat = ::java::text::SimpleDateFormat;
using $Collection = ::java::util::Collection;
using $Currency = ::java::util::Currency;
using $Date = ::java::util::Date;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $Optional = ::java::util::Optional;
using $TimeZone = ::java::util::TimeZone;
using $IntUnaryOperator = ::java::util::function::IntUnaryOperator;
using $Predicate = ::java::util::function::Predicate;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern = ::java::util::regex::Pattern;
using $IntStream = ::java::util::stream::IntStream;
using $Stream = ::java::util::stream::Stream;
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Currency$CurrencyProperty$$Lambda$lambda$getValidEntry$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Currency$CurrencyProperty$$Lambda$lambda$getValidEntry$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Currency$CurrencyProperty$$Lambda$lambda$getValidEntry$0::*)()>(&Currency$CurrencyProperty$$Lambda$lambda$getValidEntry$0::init$))},
	{"applyAsInt", "(I)I", nullptr, $PUBLIC},
	{}
};
$ClassInfo Currency$CurrencyProperty$$Lambda$lambda$getValidEntry$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.Currency$CurrencyProperty$$Lambda$lambda$getValidEntry$0",
	"java.lang.Object",
	"java.util.function.IntUnaryOperator",
	nullptr,
	methodInfos
};
$Class* Currency$CurrencyProperty$$Lambda$lambda$getValidEntry$0::load$($String* name, bool initialize) {
	$loadClass(Currency$CurrencyProperty$$Lambda$lambda$getValidEntry$0, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Currency$CurrencyProperty$$Lambda$lambda$containsInconsistentInstances$1$1>());
	}
	int32_t numCode = 0;
	int32_t fractionDigit = 0;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Currency$CurrencyProperty$$Lambda$lambda$containsInconsistentInstances$1$1::fieldInfos[3] = {
	{"numCode", "I", nullptr, $PUBLIC, $field(Currency$CurrencyProperty$$Lambda$lambda$containsInconsistentInstances$1$1, numCode)},
	{"fractionDigit", "I", nullptr, $PUBLIC, $field(Currency$CurrencyProperty$$Lambda$lambda$containsInconsistentInstances$1$1, fractionDigit)},
	{}
};
$MethodInfo Currency$CurrencyProperty$$Lambda$lambda$containsInconsistentInstances$1$1::methodInfos[3] = {
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(Currency$CurrencyProperty$$Lambda$lambda$containsInconsistentInstances$1$1::*)(int32_t,int32_t)>(&Currency$CurrencyProperty$$Lambda$lambda$containsInconsistentInstances$1$1::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Currency$CurrencyProperty$$Lambda$lambda$containsInconsistentInstances$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.Currency$CurrencyProperty$$Lambda$lambda$containsInconsistentInstances$1$1",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* Currency$CurrencyProperty$$Lambda$lambda$containsInconsistentInstances$1$1::load$($String* name, bool initialize) {
	$loadClass(Currency$CurrencyProperty$$Lambda$lambda$containsInconsistentInstances$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Currency$CurrencyProperty$$Lambda$lambda$containsInconsistentInstances$1$1::class$ = nullptr;

$FieldInfo _Currency$CurrencyProperty_FieldInfo_[] = {
	{"country", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Currency$CurrencyProperty, country)},
	{"currencyCode", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Currency$CurrencyProperty, currencyCode)},
	{"fraction", "I", nullptr, $PRIVATE | $FINAL, $field(Currency$CurrencyProperty, fraction)},
	{"numericCode", "I", nullptr, $PRIVATE | $FINAL, $field(Currency$CurrencyProperty, numericCode)},
	{"date", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Currency$CurrencyProperty, date)},
	{}
};

$MethodInfo _Currency$CurrencyProperty_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;IILjava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(Currency$CurrencyProperty::*)($String*,$String*,int32_t,int32_t,$String*)>(&Currency$CurrencyProperty::init$))},
	{"containsInconsistentInstances", "(Ljava/util/List;)Z", "(Ljava/util/List<Ljava/util/Currency$CurrencyProperty;>;)Z", $PRIVATE | $STATIC, $method(static_cast<bool(*)($List*)>(&Currency$CurrencyProperty::containsInconsistentInstances))},
	{"getValidEntry", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/regex/Pattern;)Ljava/util/Optional;", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/regex/Pattern;)Ljava/util/Optional<Ljava/util/Currency$CurrencyProperty;>;", $PRIVATE | $STATIC, $method(static_cast<$Optional*(*)($String*,$String*,$Pattern*)>(&Currency$CurrencyProperty::getValidEntry))},
	{"info", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*,$Throwable*)>(&Currency$CurrencyProperty::info))},
	{"isPastCutoverDate", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($String*)>(&Currency$CurrencyProperty::isPastCutoverDate)), "java.text.ParseException"},
	{"lambda$containsInconsistentInstances$1", "(IILjava/util/Currency$CurrencyProperty;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)(int32_t,int32_t,Currency$CurrencyProperty*)>(&Currency$CurrencyProperty::lambda$containsInconsistentInstances$1))},
	{"lambda$getValidEntry$0", "(I)I", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<int32_t(*)(int32_t)>(&Currency$CurrencyProperty::lambda$getValidEntry$0))},
	{"parseProperty", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/regex/Pattern;)Ljava/util/Currency$CurrencyProperty;", nullptr, $PRIVATE | $STATIC, $method(static_cast<Currency$CurrencyProperty*(*)($String*,$String*,$Pattern*)>(&Currency$CurrencyProperty::parseProperty))},
	{}
};

$InnerClassInfo _Currency$CurrencyProperty_InnerClassesInfo_[] = {
	{"java.util.Currency$CurrencyProperty", "java.util.Currency", "CurrencyProperty", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Currency$CurrencyProperty_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Currency$CurrencyProperty",
	"java.lang.Object",
	nullptr,
	_Currency$CurrencyProperty_FieldInfo_,
	_Currency$CurrencyProperty_MethodInfo_,
	nullptr,
	nullptr,
	_Currency$CurrencyProperty_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Currency"
};

$Object* allocate$Currency$CurrencyProperty($Class* clazz) {
	return $of($alloc(Currency$CurrencyProperty));
}

void Currency$CurrencyProperty::init$($String* country, $String* currencyCode, int32_t fraction, int32_t numericCode, $String* date) {
	$set(this, country, country);
	$set(this, currencyCode, currencyCode);
	this->fraction = fraction;
	this->numericCode = numericCode;
	$set(this, date, date);
}

$Optional* Currency$CurrencyProperty::getValidEntry($String* ctry, $String* curData, $Pattern* pattern) {
	$useLocalCurrentObjectStackCache();
	$var(Currency$CurrencyProperty, prop, nullptr);
	if ($nc(ctry)->length() != 2) {
	} else {
		$assign(prop, parseProperty(ctry, curData, pattern));
		if (prop == nullptr || ($nc(prop)->date == nullptr && $nc($($($nc(curData)->chars())->map(static_cast<$IntUnaryOperator*>($$new(Currency$CurrencyProperty$$Lambda$lambda$getValidEntry$0)))))->sum() >= 3)) {
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
	$useLocalCurrentObjectStackCache();
	$var($Matcher, m, $nc(pattern)->matcher(curData));
	if (!$nc(m)->find()) {
		return nullptr;
	} else {
		$var($String, var$0, ctry);
		$var($String, var$1, m->group(1));
		int32_t var$2 = $Integer::parseInt($(m->group(3)));
		int32_t var$3 = $Integer::parseInt($(m->group(2)));
		return $new(Currency$CurrencyProperty, var$0, var$1, var$2, var$3, $(m->group(4)));
	}
}

bool Currency$CurrencyProperty::containsInconsistentInstances($List* list) {
	$useLocalCurrentObjectStackCache();
	int32_t numCode = $nc(($cast(Currency$CurrencyProperty, $($nc(list)->get(0)))))->numericCode;
	int32_t fractionDigit = $nc(($cast(Currency$CurrencyProperty, $(list->get(0)))))->fraction;
	return $nc($(list->stream()))->anyMatch(static_cast<$Predicate*>($$new(Currency$CurrencyProperty$$Lambda$lambda$containsInconsistentInstances$1$1, numCode, fractionDigit)));
}

bool Currency$CurrencyProperty::isPastCutoverDate($String* s) {
	$useLocalCurrentObjectStackCache();
	$init($Locale);
	$var($SimpleDateFormat, format, $new($SimpleDateFormat, "yyyy-MM-dd\'T\'HH:mm:ss"_s, $Locale::ROOT));
	format->setTimeZone($($TimeZone::getTimeZone("UTC"_s)));
	format->setLenient(false);
	int64_t time = $nc($(format->parse($($nc(s)->trim()))))->getTime();
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
	return $nc(prop)->numericCode != numCode || $nc(prop)->fraction != fractionDigit;
}

int32_t Currency$CurrencyProperty::lambda$getValidEntry$0(int32_t c) {
	return c == u',' ? 1 : 0;
}

Currency$CurrencyProperty::Currency$CurrencyProperty() {
}

$Class* Currency$CurrencyProperty::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Currency$CurrencyProperty$$Lambda$lambda$getValidEntry$0::classInfo$.name)) {
			return Currency$CurrencyProperty$$Lambda$lambda$getValidEntry$0::load$(name, initialize);
		}
		if (name->equals(Currency$CurrencyProperty$$Lambda$lambda$containsInconsistentInstances$1$1::classInfo$.name)) {
			return Currency$CurrencyProperty$$Lambda$lambda$containsInconsistentInstances$1$1::load$(name, initialize);
		}
	}
	$loadClass(Currency$CurrencyProperty, name, initialize, &_Currency$CurrencyProperty_ClassInfo_, allocate$Currency$CurrencyProperty);
	return class$;
}

$Class* Currency$CurrencyProperty::class$ = nullptr;

	} // util
} // java