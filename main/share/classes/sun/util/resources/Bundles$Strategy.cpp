#include <sun/util/resources/Bundles$Strategy.h>

#include <java/util/List.h>
#include <java/util/Locale.h>
#include <sun/util/resources/Bundles.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;

namespace sun {
	namespace util {
		namespace resources {

$MethodInfo _Bundles$Strategy_MethodInfo_[] = {
	{"getCandidateLocales", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/util/List;", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/util/List<Ljava/util/Locale;>;", $PUBLIC | $ABSTRACT, $virtualMethod(Bundles$Strategy, getCandidateLocales, $List*, $String*, $Locale*)},
	{"getResourceBundleProviderType", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/Class;", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/Class<+Ljava/util/spi/ResourceBundleProvider;>;", $PUBLIC | $ABSTRACT, $virtualMethod(Bundles$Strategy, getResourceBundleProviderType, $Class*, $String*, $Locale*)},
	{"toBundleName", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Bundles$Strategy, toBundleName, $String*, $String*, $Locale*)},
	{}
};

$InnerClassInfo _Bundles$Strategy_InnerClassesInfo_[] = {
	{"sun.util.resources.Bundles$Strategy", "sun.util.resources.Bundles", "Strategy", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Bundles$Strategy_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.util.resources.Bundles$Strategy",
	nullptr,
	nullptr,
	nullptr,
	_Bundles$Strategy_MethodInfo_,
	nullptr,
	nullptr,
	_Bundles$Strategy_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.resources.Bundles"
};

$Object* allocate$Bundles$Strategy($Class* clazz) {
	return $of($alloc(Bundles$Strategy));
}

$Class* Bundles$Strategy::load$($String* name, bool initialize) {
	$loadClass(Bundles$Strategy, name, initialize, &_Bundles$Strategy_ClassInfo_, allocate$Bundles$Strategy);
	return class$;
}

$Class* Bundles$Strategy::class$ = nullptr;

		} // resources
	} // util
} // sun