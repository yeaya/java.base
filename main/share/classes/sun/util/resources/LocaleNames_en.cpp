#include <sun/util/resources/LocaleNames_en.h>

#include <sun/util/resources/LocaleNamesBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LocaleNamesBundle = ::sun::util::resources::LocaleNamesBundle;

namespace sun {
	namespace util {
		namespace resources {

$MethodInfo _LocaleNames_en_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocaleNames_en::*)()>(&LocaleNames_en::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _LocaleNames_en_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.LocaleNames_en",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_LocaleNames_en_MethodInfo_
};

$Object* allocate$LocaleNames_en($Class* clazz) {
	return $of($alloc(LocaleNames_en));
}

void LocaleNames_en::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_en::getContents() {
	return $new($ObjectArray2, 0);
}

LocaleNames_en::LocaleNames_en() {
}

$Class* LocaleNames_en::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_en, name, initialize, &_LocaleNames_en_ClassInfo_, allocate$LocaleNames_en);
	return class$;
}

$Class* LocaleNames_en::class$ = nullptr;

		} // resources
	} // util
} // sun