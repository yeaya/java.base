#include <java/time/format/DateTimeFormatterBuilder$DayPeriod.h>

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/InternalError.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/time/DateTimeException.h>
#include <java/time/format/DateTimeFormatterBuilder.h>
#include <java/util/AbstractMap.h>
#include <java/util/Arrays.h>
#include <java/util/Calendar.h>
#include <java/util/Comparator.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <java/util/Objects.h>
#include <java/util/Optional.h>
#include <java/util/Set.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/function/Supplier.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern.h>
#include <java/util/stream/Stream.h>
#include <sun/util/locale/provider/CalendarDataUtility.h>
#include <sun/util/locale/provider/LocaleProviderAdapter.h>
#include <sun/util/locale/provider/LocaleResources.h>
#include <jcpp.h>

#undef AM
#undef DAYPERIOD_CACHE
#undef DPCOMPARATOR
#undef PM
#undef RULE

using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $DateTimeException = ::java::time::DateTimeException;
using $DateTimeFormatterBuilder = ::java::time::format::DateTimeFormatterBuilder;
using $AbstractMap = ::java::util::AbstractMap;
using $Arrays = ::java::util::Arrays;
using $Calendar = ::java::util::Calendar;
using $Collection = ::java::util::Collection;
using $Comparator = ::java::util::Comparator;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $Objects = ::java::util::Objects;
using $Optional = ::java::util::Optional;
using $Set = ::java::util::Set;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $Consumer = ::java::util::function::Consumer;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Supplier = ::java::util::function::Supplier;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern = ::java::util::regex::Pattern;
using $Stream = ::java::util::stream::Stream;
using $CalendarDataUtility = ::sun::util::locale::provider::CalendarDataUtility;
using $LocaleProviderAdapter = ::sun::util::locale::provider::LocaleProviderAdapter;
using $LocaleResources = ::sun::util::locale::provider::LocaleResources;

namespace java {
	namespace time {
		namespace format {

class DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$static$0 : public $Comparator {
	$class(DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$static$0, $NO_CLASS_INIT, $Comparator)
public:
	void init$() {
	}
	virtual int32_t compare(Object$* dp1, Object$* dp2) override {
		 return DateTimeFormatterBuilder$DayPeriod::lambda$static$0($cast(DateTimeFormatterBuilder$DayPeriod, dp1), $cast(DateTimeFormatterBuilder$DayPeriod, dp2));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$static$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$static$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$static$0::*)()>(&DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$static$0::init$))},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{}
};
$ClassInfo DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$static$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.time.format.DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$static$0",
	"java.lang.Object",
	"java.util.Comparator",
	nullptr,
	methodInfos
};
$Class* DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$static$0::load$($String* name, bool initialize) {
	$loadClass(DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$static$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$static$0::class$ = nullptr;

class DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$getDayPeriodMap$2$1 : public $Function {
	$class(DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$getDayPeriodMap$2$1, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* l) override {
		 return $of(DateTimeFormatterBuilder$DayPeriod::lambda$getDayPeriodMap$2($cast($Locale, l)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$getDayPeriodMap$2$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$getDayPeriodMap$2$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$getDayPeriodMap$2$1::*)()>(&DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$getDayPeriodMap$2$1::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$getDayPeriodMap$2$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.time.format.DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$getDayPeriodMap$2$1",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$getDayPeriodMap$2$1::load$($String* name, bool initialize) {
	$loadClass(DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$getDayPeriodMap$2$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$getDayPeriodMap$2$1::class$ = nullptr;

class DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$ofLocale$3$2 : public $Predicate {
	$class(DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$ofLocale$3$2, $NO_CLASS_INIT, $Predicate)
public:
	void init$(int64_t index) {
		this->index = index;
	}
	virtual bool test(Object$* dp) override {
		 return DateTimeFormatterBuilder$DayPeriod::lambda$ofLocale$3(index, $cast(DateTimeFormatterBuilder$DayPeriod, dp));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$ofLocale$3$2>());
	}
	int64_t index = 0;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$ofLocale$3$2::fieldInfos[2] = {
	{"index", "J", nullptr, $PUBLIC, $field(DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$ofLocale$3$2, index)},
	{}
};
$MethodInfo DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$ofLocale$3$2::methodInfos[3] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$ofLocale$3$2::*)(int64_t)>(&DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$ofLocale$3$2::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$ofLocale$3$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.time.format.DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$ofLocale$3$2",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$ofLocale$3$2::load$($String* name, bool initialize) {
	$loadClass(DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$ofLocale$3$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$ofLocale$3$2::class$ = nullptr;

class DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$ofLocale$4$3 : public $Supplier {
	$class(DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$ofLocale$4$3, $NO_CLASS_INIT, $Supplier)
public:
	void init$($Locale* locale, int64_t index) {
		$set(this, locale, locale);
		this->index = index;
	}
	virtual $Object* get() override {
		 return $of(DateTimeFormatterBuilder$DayPeriod::lambda$ofLocale$4(locale, index));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$ofLocale$4$3>());
	}
	$Locale* locale = nullptr;
	int64_t index = 0;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$ofLocale$4$3::fieldInfos[3] = {
	{"locale", "Ljava/util/Locale;", nullptr, $PUBLIC, $field(DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$ofLocale$4$3, locale)},
	{"index", "J", nullptr, $PUBLIC, $field(DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$ofLocale$4$3, index)},
	{}
};
$MethodInfo DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$ofLocale$4$3::methodInfos[3] = {
	{"<init>", "(Ljava/util/Locale;J)V", nullptr, $PUBLIC, $method(static_cast<void(DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$ofLocale$4$3::*)($Locale*,int64_t)>(&DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$ofLocale$4$3::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$ofLocale$4$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.time.format.DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$ofLocale$4$3",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$ofLocale$4$3::load$($String* name, bool initialize) {
	$loadClass(DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$ofLocale$4$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$ofLocale$4$3::class$ = nullptr;

class DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$getDayPeriodMap$1$4 : public $Consumer {
	$class(DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$getDayPeriodMap$1$4, $NO_CLASS_INIT, $Consumer)
public:
	void init$($Map* periodMap) {
		$set(this, periodMap, periodMap);
	}
	virtual void accept(Object$* rule) override {
		DateTimeFormatterBuilder$DayPeriod::lambda$getDayPeriodMap$1(periodMap, $cast($String, rule));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$getDayPeriodMap$1$4>());
	}
	$Map* periodMap = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$getDayPeriodMap$1$4::fieldInfos[2] = {
	{"periodMap", "Ljava/util/Map;", nullptr, $PUBLIC, $field(DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$getDayPeriodMap$1$4, periodMap)},
	{}
};
$MethodInfo DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$getDayPeriodMap$1$4::methodInfos[3] = {
	{"<init>", "(Ljava/util/Map;)V", nullptr, $PUBLIC, $method(static_cast<void(DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$getDayPeriodMap$1$4::*)($Map*)>(&DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$getDayPeriodMap$1$4::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$getDayPeriodMap$1$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.time.format.DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$getDayPeriodMap$1$4",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$getDayPeriodMap$1$4::load$($String* name, bool initialize) {
	$loadClass(DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$getDayPeriodMap$1$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$getDayPeriodMap$1$4::class$ = nullptr;

$FieldInfo _DateTimeFormatterBuilder$DayPeriod_FieldInfo_[] = {
	{"DAYPERIOD_CACHE", "Ljava/util/Map;", "Ljava/util/Map<Ljava/util/Locale;Ljava/util/Map<Ljava/time/format/DateTimeFormatterBuilder$DayPeriod;Ljava/lang/Long;>;>;", $PRIVATE | $STATIC | $FINAL, $staticField(DateTimeFormatterBuilder$DayPeriod, DAYPERIOD_CACHE)},
	{"DPCOMPARATOR", "Ljava/util/Comparator;", "Ljava/util/Comparator<Ljava/time/format/DateTimeFormatterBuilder$DayPeriod;>;", $PRIVATE | $STATIC | $FINAL, $staticField(DateTimeFormatterBuilder$DayPeriod, DPCOMPARATOR)},
	{"RULE", "Ljava/util/regex/Pattern;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DateTimeFormatterBuilder$DayPeriod, RULE)},
	{"from", "J", nullptr, $PRIVATE | $FINAL, $field(DateTimeFormatterBuilder$DayPeriod, from)},
	{"to", "J", nullptr, $PRIVATE | $FINAL, $field(DateTimeFormatterBuilder$DayPeriod, to)},
	{"index", "J", nullptr, $PRIVATE | $FINAL, $field(DateTimeFormatterBuilder$DayPeriod, index)},
	{}
};

$MethodInfo _DateTimeFormatterBuilder$DayPeriod_MethodInfo_[] = {
	{"<init>", "(JJJ)V", nullptr, $PRIVATE, $method(static_cast<void(DateTimeFormatterBuilder$DayPeriod::*)(int64_t,int64_t,int64_t)>(&DateTimeFormatterBuilder$DayPeriod::init$))},
	{"duration", "()J", nullptr, $PRIVATE, $method(static_cast<int64_t(DateTimeFormatterBuilder$DayPeriod::*)()>(&DateTimeFormatterBuilder$DayPeriod::duration))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getDayPeriodMap", "(Ljava/util/Locale;)Ljava/util/Map;", "(Ljava/util/Locale;)Ljava/util/Map<Ljava/time/format/DateTimeFormatterBuilder$DayPeriod;Ljava/lang/Long;>;", $STATIC, $method(static_cast<$Map*(*)($Locale*)>(&DateTimeFormatterBuilder$DayPeriod::getDayPeriodMap))},
	{"getIndex", "()J", nullptr, 0, $method(static_cast<int64_t(DateTimeFormatterBuilder$DayPeriod::*)()>(&DateTimeFormatterBuilder$DayPeriod::getIndex))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"includes", "(J)Z", nullptr, 0, $method(static_cast<bool(DateTimeFormatterBuilder$DayPeriod::*)(int64_t)>(&DateTimeFormatterBuilder$DayPeriod::includes))},
	{"lambda$getDayPeriodMap$1", "(Ljava/util/Map;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($Map*,$String*)>(&DateTimeFormatterBuilder$DayPeriod::lambda$getDayPeriodMap$1))},
	{"lambda$getDayPeriodMap$2", "(Ljava/util/Locale;)Ljava/util/Map;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Map*(*)($Locale*)>(&DateTimeFormatterBuilder$DayPeriod::lambda$getDayPeriodMap$2))},
	{"lambda$ofLocale$3", "(JLjava/time/format/DateTimeFormatterBuilder$DayPeriod;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)(int64_t,DateTimeFormatterBuilder$DayPeriod*)>(&DateTimeFormatterBuilder$DayPeriod::lambda$ofLocale$3))},
	{"lambda$ofLocale$4", "(Ljava/util/Locale;J)Ljava/time/DateTimeException;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$DateTimeException*(*)($Locale*,int64_t)>(&DateTimeFormatterBuilder$DayPeriod::lambda$ofLocale$4))},
	{"lambda$static$0", "(Ljava/time/format/DateTimeFormatterBuilder$DayPeriod;Ljava/time/format/DateTimeFormatterBuilder$DayPeriod;)I", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<int32_t(*)(DateTimeFormatterBuilder$DayPeriod*,DateTimeFormatterBuilder$DayPeriod*)>(&DateTimeFormatterBuilder$DayPeriod::lambda$static$0))},
	{"mapToIndex", "(Ljava/lang/String;)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($String*)>(&DateTimeFormatterBuilder$DayPeriod::mapToIndex))},
	{"mid", "()J", nullptr, 0, $method(static_cast<int64_t(DateTimeFormatterBuilder$DayPeriod::*)()>(&DateTimeFormatterBuilder$DayPeriod::mid))},
	{"ofLocale", "(Ljava/util/Locale;J)Ljava/time/format/DateTimeFormatterBuilder$DayPeriod;", nullptr, $STATIC, $method(static_cast<DateTimeFormatterBuilder$DayPeriod*(*)($Locale*,int64_t)>(&DateTimeFormatterBuilder$DayPeriod::ofLocale))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DateTimeFormatterBuilder$DayPeriod_InnerClassesInfo_[] = {
	{"java.time.format.DateTimeFormatterBuilder$DayPeriod", "java.time.format.DateTimeFormatterBuilder", "DayPeriod", $STATIC | $FINAL},
	{}
};

$ClassInfo _DateTimeFormatterBuilder$DayPeriod_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.time.format.DateTimeFormatterBuilder$DayPeriod",
	"java.lang.Object",
	nullptr,
	_DateTimeFormatterBuilder$DayPeriod_FieldInfo_,
	_DateTimeFormatterBuilder$DayPeriod_MethodInfo_,
	nullptr,
	nullptr,
	_DateTimeFormatterBuilder$DayPeriod_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.format.DateTimeFormatterBuilder"
};

$Object* allocate$DateTimeFormatterBuilder$DayPeriod($Class* clazz) {
	return $of($alloc(DateTimeFormatterBuilder$DayPeriod));
}


$Map* DateTimeFormatterBuilder$DayPeriod::DAYPERIOD_CACHE = nullptr;

$Comparator* DateTimeFormatterBuilder$DayPeriod::DPCOMPARATOR = nullptr;

$Pattern* DateTimeFormatterBuilder$DayPeriod::RULE = nullptr;

void DateTimeFormatterBuilder$DayPeriod::init$(int64_t from, int64_t to, int64_t index) {
	this->from = from;
	this->to = to;
	this->index = index;
}

int64_t DateTimeFormatterBuilder$DayPeriod::getIndex() {
	return this->index;
}

int64_t DateTimeFormatterBuilder$DayPeriod::mid() {
	return (this->from + duration() / 2) % 1440;
}

bool DateTimeFormatterBuilder$DayPeriod::includes(int64_t mod) {
	if (this->from == 0 && this->to == 0 && mod == 1440) {
		return true;
	}
	return (this->from == mod && this->to == mod || this->from <= mod && mod < this->to || this->from > this->to && (this->from <= mod || this->to > mod));
}

int64_t DateTimeFormatterBuilder$DayPeriod::duration() {
	return this->from > this->to ? 1440 - this->from + this->to : this->to - this->from;
}

int64_t DateTimeFormatterBuilder$DayPeriod::mapToIndex($String* type) {
	$init(DateTimeFormatterBuilder$DayPeriod);
	$var($String, s235842$, type);
	int32_t tmp235842$ = -1;
	switch ($nc(s235842$)->hashCode()) {
	case 3116:
		{
			if (s235842$->equals("am"_s)) {
				tmp235842$ = 0;
			}
			break;
		}
	case 3581:
		{
			if (s235842$->equals("pm"_s)) {
				tmp235842$ = 1;
			}
			break;
		}
	case (int32_t)0x9E326AD0:
		{
			if (s235842$->equals("midnight"_s)) {
				tmp235842$ = 2;
			}
			break;
		}
	case 0x0033AF60:
		{
			if (s235842$->equals("noon"_s)) {
				tmp235842$ = 3;
			}
			break;
		}
	case (int32_t)0xF37BC0ED:
		{
			if (s235842$->equals("morning1"_s)) {
				tmp235842$ = 4;
			}
			break;
		}
	case (int32_t)0xF37BC0EE:
		{
			if (s235842$->equals("morning2"_s)) {
				tmp235842$ = 5;
			}
			break;
		}
	case 0x5CC08075:
		{
			if (s235842$->equals("afternoon1"_s)) {
				tmp235842$ = 6;
			}
			break;
		}
	case 0x5CC08076:
		{
			if (s235842$->equals("afternoon2"_s)) {
				tmp235842$ = 7;
			}
			break;
		}
	case 0x108EF8A9:
		{
			if (s235842$->equals("evening1"_s)) {
				tmp235842$ = 8;
			}
			break;
		}
	case 0x108EF8AA:
		{
			if (s235842$->equals("evening2"_s)) {
				tmp235842$ = 9;
			}
			break;
		}
	case (int32_t)0xC1AD1F19:
		{
			if (s235842$->equals("night1"_s)) {
				tmp235842$ = 10;
			}
			break;
		}
	case (int32_t)0xC1AD1F1A:
		{
			if (s235842$->equals("night2"_s)) {
				tmp235842$ = 11;
			}
			break;
		}
	}

	int64_t var$0 = 0;
	switch (tmp235842$) {
	case 0:
		{
			var$0 = $Calendar::AM;
			break;
		}
	case 1:
		{
			var$0 = $Calendar::PM;
			break;
		}
	case 2:
		{
			var$0 = 2;
			break;
		}
	case 3:
		{
			var$0 = 3;
			break;
		}
	case 4:
		{
			var$0 = 4;
			break;
		}
	case 5:
		{
			var$0 = 5;
			break;
		}
	case 6:
		{
			var$0 = 6;
			break;
		}
	case 7:
		{
			var$0 = 7;
			break;
		}
	case 8:
		{
			var$0 = 8;
			break;
		}
	case 9:
		{
			var$0 = 9;
			break;
		}
	case 10:
		{
			var$0 = 10;
			break;
		}
	case 11:
		{
			var$0 = 11;
			break;
		}
	default:
		{
			$throwNew($InternalError, "invalid day period type"_s);
		}
	}
	return var$0;
}

$Map* DateTimeFormatterBuilder$DayPeriod::getDayPeriodMap($Locale* locale) {
	$init(DateTimeFormatterBuilder$DayPeriod);
	return $cast($Map, $nc(DateTimeFormatterBuilder$DayPeriod::DAYPERIOD_CACHE)->computeIfAbsent(locale, static_cast<$Function*>($$new(DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$getDayPeriodMap$2$1))));
}

DateTimeFormatterBuilder$DayPeriod* DateTimeFormatterBuilder$DayPeriod::ofLocale($Locale* locale, int64_t index) {
	$init(DateTimeFormatterBuilder$DayPeriod);
	$useLocalCurrentObjectStackCache();
	return $cast(DateTimeFormatterBuilder$DayPeriod, $nc($($nc($($nc($($nc($($nc($(getDayPeriodMap(locale)))->keySet()))->stream()))->filter(static_cast<$Predicate*>($$new(DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$ofLocale$3$2, index)))))->findAny()))->orElseThrow(static_cast<$Supplier*>($$new(DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$ofLocale$4$3, locale, index))));
}

bool DateTimeFormatterBuilder$DayPeriod::equals(Object$* o) {
	if ($equals(this, o)) {
		return true;
	}
	bool var$0 = o == nullptr;
	if (!var$0) {
		var$0 = $of(this)->getClass() != $nc($of(o))->getClass();
	}
	if (var$0) {
		return false;
	}
	$var(DateTimeFormatterBuilder$DayPeriod, dayPeriod, $cast(DateTimeFormatterBuilder$DayPeriod, o));
	return this->from == $nc(dayPeriod)->from && this->to == dayPeriod->to && this->index == dayPeriod->index;
}

int32_t DateTimeFormatterBuilder$DayPeriod::hashCode() {
	$useLocalCurrentObjectStackCache();
	return $Objects::hash($$new($ObjectArray, {
		$($of($Long::valueOf(this->from))),
		$($of($Long::valueOf(this->to))),
		$($of($Long::valueOf(this->index)))
	}));
}

$String* DateTimeFormatterBuilder$DayPeriod::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $("DayPeriod(%02d:%02d"_s->formatted($$new($ObjectArray, {
		$($of($Long::valueOf(this->from / 60))),
		$($of($Long::valueOf(this->from % 60)))
	}))));
	return $concat(var$0, (this->from == this->to ? ")"_s : $("-%02d:%02d)"_s->formatted($$new($ObjectArray, {
		$($of($Long::valueOf(this->to / 60))),
		$($of($Long::valueOf(this->to % 60)))
	})))));
}

$DateTimeException* DateTimeFormatterBuilder$DayPeriod::lambda$ofLocale$4($Locale* locale, int64_t index) {
	$init(DateTimeFormatterBuilder$DayPeriod);
	$useLocalCurrentObjectStackCache();
	return $new($DateTimeException, $$str({"DayPeriod could not be determined for the locale "_s, locale, " at type index "_s, $$str(index)}));
}

bool DateTimeFormatterBuilder$DayPeriod::lambda$ofLocale$3(int64_t index, DateTimeFormatterBuilder$DayPeriod* dp) {
	$init(DateTimeFormatterBuilder$DayPeriod);
	return $nc(dp)->getIndex() == index;
}

$Map* DateTimeFormatterBuilder$DayPeriod::lambda$getDayPeriodMap$2($Locale* l) {
	$init(DateTimeFormatterBuilder$DayPeriod);
	$useLocalCurrentObjectStackCache();
	$var($LocaleResources, lr, $nc($($LocaleProviderAdapter::getResourceBundleBased()))->getLocaleResources($($CalendarDataUtility::findRegionOverride(l))));
	$var($String, dayPeriodRules, $nc($($nc(lr)->getRules()))->get(1));
	$var($Map, periodMap, static_cast<$Map*>(static_cast<$AbstractMap*>($new($ConcurrentHashMap))));
	$nc($($Arrays::stream($($nc(dayPeriodRules)->split(";"_s)))))->forEach(static_cast<$Consumer*>($$new(DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$getDayPeriodMap$1$4, periodMap)));
	$var($Object, var$0, $of($new(DateTimeFormatterBuilder$DayPeriod, 0, 720, 0)));
	periodMap->putIfAbsent(var$0, $($Long::valueOf((int64_t)0)));
	$var($Object, var$1, $of($new(DateTimeFormatterBuilder$DayPeriod, 720, 1440, 1)));
	periodMap->putIfAbsent(var$1, $($Long::valueOf((int64_t)1)));
	return periodMap;
}

void DateTimeFormatterBuilder$DayPeriod::lambda$getDayPeriodMap$1($Map* periodMap, $String* rule) {
	$init(DateTimeFormatterBuilder$DayPeriod);
	$useLocalCurrentObjectStackCache();
	$var($Matcher, m, $nc(DateTimeFormatterBuilder$DayPeriod::RULE)->matcher(rule));
	if ($nc(m)->find()) {
		$var($String, from, m->group("from"_s));
		$var($String, to, m->group("to"_s));
		int64_t index = DateTimeFormatterBuilder$DayPeriod::mapToIndex($(m->group("type"_s)));
		if (to == nullptr) {
			$assign(to, from);
		}
		int64_t var$1 = $Long::parseLong(from) * 60;
		$var($Object, var$0, $of($new(DateTimeFormatterBuilder$DayPeriod, var$1, $Long::parseLong(to) * 60, index)));
		$nc(periodMap)->putIfAbsent(var$0, $($Long::valueOf(index)));
	}
}

int32_t DateTimeFormatterBuilder$DayPeriod::lambda$static$0(DateTimeFormatterBuilder$DayPeriod* dp1, DateTimeFormatterBuilder$DayPeriod* dp2) {
	$init(DateTimeFormatterBuilder$DayPeriod);
	int64_t var$0 = $nc(dp1)->duration();
	return (int32_t)(var$0 - $nc(dp2)->duration());
}

void clinit$DateTimeFormatterBuilder$DayPeriod($Class* class$) {
	$assignStatic(DateTimeFormatterBuilder$DayPeriod::DAYPERIOD_CACHE, static_cast<$Map*>(static_cast<$AbstractMap*>($new($ConcurrentHashMap))));
	$assignStatic(DateTimeFormatterBuilder$DayPeriod::DPCOMPARATOR, static_cast<$Comparator*>($new(DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$static$0)));
	$assignStatic(DateTimeFormatterBuilder$DayPeriod::RULE, $Pattern::compile("(?<type>[a-z12]+):(?<from>\\d{2}):00(-(?<to>\\d{2}))*"_s));
}

DateTimeFormatterBuilder$DayPeriod::DateTimeFormatterBuilder$DayPeriod() {
}

$Class* DateTimeFormatterBuilder$DayPeriod::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$static$0::classInfo$.name)) {
			return DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$static$0::load$(name, initialize);
		}
		if (name->equals(DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$getDayPeriodMap$2$1::classInfo$.name)) {
			return DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$getDayPeriodMap$2$1::load$(name, initialize);
		}
		if (name->equals(DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$ofLocale$3$2::classInfo$.name)) {
			return DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$ofLocale$3$2::load$(name, initialize);
		}
		if (name->equals(DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$ofLocale$4$3::classInfo$.name)) {
			return DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$ofLocale$4$3::load$(name, initialize);
		}
		if (name->equals(DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$getDayPeriodMap$1$4::classInfo$.name)) {
			return DateTimeFormatterBuilder$DayPeriod$$Lambda$lambda$getDayPeriodMap$1$4::load$(name, initialize);
		}
	}
	$loadClass(DateTimeFormatterBuilder$DayPeriod, name, initialize, &_DateTimeFormatterBuilder$DayPeriod_ClassInfo_, clinit$DateTimeFormatterBuilder$DayPeriod, allocate$DateTimeFormatterBuilder$DayPeriod);
	return class$;
}

$Class* DateTimeFormatterBuilder$DayPeriod::class$ = nullptr;

		} // format
	} // time
} // java