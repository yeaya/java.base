#include <sun/util/locale/provider/CalendarNameProviderImpl$LengthBasedComparator.h>
#include <sun/util/locale/provider/CalendarNameProviderImpl.h>
#include <jcpp.h>

#undef INSTANCE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

CalendarNameProviderImpl$LengthBasedComparator* CalendarNameProviderImpl$LengthBasedComparator::INSTANCE = nullptr;

void CalendarNameProviderImpl$LengthBasedComparator::init$() {
}

int32_t CalendarNameProviderImpl$LengthBasedComparator::compare($String* o1, $String* o2) {
	int32_t var$0 = $nc(o2)->length();
	int32_t n = var$0 - $nc(o1)->length();
	return (n == 0) ? o1->compareTo(o2) : n;
}

int32_t CalendarNameProviderImpl$LengthBasedComparator::compare(Object$* o1, Object$* o2) {
	return this->compare($cast($String, o1), $cast($String, o2));
}

void CalendarNameProviderImpl$LengthBasedComparator::clinit$($Class* clazz) {
	$assignStatic(CalendarNameProviderImpl$LengthBasedComparator::INSTANCE, $new(CalendarNameProviderImpl$LengthBasedComparator));
}

CalendarNameProviderImpl$LengthBasedComparator::CalendarNameProviderImpl$LengthBasedComparator() {
}

$Class* CalendarNameProviderImpl$LengthBasedComparator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"INSTANCE", "Lsun/util/locale/provider/CalendarNameProviderImpl$LengthBasedComparator;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CalendarNameProviderImpl$LengthBasedComparator, INSTANCE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(CalendarNameProviderImpl$LengthBasedComparator, init$, void)},
		{"compare", "(Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(CalendarNameProviderImpl$LengthBasedComparator, compare, int32_t, $String*, $String*)},
		{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(CalendarNameProviderImpl$LengthBasedComparator, compare, int32_t, Object$*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.util.locale.provider.CalendarNameProviderImpl$LengthBasedComparator", "sun.util.locale.provider.CalendarNameProviderImpl", "LengthBasedComparator", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.util.locale.provider.CalendarNameProviderImpl$LengthBasedComparator",
		"java.lang.Object",
		"java.util.Comparator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Comparator<Ljava/lang/String;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.util.locale.provider.CalendarNameProviderImpl"
	};
	$loadClass(CalendarNameProviderImpl$LengthBasedComparator, name, initialize, &classInfo$$, CalendarNameProviderImpl$LengthBasedComparator::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(CalendarNameProviderImpl$LengthBasedComparator);
	});
	return class$;
}

$Class* CalendarNameProviderImpl$LengthBasedComparator::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun