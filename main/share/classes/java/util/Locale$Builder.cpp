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

void Locale$Builder::init$() {
	$set(this, localeBuilder, $new($InternalLocaleBuilder));
}

Locale$Builder* Locale$Builder::setLocale($Locale* locale) {
	try {
		this->localeBuilder->setLocale($nc(locale)->baseLocale, $nc(locale)->localeExtensions);
	} catch ($LocaleSyntaxException& e) {
		$var($String, var$0, e->getMessage());
		$throwNew($IllformedLocaleException, var$0, e->getErrorIndex());
	}
	return this;
}

Locale$Builder* Locale$Builder::setLanguageTag($String* languageTag) {
	$useLocalObjectStack();
	$var($ParseStatus, sts, $new($ParseStatus));
	$var($LanguageTag, tag, $LanguageTag::parse(languageTag, sts));
	if (sts->isError()) {
		$var($String, var$0, sts->getErrorMessage());
		$throwNew($IllformedLocaleException, var$0, sts->getErrorIndex());
	}
	this->localeBuilder->setLanguageTag(tag);
	return this;
}

Locale$Builder* Locale$Builder::setLanguage($String* language) {
	try {
		this->localeBuilder->setLanguage(language);
	} catch ($LocaleSyntaxException& e) {
		$var($String, var$0, e->getMessage());
		$throwNew($IllformedLocaleException, var$0, e->getErrorIndex());
	}
	return this;
}

Locale$Builder* Locale$Builder::setScript($String* script) {
	try {
		this->localeBuilder->setScript(script);
	} catch ($LocaleSyntaxException& e) {
		$var($String, var$0, e->getMessage());
		$throwNew($IllformedLocaleException, var$0, e->getErrorIndex());
	}
	return this;
}

Locale$Builder* Locale$Builder::setRegion($String* region) {
	try {
		this->localeBuilder->setRegion(region);
	} catch ($LocaleSyntaxException& e) {
		$var($String, var$0, e->getMessage());
		$throwNew($IllformedLocaleException, var$0, e->getErrorIndex());
	}
	return this;
}

Locale$Builder* Locale$Builder::setVariant($String* variant) {
	try {
		this->localeBuilder->setVariant(variant);
	} catch ($LocaleSyntaxException& e) {
		$var($String, var$0, e->getMessage());
		$throwNew($IllformedLocaleException, var$0, e->getErrorIndex());
	}
	return this;
}

Locale$Builder* Locale$Builder::setExtension(char16_t key, $String* value) {
	try {
		this->localeBuilder->setExtension(key, value);
	} catch ($LocaleSyntaxException& e) {
		$var($String, var$0, e->getMessage());
		$throwNew($IllformedLocaleException, var$0, e->getErrorIndex());
	}
	return this;
}

Locale$Builder* Locale$Builder::setUnicodeLocaleKeyword($String* key, $String* type) {
	try {
		this->localeBuilder->setUnicodeLocaleKeyword(key, type);
	} catch ($LocaleSyntaxException& e) {
		$var($String, var$0, e->getMessage());
		$throwNew($IllformedLocaleException, var$0, e->getErrorIndex());
	}
	return this;
}

Locale$Builder* Locale$Builder::addUnicodeLocaleAttribute($String* attribute) {
	try {
		this->localeBuilder->addUnicodeLocaleAttribute(attribute);
	} catch ($LocaleSyntaxException& e) {
		$var($String, var$0, e->getMessage());
		$throwNew($IllformedLocaleException, var$0, e->getErrorIndex());
	}
	return this;
}

Locale$Builder* Locale$Builder::removeUnicodeLocaleAttribute($String* attribute) {
	$Objects::requireNonNull(attribute);
	try {
		this->localeBuilder->removeUnicodeLocaleAttribute(attribute);
	} catch ($LocaleSyntaxException& e) {
		$var($String, var$0, e->getMessage());
		$throwNew($IllformedLocaleException, var$0, e->getErrorIndex());
	}
	return this;
}

Locale$Builder* Locale$Builder::clear() {
	this->localeBuilder->clear();
	return this;
}

Locale$Builder* Locale$Builder::clearExtensions() {
	this->localeBuilder->clearExtensions();
	return this;
}

$Locale* Locale$Builder::build() {
	$useLocalObjectStack();
	$var($BaseLocale, baseloc, this->localeBuilder->getBaseLocale());
	$var($LocaleExtensions, extensions, this->localeBuilder->getLocaleExtensions());
	if (extensions == nullptr && !$$nc($nc(baseloc)->getVariant())->isEmpty()) {
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
	$FieldInfo fieldInfos$$[] = {
		{"localeBuilder", "Lsun/util/locale/InternalLocaleBuilder;", nullptr, $PRIVATE | $FINAL, $field(Locale$Builder, localeBuilder)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Locale$Builder, init$, void)},
		{"addUnicodeLocaleAttribute", "(Ljava/lang/String;)Ljava/util/Locale$Builder;", nullptr, $PUBLIC, $method(Locale$Builder, addUnicodeLocaleAttribute, Locale$Builder*, $String*)},
		{"build", "()Ljava/util/Locale;", nullptr, $PUBLIC, $method(Locale$Builder, build, $Locale*)},
		{"clear", "()Ljava/util/Locale$Builder;", nullptr, $PUBLIC, $method(Locale$Builder, clear, Locale$Builder*)},
		{"clearExtensions", "()Ljava/util/Locale$Builder;", nullptr, $PUBLIC, $method(Locale$Builder, clearExtensions, Locale$Builder*)},
		{"removeUnicodeLocaleAttribute", "(Ljava/lang/String;)Ljava/util/Locale$Builder;", nullptr, $PUBLIC, $method(Locale$Builder, removeUnicodeLocaleAttribute, Locale$Builder*, $String*)},
		{"setExtension", "(CLjava/lang/String;)Ljava/util/Locale$Builder;", nullptr, $PUBLIC, $method(Locale$Builder, setExtension, Locale$Builder*, char16_t, $String*)},
		{"setLanguage", "(Ljava/lang/String;)Ljava/util/Locale$Builder;", nullptr, $PUBLIC, $method(Locale$Builder, setLanguage, Locale$Builder*, $String*)},
		{"setLanguageTag", "(Ljava/lang/String;)Ljava/util/Locale$Builder;", nullptr, $PUBLIC, $method(Locale$Builder, setLanguageTag, Locale$Builder*, $String*)},
		{"setLocale", "(Ljava/util/Locale;)Ljava/util/Locale$Builder;", nullptr, $PUBLIC, $method(Locale$Builder, setLocale, Locale$Builder*, $Locale*)},
		{"setRegion", "(Ljava/lang/String;)Ljava/util/Locale$Builder;", nullptr, $PUBLIC, $method(Locale$Builder, setRegion, Locale$Builder*, $String*)},
		{"setScript", "(Ljava/lang/String;)Ljava/util/Locale$Builder;", nullptr, $PUBLIC, $method(Locale$Builder, setScript, Locale$Builder*, $String*)},
		{"setUnicodeLocaleKeyword", "(Ljava/lang/String;Ljava/lang/String;)Ljava/util/Locale$Builder;", nullptr, $PUBLIC, $method(Locale$Builder, setUnicodeLocaleKeyword, Locale$Builder*, $String*, $String*)},
		{"setVariant", "(Ljava/lang/String;)Ljava/util/Locale$Builder;", nullptr, $PUBLIC, $method(Locale$Builder, setVariant, Locale$Builder*, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.Locale$Builder", "java.util.Locale", "Builder", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.util.Locale$Builder",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.Locale"
	};
	$loadClass(Locale$Builder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Locale$Builder);
	});
	return class$;
}

$Class* Locale$Builder::class$ = nullptr;

	} // util
} // java