#include <sun/util/locale/provider/JRELocaleProviderAdapter.h>
#include <java/io/Serializable.h>
#include <java/lang/InternalError.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/security/PrivilegedActionException.h>
#include <java/security/PrivilegedExceptionAction.h>
#include <java/text/spi/BreakIteratorProvider.h>
#include <java/text/spi/CollatorProvider.h>
#include <java/text/spi/DateFormatProvider.h>
#include <java/text/spi/DateFormatSymbolsProvider.h>
#include <java/text/spi/DecimalFormatSymbolsProvider.h>
#include <java/text/spi/NumberFormatProvider.h>
#include <java/util/Collections.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <java/util/ResourceBundle$Control.h>
#include <java/util/ServiceLoader.h>
#include <java/util/Set.h>
#include <java/util/StringTokenizer.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/concurrent/ConcurrentMap.h>
#include <java/util/spi/CalendarDataProvider.h>
#include <java/util/spi/CalendarNameProvider.h>
#include <java/util/spi/CurrencyNameProvider.h>
#include <java/util/spi/LocaleNameProvider.h>
#include <java/util/spi/LocaleServiceProvider.h>
#include <java/util/spi/TimeZoneNameProvider.h>
#include <sun/text/spi/JavaTimeDateTimePatternProvider.h>
#include <sun/util/locale/provider/BaseLocaleDataMetaInfo.h>
#include <sun/util/locale/provider/BreakIteratorProviderImpl.h>
#include <sun/util/locale/provider/CalendarDataProviderImpl.h>
#include <sun/util/locale/provider/CalendarNameProviderImpl.h>
#include <sun/util/locale/provider/CalendarProviderImpl.h>
#include <sun/util/locale/provider/CollatorProviderImpl.h>
#include <sun/util/locale/provider/CurrencyNameProviderImpl.h>
#include <sun/util/locale/provider/DateFormatProviderImpl.h>
#include <sun/util/locale/provider/DateFormatSymbolsProviderImpl.h>
#include <sun/util/locale/provider/DecimalFormatSymbolsProviderImpl.h>
#include <sun/util/locale/provider/JRELocaleConstants.h>
#include <sun/util/locale/provider/JRELocaleProviderAdapter$AvailableJRELocales.h>
#include <sun/util/locale/provider/JavaTimeDateTimePatternImpl.h>
#include <sun/util/locale/provider/LocaleDataMetaInfo.h>
#include <sun/util/locale/provider/LocaleNameProviderImpl.h>
#include <sun/util/locale/provider/LocaleProviderAdapter$Type.h>
#include <sun/util/locale/provider/LocaleProviderAdapter.h>
#include <sun/util/locale/provider/LocaleResources.h>
#include <sun/util/locale/provider/NumberFormatProviderImpl.h>
#include <sun/util/locale/provider/TimeZoneNameProviderImpl.h>
#include <sun/util/resources/LocaleData.h>
#include <sun/util/spi/CalendarProvider.h>
#include <jcpp.h>

#undef FORMAT_DEFAULT
#undef JA_JP_JP
#undef JRE
#undef NO_NO_NY
#undef ROOT
#undef TH_TH_TH

using $LocaleArray = $Array<::java::util::Locale>;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $PrivilegedActionException = ::java::security::PrivilegedActionException;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $BreakIteratorProvider = ::java::text::spi::BreakIteratorProvider;
using $CollatorProvider = ::java::text::spi::CollatorProvider;
using $DateFormatProvider = ::java::text::spi::DateFormatProvider;
using $DateFormatSymbolsProvider = ::java::text::spi::DateFormatSymbolsProvider;
using $DecimalFormatSymbolsProvider = ::java::text::spi::DecimalFormatSymbolsProvider;
using $NumberFormatProvider = ::java::text::spi::NumberFormatProvider;
using $Collections = ::java::util::Collections;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $ResourceBundle$Control = ::java::util::ResourceBundle$Control;
using $ServiceLoader = ::java::util::ServiceLoader;
using $Set = ::java::util::Set;
using $StringTokenizer = ::java::util::StringTokenizer;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $CalendarDataProvider = ::java::util::spi::CalendarDataProvider;
using $CalendarNameProvider = ::java::util::spi::CalendarNameProvider;
using $CurrencyNameProvider = ::java::util::spi::CurrencyNameProvider;
using $LocaleNameProvider = ::java::util::spi::LocaleNameProvider;
using $LocaleServiceProvider = ::java::util::spi::LocaleServiceProvider;
using $TimeZoneNameProvider = ::java::util::spi::TimeZoneNameProvider;
using $JavaTimeDateTimePatternProvider = ::sun::text::spi::JavaTimeDateTimePatternProvider;
using $BaseLocaleDataMetaInfo = ::sun::util::locale::provider::BaseLocaleDataMetaInfo;
using $BreakIteratorProviderImpl = ::sun::util::locale::provider::BreakIteratorProviderImpl;
using $CalendarDataProviderImpl = ::sun::util::locale::provider::CalendarDataProviderImpl;
using $CalendarNameProviderImpl = ::sun::util::locale::provider::CalendarNameProviderImpl;
using $CalendarProviderImpl = ::sun::util::locale::provider::CalendarProviderImpl;
using $CollatorProviderImpl = ::sun::util::locale::provider::CollatorProviderImpl;
using $CurrencyNameProviderImpl = ::sun::util::locale::provider::CurrencyNameProviderImpl;
using $DateFormatProviderImpl = ::sun::util::locale::provider::DateFormatProviderImpl;
using $DateFormatSymbolsProviderImpl = ::sun::util::locale::provider::DateFormatSymbolsProviderImpl;
using $DecimalFormatSymbolsProviderImpl = ::sun::util::locale::provider::DecimalFormatSymbolsProviderImpl;
using $JRELocaleConstants = ::sun::util::locale::provider::JRELocaleConstants;
using $JRELocaleProviderAdapter$AvailableJRELocales = ::sun::util::locale::provider::JRELocaleProviderAdapter$AvailableJRELocales;
using $JavaTimeDateTimePatternImpl = ::sun::util::locale::provider::JavaTimeDateTimePatternImpl;
using $LocaleDataMetaInfo = ::sun::util::locale::provider::LocaleDataMetaInfo;
using $LocaleNameProviderImpl = ::sun::util::locale::provider::LocaleNameProviderImpl;
using $LocaleProviderAdapter = ::sun::util::locale::provider::LocaleProviderAdapter;
using $LocaleProviderAdapter$Type = ::sun::util::locale::provider::LocaleProviderAdapter$Type;
using $LocaleResources = ::sun::util::locale::provider::LocaleResources;
using $NumberFormatProviderImpl = ::sun::util::locale::provider::NumberFormatProviderImpl;
using $TimeZoneNameProviderImpl = ::sun::util::locale::provider::TimeZoneNameProviderImpl;
using $LocaleData = ::sun::util::resources::LocaleData;
using $CalendarProvider = ::sun::util::spi::CalendarProvider;

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

class JRELocaleProviderAdapter$$Lambda$lambda$getBreakIteratorProvider$0 : public $PrivilegedAction {
	$class(JRELocaleProviderAdapter$$Lambda$lambda$getBreakIteratorProvider$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$(JRELocaleProviderAdapter* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* run() override {
		 return $nc(inst$)->lambda$getBreakIteratorProvider$0();
	}
	JRELocaleProviderAdapter* inst$ = nullptr;
};
$Class* JRELocaleProviderAdapter$$Lambda$lambda$getBreakIteratorProvider$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JRELocaleProviderAdapter$$Lambda$lambda$getBreakIteratorProvider$0, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/util/locale/provider/JRELocaleProviderAdapter;)V", nullptr, $PUBLIC, $method(JRELocaleProviderAdapter$$Lambda$lambda$getBreakIteratorProvider$0, init$, void, JRELocaleProviderAdapter*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(JRELocaleProviderAdapter$$Lambda$lambda$getBreakIteratorProvider$0, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.util.locale.provider.JRELocaleProviderAdapter$$Lambda$lambda$getBreakIteratorProvider$0",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JRELocaleProviderAdapter$$Lambda$lambda$getBreakIteratorProvider$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JRELocaleProviderAdapter$$Lambda$lambda$getBreakIteratorProvider$0);
	});
	return class$;
}
$Class* JRELocaleProviderAdapter$$Lambda$lambda$getBreakIteratorProvider$0::class$ = nullptr;

class JRELocaleProviderAdapter$$Lambda$lambda$getCollatorProvider$1$1 : public $PrivilegedAction {
	$class(JRELocaleProviderAdapter$$Lambda$lambda$getCollatorProvider$1$1, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$(JRELocaleProviderAdapter* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* run() override {
		 return $nc(inst$)->lambda$getCollatorProvider$1();
	}
	JRELocaleProviderAdapter* inst$ = nullptr;
};
$Class* JRELocaleProviderAdapter$$Lambda$lambda$getCollatorProvider$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JRELocaleProviderAdapter$$Lambda$lambda$getCollatorProvider$1$1, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/util/locale/provider/JRELocaleProviderAdapter;)V", nullptr, $PUBLIC, $method(JRELocaleProviderAdapter$$Lambda$lambda$getCollatorProvider$1$1, init$, void, JRELocaleProviderAdapter*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(JRELocaleProviderAdapter$$Lambda$lambda$getCollatorProvider$1$1, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.util.locale.provider.JRELocaleProviderAdapter$$Lambda$lambda$getCollatorProvider$1$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JRELocaleProviderAdapter$$Lambda$lambda$getCollatorProvider$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JRELocaleProviderAdapter$$Lambda$lambda$getCollatorProvider$1$1);
	});
	return class$;
}
$Class* JRELocaleProviderAdapter$$Lambda$lambda$getCollatorProvider$1$1::class$ = nullptr;

class JRELocaleProviderAdapter$$Lambda$lambda$getDateFormatProvider$2$2 : public $PrivilegedAction {
	$class(JRELocaleProviderAdapter$$Lambda$lambda$getDateFormatProvider$2$2, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$(JRELocaleProviderAdapter* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* run() override {
		 return $nc(inst$)->lambda$getDateFormatProvider$2();
	}
	JRELocaleProviderAdapter* inst$ = nullptr;
};
$Class* JRELocaleProviderAdapter$$Lambda$lambda$getDateFormatProvider$2$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JRELocaleProviderAdapter$$Lambda$lambda$getDateFormatProvider$2$2, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/util/locale/provider/JRELocaleProviderAdapter;)V", nullptr, $PUBLIC, $method(JRELocaleProviderAdapter$$Lambda$lambda$getDateFormatProvider$2$2, init$, void, JRELocaleProviderAdapter*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(JRELocaleProviderAdapter$$Lambda$lambda$getDateFormatProvider$2$2, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.util.locale.provider.JRELocaleProviderAdapter$$Lambda$lambda$getDateFormatProvider$2$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JRELocaleProviderAdapter$$Lambda$lambda$getDateFormatProvider$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JRELocaleProviderAdapter$$Lambda$lambda$getDateFormatProvider$2$2);
	});
	return class$;
}
$Class* JRELocaleProviderAdapter$$Lambda$lambda$getDateFormatProvider$2$2::class$ = nullptr;

class JRELocaleProviderAdapter$$Lambda$lambda$getDateFormatSymbolsProvider$3$3 : public $PrivilegedAction {
	$class(JRELocaleProviderAdapter$$Lambda$lambda$getDateFormatSymbolsProvider$3$3, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$(JRELocaleProviderAdapter* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* run() override {
		 return $nc(inst$)->lambda$getDateFormatSymbolsProvider$3();
	}
	JRELocaleProviderAdapter* inst$ = nullptr;
};
$Class* JRELocaleProviderAdapter$$Lambda$lambda$getDateFormatSymbolsProvider$3$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JRELocaleProviderAdapter$$Lambda$lambda$getDateFormatSymbolsProvider$3$3, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/util/locale/provider/JRELocaleProviderAdapter;)V", nullptr, $PUBLIC, $method(JRELocaleProviderAdapter$$Lambda$lambda$getDateFormatSymbolsProvider$3$3, init$, void, JRELocaleProviderAdapter*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(JRELocaleProviderAdapter$$Lambda$lambda$getDateFormatSymbolsProvider$3$3, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.util.locale.provider.JRELocaleProviderAdapter$$Lambda$lambda$getDateFormatSymbolsProvider$3$3",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JRELocaleProviderAdapter$$Lambda$lambda$getDateFormatSymbolsProvider$3$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JRELocaleProviderAdapter$$Lambda$lambda$getDateFormatSymbolsProvider$3$3);
	});
	return class$;
}
$Class* JRELocaleProviderAdapter$$Lambda$lambda$getDateFormatSymbolsProvider$3$3::class$ = nullptr;

class JRELocaleProviderAdapter$$Lambda$lambda$getDecimalFormatSymbolsProvider$4$4 : public $PrivilegedAction {
	$class(JRELocaleProviderAdapter$$Lambda$lambda$getDecimalFormatSymbolsProvider$4$4, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$(JRELocaleProviderAdapter* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* run() override {
		 return $nc(inst$)->lambda$getDecimalFormatSymbolsProvider$4();
	}
	JRELocaleProviderAdapter* inst$ = nullptr;
};
$Class* JRELocaleProviderAdapter$$Lambda$lambda$getDecimalFormatSymbolsProvider$4$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JRELocaleProviderAdapter$$Lambda$lambda$getDecimalFormatSymbolsProvider$4$4, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/util/locale/provider/JRELocaleProviderAdapter;)V", nullptr, $PUBLIC, $method(JRELocaleProviderAdapter$$Lambda$lambda$getDecimalFormatSymbolsProvider$4$4, init$, void, JRELocaleProviderAdapter*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(JRELocaleProviderAdapter$$Lambda$lambda$getDecimalFormatSymbolsProvider$4$4, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.util.locale.provider.JRELocaleProviderAdapter$$Lambda$lambda$getDecimalFormatSymbolsProvider$4$4",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JRELocaleProviderAdapter$$Lambda$lambda$getDecimalFormatSymbolsProvider$4$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JRELocaleProviderAdapter$$Lambda$lambda$getDecimalFormatSymbolsProvider$4$4);
	});
	return class$;
}
$Class* JRELocaleProviderAdapter$$Lambda$lambda$getDecimalFormatSymbolsProvider$4$4::class$ = nullptr;

class JRELocaleProviderAdapter$$Lambda$lambda$getNumberFormatProvider$5$5 : public $PrivilegedAction {
	$class(JRELocaleProviderAdapter$$Lambda$lambda$getNumberFormatProvider$5$5, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$(JRELocaleProviderAdapter* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* run() override {
		 return $nc(inst$)->lambda$getNumberFormatProvider$5();
	}
	JRELocaleProviderAdapter* inst$ = nullptr;
};
$Class* JRELocaleProviderAdapter$$Lambda$lambda$getNumberFormatProvider$5$5::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JRELocaleProviderAdapter$$Lambda$lambda$getNumberFormatProvider$5$5, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/util/locale/provider/JRELocaleProviderAdapter;)V", nullptr, $PUBLIC, $method(JRELocaleProviderAdapter$$Lambda$lambda$getNumberFormatProvider$5$5, init$, void, JRELocaleProviderAdapter*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(JRELocaleProviderAdapter$$Lambda$lambda$getNumberFormatProvider$5$5, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.util.locale.provider.JRELocaleProviderAdapter$$Lambda$lambda$getNumberFormatProvider$5$5",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JRELocaleProviderAdapter$$Lambda$lambda$getNumberFormatProvider$5$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JRELocaleProviderAdapter$$Lambda$lambda$getNumberFormatProvider$5$5);
	});
	return class$;
}
$Class* JRELocaleProviderAdapter$$Lambda$lambda$getNumberFormatProvider$5$5::class$ = nullptr;

class JRELocaleProviderAdapter$$Lambda$lambda$getCurrencyNameProvider$6$6 : public $PrivilegedAction {
	$class(JRELocaleProviderAdapter$$Lambda$lambda$getCurrencyNameProvider$6$6, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$(JRELocaleProviderAdapter* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* run() override {
		 return $nc(inst$)->lambda$getCurrencyNameProvider$6();
	}
	JRELocaleProviderAdapter* inst$ = nullptr;
};
$Class* JRELocaleProviderAdapter$$Lambda$lambda$getCurrencyNameProvider$6$6::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JRELocaleProviderAdapter$$Lambda$lambda$getCurrencyNameProvider$6$6, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/util/locale/provider/JRELocaleProviderAdapter;)V", nullptr, $PUBLIC, $method(JRELocaleProviderAdapter$$Lambda$lambda$getCurrencyNameProvider$6$6, init$, void, JRELocaleProviderAdapter*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(JRELocaleProviderAdapter$$Lambda$lambda$getCurrencyNameProvider$6$6, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.util.locale.provider.JRELocaleProviderAdapter$$Lambda$lambda$getCurrencyNameProvider$6$6",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JRELocaleProviderAdapter$$Lambda$lambda$getCurrencyNameProvider$6$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JRELocaleProviderAdapter$$Lambda$lambda$getCurrencyNameProvider$6$6);
	});
	return class$;
}
$Class* JRELocaleProviderAdapter$$Lambda$lambda$getCurrencyNameProvider$6$6::class$ = nullptr;

class JRELocaleProviderAdapter$$Lambda$lambda$getLocaleNameProvider$7$7 : public $PrivilegedAction {
	$class(JRELocaleProviderAdapter$$Lambda$lambda$getLocaleNameProvider$7$7, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$(JRELocaleProviderAdapter* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* run() override {
		 return $nc(inst$)->lambda$getLocaleNameProvider$7();
	}
	JRELocaleProviderAdapter* inst$ = nullptr;
};
$Class* JRELocaleProviderAdapter$$Lambda$lambda$getLocaleNameProvider$7$7::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JRELocaleProviderAdapter$$Lambda$lambda$getLocaleNameProvider$7$7, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/util/locale/provider/JRELocaleProviderAdapter;)V", nullptr, $PUBLIC, $method(JRELocaleProviderAdapter$$Lambda$lambda$getLocaleNameProvider$7$7, init$, void, JRELocaleProviderAdapter*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(JRELocaleProviderAdapter$$Lambda$lambda$getLocaleNameProvider$7$7, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.util.locale.provider.JRELocaleProviderAdapter$$Lambda$lambda$getLocaleNameProvider$7$7",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JRELocaleProviderAdapter$$Lambda$lambda$getLocaleNameProvider$7$7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JRELocaleProviderAdapter$$Lambda$lambda$getLocaleNameProvider$7$7);
	});
	return class$;
}
$Class* JRELocaleProviderAdapter$$Lambda$lambda$getLocaleNameProvider$7$7::class$ = nullptr;

class JRELocaleProviderAdapter$$Lambda$lambda$getTimeZoneNameProvider$8$8 : public $PrivilegedAction {
	$class(JRELocaleProviderAdapter$$Lambda$lambda$getTimeZoneNameProvider$8$8, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$(JRELocaleProviderAdapter* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* run() override {
		 return $nc(inst$)->lambda$getTimeZoneNameProvider$8();
	}
	JRELocaleProviderAdapter* inst$ = nullptr;
};
$Class* JRELocaleProviderAdapter$$Lambda$lambda$getTimeZoneNameProvider$8$8::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JRELocaleProviderAdapter$$Lambda$lambda$getTimeZoneNameProvider$8$8, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/util/locale/provider/JRELocaleProviderAdapter;)V", nullptr, $PUBLIC, $method(JRELocaleProviderAdapter$$Lambda$lambda$getTimeZoneNameProvider$8$8, init$, void, JRELocaleProviderAdapter*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(JRELocaleProviderAdapter$$Lambda$lambda$getTimeZoneNameProvider$8$8, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.util.locale.provider.JRELocaleProviderAdapter$$Lambda$lambda$getTimeZoneNameProvider$8$8",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JRELocaleProviderAdapter$$Lambda$lambda$getTimeZoneNameProvider$8$8, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JRELocaleProviderAdapter$$Lambda$lambda$getTimeZoneNameProvider$8$8);
	});
	return class$;
}
$Class* JRELocaleProviderAdapter$$Lambda$lambda$getTimeZoneNameProvider$8$8::class$ = nullptr;

class JRELocaleProviderAdapter$$Lambda$lambda$getCalendarDataProvider$9$9 : public $PrivilegedAction {
	$class(JRELocaleProviderAdapter$$Lambda$lambda$getCalendarDataProvider$9$9, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$(JRELocaleProviderAdapter* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* run() override {
		 return $nc(inst$)->lambda$getCalendarDataProvider$9();
	}
	JRELocaleProviderAdapter* inst$ = nullptr;
};
$Class* JRELocaleProviderAdapter$$Lambda$lambda$getCalendarDataProvider$9$9::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JRELocaleProviderAdapter$$Lambda$lambda$getCalendarDataProvider$9$9, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/util/locale/provider/JRELocaleProviderAdapter;)V", nullptr, $PUBLIC, $method(JRELocaleProviderAdapter$$Lambda$lambda$getCalendarDataProvider$9$9, init$, void, JRELocaleProviderAdapter*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(JRELocaleProviderAdapter$$Lambda$lambda$getCalendarDataProvider$9$9, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.util.locale.provider.JRELocaleProviderAdapter$$Lambda$lambda$getCalendarDataProvider$9$9",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JRELocaleProviderAdapter$$Lambda$lambda$getCalendarDataProvider$9$9, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JRELocaleProviderAdapter$$Lambda$lambda$getCalendarDataProvider$9$9);
	});
	return class$;
}
$Class* JRELocaleProviderAdapter$$Lambda$lambda$getCalendarDataProvider$9$9::class$ = nullptr;

class JRELocaleProviderAdapter$$Lambda$lambda$getCalendarNameProvider$10$10 : public $PrivilegedAction {
	$class(JRELocaleProviderAdapter$$Lambda$lambda$getCalendarNameProvider$10$10, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$(JRELocaleProviderAdapter* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* run() override {
		 return $nc(inst$)->lambda$getCalendarNameProvider$10();
	}
	JRELocaleProviderAdapter* inst$ = nullptr;
};
$Class* JRELocaleProviderAdapter$$Lambda$lambda$getCalendarNameProvider$10$10::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JRELocaleProviderAdapter$$Lambda$lambda$getCalendarNameProvider$10$10, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/util/locale/provider/JRELocaleProviderAdapter;)V", nullptr, $PUBLIC, $method(JRELocaleProviderAdapter$$Lambda$lambda$getCalendarNameProvider$10$10, init$, void, JRELocaleProviderAdapter*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(JRELocaleProviderAdapter$$Lambda$lambda$getCalendarNameProvider$10$10, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.util.locale.provider.JRELocaleProviderAdapter$$Lambda$lambda$getCalendarNameProvider$10$10",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JRELocaleProviderAdapter$$Lambda$lambda$getCalendarNameProvider$10$10, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JRELocaleProviderAdapter$$Lambda$lambda$getCalendarNameProvider$10$10);
	});
	return class$;
}
$Class* JRELocaleProviderAdapter$$Lambda$lambda$getCalendarNameProvider$10$10::class$ = nullptr;

class JRELocaleProviderAdapter$$Lambda$lambda$getCalendarProvider$11$11 : public $PrivilegedAction {
	$class(JRELocaleProviderAdapter$$Lambda$lambda$getCalendarProvider$11$11, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$(JRELocaleProviderAdapter* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* run() override {
		 return $nc(inst$)->lambda$getCalendarProvider$11();
	}
	JRELocaleProviderAdapter* inst$ = nullptr;
};
$Class* JRELocaleProviderAdapter$$Lambda$lambda$getCalendarProvider$11$11::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JRELocaleProviderAdapter$$Lambda$lambda$getCalendarProvider$11$11, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/util/locale/provider/JRELocaleProviderAdapter;)V", nullptr, $PUBLIC, $method(JRELocaleProviderAdapter$$Lambda$lambda$getCalendarProvider$11$11, init$, void, JRELocaleProviderAdapter*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(JRELocaleProviderAdapter$$Lambda$lambda$getCalendarProvider$11$11, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.util.locale.provider.JRELocaleProviderAdapter$$Lambda$lambda$getCalendarProvider$11$11",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JRELocaleProviderAdapter$$Lambda$lambda$getCalendarProvider$11$11, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JRELocaleProviderAdapter$$Lambda$lambda$getCalendarProvider$11$11);
	});
	return class$;
}
$Class* JRELocaleProviderAdapter$$Lambda$lambda$getCalendarProvider$11$11::class$ = nullptr;

class JRELocaleProviderAdapter$$Lambda$lambda$getJavaTimeDateTimePatternProvider$12$12 : public $PrivilegedAction {
	$class(JRELocaleProviderAdapter$$Lambda$lambda$getJavaTimeDateTimePatternProvider$12$12, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$(JRELocaleProviderAdapter* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* run() override {
		 return $nc(inst$)->lambda$getJavaTimeDateTimePatternProvider$12();
	}
	JRELocaleProviderAdapter* inst$ = nullptr;
};
$Class* JRELocaleProviderAdapter$$Lambda$lambda$getJavaTimeDateTimePatternProvider$12$12::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JRELocaleProviderAdapter$$Lambda$lambda$getJavaTimeDateTimePatternProvider$12$12, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/util/locale/provider/JRELocaleProviderAdapter;)V", nullptr, $PUBLIC, $method(JRELocaleProviderAdapter$$Lambda$lambda$getJavaTimeDateTimePatternProvider$12$12, init$, void, JRELocaleProviderAdapter*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(JRELocaleProviderAdapter$$Lambda$lambda$getJavaTimeDateTimePatternProvider$12$12, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.util.locale.provider.JRELocaleProviderAdapter$$Lambda$lambda$getJavaTimeDateTimePatternProvider$12$12",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JRELocaleProviderAdapter$$Lambda$lambda$getJavaTimeDateTimePatternProvider$12$12, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JRELocaleProviderAdapter$$Lambda$lambda$getJavaTimeDateTimePatternProvider$12$12);
	});
	return class$;
}
$Class* JRELocaleProviderAdapter$$Lambda$lambda$getJavaTimeDateTimePatternProvider$12$12::class$ = nullptr;

class JRELocaleProviderAdapter$$Lambda$lambda$createSupportedLocaleString$13$13 : public $PrivilegedExceptionAction {
	$class(JRELocaleProviderAdapter$$Lambda$lambda$createSupportedLocaleString$13$13, $NO_CLASS_INIT, $PrivilegedExceptionAction)
public:
	void init$($String* category) {
		$set(this, category, category);
	}
	virtual $Object* run() override {
		 return $of(JRELocaleProviderAdapter::lambda$createSupportedLocaleString$13(category));
	}
	$String* category = nullptr;
};
$Class* JRELocaleProviderAdapter$$Lambda$lambda$createSupportedLocaleString$13$13::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"category", "Ljava/lang/String;", nullptr, $PUBLIC, $field(JRELocaleProviderAdapter$$Lambda$lambda$createSupportedLocaleString$13$13, category)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(JRELocaleProviderAdapter$$Lambda$lambda$createSupportedLocaleString$13$13, init$, void, $String*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(JRELocaleProviderAdapter$$Lambda$lambda$createSupportedLocaleString$13$13, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.util.locale.provider.JRELocaleProviderAdapter$$Lambda$lambda$createSupportedLocaleString$13$13",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JRELocaleProviderAdapter$$Lambda$lambda$createSupportedLocaleString$13$13, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JRELocaleProviderAdapter$$Lambda$lambda$createSupportedLocaleString$13$13);
	});
	return class$;
}
$Class* JRELocaleProviderAdapter$$Lambda$lambda$createSupportedLocaleString$13$13::class$ = nullptr;

int32_t JRELocaleProviderAdapter::hashCode() {
	 return this->$LocaleProviderAdapter::hashCode();
}

bool JRELocaleProviderAdapter::equals(Object$* obj) {
	 return this->$LocaleProviderAdapter::equals(obj);
}

$Object* JRELocaleProviderAdapter::clone() {
	 return this->$LocaleProviderAdapter::clone();
}

$String* JRELocaleProviderAdapter::toString() {
	 return this->$LocaleProviderAdapter::toString();
}

void JRELocaleProviderAdapter::finalize() {
	this->$LocaleProviderAdapter::finalize();
}

void JRELocaleProviderAdapter::init$() {
	$LocaleProviderAdapter::init$();
	$set(this, langtagSets, $new($ConcurrentHashMap));
	$set(this, localeResourcesMap, $new($ConcurrentHashMap));
}

$LocaleProviderAdapter$Type* JRELocaleProviderAdapter::getAdapterType() {
	$init($LocaleProviderAdapter$Type);
	return $LocaleProviderAdapter$Type::JRE;
}

$LocaleServiceProvider* JRELocaleProviderAdapter::getLocaleServiceProvider($Class* c) {
	{
		$var($String, s3424$, $nc(c)->getSimpleName());
		int32_t tmp3424$ = -1;
		switch ($nc(s3424$)->hashCode()) {
		case 0x361e337e:
			if (s3424$->equals("BreakIteratorProvider"_s)) {
				tmp3424$ = 0;
			}
			break;
		case 0x05687e73:
			if (s3424$->equals("CollatorProvider"_s)) {
				tmp3424$ = 1;
			}
			break;
		case (int32_t)0xf88bea76:
			if (s3424$->equals("DateFormatProvider"_s)) {
				tmp3424$ = 2;
			}
			break;
		case (int32_t)0x9fbd88c7:
			if (s3424$->equals("DateFormatSymbolsProvider"_s)) {
				tmp3424$ = 3;
			}
			break;
		case 0x0251cd44:
			if (s3424$->equals("DecimalFormatSymbolsProvider"_s)) {
				tmp3424$ = 4;
			}
			break;
		case (int32_t)0xaf5962d1:
			if (s3424$->equals("NumberFormatProvider"_s)) {
				tmp3424$ = 5;
			}
			break;
		case (int32_t)0xd068106d:
			if (s3424$->equals("CurrencyNameProvider"_s)) {
				tmp3424$ = 6;
			}
			break;
		case 0x0dd09136:
			if (s3424$->equals("LocaleNameProvider"_s)) {
				tmp3424$ = 7;
			}
			break;
		case 0x59931075:
			if (s3424$->equals("TimeZoneNameProvider"_s)) {
				tmp3424$ = 8;
			}
			break;
		case 0x3d4aa639:
			if (s3424$->equals("CalendarDataProvider"_s)) {
				tmp3424$ = 9;
			}
			break;
		case 0x2d4ac01a:
			if (s3424$->equals("CalendarNameProvider"_s)) {
				tmp3424$ = 10;
			}
			break;
		case 0x4f898b6f:
			if (s3424$->equals("CalendarProvider"_s)) {
				tmp3424$ = 11;
			}
			break;
		case 0x54156357:
			if (s3424$->equals("JavaTimeDateTimePatternProvider"_s)) {
				tmp3424$ = 12;
			}
			break;
		}
		switch (tmp3424$) {
		case 0:
			return $cast($LocaleServiceProvider, getBreakIteratorProvider());
		case 1:
			return $cast($LocaleServiceProvider, getCollatorProvider());
		case 2:
			return $cast($LocaleServiceProvider, getDateFormatProvider());
		case 3:
			return $cast($LocaleServiceProvider, getDateFormatSymbolsProvider());
		case 4:
			return $cast($LocaleServiceProvider, getDecimalFormatSymbolsProvider());
		case 5:
			return $cast($LocaleServiceProvider, getNumberFormatProvider());
		case 6:
			return $cast($LocaleServiceProvider, getCurrencyNameProvider());
		case 7:
			return $cast($LocaleServiceProvider, getLocaleNameProvider());
		case 8:
			return $cast($LocaleServiceProvider, getTimeZoneNameProvider());
		case 9:
			return $cast($LocaleServiceProvider, getCalendarDataProvider());
		case 10:
			return $cast($LocaleServiceProvider, getCalendarNameProvider());
		case 11:
			return $cast($LocaleServiceProvider, getCalendarProvider());
		case 12:
			return $cast($LocaleServiceProvider, getJavaTimeDateTimePatternProvider());
		default:
			$throwNew($InternalError, "should not come down here"_s);
		}
	}
}

$BreakIteratorProvider* JRELocaleProviderAdapter::getBreakIteratorProvider() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	if (this->breakIteratorProvider == nullptr) {
		$var($BreakIteratorProvider, provider, $cast($BreakIteratorProvider, $AccessController::doPrivileged($cast($PrivilegedAction, $$new(JRELocaleProviderAdapter$$Lambda$lambda$getBreakIteratorProvider$0, this)))));
		$synchronized(this) {
			if (this->breakIteratorProvider == nullptr) {
				$set(this, breakIteratorProvider, provider);
			}
		}
	}
	return this->breakIteratorProvider;
}

$CollatorProvider* JRELocaleProviderAdapter::getCollatorProvider() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	if (this->collatorProvider == nullptr) {
		$var($CollatorProvider, provider, $cast($CollatorProvider, $AccessController::doPrivileged($cast($PrivilegedAction, $$new(JRELocaleProviderAdapter$$Lambda$lambda$getCollatorProvider$1$1, this)))));
		$synchronized(this) {
			if (this->collatorProvider == nullptr) {
				$set(this, collatorProvider, provider);
			}
		}
	}
	return this->collatorProvider;
}

$DateFormatProvider* JRELocaleProviderAdapter::getDateFormatProvider() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	if (this->dateFormatProvider == nullptr) {
		$var($DateFormatProvider, provider, $cast($DateFormatProvider, $AccessController::doPrivileged($cast($PrivilegedAction, $$new(JRELocaleProviderAdapter$$Lambda$lambda$getDateFormatProvider$2$2, this)))));
		$synchronized(this) {
			if (this->dateFormatProvider == nullptr) {
				$set(this, dateFormatProvider, provider);
			}
		}
	}
	return this->dateFormatProvider;
}

$DateFormatSymbolsProvider* JRELocaleProviderAdapter::getDateFormatSymbolsProvider() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	if (this->dateFormatSymbolsProvider == nullptr) {
		$var($DateFormatSymbolsProvider, provider, $cast($DateFormatSymbolsProvider, $AccessController::doPrivileged($cast($PrivilegedAction, $$new(JRELocaleProviderAdapter$$Lambda$lambda$getDateFormatSymbolsProvider$3$3, this)))));
		$synchronized(this) {
			if (this->dateFormatSymbolsProvider == nullptr) {
				$set(this, dateFormatSymbolsProvider, provider);
			}
		}
	}
	return this->dateFormatSymbolsProvider;
}

$DecimalFormatSymbolsProvider* JRELocaleProviderAdapter::getDecimalFormatSymbolsProvider() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	if (this->decimalFormatSymbolsProvider == nullptr) {
		$var($DecimalFormatSymbolsProvider, provider, $cast($DecimalFormatSymbolsProvider, $AccessController::doPrivileged($cast($PrivilegedAction, $$new(JRELocaleProviderAdapter$$Lambda$lambda$getDecimalFormatSymbolsProvider$4$4, this)))));
		$synchronized(this) {
			if (this->decimalFormatSymbolsProvider == nullptr) {
				$set(this, decimalFormatSymbolsProvider, provider);
			}
		}
	}
	return this->decimalFormatSymbolsProvider;
}

$NumberFormatProvider* JRELocaleProviderAdapter::getNumberFormatProvider() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	if (this->numberFormatProvider == nullptr) {
		$var($NumberFormatProvider, provider, $cast($NumberFormatProvider, $AccessController::doPrivileged($cast($PrivilegedAction, $$new(JRELocaleProviderAdapter$$Lambda$lambda$getNumberFormatProvider$5$5, this)))));
		$synchronized(this) {
			if (this->numberFormatProvider == nullptr) {
				$set(this, numberFormatProvider, provider);
			}
		}
	}
	return this->numberFormatProvider;
}

$CurrencyNameProvider* JRELocaleProviderAdapter::getCurrencyNameProvider() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	if (this->currencyNameProvider == nullptr) {
		$var($CurrencyNameProvider, provider, $cast($CurrencyNameProvider, $AccessController::doPrivileged($cast($PrivilegedAction, $$new(JRELocaleProviderAdapter$$Lambda$lambda$getCurrencyNameProvider$6$6, this)))));
		$synchronized(this) {
			if (this->currencyNameProvider == nullptr) {
				$set(this, currencyNameProvider, provider);
			}
		}
	}
	return this->currencyNameProvider;
}

$LocaleNameProvider* JRELocaleProviderAdapter::getLocaleNameProvider() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	if (this->localeNameProvider == nullptr) {
		$var($LocaleNameProvider, provider, $cast($LocaleNameProvider, $AccessController::doPrivileged($cast($PrivilegedAction, $$new(JRELocaleProviderAdapter$$Lambda$lambda$getLocaleNameProvider$7$7, this)))));
		$synchronized(this) {
			if (this->localeNameProvider == nullptr) {
				$set(this, localeNameProvider, provider);
			}
		}
	}
	return this->localeNameProvider;
}

$TimeZoneNameProvider* JRELocaleProviderAdapter::getTimeZoneNameProvider() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	if (this->timeZoneNameProvider == nullptr) {
		$var($TimeZoneNameProvider, provider, $cast($TimeZoneNameProvider, $AccessController::doPrivileged($cast($PrivilegedAction, $$new(JRELocaleProviderAdapter$$Lambda$lambda$getTimeZoneNameProvider$8$8, this)))));
		$synchronized(this) {
			if (this->timeZoneNameProvider == nullptr) {
				$set(this, timeZoneNameProvider, provider);
			}
		}
	}
	return this->timeZoneNameProvider;
}

$CalendarDataProvider* JRELocaleProviderAdapter::getCalendarDataProvider() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	if (this->calendarDataProvider == nullptr) {
		$var($CalendarDataProvider, provider, $cast($CalendarDataProvider, $AccessController::doPrivileged($cast($PrivilegedAction, $$new(JRELocaleProviderAdapter$$Lambda$lambda$getCalendarDataProvider$9$9, this)))));
		$synchronized(this) {
			if (this->calendarDataProvider == nullptr) {
				$set(this, calendarDataProvider, provider);
			}
		}
	}
	return this->calendarDataProvider;
}

$CalendarNameProvider* JRELocaleProviderAdapter::getCalendarNameProvider() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	if (this->calendarNameProvider == nullptr) {
		$var($CalendarNameProvider, provider, $cast($CalendarNameProvider, $AccessController::doPrivileged($cast($PrivilegedAction, $$new(JRELocaleProviderAdapter$$Lambda$lambda$getCalendarNameProvider$10$10, this)))));
		$synchronized(this) {
			if (this->calendarNameProvider == nullptr) {
				$set(this, calendarNameProvider, provider);
			}
		}
	}
	return this->calendarNameProvider;
}

$CalendarProvider* JRELocaleProviderAdapter::getCalendarProvider() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	if (this->calendarProvider == nullptr) {
		$var($CalendarProvider, provider, $cast($CalendarProvider, $AccessController::doPrivileged($cast($PrivilegedAction, $$new(JRELocaleProviderAdapter$$Lambda$lambda$getCalendarProvider$11$11, this)))));
		$synchronized(this) {
			if (this->calendarProvider == nullptr) {
				$set(this, calendarProvider, provider);
			}
		}
	}
	return this->calendarProvider;
}

$JavaTimeDateTimePatternProvider* JRELocaleProviderAdapter::getJavaTimeDateTimePatternProvider() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	if (this->javaTimeDateTimePatternProvider == nullptr) {
		$var($JavaTimeDateTimePatternProvider, provider, $cast($JavaTimeDateTimePatternProvider, $AccessController::doPrivileged($cast($PrivilegedAction, $$new(JRELocaleProviderAdapter$$Lambda$lambda$getJavaTimeDateTimePatternProvider$12$12, this)))));
		$synchronized(this) {
			if (this->javaTimeDateTimePatternProvider == nullptr) {
				$set(this, javaTimeDateTimePatternProvider, provider);
			}
		}
	}
	return this->javaTimeDateTimePatternProvider;
}

$LocaleResources* JRELocaleProviderAdapter::getLocaleResources($Locale* locale) {
	$useLocalObjectStack();
	$var($LocaleResources, lr, $cast($LocaleResources, this->localeResourcesMap->get(locale)));
	if (lr == nullptr) {
		$assign(lr, $new($LocaleResources, this, locale));
		$var($LocaleResources, lrc, $cast($LocaleResources, this->localeResourcesMap->putIfAbsent(locale, lr)));
		if (lrc != nullptr) {
			$assign(lr, lrc);
		}
	}
	return lr;
}

$LocaleData* JRELocaleProviderAdapter::getLocaleData() {
	if (this->localeData == nullptr) {
		$synchronized(this) {
			if (this->localeData == nullptr) {
				$set(this, localeData, $new($LocaleData, $(getAdapterType())));
			}
		}
	}
	return this->localeData;
}

$List* JRELocaleProviderAdapter::getCandidateLocales($String* baseName, $Locale* locale) {
	$init($ResourceBundle$Control);
	return $$nc($ResourceBundle$Control::getNoFallbackControl($ResourceBundle$Control::FORMAT_DEFAULT))->getCandidateLocales(baseName, locale);
}

$LocaleArray* JRELocaleProviderAdapter::getAvailableLocales() {
	$init($JRELocaleProviderAdapter$AvailableJRELocales);
	return $cast($LocaleArray, $nc($JRELocaleProviderAdapter$AvailableJRELocales::localeList)->clone());
}

$Set* JRELocaleProviderAdapter::getLanguageTagSet($String* category) {
	$useLocalObjectStack();
	$var($Set, tagset, $cast($Set, this->langtagSets->get(category)));
	if (tagset == nullptr) {
		$assign(tagset, createLanguageTagSet(category));
		$var($Set, ts, $cast($Set, this->langtagSets->putIfAbsent(category, tagset)));
		if (ts != nullptr) {
			$assign(tagset, ts);
		}
	}
	return tagset;
}

$Set* JRELocaleProviderAdapter::createLanguageTagSet($String* category) {
	$useLocalObjectStack();
	$var($String, supportedLocaleString, createSupportedLocaleString(category));
	if (supportedLocaleString == nullptr) {
		return $Collections::emptySet();
	}
	$var($StringTokenizer, tokens, $new($StringTokenizer, supportedLocaleString));
	$var($Set, tagset, $new($HashSet, (tokens->countTokens() * 4 + 2) / 3));
	while (tokens->hasMoreTokens()) {
		tagset->add($(tokens->nextToken()));
	}
	return tagset;
}

$String* JRELocaleProviderAdapter::createSupportedLocaleString($String* category) {
	$init(JRELocaleProviderAdapter);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($String, supportedLocaleString, $BaseLocaleDataMetaInfo::getSupportedLocaleString(category));
	try {
		$var($String, nonBaseTags, $cast($String, $AccessController::doPrivileged($cast($PrivilegedExceptionAction, $$new(JRELocaleProviderAdapter$$Lambda$lambda$createSupportedLocaleString$13$13, category)))));
		if (nonBaseTags != nullptr) {
			$plusAssign(supportedLocaleString, $$str({" "_s, nonBaseTags}));
		}
	} catch ($PrivilegedActionException& pae) {
		$throwNew($InternalError, $(pae->getCause()));
	}
	return supportedLocaleString;
}

$LocaleArray* JRELocaleProviderAdapter::createAvailableLocales() {
	$init(JRELocaleProviderAdapter);
	$useLocalObjectStack();
	$var($String, supportedLocaleString, createSupportedLocaleString("AvailableLocales"_s));
	if ($nc(supportedLocaleString)->isEmpty()) {
		$throwNew($InternalError, "No available locales for JRE"_s);
	}
	$var($StringTokenizer, localeStringTokenizer, $new($StringTokenizer, supportedLocaleString));
	int32_t length = localeStringTokenizer->countTokens();
	$var($LocaleArray, locales, $new($LocaleArray, length + 1));
	locales->set(0, $Locale::ROOT);
	for (int32_t i = 1; i <= length; ++i) {
		$var($String, currentToken, localeStringTokenizer->nextToken());
		{
			$var($String, s19617$, currentToken);
			int32_t tmp19617$ = -1;
			switch ($nc(s19617$)->hashCode()) {
			case 0x5f7af717:
				if (s19617$->equals("ja-JP-JP"_s)) {
					tmp19617$ = 0;
				}
				break;
			case (int32_t)0xe3ced24b:
				if (s19617$->equals("no-NO-NY"_s)) {
					tmp19617$ = 1;
				}
				break;
			case (int32_t)0xe11b9fd4:
				if (s19617$->equals("th-TH-TH"_s)) {
					tmp19617$ = 2;
				}
				break;
			}
			switch (tmp19617$) {
			case 0:
				$init($JRELocaleConstants);
				locales->set(i, $JRELocaleConstants::JA_JP_JP);
				break;
			case 1:
				$init($JRELocaleConstants);
				locales->set(i, $JRELocaleConstants::NO_NO_NY);
				break;
			case 2:
				$init($JRELocaleConstants);
				locales->set(i, $JRELocaleConstants::TH_TH_TH);
				break;
			default:
				locales->set(i, $($Locale::forLanguageTag(currentToken)));
			}
		}
	}
	return locales;
}

bool JRELocaleProviderAdapter::isSupportedProviderLocale($Locale* locale$renamed, $Set* langtags) {
	$useLocalObjectStack();
	$var($Locale, locale, locale$renamed);
	$init($Locale);
	if ($nc($Locale::ROOT)->equals(locale)) {
		return true;
	}
	$assign(locale, $nc(locale)->stripExtensions());
	if ($nc(langtags)->contains($($nc(locale)->toLanguageTag()))) {
		return true;
	}
	$var($String, oldname, $$nc(locale->toString())->replace(u'_', u'-'));
	bool var$2 = langtags->contains(oldname);
	bool var$1 = var$2 || "ja-JP-JP"_s->equals(oldname);
	bool var$0 = var$1 || "th-TH-TH"_s->equals(oldname);
	return var$0 || "no-NO-NY"_s->equals(oldname);
}

$String* JRELocaleProviderAdapter::lambda$createSupportedLocaleString$13($String* category) {
	$init(JRELocaleProviderAdapter);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($StringBuilder, tags, $new($StringBuilder));
	{
		$load($LocaleDataMetaInfo);
		$var($Iterator, i$, $$nc($ServiceLoader::loadInstalled($LocaleDataMetaInfo::class$))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($LocaleDataMetaInfo, ldmi, $cast($LocaleDataMetaInfo, i$->next()));
			$init($LocaleProviderAdapter$Type);
			if ($nc(ldmi)->getType() == $LocaleProviderAdapter$Type::JRE) {
				$var($String, t, ldmi->availableLanguageTags(category));
				if (t != nullptr) {
					if (tags->length() > 0) {
						tags->append(u' ');
					}
					tags->append(t);
				}
			}
		}
	}
	return tags->toString();
}

$JavaTimeDateTimePatternProvider* JRELocaleProviderAdapter::lambda$getJavaTimeDateTimePatternProvider$12() {
	$useLocalObjectStack();
	$var($LocaleProviderAdapter$Type, var$0, getAdapterType());
	return $new($JavaTimeDateTimePatternImpl, var$0, $(getLanguageTagSet("FormatData"_s)));
}

$CalendarProvider* JRELocaleProviderAdapter::lambda$getCalendarProvider$11() {
	$useLocalObjectStack();
	$var($LocaleProviderAdapter$Type, var$0, getAdapterType());
	return $new($CalendarProviderImpl, var$0, $(getLanguageTagSet("CalendarData"_s)));
}

$CalendarNameProvider* JRELocaleProviderAdapter::lambda$getCalendarNameProvider$10() {
	$useLocalObjectStack();
	$var($LocaleProviderAdapter$Type, var$0, getAdapterType());
	return $new($CalendarNameProviderImpl, var$0, $(getLanguageTagSet("FormatData"_s)));
}

$CalendarDataProvider* JRELocaleProviderAdapter::lambda$getCalendarDataProvider$9() {
	$useLocalObjectStack();
	$var($LocaleProviderAdapter$Type, var$0, getAdapterType());
	return $new($CalendarDataProviderImpl, var$0, $(getLanguageTagSet("CalendarData"_s)));
}

$TimeZoneNameProvider* JRELocaleProviderAdapter::lambda$getTimeZoneNameProvider$8() {
	$useLocalObjectStack();
	$var($LocaleProviderAdapter$Type, var$0, getAdapterType());
	return $new($TimeZoneNameProviderImpl, var$0, $(getLanguageTagSet("TimeZoneNames"_s)));
}

$LocaleNameProvider* JRELocaleProviderAdapter::lambda$getLocaleNameProvider$7() {
	$useLocalObjectStack();
	$var($LocaleProviderAdapter$Type, var$0, getAdapterType());
	return $new($LocaleNameProviderImpl, var$0, $(getLanguageTagSet("LocaleNames"_s)));
}

$CurrencyNameProvider* JRELocaleProviderAdapter::lambda$getCurrencyNameProvider$6() {
	$useLocalObjectStack();
	$var($LocaleProviderAdapter$Type, var$0, getAdapterType());
	return $new($CurrencyNameProviderImpl, var$0, $(getLanguageTagSet("CurrencyNames"_s)));
}

$NumberFormatProvider* JRELocaleProviderAdapter::lambda$getNumberFormatProvider$5() {
	$useLocalObjectStack();
	$var($LocaleProviderAdapter$Type, var$0, getAdapterType());
	return $new($NumberFormatProviderImpl, var$0, $(getLanguageTagSet("FormatData"_s)));
}

$DecimalFormatSymbolsProvider* JRELocaleProviderAdapter::lambda$getDecimalFormatSymbolsProvider$4() {
	$useLocalObjectStack();
	$var($LocaleProviderAdapter$Type, var$0, getAdapterType());
	return $new($DecimalFormatSymbolsProviderImpl, var$0, $(getLanguageTagSet("FormatData"_s)));
}

$DateFormatSymbolsProvider* JRELocaleProviderAdapter::lambda$getDateFormatSymbolsProvider$3() {
	$useLocalObjectStack();
	$var($LocaleProviderAdapter$Type, var$0, getAdapterType());
	return $new($DateFormatSymbolsProviderImpl, var$0, $(getLanguageTagSet("FormatData"_s)));
}

$DateFormatProvider* JRELocaleProviderAdapter::lambda$getDateFormatProvider$2() {
	$useLocalObjectStack();
	$var($LocaleProviderAdapter$Type, var$0, getAdapterType());
	return $new($DateFormatProviderImpl, var$0, $(getLanguageTagSet("FormatData"_s)));
}

$CollatorProvider* JRELocaleProviderAdapter::lambda$getCollatorProvider$1() {
	$useLocalObjectStack();
	$var($LocaleProviderAdapter$Type, var$0, getAdapterType());
	return $new($CollatorProviderImpl, var$0, $(getLanguageTagSet("CollationData"_s)));
}

$BreakIteratorProvider* JRELocaleProviderAdapter::lambda$getBreakIteratorProvider$0() {
	$useLocalObjectStack();
	$var($LocaleProviderAdapter$Type, var$0, getAdapterType());
	return $new($BreakIteratorProviderImpl, var$0, $(getLanguageTagSet("FormatData"_s)));
}

JRELocaleProviderAdapter::JRELocaleProviderAdapter() {
}

$Class* JRELocaleProviderAdapter::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("sun.util.locale.provider.JRELocaleProviderAdapter$$Lambda$lambda$getBreakIteratorProvider$0")) {
			return JRELocaleProviderAdapter$$Lambda$lambda$getBreakIteratorProvider$0::load$(name, initialize);
		}
		if (name->equals("sun.util.locale.provider.JRELocaleProviderAdapter$$Lambda$lambda$getCollatorProvider$1$1")) {
			return JRELocaleProviderAdapter$$Lambda$lambda$getCollatorProvider$1$1::load$(name, initialize);
		}
		if (name->equals("sun.util.locale.provider.JRELocaleProviderAdapter$$Lambda$lambda$getDateFormatProvider$2$2")) {
			return JRELocaleProviderAdapter$$Lambda$lambda$getDateFormatProvider$2$2::load$(name, initialize);
		}
		if (name->equals("sun.util.locale.provider.JRELocaleProviderAdapter$$Lambda$lambda$getDateFormatSymbolsProvider$3$3")) {
			return JRELocaleProviderAdapter$$Lambda$lambda$getDateFormatSymbolsProvider$3$3::load$(name, initialize);
		}
		if (name->equals("sun.util.locale.provider.JRELocaleProviderAdapter$$Lambda$lambda$getDecimalFormatSymbolsProvider$4$4")) {
			return JRELocaleProviderAdapter$$Lambda$lambda$getDecimalFormatSymbolsProvider$4$4::load$(name, initialize);
		}
		if (name->equals("sun.util.locale.provider.JRELocaleProviderAdapter$$Lambda$lambda$getNumberFormatProvider$5$5")) {
			return JRELocaleProviderAdapter$$Lambda$lambda$getNumberFormatProvider$5$5::load$(name, initialize);
		}
		if (name->equals("sun.util.locale.provider.JRELocaleProviderAdapter$$Lambda$lambda$getCurrencyNameProvider$6$6")) {
			return JRELocaleProviderAdapter$$Lambda$lambda$getCurrencyNameProvider$6$6::load$(name, initialize);
		}
		if (name->equals("sun.util.locale.provider.JRELocaleProviderAdapter$$Lambda$lambda$getLocaleNameProvider$7$7")) {
			return JRELocaleProviderAdapter$$Lambda$lambda$getLocaleNameProvider$7$7::load$(name, initialize);
		}
		if (name->equals("sun.util.locale.provider.JRELocaleProviderAdapter$$Lambda$lambda$getTimeZoneNameProvider$8$8")) {
			return JRELocaleProviderAdapter$$Lambda$lambda$getTimeZoneNameProvider$8$8::load$(name, initialize);
		}
		if (name->equals("sun.util.locale.provider.JRELocaleProviderAdapter$$Lambda$lambda$getCalendarDataProvider$9$9")) {
			return JRELocaleProviderAdapter$$Lambda$lambda$getCalendarDataProvider$9$9::load$(name, initialize);
		}
		if (name->equals("sun.util.locale.provider.JRELocaleProviderAdapter$$Lambda$lambda$getCalendarNameProvider$10$10")) {
			return JRELocaleProviderAdapter$$Lambda$lambda$getCalendarNameProvider$10$10::load$(name, initialize);
		}
		if (name->equals("sun.util.locale.provider.JRELocaleProviderAdapter$$Lambda$lambda$getCalendarProvider$11$11")) {
			return JRELocaleProviderAdapter$$Lambda$lambda$getCalendarProvider$11$11::load$(name, initialize);
		}
		if (name->equals("sun.util.locale.provider.JRELocaleProviderAdapter$$Lambda$lambda$getJavaTimeDateTimePatternProvider$12$12")) {
			return JRELocaleProviderAdapter$$Lambda$lambda$getJavaTimeDateTimePatternProvider$12$12::load$(name, initialize);
		}
		if (name->equals("sun.util.locale.provider.JRELocaleProviderAdapter$$Lambda$lambda$createSupportedLocaleString$13$13")) {
			return JRELocaleProviderAdapter$$Lambda$lambda$createSupportedLocaleString$13$13::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"langtagSets", "Ljava/util/concurrent/ConcurrentMap;", "Ljava/util/concurrent/ConcurrentMap<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;", $PRIVATE | $FINAL, $field(JRELocaleProviderAdapter, langtagSets)},
		{"localeResourcesMap", "Ljava/util/concurrent/ConcurrentMap;", "Ljava/util/concurrent/ConcurrentMap<Ljava/util/Locale;Lsun/util/locale/provider/LocaleResources;>;", $PRIVATE | $FINAL, $field(JRELocaleProviderAdapter, localeResourcesMap)},
		{"localeData", "Lsun/util/resources/LocaleData;", nullptr, $PRIVATE | $VOLATILE, $field(JRELocaleProviderAdapter, localeData)},
		{"breakIteratorProvider", "Ljava/text/spi/BreakIteratorProvider;", nullptr, $PRIVATE | $VOLATILE, $field(JRELocaleProviderAdapter, breakIteratorProvider)},
		{"collatorProvider", "Ljava/text/spi/CollatorProvider;", nullptr, $PRIVATE | $VOLATILE, $field(JRELocaleProviderAdapter, collatorProvider)},
		{"dateFormatProvider", "Ljava/text/spi/DateFormatProvider;", nullptr, $PRIVATE | $VOLATILE, $field(JRELocaleProviderAdapter, dateFormatProvider)},
		{"dateFormatSymbolsProvider", "Ljava/text/spi/DateFormatSymbolsProvider;", nullptr, $PRIVATE | $VOLATILE, $field(JRELocaleProviderAdapter, dateFormatSymbolsProvider)},
		{"decimalFormatSymbolsProvider", "Ljava/text/spi/DecimalFormatSymbolsProvider;", nullptr, $PRIVATE | $VOLATILE, $field(JRELocaleProviderAdapter, decimalFormatSymbolsProvider)},
		{"numberFormatProvider", "Ljava/text/spi/NumberFormatProvider;", nullptr, $PRIVATE | $VOLATILE, $field(JRELocaleProviderAdapter, numberFormatProvider)},
		{"currencyNameProvider", "Ljava/util/spi/CurrencyNameProvider;", nullptr, $PRIVATE | $VOLATILE, $field(JRELocaleProviderAdapter, currencyNameProvider)},
		{"localeNameProvider", "Ljava/util/spi/LocaleNameProvider;", nullptr, $PRIVATE | $VOLATILE, $field(JRELocaleProviderAdapter, localeNameProvider)},
		{"timeZoneNameProvider", "Ljava/util/spi/TimeZoneNameProvider;", nullptr, $PROTECTED | $VOLATILE, $field(JRELocaleProviderAdapter, timeZoneNameProvider)},
		{"calendarDataProvider", "Ljava/util/spi/CalendarDataProvider;", nullptr, $PROTECTED | $VOLATILE, $field(JRELocaleProviderAdapter, calendarDataProvider)},
		{"calendarNameProvider", "Ljava/util/spi/CalendarNameProvider;", nullptr, $PROTECTED | $VOLATILE, $field(JRELocaleProviderAdapter, calendarNameProvider)},
		{"calendarProvider", "Lsun/util/spi/CalendarProvider;", nullptr, $PRIVATE | $VOLATILE, $field(JRELocaleProviderAdapter, calendarProvider)},
		{"javaTimeDateTimePatternProvider", "Lsun/text/spi/JavaTimeDateTimePatternProvider;", nullptr, $PRIVATE | $VOLATILE, $field(JRELocaleProviderAdapter, javaTimeDateTimePatternProvider)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(JRELocaleProviderAdapter, init$, void)},
		{"createAvailableLocales", "()[Ljava/util/Locale;", nullptr, $PRIVATE | $STATIC, $staticMethod(JRELocaleProviderAdapter, createAvailableLocales, $LocaleArray*)},
		{"createLanguageTagSet", "(Ljava/lang/String;)Ljava/util/Set;", "(Ljava/lang/String;)Ljava/util/Set<Ljava/lang/String;>;", $PROTECTED, $virtualMethod(JRELocaleProviderAdapter, createLanguageTagSet, $Set*, $String*)},
		{"createSupportedLocaleString", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(JRELocaleProviderAdapter, createSupportedLocaleString, $String*, $String*)},
		{"getAdapterType", "()Lsun/util/locale/provider/LocaleProviderAdapter$Type;", nullptr, $PUBLIC, $virtualMethod(JRELocaleProviderAdapter, getAdapterType, $LocaleProviderAdapter$Type*)},
		{"getAvailableLocales", "()[Ljava/util/Locale;", nullptr, $PUBLIC, $virtualMethod(JRELocaleProviderAdapter, getAvailableLocales, $LocaleArray*)},
		{"getBreakIteratorProvider", "()Ljava/text/spi/BreakIteratorProvider;", nullptr, $PUBLIC, $virtualMethod(JRELocaleProviderAdapter, getBreakIteratorProvider, $BreakIteratorProvider*)},
		{"getCalendarDataProvider", "()Ljava/util/spi/CalendarDataProvider;", nullptr, $PUBLIC, $virtualMethod(JRELocaleProviderAdapter, getCalendarDataProvider, $CalendarDataProvider*)},
		{"getCalendarNameProvider", "()Ljava/util/spi/CalendarNameProvider;", nullptr, $PUBLIC, $virtualMethod(JRELocaleProviderAdapter, getCalendarNameProvider, $CalendarNameProvider*)},
		{"getCalendarProvider", "()Lsun/util/spi/CalendarProvider;", nullptr, $PUBLIC, $virtualMethod(JRELocaleProviderAdapter, getCalendarProvider, $CalendarProvider*)},
		{"getCandidateLocales", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/util/List;", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/util/List<Ljava/util/Locale;>;", $PUBLIC, $virtualMethod(JRELocaleProviderAdapter, getCandidateLocales, $List*, $String*, $Locale*)},
		{"getCollatorProvider", "()Ljava/text/spi/CollatorProvider;", nullptr, $PUBLIC, $virtualMethod(JRELocaleProviderAdapter, getCollatorProvider, $CollatorProvider*)},
		{"getCurrencyNameProvider", "()Ljava/util/spi/CurrencyNameProvider;", nullptr, $PUBLIC, $virtualMethod(JRELocaleProviderAdapter, getCurrencyNameProvider, $CurrencyNameProvider*)},
		{"getDateFormatProvider", "()Ljava/text/spi/DateFormatProvider;", nullptr, $PUBLIC, $virtualMethod(JRELocaleProviderAdapter, getDateFormatProvider, $DateFormatProvider*)},
		{"getDateFormatSymbolsProvider", "()Ljava/text/spi/DateFormatSymbolsProvider;", nullptr, $PUBLIC, $virtualMethod(JRELocaleProviderAdapter, getDateFormatSymbolsProvider, $DateFormatSymbolsProvider*)},
		{"getDecimalFormatSymbolsProvider", "()Ljava/text/spi/DecimalFormatSymbolsProvider;", nullptr, $PUBLIC, $virtualMethod(JRELocaleProviderAdapter, getDecimalFormatSymbolsProvider, $DecimalFormatSymbolsProvider*)},
		{"getJavaTimeDateTimePatternProvider", "()Lsun/text/spi/JavaTimeDateTimePatternProvider;", nullptr, $PUBLIC, $virtualMethod(JRELocaleProviderAdapter, getJavaTimeDateTimePatternProvider, $JavaTimeDateTimePatternProvider*)},
		{"getLanguageTagSet", "(Ljava/lang/String;)Ljava/util/Set;", "(Ljava/lang/String;)Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(JRELocaleProviderAdapter, getLanguageTagSet, $Set*, $String*)},
		{"getLocaleData", "()Lsun/util/resources/LocaleData;", nullptr, $PUBLIC, $virtualMethod(JRELocaleProviderAdapter, getLocaleData, $LocaleData*)},
		{"getLocaleNameProvider", "()Ljava/util/spi/LocaleNameProvider;", nullptr, $PUBLIC, $virtualMethod(JRELocaleProviderAdapter, getLocaleNameProvider, $LocaleNameProvider*)},
		{"getLocaleResources", "(Ljava/util/Locale;)Lsun/util/locale/provider/LocaleResources;", nullptr, $PUBLIC, $virtualMethod(JRELocaleProviderAdapter, getLocaleResources, $LocaleResources*, $Locale*)},
		{"getLocaleServiceProvider", "(Ljava/lang/Class;)Ljava/util/spi/LocaleServiceProvider;", "<P:Ljava/util/spi/LocaleServiceProvider;>(Ljava/lang/Class<TP;>;)TP;", $PUBLIC, $virtualMethod(JRELocaleProviderAdapter, getLocaleServiceProvider, $LocaleServiceProvider*, $Class*)},
		{"getNumberFormatProvider", "()Ljava/text/spi/NumberFormatProvider;", nullptr, $PUBLIC, $virtualMethod(JRELocaleProviderAdapter, getNumberFormatProvider, $NumberFormatProvider*)},
		{"getTimeZoneNameProvider", "()Ljava/util/spi/TimeZoneNameProvider;", nullptr, $PUBLIC, $virtualMethod(JRELocaleProviderAdapter, getTimeZoneNameProvider, $TimeZoneNameProvider*)},
		{"isSupportedProviderLocale", "(Ljava/util/Locale;Ljava/util/Set;)Z", "(Ljava/util/Locale;Ljava/util/Set<Ljava/lang/String;>;)Z", $PUBLIC, $virtualMethod(JRELocaleProviderAdapter, isSupportedProviderLocale, bool, $Locale*, $Set*)},
		{"lambda$createSupportedLocaleString$13", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JRELocaleProviderAdapter, lambda$createSupportedLocaleString$13, $String*, $String*), "java.lang.Exception"},
		{"lambda$getBreakIteratorProvider$0", "()Ljava/text/spi/BreakIteratorProvider;", nullptr, $PRIVATE | $SYNTHETIC, $method(JRELocaleProviderAdapter, lambda$getBreakIteratorProvider$0, $BreakIteratorProvider*)},
		{"lambda$getCalendarDataProvider$9", "()Ljava/util/spi/CalendarDataProvider;", nullptr, $PRIVATE | $SYNTHETIC, $method(JRELocaleProviderAdapter, lambda$getCalendarDataProvider$9, $CalendarDataProvider*)},
		{"lambda$getCalendarNameProvider$10", "()Ljava/util/spi/CalendarNameProvider;", nullptr, $PRIVATE | $SYNTHETIC, $method(JRELocaleProviderAdapter, lambda$getCalendarNameProvider$10, $CalendarNameProvider*)},
		{"lambda$getCalendarProvider$11", "()Lsun/util/spi/CalendarProvider;", nullptr, $PRIVATE | $SYNTHETIC, $method(JRELocaleProviderAdapter, lambda$getCalendarProvider$11, $CalendarProvider*)},
		{"lambda$getCollatorProvider$1", "()Ljava/text/spi/CollatorProvider;", nullptr, $PRIVATE | $SYNTHETIC, $method(JRELocaleProviderAdapter, lambda$getCollatorProvider$1, $CollatorProvider*)},
		{"lambda$getCurrencyNameProvider$6", "()Ljava/util/spi/CurrencyNameProvider;", nullptr, $PRIVATE | $SYNTHETIC, $method(JRELocaleProviderAdapter, lambda$getCurrencyNameProvider$6, $CurrencyNameProvider*)},
		{"lambda$getDateFormatProvider$2", "()Ljava/text/spi/DateFormatProvider;", nullptr, $PRIVATE | $SYNTHETIC, $method(JRELocaleProviderAdapter, lambda$getDateFormatProvider$2, $DateFormatProvider*)},
		{"lambda$getDateFormatSymbolsProvider$3", "()Ljava/text/spi/DateFormatSymbolsProvider;", nullptr, $PRIVATE | $SYNTHETIC, $method(JRELocaleProviderAdapter, lambda$getDateFormatSymbolsProvider$3, $DateFormatSymbolsProvider*)},
		{"lambda$getDecimalFormatSymbolsProvider$4", "()Ljava/text/spi/DecimalFormatSymbolsProvider;", nullptr, $PRIVATE | $SYNTHETIC, $method(JRELocaleProviderAdapter, lambda$getDecimalFormatSymbolsProvider$4, $DecimalFormatSymbolsProvider*)},
		{"lambda$getJavaTimeDateTimePatternProvider$12", "()Lsun/text/spi/JavaTimeDateTimePatternProvider;", nullptr, $PRIVATE | $SYNTHETIC, $method(JRELocaleProviderAdapter, lambda$getJavaTimeDateTimePatternProvider$12, $JavaTimeDateTimePatternProvider*)},
		{"lambda$getLocaleNameProvider$7", "()Ljava/util/spi/LocaleNameProvider;", nullptr, $PRIVATE | $SYNTHETIC, $method(JRELocaleProviderAdapter, lambda$getLocaleNameProvider$7, $LocaleNameProvider*)},
		{"lambda$getNumberFormatProvider$5", "()Ljava/text/spi/NumberFormatProvider;", nullptr, $PRIVATE | $SYNTHETIC, $method(JRELocaleProviderAdapter, lambda$getNumberFormatProvider$5, $NumberFormatProvider*)},
		{"lambda$getTimeZoneNameProvider$8", "()Ljava/util/spi/TimeZoneNameProvider;", nullptr, $PRIVATE | $SYNTHETIC, $method(JRELocaleProviderAdapter, lambda$getTimeZoneNameProvider$8, $TimeZoneNameProvider*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.util.locale.provider.JRELocaleProviderAdapter$AvailableJRELocales", "sun.util.locale.provider.JRELocaleProviderAdapter", "AvailableJRELocales", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.locale.provider.JRELocaleProviderAdapter",
		"sun.util.locale.provider.LocaleProviderAdapter",
		"sun.util.locale.provider.ResourceBundleBasedAdapter",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.util.locale.provider.JRELocaleProviderAdapter$AvailableJRELocales"
	};
	$loadClass(JRELocaleProviderAdapter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JRELocaleProviderAdapter));
	});
	return class$;
}

$Class* JRELocaleProviderAdapter::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun