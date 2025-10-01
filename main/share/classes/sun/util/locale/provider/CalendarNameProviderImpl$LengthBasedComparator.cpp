#include <sun/util/locale/provider/CalendarNameProviderImpl$LengthBasedComparator.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/util/locale/provider/CalendarNameProviderImpl.h>
#include <jcpp.h>

#undef INSTANCE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Comparator = ::java::util::Comparator;
using $CalendarNameProviderImpl = ::sun::util::locale::provider::CalendarNameProviderImpl;

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

$FieldInfo _CalendarNameProviderImpl$LengthBasedComparator_FieldInfo_[] = {
	{"INSTANCE", "Lsun/util/locale/provider/CalendarNameProviderImpl$LengthBasedComparator;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CalendarNameProviderImpl$LengthBasedComparator, INSTANCE)},
	{}
};

$MethodInfo _CalendarNameProviderImpl$LengthBasedComparator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(CalendarNameProviderImpl$LengthBasedComparator::*)()>(&CalendarNameProviderImpl$LengthBasedComparator::init$))},
	{"compare", "(Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PUBLIC},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _CalendarNameProviderImpl$LengthBasedComparator_InnerClassesInfo_[] = {
	{"sun.util.locale.provider.CalendarNameProviderImpl$LengthBasedComparator", "sun.util.locale.provider.CalendarNameProviderImpl", "LengthBasedComparator", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _CalendarNameProviderImpl$LengthBasedComparator_ClassInfo_ = {
	$ACC_SUPER,
	"sun.util.locale.provider.CalendarNameProviderImpl$LengthBasedComparator",
	"java.lang.Object",
	"java.util.Comparator",
	_CalendarNameProviderImpl$LengthBasedComparator_FieldInfo_,
	_CalendarNameProviderImpl$LengthBasedComparator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Comparator<Ljava/lang/String;>;",
	nullptr,
	_CalendarNameProviderImpl$LengthBasedComparator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.locale.provider.CalendarNameProviderImpl"
};

$Object* allocate$CalendarNameProviderImpl$LengthBasedComparator($Class* clazz) {
	return $of($alloc(CalendarNameProviderImpl$LengthBasedComparator));
}

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

void clinit$CalendarNameProviderImpl$LengthBasedComparator($Class* class$) {
	$assignStatic(CalendarNameProviderImpl$LengthBasedComparator::INSTANCE, $new(CalendarNameProviderImpl$LengthBasedComparator));
}

CalendarNameProviderImpl$LengthBasedComparator::CalendarNameProviderImpl$LengthBasedComparator() {
}

$Class* CalendarNameProviderImpl$LengthBasedComparator::load$($String* name, bool initialize) {
	$loadClass(CalendarNameProviderImpl$LengthBasedComparator, name, initialize, &_CalendarNameProviderImpl$LengthBasedComparator_ClassInfo_, clinit$CalendarNameProviderImpl$LengthBasedComparator, allocate$CalendarNameProviderImpl$LengthBasedComparator);
	return class$;
}

$Class* CalendarNameProviderImpl$LengthBasedComparator::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun