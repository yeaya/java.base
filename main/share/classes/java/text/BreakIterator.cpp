#include <java/text/BreakIterator.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Cloneable.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InternalError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/ref/SoftReference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/BreakIterator$BreakIteratorCache.h>
#include <java/text/CharacterIterator.h>
#include <java/text/StringCharacterIterator.h>
#include <java/text/spi/BreakIteratorProvider.h>
#include <java/util/Locale.h>
#include <sun/util/locale/provider/LocaleProviderAdapter.h>
#include <sun/util/locale/provider/LocaleServiceProviderPool.h>
#include <jcpp.h>

#undef CHARACTER_INDEX
#undef DONE
#undef LINE_INDEX
#undef SENTENCE_INDEX
#undef WORD_INDEX

using $SoftReferenceArray = $Array<::java::lang::ref::SoftReference>;
using $LocaleArray = $Array<::java::util::Locale>;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $SoftReference = ::java::lang::ref::SoftReference;
using $BreakIterator$BreakIteratorCache = ::java::text::BreakIterator$BreakIteratorCache;
using $CharacterIterator = ::java::text::CharacterIterator;
using $StringCharacterIterator = ::java::text::StringCharacterIterator;
using $BreakIteratorProvider = ::java::text::spi::BreakIteratorProvider;
using $Locale = ::java::util::Locale;
using $LocaleProviderAdapter = ::sun::util::locale::provider::LocaleProviderAdapter;
using $LocaleServiceProviderPool = ::sun::util::locale::provider::LocaleServiceProviderPool;

namespace java {
	namespace text {

$FieldInfo _BreakIterator_FieldInfo_[] = {
	{"DONE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BreakIterator, DONE)},
	{"CHARACTER_INDEX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BreakIterator, CHARACTER_INDEX)},
	{"WORD_INDEX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BreakIterator, WORD_INDEX)},
	{"LINE_INDEX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BreakIterator, LINE_INDEX)},
	{"SENTENCE_INDEX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BreakIterator, SENTENCE_INDEX)},
	{"iterCache", "[Ljava/lang/ref/SoftReference;", "[Ljava/lang/ref/SoftReference<Ljava/text/BreakIterator$BreakIteratorCache;>;", $PRIVATE | $STATIC | $FINAL, $staticField(BreakIterator, iterCache)},
	{}
};

$MethodInfo _BreakIterator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(BreakIterator::*)()>(&BreakIterator::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"createBreakInstance", "(Ljava/util/Locale;I)Ljava/text/BreakIterator;", nullptr, $PRIVATE | $STATIC, $method(static_cast<BreakIterator*(*)($Locale*,int32_t)>(&BreakIterator::createBreakInstance))},
	{"createBreakInstance", "(Lsun/util/locale/provider/LocaleProviderAdapter;Ljava/util/Locale;I)Ljava/text/BreakIterator;", nullptr, $PRIVATE | $STATIC, $method(static_cast<BreakIterator*(*)($LocaleProviderAdapter*,$Locale*,int32_t)>(&BreakIterator::createBreakInstance))},
	{"current", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"first", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"following", "(I)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getAvailableLocales", "()[Ljava/util/Locale;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<$LocaleArray*(*)()>(&BreakIterator::getAvailableLocales))},
	{"getBreakInstance", "(Ljava/util/Locale;I)Ljava/text/BreakIterator;", nullptr, $PRIVATE | $STATIC, $method(static_cast<BreakIterator*(*)($Locale*,int32_t)>(&BreakIterator::getBreakInstance))},
	{"getCharacterInstance", "()Ljava/text/BreakIterator;", nullptr, $PUBLIC | $STATIC, $method(static_cast<BreakIterator*(*)()>(&BreakIterator::getCharacterInstance))},
	{"getCharacterInstance", "(Ljava/util/Locale;)Ljava/text/BreakIterator;", nullptr, $PUBLIC | $STATIC, $method(static_cast<BreakIterator*(*)($Locale*)>(&BreakIterator::getCharacterInstance))},
	{"getLineInstance", "()Ljava/text/BreakIterator;", nullptr, $PUBLIC | $STATIC, $method(static_cast<BreakIterator*(*)()>(&BreakIterator::getLineInstance))},
	{"getLineInstance", "(Ljava/util/Locale;)Ljava/text/BreakIterator;", nullptr, $PUBLIC | $STATIC, $method(static_cast<BreakIterator*(*)($Locale*)>(&BreakIterator::getLineInstance))},
	{"getSentenceInstance", "()Ljava/text/BreakIterator;", nullptr, $PUBLIC | $STATIC, $method(static_cast<BreakIterator*(*)()>(&BreakIterator::getSentenceInstance))},
	{"getSentenceInstance", "(Ljava/util/Locale;)Ljava/text/BreakIterator;", nullptr, $PUBLIC | $STATIC, $method(static_cast<BreakIterator*(*)($Locale*)>(&BreakIterator::getSentenceInstance))},
	{"getText", "()Ljava/text/CharacterIterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"getWordInstance", "()Ljava/text/BreakIterator;", nullptr, $PUBLIC | $STATIC, $method(static_cast<BreakIterator*(*)()>(&BreakIterator::getWordInstance))},
	{"getWordInstance", "(Ljava/util/Locale;)Ljava/text/BreakIterator;", nullptr, $PUBLIC | $STATIC, $method(static_cast<BreakIterator*(*)($Locale*)>(&BreakIterator::getWordInstance))},
	{"isBoundary", "(I)Z", nullptr, $PUBLIC},
	{"last", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"next", "(I)I", nullptr, $PUBLIC | $ABSTRACT},
	{"next", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"preceding", "(I)I", nullptr, $PUBLIC},
	{"previous", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"setText", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setText", "(Ljava/text/CharacterIterator;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _BreakIterator_InnerClassesInfo_[] = {
	{"java.text.BreakIterator$BreakIteratorCache", "java.text.BreakIterator", "BreakIteratorCache", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _BreakIterator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.text.BreakIterator",
	"java.lang.Object",
	"java.lang.Cloneable",
	_BreakIterator_FieldInfo_,
	_BreakIterator_MethodInfo_,
	nullptr,
	nullptr,
	_BreakIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.text.BreakIterator$BreakIteratorCache"
};

$Object* allocate$BreakIterator($Class* clazz) {
	return $of($alloc(BreakIterator));
}

$SoftReferenceArray* BreakIterator::iterCache = nullptr;

void BreakIterator::init$() {
}

$Object* BreakIterator::clone() {
	try {
		return $of($Cloneable::clone());
	} catch ($CloneNotSupportedException&) {
		$var($CloneNotSupportedException, e, $catch());
		$throwNew($InternalError, static_cast<$Throwable*>(e));
	}
	$shouldNotReachHere();
}

int32_t BreakIterator::preceding(int32_t offset) {
	int32_t pos = following(offset);
	while (pos >= offset && pos != BreakIterator::DONE) {
		pos = previous();
	}
	return pos;
}

bool BreakIterator::isBoundary(int32_t offset) {
	if (offset == 0) {
		return true;
	}
	int32_t boundary = following(offset - 1);
	if (boundary == BreakIterator::DONE) {
		$throwNew($IllegalArgumentException);
	}
	return boundary == offset;
}

void BreakIterator::setText($String* newText) {
	setText(static_cast<$CharacterIterator*>($$new($StringCharacterIterator, newText)));
}

BreakIterator* BreakIterator::getWordInstance() {
	$init(BreakIterator);
	return getWordInstance($($Locale::getDefault()));
}

BreakIterator* BreakIterator::getWordInstance($Locale* locale) {
	$init(BreakIterator);
	return getBreakInstance(locale, BreakIterator::WORD_INDEX);
}

BreakIterator* BreakIterator::getLineInstance() {
	$init(BreakIterator);
	return getLineInstance($($Locale::getDefault()));
}

BreakIterator* BreakIterator::getLineInstance($Locale* locale) {
	$init(BreakIterator);
	return getBreakInstance(locale, BreakIterator::LINE_INDEX);
}

BreakIterator* BreakIterator::getCharacterInstance() {
	$init(BreakIterator);
	return getCharacterInstance($($Locale::getDefault()));
}

BreakIterator* BreakIterator::getCharacterInstance($Locale* locale) {
	$init(BreakIterator);
	return getBreakInstance(locale, BreakIterator::CHARACTER_INDEX);
}

BreakIterator* BreakIterator::getSentenceInstance() {
	$init(BreakIterator);
	return getSentenceInstance($($Locale::getDefault()));
}

BreakIterator* BreakIterator::getSentenceInstance($Locale* locale) {
	$init(BreakIterator);
	return getBreakInstance(locale, BreakIterator::SENTENCE_INDEX);
}

BreakIterator* BreakIterator::getBreakInstance($Locale* locale, int32_t type) {
	$init(BreakIterator);
	$useLocalCurrentObjectStackCache();
	if ($nc(BreakIterator::iterCache)->get(type) != nullptr) {
		$var($BreakIterator$BreakIteratorCache, cache, $cast($BreakIterator$BreakIteratorCache, $nc($nc(BreakIterator::iterCache)->get(type))->get()));
		if (cache != nullptr) {
			if ($nc($(cache->getLocale()))->equals(locale)) {
				return cache->createBreakInstance();
			}
		}
	}
	$var(BreakIterator, result, createBreakInstance(locale, type));
	$var($BreakIterator$BreakIteratorCache, cache, $new($BreakIterator$BreakIteratorCache, locale, result));
	$nc(BreakIterator::iterCache)->set(type, $$new($SoftReference, cache));
	return result;
}

BreakIterator* BreakIterator::createBreakInstance($Locale* locale, int32_t type) {
	$init(BreakIterator);
	$useLocalCurrentObjectStackCache();
	$load($BreakIteratorProvider);
	$var($LocaleProviderAdapter, adapter, $LocaleProviderAdapter::getAdapter($BreakIteratorProvider::class$, locale));
	$var(BreakIterator, iterator, createBreakInstance(adapter, locale, type));
	if (iterator == nullptr) {
		$assign(iterator, createBreakInstance($($LocaleProviderAdapter::forJRE()), locale, type));
	}
	return iterator;
}

BreakIterator* BreakIterator::createBreakInstance($LocaleProviderAdapter* adapter, $Locale* locale, int32_t type) {
	$init(BreakIterator);
	$useLocalCurrentObjectStackCache();
	$var($BreakIteratorProvider, breakIteratorProvider, $nc(adapter)->getBreakIteratorProvider());

	$var(BreakIterator, var$0, nullptr)
	switch (type) {
	case BreakIterator::CHARACTER_INDEX:
		{
			$assign(var$0, $nc(breakIteratorProvider)->getCharacterInstance(locale));
			break;
		}
	case BreakIterator::WORD_INDEX:
		{
			$assign(var$0, $nc(breakIteratorProvider)->getWordInstance(locale));
			break;
		}
	case BreakIterator::LINE_INDEX:
		{
			$assign(var$0, $nc(breakIteratorProvider)->getLineInstance(locale));
			break;
		}
	case BreakIterator::SENTENCE_INDEX:
		{
			$assign(var$0, $nc(breakIteratorProvider)->getSentenceInstance(locale));
			break;
		}
	default:
		{
			$assign(var$0, nullptr);
			break;
		}
	}
	return var$0;
}

$LocaleArray* BreakIterator::getAvailableLocales() {
	$load(BreakIterator);
	$synchronized(class$) {
		$init(BreakIterator);
		$load($BreakIteratorProvider);
		$var($LocaleServiceProviderPool, pool, $LocaleServiceProviderPool::getPool($BreakIteratorProvider::class$));
		return $nc(pool)->getAvailableLocales();
	}
}

void clinit$BreakIterator($Class* class$) {
	$assignStatic(BreakIterator::iterCache, $new($SoftReferenceArray, 4));
}

BreakIterator::BreakIterator() {
}

$Class* BreakIterator::load$($String* name, bool initialize) {
	$loadClass(BreakIterator, name, initialize, &_BreakIterator_ClassInfo_, clinit$BreakIterator, allocate$BreakIterator);
	return class$;
}

$Class* BreakIterator::class$ = nullptr;

	} // text
} // java