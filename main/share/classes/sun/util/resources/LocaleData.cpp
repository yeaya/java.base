#include <sun/util/resources/LocaleData.h>

#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractMap.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <java/util/ResourceBundle$Control.h>
#include <java/util/ResourceBundle.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <sun/util/locale/provider/LocaleProviderAdapter$Type.h>
#include <sun/util/resources/LocaleData$1.h>
#include <sun/util/resources/LocaleData$2.h>
#include <sun/util/resources/OpenListResourceBundle.h>
#include <sun/util/resources/ParallelListResourceBundle.h>
#include <sun/util/resources/TimeZoneNamesBundle.h>
#include <jcpp.h>

#undef CANDIDATES_MAP
#undef DOTCLDR
#undef FORMAT_DEFAULT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractMap = ::java::util::AbstractMap;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $ResourceBundle = ::java::util::ResourceBundle;
using $ResourceBundle$Control = ::java::util::ResourceBundle$Control;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $LocaleProviderAdapter$Type = ::sun::util::locale::provider::LocaleProviderAdapter$Type;
using $LocaleData$1 = ::sun::util::resources::LocaleData$1;
using $LocaleData$2 = ::sun::util::resources::LocaleData$2;
using $OpenListResourceBundle = ::sun::util::resources::OpenListResourceBundle;
using $ParallelListResourceBundle = ::sun::util::resources::ParallelListResourceBundle;
using $TimeZoneNamesBundle = ::sun::util::resources::TimeZoneNamesBundle;

namespace sun {
	namespace util {
		namespace resources {

$FieldInfo _LocaleData_FieldInfo_[] = {
	{"defaultControl", "Ljava/util/ResourceBundle$Control;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LocaleData, defaultControl)},
	{"DOTCLDR", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LocaleData, DOTCLDR)},
	{"CANDIDATES_MAP", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/util/List<Ljava/util/Locale;>;>;", $PRIVATE | $STATIC | $FINAL, $staticField(LocaleData, CANDIDATES_MAP)},
	{"type", "Lsun/util/locale/provider/LocaleProviderAdapter$Type;", nullptr, $PRIVATE | $FINAL, $field(LocaleData, type)},
	{}
};

$MethodInfo _LocaleData_MethodInfo_[] = {
	{"<init>", "(Lsun/util/locale/provider/LocaleProviderAdapter$Type;)V", nullptr, $PUBLIC, $method(static_cast<void(LocaleData::*)($LocaleProviderAdapter$Type*)>(&LocaleData::init$))},
	{"getBreakIteratorInfo", "(Ljava/util/Locale;)Ljava/util/ResourceBundle;", nullptr, $PUBLIC},
	{"getBreakIteratorResources", "(Ljava/util/Locale;)Ljava/util/ResourceBundle;", nullptr, $PUBLIC},
	{"getBundle", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/util/ResourceBundle;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ResourceBundle*(*)($String*,$Locale*)>(&LocaleData::getBundle))},
	{"getCalendarData", "(Ljava/util/Locale;)Ljava/util/ResourceBundle;", nullptr, $PUBLIC},
	{"getCollationData", "(Ljava/util/Locale;)Ljava/util/ResourceBundle;", nullptr, $PUBLIC},
	{"getCurrencyNames", "(Ljava/util/Locale;)Lsun/util/resources/OpenListResourceBundle;", nullptr, $PUBLIC},
	{"getDateFormatData", "(Ljava/util/Locale;)Ljava/util/ResourceBundle;", nullptr, $PUBLIC},
	{"getLocaleNames", "(Ljava/util/Locale;)Lsun/util/resources/OpenListResourceBundle;", nullptr, $PUBLIC},
	{"getNumberFormatData", "(Ljava/util/Locale;)Ljava/util/ResourceBundle;", nullptr, $PUBLIC},
	{"getSupplementary", "(Ljava/lang/String;Ljava/util/Locale;)Lsun/util/resources/OpenListResourceBundle;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$OpenListResourceBundle*(*)($String*,$Locale*)>(&LocaleData::getSupplementary))},
	{"getTimeZoneNames", "(Ljava/util/Locale;)Lsun/util/resources/TimeZoneNamesBundle;", nullptr, $PUBLIC},
	{"setSupplementary", "(Lsun/util/resources/ParallelListResourceBundle;)V", nullptr, $PUBLIC},
	{"setSupplementary", "(Ljava/lang/String;Lsun/util/resources/ParallelListResourceBundle;)Z", nullptr, $PRIVATE, $method(static_cast<bool(LocaleData::*)($String*,$ParallelListResourceBundle*)>(&LocaleData::setSupplementary))},
	{}
};

$InnerClassInfo _LocaleData_InnerClassesInfo_[] = {
	{"sun.util.resources.LocaleData$SupplementaryStrategy", "sun.util.resources.LocaleData", "SupplementaryStrategy", $PRIVATE | $STATIC},
	{"sun.util.resources.LocaleData$LocaleDataStrategy", "sun.util.resources.LocaleData", "LocaleDataStrategy", $PRIVATE | $STATIC},
	{"sun.util.resources.LocaleData$SupplementaryResourceBundleProvider", "sun.util.resources.LocaleData", "SupplementaryResourceBundleProvider", $PUBLIC | $STATIC | $ABSTRACT},
	{"sun.util.resources.LocaleData$CommonResourceBundleProvider", "sun.util.resources.LocaleData", "CommonResourceBundleProvider", $PUBLIC | $STATIC | $ABSTRACT},
	{"sun.util.resources.LocaleData$LocaleDataResourceBundleProvider", "sun.util.resources.LocaleData", "LocaleDataResourceBundleProvider", $PRIVATE | $STATIC | $ABSTRACT},
	{"sun.util.resources.LocaleData$2", nullptr, nullptr, 0},
	{"sun.util.resources.LocaleData$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _LocaleData_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.LocaleData",
	"java.lang.Object",
	nullptr,
	_LocaleData_FieldInfo_,
	_LocaleData_MethodInfo_,
	nullptr,
	nullptr,
	_LocaleData_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.util.resources.LocaleData$SupplementaryStrategy,sun.util.resources.LocaleData$LocaleDataStrategy,sun.util.resources.LocaleData$SupplementaryResourceBundleProvider,sun.util.resources.LocaleData$CommonResourceBundleProvider,sun.util.resources.LocaleData$LocaleDataResourceBundleProvider,sun.util.resources.LocaleData$2,sun.util.resources.LocaleData$1"
};

$Object* allocate$LocaleData($Class* clazz) {
	return $of($alloc(LocaleData));
}

$ResourceBundle$Control* LocaleData::defaultControl = nullptr;
$String* LocaleData::DOTCLDR = nullptr;
$Map* LocaleData::CANDIDATES_MAP = nullptr;

void LocaleData::init$($LocaleProviderAdapter$Type* type) {
	$set(this, type, type);
}

$ResourceBundle* LocaleData::getCalendarData($Locale* locale) {
	$useLocalCurrentObjectStackCache();
	return getBundle($$str({$(this->type->getUtilResourcesPackage()), ".CalendarData"_s}), locale);
}

$OpenListResourceBundle* LocaleData::getCurrencyNames($Locale* locale) {
	$useLocalCurrentObjectStackCache();
	return $cast($OpenListResourceBundle, getBundle($$str({$(this->type->getUtilResourcesPackage()), ".CurrencyNames"_s}), locale));
}

$OpenListResourceBundle* LocaleData::getLocaleNames($Locale* locale) {
	$useLocalCurrentObjectStackCache();
	return $cast($OpenListResourceBundle, getBundle($$str({$(this->type->getUtilResourcesPackage()), ".LocaleNames"_s}), locale));
}

$TimeZoneNamesBundle* LocaleData::getTimeZoneNames($Locale* locale) {
	$useLocalCurrentObjectStackCache();
	return $cast($TimeZoneNamesBundle, getBundle($$str({$(this->type->getUtilResourcesPackage()), ".TimeZoneNames"_s}), locale));
}

$ResourceBundle* LocaleData::getBreakIteratorInfo($Locale* locale) {
	$useLocalCurrentObjectStackCache();
	return getBundle($$str({$(this->type->getTextResourcesPackage()), ".BreakIteratorInfo"_s}), locale);
}

$ResourceBundle* LocaleData::getBreakIteratorResources($Locale* locale) {
	$useLocalCurrentObjectStackCache();
	return getBundle($$str({$(this->type->getTextResourcesPackage()), ".BreakIteratorResources"_s}), locale);
}

$ResourceBundle* LocaleData::getCollationData($Locale* locale) {
	$useLocalCurrentObjectStackCache();
	return getBundle($$str({$(this->type->getTextResourcesPackage()), ".CollationData"_s}), locale);
}

$ResourceBundle* LocaleData::getDateFormatData($Locale* locale) {
	$useLocalCurrentObjectStackCache();
	return getBundle($$str({$(this->type->getTextResourcesPackage()), ".FormatData"_s}), locale);
}

void LocaleData::setSupplementary($ParallelListResourceBundle* formatData) {
	$useLocalCurrentObjectStackCache();
	if (!$nc(formatData)->areParallelContentsComplete()) {
		$var($String, suppName, $str({$(this->type->getTextResourcesPackage()), ".JavaTimeSupplementary"_s}));
		setSupplementary(suppName, formatData);
	}
}

bool LocaleData::setSupplementary($String* suppName, $ParallelListResourceBundle* formatData) {
	$useLocalCurrentObjectStackCache();
	$var($ParallelListResourceBundle, parent, $cast($ParallelListResourceBundle, $nc(formatData)->getParent()));
	bool resetKeySet = false;
	if (parent != nullptr) {
		resetKeySet = setSupplementary(suppName, parent);
	}
	$var($OpenListResourceBundle, supp, getSupplementary(suppName, $(formatData->getLocale())));
	formatData->setParallelContents(supp);
	resetKeySet |= supp != nullptr;
	if (resetKeySet) {
		formatData->resetKeySet();
	}
	return resetKeySet;
}

$ResourceBundle* LocaleData::getNumberFormatData($Locale* locale) {
	$useLocalCurrentObjectStackCache();
	return getBundle($$str({$(this->type->getTextResourcesPackage()), ".FormatData"_s}), locale);
}

$ResourceBundle* LocaleData::getBundle($String* baseName, $Locale* locale) {
	$init(LocaleData);
	$beforeCallerSensitive();
	return $cast($ResourceBundle, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($LocaleData$1, baseName, locale))));
}

$OpenListResourceBundle* LocaleData::getSupplementary($String* baseName, $Locale* locale) {
	$init(LocaleData);
	$beforeCallerSensitive();
	return $cast($OpenListResourceBundle, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($LocaleData$2, baseName, locale))));
}

void clinit$LocaleData($Class* class$) {
	$assignStatic(LocaleData::DOTCLDR, ".cldr"_s);
	$init($ResourceBundle$Control);
	$assignStatic(LocaleData::defaultControl, $ResourceBundle$Control::getControl($ResourceBundle$Control::FORMAT_DEFAULT));
	$assignStatic(LocaleData::CANDIDATES_MAP, static_cast<$Map*>(static_cast<$AbstractMap*>($new($ConcurrentHashMap))));
}

LocaleData::LocaleData() {
}

$Class* LocaleData::load$($String* name, bool initialize) {
	$loadClass(LocaleData, name, initialize, &_LocaleData_ClassInfo_, clinit$LocaleData, allocate$LocaleData);
	return class$;
}

$Class* LocaleData::class$ = nullptr;

		} // resources
	} // util
} // sun