#include <sun/util/locale/provider/ResourceBundleBasedAdapter.h>

#include <java/util/List.h>
#include <java/util/Locale.h>
#include <sun/util/resources/LocaleData.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $LocaleData = ::sun::util::resources::LocaleData;

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

$MethodInfo _ResourceBundleBasedAdapter_MethodInfo_[] = {
	{"getCandidateLocales", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/util/List;", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/util/List<Ljava/util/Locale;>;", $PUBLIC | $ABSTRACT},
	{"getLocaleData", "()Lsun/util/resources/LocaleData;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ResourceBundleBasedAdapter_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.util.locale.provider.ResourceBundleBasedAdapter",
	nullptr,
	nullptr,
	nullptr,
	_ResourceBundleBasedAdapter_MethodInfo_
};

$Object* allocate$ResourceBundleBasedAdapter($Class* clazz) {
	return $of($alloc(ResourceBundleBasedAdapter));
}

$Class* ResourceBundleBasedAdapter::load$($String* name, bool initialize) {
	$loadClass(ResourceBundleBasedAdapter, name, initialize, &_ResourceBundleBasedAdapter_ClassInfo_, allocate$ResourceBundleBasedAdapter);
	return class$;
}

$Class* ResourceBundleBasedAdapter::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun