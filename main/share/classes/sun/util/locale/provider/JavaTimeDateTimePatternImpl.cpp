#include <sun/util/locale/provider/JavaTimeDateTimePatternImpl.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Locale.h>
#include <java/util/Set.h>
#include <sun/text/spi/JavaTimeDateTimePatternProvider.h>
#include <sun/util/locale/provider/LocaleProviderAdapter$Type.h>
#include <sun/util/locale/provider/LocaleProviderAdapter.h>
#include <sun/util/locale/provider/LocaleResources.h>
#include <jcpp.h>

using $LocaleArray = $Array<::java::util::Locale>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $Set = ::java::util::Set;
using $JavaTimeDateTimePatternProvider = ::sun::text::spi::JavaTimeDateTimePatternProvider;
using $AvailableLanguageTags = ::sun::util::locale::provider::AvailableLanguageTags;
using $LocaleProviderAdapter = ::sun::util::locale::provider::LocaleProviderAdapter;
using $LocaleProviderAdapter$Type = ::sun::util::locale::provider::LocaleProviderAdapter$Type;
using $LocaleResources = ::sun::util::locale::provider::LocaleResources;

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

$FieldInfo _JavaTimeDateTimePatternImpl_FieldInfo_[] = {
	{"type", "Lsun/util/locale/provider/LocaleProviderAdapter$Type;", nullptr, $PRIVATE | $FINAL, $field(JavaTimeDateTimePatternImpl, type)},
	{"langtags", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(JavaTimeDateTimePatternImpl, langtags)},
	{}
};

$MethodInfo _JavaTimeDateTimePatternImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/util/locale/provider/LocaleProviderAdapter$Type;Ljava/util/Set;)V", "(Lsun/util/locale/provider/LocaleProviderAdapter$Type;Ljava/util/Set<Ljava/lang/String;>;)V", $PUBLIC, $method(static_cast<void(JavaTimeDateTimePatternImpl::*)($LocaleProviderAdapter$Type*,$Set*)>(&JavaTimeDateTimePatternImpl::init$))},
	{"getAvailableLanguageTags", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC},
	{"getAvailableLocales", "()[Ljava/util/Locale;", nullptr, $PUBLIC},
	{"getJavaTimeDateTimePattern", "(IILjava/lang/String;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"isSupportedLocale", "(Ljava/util/Locale;)Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _JavaTimeDateTimePatternImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.locale.provider.JavaTimeDateTimePatternImpl",
	"sun.text.spi.JavaTimeDateTimePatternProvider",
	"sun.util.locale.provider.AvailableLanguageTags",
	_JavaTimeDateTimePatternImpl_FieldInfo_,
	_JavaTimeDateTimePatternImpl_MethodInfo_
};

$Object* allocate$JavaTimeDateTimePatternImpl($Class* clazz) {
	return $of($alloc(JavaTimeDateTimePatternImpl));
}

int32_t JavaTimeDateTimePatternImpl::hashCode() {
	 return this->$JavaTimeDateTimePatternProvider::hashCode();
}

bool JavaTimeDateTimePatternImpl::equals(Object$* obj) {
	 return this->$JavaTimeDateTimePatternProvider::equals(obj);
}

$Object* JavaTimeDateTimePatternImpl::clone() {
	 return this->$JavaTimeDateTimePatternProvider::clone();
}

$String* JavaTimeDateTimePatternImpl::toString() {
	 return this->$JavaTimeDateTimePatternProvider::toString();
}

void JavaTimeDateTimePatternImpl::finalize() {
	this->$JavaTimeDateTimePatternProvider::finalize();
}

void JavaTimeDateTimePatternImpl::init$($LocaleProviderAdapter$Type* type, $Set* langtags) {
	$JavaTimeDateTimePatternProvider::init$();
	$set(this, type, type);
	$set(this, langtags, langtags);
}

$LocaleArray* JavaTimeDateTimePatternImpl::getAvailableLocales() {
	return $LocaleProviderAdapter::toLocaleArray(this->langtags);
}

bool JavaTimeDateTimePatternImpl::isSupportedLocale($Locale* locale) {
	return $nc($($LocaleProviderAdapter::forType(this->type)))->isSupportedProviderLocale(locale, this->langtags);
}

$String* JavaTimeDateTimePatternImpl::getJavaTimeDateTimePattern(int32_t timeStyle, int32_t dateStyle, $String* calType, $Locale* locale) {
	$var($LocaleResources, lr, $nc($($LocaleProviderAdapter::getResourceBundleBased()))->getLocaleResources(locale));
	$var($String, pattern, $nc(lr)->getJavaTimeDateTimePattern(timeStyle, dateStyle, calType));
	return pattern;
}

$Set* JavaTimeDateTimePatternImpl::getAvailableLanguageTags() {
	return this->langtags;
}

JavaTimeDateTimePatternImpl::JavaTimeDateTimePatternImpl() {
}

$Class* JavaTimeDateTimePatternImpl::load$($String* name, bool initialize) {
	$loadClass(JavaTimeDateTimePatternImpl, name, initialize, &_JavaTimeDateTimePatternImpl_ClassInfo_, allocate$JavaTimeDateTimePatternImpl);
	return class$;
}

$Class* JavaTimeDateTimePatternImpl::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun