#include <sun/util/resources/TimeZoneNames_en.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/util/resources/TimeZoneNamesBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TimeZoneNamesBundle = ::sun::util::resources::TimeZoneNamesBundle;

namespace sun {
	namespace util {
		namespace resources {

$MethodInfo _TimeZoneNames_en_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TimeZoneNames_en::*)()>(&TimeZoneNames_en::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _TimeZoneNames_en_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.TimeZoneNames_en",
	"sun.util.resources.TimeZoneNamesBundle",
	nullptr,
	nullptr,
	_TimeZoneNames_en_MethodInfo_
};

$Object* allocate$TimeZoneNames_en($Class* clazz) {
	return $of($alloc(TimeZoneNames_en));
}

void TimeZoneNames_en::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_en::getContents() {
	return $new($ObjectArray2, 0);
}

TimeZoneNames_en::TimeZoneNames_en() {
}

$Class* TimeZoneNames_en::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNames_en, name, initialize, &_TimeZoneNames_en_ClassInfo_, allocate$TimeZoneNames_en);
	return class$;
}

$Class* TimeZoneNames_en::class$ = nullptr;

		} // resources
	} // util
} // sun