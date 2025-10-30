#include <sun/util/resources/LocaleNamesBundle.h>

#include <sun/util/resources/OpenListResourceBundle.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OpenListResourceBundle = ::sun::util::resources::OpenListResourceBundle;

namespace sun {
	namespace util {
		namespace resources {

$MethodInfo _LocaleNamesBundle_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(LocaleNamesBundle::*)()>(&LocaleNamesBundle::init$))},
	{}
};

$ClassInfo _LocaleNamesBundle_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.util.resources.LocaleNamesBundle",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNamesBundle_MethodInfo_
};

$Object* allocate$LocaleNamesBundle($Class* clazz) {
	return $of($alloc(LocaleNamesBundle));
}

void LocaleNamesBundle::init$() {
	$OpenListResourceBundle::init$();
}

LocaleNamesBundle::LocaleNamesBundle() {
}

$Class* LocaleNamesBundle::load$($String* name, bool initialize) {
	$loadClass(LocaleNamesBundle, name, initialize, &_LocaleNamesBundle_ClassInfo_, allocate$LocaleNamesBundle);
	return class$;
}

$Class* LocaleNamesBundle::class$ = nullptr;

		} // resources
	} // util
} // sun