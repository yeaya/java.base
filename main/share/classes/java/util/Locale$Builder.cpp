#include <java/util/Locale$Builder.h>

#include <java/util/IllformedLocaleException.h>
#include <java/util/Locale.h>
#include <java/util/Objects.h>
#include <sun/util/locale/BaseLocale.h>
#include <sun/util/locale/InternalLocaleBuilder.h>
#include <sun/util/locale/LanguageTag.h>
#include <sun/util/locale/LocaleExtensions.h>
#include <sun/util/locale/LocaleSyntaxException.h>
#include <sun/util/locale/ParseStatus.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $IllformedLocaleException = ::java::util::IllformedLocaleException;
using $Locale = ::java::util::Locale;
using $Objects = ::java::util::Objects;
using $BaseLocale = ::sun::util::locale::BaseLocale;
using $InternalLocaleBuilder = ::sun::util::locale::InternalLocaleBuilder;
using $LanguageTag = ::sun::util::locale::LanguageTag;
using $LocaleExtensions = ::sun::util::locale::LocaleExtensions;
using $LocaleSyntaxException = ::sun::util::locale::LocaleSyntaxException;
using $ParseStatus = ::sun::util::locale::ParseStatus;

namespace java {
	namespace util {

$FieldInfo _Locale$Builder_FieldInfo_[] = {
	{"localeBuilder", "Lsun/util/locale/InternalLocaleBuilder;", nullptr, $PRIVATE | $FINAL, $field(Locale$Builder, localeBuilder)},
	{}
};

$MethodInfo _Locale$Builder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Locale$Builder::*)()>(&Locale$Builder::init$))},
	{"addUnicodeLocaleAttribute", "(Ljava/lang/String;)Ljava/util/Locale$Builder;", nullptr, $PUBLIC, $method(static_cast<Locale$Builder*(Locale$Builder::*)($String*)>(&Locale$Builder::addUnicodeLocaleAttribute))},
	{"build", "()Ljava/util/Locale;", nullptr, $PUBLIC, $method(static_cast<$Locale*(Locale$Builder::*)()>(&Locale$Builder::build))},
	{"clear", "()Ljava/util/Locale$Builder;", nullptr, $PUBLIC, $method(static_cast<Locale$Builder*(Locale$Builder::*)()>(&Locale$Builder::clear))},
	{"clearExtensions", "()Ljava/util/Locale$Builder;", nullptr, $PUBLIC, $method(static_cast<Locale$Builder*(Locale$Builder::*)()>(&Locale$Builder::clearExtensions))},
	{"removeUnicodeLocaleAttribute", "(Ljava/lang/String;)Ljava/util/Locale$Builder;", nullptr, $PUBLIC, $method(static_cast<Locale$Builder*(Locale$Builder::*)($String*)>(&Locale$Builder::removeUnicodeLocaleAttribute))},
	{"setExtension", "(CLjava/lang/String;)Ljava/util/Locale$Builder;", nullptr, $PUBLIC, $method(static_cast<Locale$Builder*(Locale$Builder::*)(char16_t,$String*)>(&Locale$Builder::setExtension))},
	{"setLanguage", "(Ljava/lang/String;)Ljava/util/Locale$Builder;", nullptr, $PUBLIC, $method(static_cast<Locale$Builder*(Locale$Builder::*)($String*)>(&Locale$Builder::setLanguage))},
	{"setLanguageTag", "(Ljava/lang/String;)Ljava/util/Locale$Builder;", nullptr, $PUBLIC, $method(static_cast<Locale$Builder*(Locale$Builder::*)($String*)>(&Locale$Builder::setLanguageTag))},
	{"setLocale", "(Ljava/util/Locale;)Ljava/util/Locale$Builder;", nullptr, $PUBLIC, $method(static_cast<Locale$Builder*(Locale$Builder::*)($Locale*)>(&Locale$Builder::setLocale))},
	{"setRegion", "(Ljava/lang/String;)Ljava/util/Locale$Builder;", nullptr, $PUBLIC, $method(static_cast<Locale$Builder*(Locale$Builder::*)($String*)>(&Locale$Builder::setRegion))},
	{"setScript", "(Ljava/lang/String;)Ljava/util/Locale$Builder;", nullptr, $PUBLIC, $method(static_cast<Locale$Builder*(Locale$Builder::*)($String*)>(&Locale$Builder::setScript))},
	{"setUnicodeLocaleKeyword", "(Ljava/lang/String;Ljava/lang/String;)Ljava/util/Locale$Builder;", nullptr, $PUBLIC, $method(static_cast<Locale$Builder*(Locale$Builder::*)($String*,$String*)>(&Locale$Builder::setUnicodeLocaleKeyword))},
	{"setVariant", "(Ljava/lang/String;)Ljava/util/Locale$Builder;", nullptr, $PUBLIC, $method(static_cast<Locale$Builder*(Locale$Builder::*)($String*)>(&Locale$Builder::setVariant))},
	{}
};

$InnerClassInfo _Locale$Builder_InnerClassesInfo_[] = {
	{"java.util.Locale$Builder", "java.util.Locale", "Builder", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _Locale$Builder_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.util.Locale$Builder",
	"java.lang.Object",
	nullptr,
	_Locale$Builder_FieldInfo_,
	_Locale$Builder_MethodInfo_,
	nullptr,
	nullptr,
	_Locale$Builder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Locale"
};

$Object* allocate$Locale$Builder($Class* clazz) {
	return $of($alloc(Locale$Builder));
}

void Locale$Builder::init$() {
	$set(this, localeBuilder, $new($InternalLocaleBuilder));
}

Locale$Builder* Locale$Builder::setLocale($Locale* locale) {
	try {
		$nc(this->localeBuilder)->setLocale($nc(locale)->baseLocale, locale->localeExtensions);
	} catch ($LocaleSyntaxException& e) {
		$var($String, var$0, e->getMessage());
		$throwNew($IllformedLocaleException, var$0, e->getErrorIndex());
	}
	return this;
}

Locale$Builder* Locale$Builder::setLanguageTag($String* languageTag) {
	$useLocalCurrentObjectStackCache();
	$var($ParseStatus, sts, $new($ParseStatus));
	$var($LanguageTag, tag, $LanguageTag::parse(languageTag, sts));
	if (sts->isError()) {
		$var($String, var$0, sts->getErrorMessage());
		$throwNew($IllformedLocaleException, var$0, sts->getErrorIndex());
	}
	$nc(this->localeBuilder)->setLanguageTag(tag);
	return this;
}

Locale$Builder* Locale$Builder::setLanguage($String* language) {
	try {
		$nc(this->localeBuilder)->setLanguage(language);
	} catch ($LocaleSyntaxException& e) {
		$var($String, var$0, e->getMessage());
		$throwNew($IllformedLocaleException, var$0, e->getErrorIndex());
	}
	return this;
}

Locale$Builder* Locale$Builder::setScript($String* script) {
	try {
		$nc(this->localeBuilder)->setScript(script);
	} catch ($LocaleSyntaxException& e) {
		$var($String, var$0, e->getMessage());
		$throwNew($IllformedLocaleException, var$0, e->getErrorIndex());
	}
	return this;
}

Locale$Builder* Locale$Builder::setRegion($String* region) {
	try {
		$nc(this->localeBuilder)->setRegion(region);
	} catch ($LocaleSyntaxException& e) {
		$var($String, var$0, e->getMessage());
		$throwNew($IllformedLocaleException, var$0, e->getErrorIndex());
	}
	return this;
}

Locale$Builder* Locale$Builder::setVariant($String* variant) {
	try {
		$nc(this->localeBuilder)->setVariant(variant);
	} catch ($LocaleSyntaxException& e) {
		$var($String, var$0, e->getMessage());
		$throwNew($IllformedLocaleException, var$0, e->getErrorIndex());
	}
	return this;
}

Locale$Builder* Locale$Builder::setExtension(char16_t key, $String* value) {
	try {
		$nc(this->localeBuilder)->setExtension(key, value);
	} catch ($LocaleSyntaxException& e) {
		$var($String, var$0, e->getMessage());
		$throwNew($IllformedLocaleException, var$0, e->getErrorIndex());
	}
	return this;
}

Locale$Builder* Locale$Builder::setUnicodeLocaleKeyword($String* key, $String* type) {
	try {
		$nc(this->localeBuilder)->setUnicodeLocaleKeyword(key, type);
	} catch ($LocaleSyntaxException& e) {
		$var($String, var$0, e->getMessage());
		$throwNew($IllformedLocaleException, var$0, e->getErrorIndex());
	}
	return this;
}

Locale$Builder* Locale$Builder::addUnicodeLocaleAttribute($String* attribute) {
	try {
		$nc(this->localeBuilder)->addUnicodeLocaleAttribute(attribute);
	} catch ($LocaleSyntaxException& e) {
		$var($String, var$0, e->getMessage());
		$throwNew($IllformedLocaleException, var$0, e->getErrorIndex());
	}
	return this;
}

Locale$Builder* Locale$Builder::removeUnicodeLocaleAttribute($String* attribute) {
	$Objects::requireNonNull(attribute);
	try {
		$nc(this->localeBuilder)->removeUnicodeLocaleAttribute(attribute);
	} catch ($LocaleSyntaxException& e) {
		$var($String, var$0, e->getMessage());
		$throwNew($IllformedLocaleException, var$0, e->getErrorIndex());
	}
	return this;
}

Locale$Builder* Locale$Builder::clear() {
	$nc(this->localeBuilder)->clear();
	return this;
}

Locale$Builder* Locale$Builder::clearExtensions() {
	$nc(this->localeBuilder)->clearExtensions();
	return this;
}

$Locale* Locale$Builder::build() {
	$useLocalCurrentObjectStackCache();
	$var($BaseLocale, baseloc, $nc(this->localeBuilder)->getBaseLocale());
	$var($LocaleExtensions, extensions, $nc(this->localeBuilder)->getLocaleExtensions());
	if (extensions == nullptr && !$nc($($nc(baseloc)->getVariant()))->isEmpty()) {
		$var($String, var$0, baseloc->getLanguage());
		$var($String, var$1, baseloc->getScript());
		$var($String, var$2, baseloc->getRegion());
		$assign(extensions, $Locale::getCompatibilityExtensions(var$0, var$1, var$2, $(baseloc->getVariant())));
	}
	return $Locale::getInstance(baseloc, extensions);
}

Locale$Builder::Locale$Builder() {
}

$Class* Locale$Builder::load$($String* name, bool initialize) {
	$loadClass(Locale$Builder, name, initialize, &_Locale$Builder_ClassInfo_, allocate$Locale$Builder);
	return class$;
}

$Class* Locale$Builder::class$ = nullptr;

	} // util
} // java