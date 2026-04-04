#include <sun/util/locale/InternalLocaleBuilder.h>
#include <java/lang/AssertionError.h>
#include <java/util/ArrayList.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <sun/util/locale/BaseLocale.h>
#include <sun/util/locale/Extension.h>
#include <sun/util/locale/InternalLocaleBuilder$CaseInsensitiveChar.h>
#include <sun/util/locale/InternalLocaleBuilder$CaseInsensitiveString.h>
#include <sun/util/locale/LanguageTag.h>
#include <sun/util/locale/LocaleExtensions.h>
#include <sun/util/locale/LocaleSyntaxException.h>
#include <sun/util/locale/LocaleUtils.h>
#include <sun/util/locale/StringTokenIterator.h>
#include <sun/util/locale/UnicodeLocaleExtension.h>
#include <jcpp.h>

#undef PRIVATEUSE
#undef PRIVATEUSE_KEY
#undef PRIVUSE_VARIANT_PREFIX
#undef SEP
#undef UNDETERMINED

using $AssertionError = ::java::lang::AssertionError;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Set = ::java::util::Set;
using $BaseLocale = ::sun::util::locale::BaseLocale;
using $Extension = ::sun::util::locale::Extension;
using $InternalLocaleBuilder$CaseInsensitiveChar = ::sun::util::locale::InternalLocaleBuilder$CaseInsensitiveChar;
using $InternalLocaleBuilder$CaseInsensitiveString = ::sun::util::locale::InternalLocaleBuilder$CaseInsensitiveString;
using $LanguageTag = ::sun::util::locale::LanguageTag;
using $LocaleExtensions = ::sun::util::locale::LocaleExtensions;
using $LocaleSyntaxException = ::sun::util::locale::LocaleSyntaxException;
using $LocaleUtils = ::sun::util::locale::LocaleUtils;
using $StringTokenIterator = ::sun::util::locale::StringTokenIterator;
using $UnicodeLocaleExtension = ::sun::util::locale::UnicodeLocaleExtension;

namespace sun {
	namespace util {
		namespace locale {

bool InternalLocaleBuilder::$assertionsDisabled = false;
$InternalLocaleBuilder$CaseInsensitiveChar* InternalLocaleBuilder::PRIVATEUSE_KEY = nullptr;

void InternalLocaleBuilder::init$() {
	$set(this, language, ""_s);
	$set(this, script, ""_s);
	$set(this, region, ""_s);
	$set(this, variant, ""_s);
}

InternalLocaleBuilder* InternalLocaleBuilder::setLanguage($String* language) {
	if ($LocaleUtils::isEmpty(language)) {
		$set(this, language, ""_s);
	} else {
		if (!$LanguageTag::isLanguage(language)) {
			$throwNew($LocaleSyntaxException, $$str({"Ill-formed language: "_s, language}), 0);
		}
		$set(this, language, language);
	}
	return this;
}

InternalLocaleBuilder* InternalLocaleBuilder::setScript($String* script) {
	if ($LocaleUtils::isEmpty(script)) {
		$set(this, script, ""_s);
	} else {
		if (!$LanguageTag::isScript(script)) {
			$throwNew($LocaleSyntaxException, $$str({"Ill-formed script: "_s, script}), 0);
		}
		$set(this, script, script);
	}
	return this;
}

InternalLocaleBuilder* InternalLocaleBuilder::setRegion($String* region) {
	if ($LocaleUtils::isEmpty(region)) {
		$set(this, region, ""_s);
	} else {
		if (!$LanguageTag::isRegion(region)) {
			$throwNew($LocaleSyntaxException, $$str({"Ill-formed region: "_s, region}), 0);
		}
		$set(this, region, region);
	}
	return this;
}

InternalLocaleBuilder* InternalLocaleBuilder::setVariant($String* variant) {
	$useLocalObjectStack();
	if ($LocaleUtils::isEmpty(variant)) {
		$set(this, variant, ""_s);
	} else {
		$init($LanguageTag);
		$init($BaseLocale);
		$var($String, var, $nc(variant)->replaceAll($LanguageTag::SEP, $BaseLocale::SEP));
		int32_t errIdx = checkVariants(var, $BaseLocale::SEP);
		if (errIdx != -1) {
			$throwNew($LocaleSyntaxException, $$str({"Ill-formed variant: "_s, variant}), errIdx);
		}
		$set(this, variant, var);
	}
	return this;
}

InternalLocaleBuilder* InternalLocaleBuilder::addUnicodeLocaleAttribute($String* attribute) {
	$useLocalObjectStack();
	if (!$UnicodeLocaleExtension::isAttribute(attribute)) {
		$throwNew($LocaleSyntaxException, $$str({"Ill-formed Unicode locale attribute: "_s, attribute}));
	}
	if (this->uattributes == nullptr) {
		$set(this, uattributes, $new($HashSet, 4));
	}
	$nc(this->uattributes)->add($$new($InternalLocaleBuilder$CaseInsensitiveString, attribute));
	return this;
}

InternalLocaleBuilder* InternalLocaleBuilder::removeUnicodeLocaleAttribute($String* attribute) {
	$useLocalObjectStack();
	if (attribute == nullptr || !$UnicodeLocaleExtension::isAttribute(attribute)) {
		$throwNew($LocaleSyntaxException, $$str({"Ill-formed Unicode locale attribute: "_s, attribute}));
	}
	if (this->uattributes != nullptr) {
		this->uattributes->remove($$new($InternalLocaleBuilder$CaseInsensitiveString, attribute));
	}
	return this;
}

InternalLocaleBuilder* InternalLocaleBuilder::setUnicodeLocaleKeyword($String* key, $String* type) {
	$useLocalObjectStack();
	if (!$UnicodeLocaleExtension::isKey(key)) {
		$throwNew($LocaleSyntaxException, $$str({"Ill-formed Unicode locale keyword key: "_s, key}));
	}
	$var($InternalLocaleBuilder$CaseInsensitiveString, cikey, $new($InternalLocaleBuilder$CaseInsensitiveString, key));
	if (type == nullptr) {
		if (this->ukeywords != nullptr) {
			this->ukeywords->remove(cikey);
		}
	} else {
		if (type->length() != 0) {
			$init($BaseLocale);
			$init($LanguageTag);
			$var($String, tp, type->replaceAll($BaseLocale::SEP, $LanguageTag::SEP));
			$var($StringTokenIterator, itr, $new($StringTokenIterator, tp, $LanguageTag::SEP));
			while (!itr->isDone()) {
				$var($String, s, itr->current());
				if (!$UnicodeLocaleExtension::isTypeSubtag(s)) {
					$throwNew($LocaleSyntaxException, $$str({"Ill-formed Unicode locale keyword type: "_s, type}), itr->currentStart());
				}
				itr->next();
			}
		}
		if (this->ukeywords == nullptr) {
			$set(this, ukeywords, $new($HashMap, 4));
		}
		$nc(this->ukeywords)->put(cikey, type);
	}
	return this;
}

InternalLocaleBuilder* InternalLocaleBuilder::setExtension(char16_t singleton, $String* value) {
	$useLocalObjectStack();
	bool isBcpPrivateuse = $LanguageTag::isPrivateusePrefixChar(singleton);
	if (!isBcpPrivateuse && !$LanguageTag::isExtensionSingletonChar(singleton)) {
		$throwNew($LocaleSyntaxException, $$str({"Ill-formed extension key: "_s, $$str(singleton)}));
	}
	bool remove = $LocaleUtils::isEmpty(value);
	$var($InternalLocaleBuilder$CaseInsensitiveChar, key, $new($InternalLocaleBuilder$CaseInsensitiveChar, singleton));
	if (remove) {
		if ($UnicodeLocaleExtension::isSingletonChar(key->value())) {
			if (this->uattributes != nullptr) {
				this->uattributes->clear();
			}
			if (this->ukeywords != nullptr) {
				this->ukeywords->clear();
			}
		} else if (this->extensions != nullptr && this->extensions->containsKey(key)) {
			this->extensions->remove(key);
		}
	} else {
		$init($BaseLocale);
		$var($String, val, $nc(value)->replaceAll($BaseLocale::SEP, $LanguageTag::SEP));
		$var($StringTokenIterator, itr, $new($StringTokenIterator, val, $LanguageTag::SEP));
		while (!itr->isDone()) {
			$var($String, s, itr->current());
			bool validSubtag = false;
			if (isBcpPrivateuse) {
				validSubtag = $LanguageTag::isPrivateuseSubtag(s);
			} else {
				validSubtag = $LanguageTag::isExtensionSubtag(s);
			}
			if (!validSubtag) {
				$throwNew($LocaleSyntaxException, $$str({"Ill-formed extension value: "_s, s}), itr->currentStart());
			}
			itr->next();
		}
		if ($UnicodeLocaleExtension::isSingletonChar(key->value())) {
			setUnicodeLocaleExtension(val);
		} else {
			if (this->extensions == nullptr) {
				$set(this, extensions, $new($HashMap, 4));
			}
			$nc(this->extensions)->put(key, val);
		}
	}
	return this;
}

InternalLocaleBuilder* InternalLocaleBuilder::setExtensions($String* subtags$renamed) {
	$useLocalObjectStack();
	$var($String, subtags, subtags$renamed);
	if ($LocaleUtils::isEmpty(subtags)) {
		clearExtensions();
		return this;
	}
	$init($BaseLocale);
	$init($LanguageTag);
	$assign(subtags, $nc(subtags)->replaceAll($BaseLocale::SEP, $LanguageTag::SEP));
	$var($StringTokenIterator, itr, $new($StringTokenIterator, subtags, $LanguageTag::SEP));
	$var($List, extensions, nullptr);
	$var($String, privateuse, nullptr);
	int32_t parsed = 0;
	int32_t start = 0;
	while (!itr->isDone()) {
		$var($String, s, itr->current());
		if ($LanguageTag::isExtensionSingleton(s)) {
			start = itr->currentStart();
			$var($String, singleton, s);
			$var($StringBuilder, sb, $new($StringBuilder, singleton));
			itr->next();
			while (!itr->isDone()) {
				$assign(s, itr->current());
				if ($LanguageTag::isExtensionSubtag(s)) {
					sb->append($LanguageTag::SEP)->append(s);
					parsed = itr->currentEnd();
				} else {
					break;
				}
				itr->next();
			}
			if (parsed < start) {
				$throwNew($LocaleSyntaxException, $$str({"Incomplete extension \'"_s, singleton, "\'"_s}), start);
			}
			if (extensions == nullptr) {
				$assign(extensions, $new($ArrayList, 4));
			}
			$nc(extensions)->add($(sb->toString()));
		} else {
			break;
		}
	}
	if (!itr->isDone()) {
		$var($String, s, itr->current());
		if ($LanguageTag::isPrivateusePrefix(s)) {
			start = itr->currentStart();
			$var($StringBuilder, sb, $new($StringBuilder, s));
			itr->next();
			while (!itr->isDone()) {
				$assign(s, itr->current());
				if (!$LanguageTag::isPrivateuseSubtag(s)) {
					break;
				}
				sb->append($LanguageTag::SEP)->append(s);
				parsed = itr->currentEnd();
				itr->next();
			}
			if (parsed <= start) {
				$throwNew($LocaleSyntaxException, $$str({"Incomplete privateuse:"_s, $(subtags->substring(start))}), start);
			} else {
				$assign(privateuse, sb->toString());
			}
		}
	}
	if (!itr->isDone()) {
		$var($String, var$0, $str({"Ill-formed extension subtags:"_s, $(subtags->substring(itr->currentStart()))}));
		$throwNew($LocaleSyntaxException, var$0, itr->currentStart());
	}
	return setExtensions(extensions, privateuse);
}

InternalLocaleBuilder* InternalLocaleBuilder::setExtensions($List* bcpExtensions, $String* privateuse) {
	$useLocalObjectStack();
	clearExtensions();
	if (!$LocaleUtils::isEmpty(bcpExtensions)) {
		$var($Set, done, $new($HashSet, $nc(bcpExtensions)->size()));
		{
			$var($Iterator, i$, bcpExtensions->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($String, bcpExt, $cast($String, i$->next()));
				{
					$var($InternalLocaleBuilder$CaseInsensitiveChar, key, $new($InternalLocaleBuilder$CaseInsensitiveChar, bcpExt));
					if (!done->contains(key)) {
						if ($UnicodeLocaleExtension::isSingletonChar(key->value())) {
							setUnicodeLocaleExtension($($nc(bcpExt)->substring(2)));
						} else {
							if (this->extensions == nullptr) {
								$set(this, extensions, $new($HashMap, 4));
							}
							$nc(this->extensions)->put(key, $($nc(bcpExt)->substring(2)));
						}
					}
					done->add(key);
				}
			}
		}
	}
	if (privateuse != nullptr && !privateuse->isEmpty()) {
		if (this->extensions == nullptr) {
			$set(this, extensions, $new($HashMap, 1));
		}
		$var($Object, var$0, $new($InternalLocaleBuilder$CaseInsensitiveChar, privateuse));
		$nc(this->extensions)->put(var$0, $(privateuse->substring(2)));
	}
	return this;
}

InternalLocaleBuilder* InternalLocaleBuilder::setLanguageTag($LanguageTag* langtag) {
	$useLocalObjectStack();
	clear();
	if (!$$nc($nc(langtag)->getExtlangs())->isEmpty()) {
		$set(this, language, $cast($String, $$nc(langtag->getExtlangs())->get(0)));
	} else {
		$var($String, lang, langtag->getLanguage());
		if (!$nc(lang)->equals($LanguageTag::UNDETERMINED)) {
			$set(this, language, lang);
		}
	}
	$set(this, script, langtag->getScript());
	$set(this, region, langtag->getRegion());
	$var($List, bcpVariants, langtag->getVariants());
	if (!$nc(bcpVariants)->isEmpty()) {
		$var($StringBuilder, var, $new($StringBuilder, $$cast($String, bcpVariants->get(0))));
		int32_t size = bcpVariants->size();
		for (int32_t i = 1; i < size; ++i) {
			$init($BaseLocale);
			var->append($BaseLocale::SEP)->append($$cast($String, bcpVariants->get(i)));
		}
		$set(this, variant, var->toString());
	}
	$var($List, var$0, langtag->getExtensions());
	setExtensions(var$0, $(langtag->getPrivateuse()));
	return this;
}

InternalLocaleBuilder* InternalLocaleBuilder::setLocale($BaseLocale* base, $LocaleExtensions* localeExtensions) {
	$useLocalObjectStack();
	$var($String, language, $nc(base)->getLanguage());
	$var($String, script, base->getScript());
	$var($String, region, base->getRegion());
	$var($String, variant, base->getVariant());
	bool var$1 = $nc(language)->equals("ja"_s);
	bool var$0 = var$1 && $nc(region)->equals("JP"_s);
	if (var$0 && $nc(variant)->equals("JP"_s)) {
		if (!InternalLocaleBuilder::$assertionsDisabled && !("japanese"_s->equals($($nc(localeExtensions)->getUnicodeLocaleType("ca"_s))))) {
			$throwNew($AssertionError);
		}
		$assign(variant, ""_s);
	} else {
		bool var$3 = language->equals("th"_s);
		bool var$2 = var$3 && $nc(region)->equals("TH"_s);
		if (var$2 && $nc(variant)->equals("TH"_s)) {
			if (!InternalLocaleBuilder::$assertionsDisabled && !("thai"_s->equals($($nc(localeExtensions)->getUnicodeLocaleType("nu"_s))))) {
				$throwNew($AssertionError);
			}
			$assign(variant, ""_s);
		} else {
			bool var$5 = language->equals("no"_s);
			bool var$4 = var$5 && $nc(region)->equals("NO"_s);
			if (var$4 && $nc(variant)->equals("NY"_s)) {
				$assign(language, "nn"_s);
				$assign(variant, ""_s);
			}
		}
	}
	bool var$6 = !language->isEmpty();
	if (var$6 && !$LanguageTag::isLanguage(language)) {
		$throwNew($LocaleSyntaxException, $$str({"Ill-formed language: "_s, language}));
	}
	bool var$7 = !$nc(script)->isEmpty();
	if (var$7 && !$LanguageTag::isScript(script)) {
		$throwNew($LocaleSyntaxException, $$str({"Ill-formed script: "_s, script}));
	}
	bool var$8 = !$nc(region)->isEmpty();
	if (var$8 && !$LanguageTag::isRegion(region)) {
		$throwNew($LocaleSyntaxException, $$str({"Ill-formed region: "_s, region}));
	}
	if (!$nc(variant)->isEmpty()) {
		int32_t errIdx = checkVariants(variant, $BaseLocale::SEP);
		if (errIdx != -1) {
			$throwNew($LocaleSyntaxException, $$str({"Ill-formed variant: "_s, variant}), errIdx);
		}
	}
	$set(this, language, language);
	$set(this, script, script);
	$set(this, region, region);
	$set(this, variant, variant);
	clearExtensions();
	$var($Set, extKeys, (localeExtensions == nullptr) ? ($Set*)nullptr : localeExtensions->getKeys());
	if (extKeys != nullptr) {
		$var($Iterator, i$, extKeys->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Character, key, $cast($Character, i$->next()));
			{
				$var($Extension, e, $nc(localeExtensions)->getExtension(key));
				if ($instanceOf($UnicodeLocaleExtension, e)) {
					$var($UnicodeLocaleExtension, ue, $cast($UnicodeLocaleExtension, e));
					{
						$var($Iterator, i$, $$nc(ue->getUnicodeLocaleAttributes())->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($String, uatr, $cast($String, i$->next()));
							{
								if (this->uattributes == nullptr) {
									$set(this, uattributes, $new($HashSet, 4));
								}
								$nc(this->uattributes)->add($$new($InternalLocaleBuilder$CaseInsensitiveString, uatr));
							}
						}
					}
					{
						$var($Iterator, i$, $$nc(ue->getUnicodeLocaleKeys())->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($String, ukey, $cast($String, i$->next()));
							{
								if (this->ukeywords == nullptr) {
									$set(this, ukeywords, $new($HashMap, 4));
								}
								$var($Object, var$9, $new($InternalLocaleBuilder$CaseInsensitiveString, ukey));
								$nc(this->ukeywords)->put(var$9, $(ue->getUnicodeLocaleType(ukey)));
							}
						}
					}
				} else {
					if (this->extensions == nullptr) {
						$set(this, extensions, $new($HashMap, 4));
					}
					$var($Object, var$10, $new($InternalLocaleBuilder$CaseInsensitiveChar, $nc(key)->charValue()));
					$nc(this->extensions)->put(var$10, $($nc(e)->getValue()));
				}
			}
		}
	}
	return this;
}

InternalLocaleBuilder* InternalLocaleBuilder::clear() {
	$set(this, language, ""_s);
	$set(this, script, ""_s);
	$set(this, region, ""_s);
	$set(this, variant, ""_s);
	clearExtensions();
	return this;
}

InternalLocaleBuilder* InternalLocaleBuilder::clearExtensions() {
	if (this->extensions != nullptr) {
		this->extensions->clear();
	}
	if (this->uattributes != nullptr) {
		this->uattributes->clear();
	}
	if (this->ukeywords != nullptr) {
		this->ukeywords->clear();
	}
	return this;
}

$BaseLocale* InternalLocaleBuilder::getBaseLocale() {
	$useLocalObjectStack();
	$var($String, language, this->language);
	$var($String, script, this->script);
	$var($String, region, this->region);
	$var($String, variant, this->variant);
	if (this->extensions != nullptr) {
		$var($String, privuse, $cast($String, this->extensions->get(InternalLocaleBuilder::PRIVATEUSE_KEY)));
		if (privuse != nullptr) {
			$init($LanguageTag);
			$var($StringTokenIterator, itr, $new($StringTokenIterator, privuse, $LanguageTag::SEP));
			bool sawPrefix = false;
			int32_t privVarStart = -1;
			while (!itr->isDone()) {
				if (sawPrefix) {
					privVarStart = itr->currentStart();
					break;
				}
				if ($LocaleUtils::caseIgnoreMatch($(itr->current()), $LanguageTag::PRIVUSE_VARIANT_PREFIX)) {
					sawPrefix = true;
				}
				itr->next();
			}
			if (privVarStart != -1) {
				$var($StringBuilder, sb, $new($StringBuilder, variant));
				if (sb->length() != 0) {
					$init($BaseLocale);
					sb->append($BaseLocale::SEP);
				}
				$init($BaseLocale);
				sb->append($($(privuse->substring(privVarStart))->replaceAll($LanguageTag::SEP, $BaseLocale::SEP)));
				$assign(variant, sb->toString());
			}
		}
	}
	return $BaseLocale::getInstance(language, script, region, variant);
}

$LocaleExtensions* InternalLocaleBuilder::getLocaleExtensions() {
	bool var$1 = $LocaleUtils::isEmpty(this->extensions);
	bool var$0 = var$1 && $LocaleUtils::isEmpty(this->uattributes);
	if (var$0 && $LocaleUtils::isEmpty(this->ukeywords)) {
		return nullptr;
	}
	$var($LocaleExtensions, lext, $new($LocaleExtensions, this->extensions, this->uattributes, this->ukeywords));
	return lext->isEmpty() ? ($LocaleExtensions*)nullptr : lext;
}

$String* InternalLocaleBuilder::removePrivateuseVariant($String* privuseVal) {
	$init(InternalLocaleBuilder);
	$useLocalObjectStack();
	$init($LanguageTag);
	$var($StringTokenIterator, itr, $new($StringTokenIterator, privuseVal, $LanguageTag::SEP));
	int32_t prefixStart = -1;
	bool sawPrivuseVar = false;
	while (!itr->isDone()) {
		if (prefixStart != -1) {
			sawPrivuseVar = true;
			break;
		}
		if ($LocaleUtils::caseIgnoreMatch($(itr->current()), $LanguageTag::PRIVUSE_VARIANT_PREFIX)) {
			prefixStart = itr->currentStart();
		}
		itr->next();
	}
	if (!sawPrivuseVar) {
		return privuseVal;
	}
	if (!InternalLocaleBuilder::$assertionsDisabled && !(prefixStart == 0 || prefixStart > 1)) {
		$throwNew($AssertionError);
	}
	return (prefixStart == 0) ? ($String*)nullptr : $nc(privuseVal)->substring(0, prefixStart - 1);
}

int32_t InternalLocaleBuilder::checkVariants($String* variants, $String* sep) {
	$useLocalObjectStack();
	$var($StringTokenIterator, itr, $new($StringTokenIterator, variants, sep));
	while (!itr->isDone()) {
		$var($String, s, itr->current());
		if (!$LanguageTag::isVariant(s)) {
			return itr->currentStart();
		}
		itr->next();
	}
	return -1;
}

void InternalLocaleBuilder::setUnicodeLocaleExtension($String* subtags) {
	$useLocalObjectStack();
	if (this->uattributes != nullptr) {
		this->uattributes->clear();
	}
	if (this->ukeywords != nullptr) {
		this->ukeywords->clear();
	}
	$init($LanguageTag);
	$var($StringTokenIterator, itr, $new($StringTokenIterator, subtags, $LanguageTag::SEP));
	while (!itr->isDone()) {
		if (!$UnicodeLocaleExtension::isAttribute($(itr->current()))) {
			break;
		}
		if (this->uattributes == nullptr) {
			$set(this, uattributes, $new($HashSet, 4));
		}
		$nc(this->uattributes)->add($$new($InternalLocaleBuilder$CaseInsensitiveString, $(itr->current())));
		itr->next();
	}
	$var($InternalLocaleBuilder$CaseInsensitiveString, key, nullptr);
	$var($String, type, nullptr);
	int32_t typeStart = -1;
	int32_t typeEnd = -1;
	while (!itr->isDone()) {
		if (key != nullptr) {
			if ($UnicodeLocaleExtension::isKey($(itr->current()))) {
				if (!InternalLocaleBuilder::$assertionsDisabled && !(typeStart == -1 || typeEnd != -1)) {
					$throwNew($AssertionError);
				}
				$assign(type, (typeStart == -1) ? ""_s : $nc(subtags)->substring(typeStart, typeEnd));
				if (this->ukeywords == nullptr) {
					$set(this, ukeywords, $new($HashMap, 4));
				}
				$nc(this->ukeywords)->put(key, type);
				$var($InternalLocaleBuilder$CaseInsensitiveString, tmpKey, $new($InternalLocaleBuilder$CaseInsensitiveString, $(itr->current())));
				$assign(key, $nc(this->ukeywords)->containsKey(tmpKey) ? ($InternalLocaleBuilder$CaseInsensitiveString*)nullptr : tmpKey);
				typeStart = (typeEnd = -1);
			} else {
				if (typeStart == -1) {
					typeStart = itr->currentStart();
				}
				typeEnd = itr->currentEnd();
			}
		} else if ($UnicodeLocaleExtension::isKey($(itr->current()))) {
			$assign(key, $new($InternalLocaleBuilder$CaseInsensitiveString, $(itr->current())));
			if (this->ukeywords != nullptr && this->ukeywords->containsKey(key)) {
				$assign(key, nullptr);
			}
		}
		if (!itr->hasNext()) {
			if (key != nullptr) {
				if (!InternalLocaleBuilder::$assertionsDisabled && !(typeStart == -1 || typeEnd != -1)) {
					$throwNew($AssertionError);
				}
				$assign(type, (typeStart == -1) ? ""_s : $nc(subtags)->substring(typeStart, typeEnd));
				if (this->ukeywords == nullptr) {
					$set(this, ukeywords, $new($HashMap, 4));
				}
				$nc(this->ukeywords)->put(key, type);
			}
			break;
		}
		itr->next();
	}
}

void InternalLocaleBuilder::clinit$($Class* clazz) {
	InternalLocaleBuilder::$assertionsDisabled = !InternalLocaleBuilder::class$->desiredAssertionStatus();
	$init($LanguageTag);
	$assignStatic(InternalLocaleBuilder::PRIVATEUSE_KEY, $new($InternalLocaleBuilder$CaseInsensitiveChar, $LanguageTag::PRIVATEUSE));
}

InternalLocaleBuilder::InternalLocaleBuilder() {
}

$Class* InternalLocaleBuilder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(InternalLocaleBuilder, $assertionsDisabled)},
		{"PRIVATEUSE_KEY", "Lsun/util/locale/InternalLocaleBuilder$CaseInsensitiveChar;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(InternalLocaleBuilder, PRIVATEUSE_KEY)},
		{"language", "Ljava/lang/String;", nullptr, $PRIVATE, $field(InternalLocaleBuilder, language)},
		{"script", "Ljava/lang/String;", nullptr, $PRIVATE, $field(InternalLocaleBuilder, script)},
		{"region", "Ljava/lang/String;", nullptr, $PRIVATE, $field(InternalLocaleBuilder, region)},
		{"variant", "Ljava/lang/String;", nullptr, $PRIVATE, $field(InternalLocaleBuilder, variant)},
		{"extensions", "Ljava/util/Map;", "Ljava/util/Map<Lsun/util/locale/InternalLocaleBuilder$CaseInsensitiveChar;Ljava/lang/String;>;", $PRIVATE, $field(InternalLocaleBuilder, extensions)},
		{"uattributes", "Ljava/util/Set;", "Ljava/util/Set<Lsun/util/locale/InternalLocaleBuilder$CaseInsensitiveString;>;", $PRIVATE, $field(InternalLocaleBuilder, uattributes)},
		{"ukeywords", "Ljava/util/Map;", "Ljava/util/Map<Lsun/util/locale/InternalLocaleBuilder$CaseInsensitiveString;Ljava/lang/String;>;", $PRIVATE, $field(InternalLocaleBuilder, ukeywords)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(InternalLocaleBuilder, init$, void)},
		{"addUnicodeLocaleAttribute", "(Ljava/lang/String;)Lsun/util/locale/InternalLocaleBuilder;", nullptr, $PUBLIC, $method(InternalLocaleBuilder, addUnicodeLocaleAttribute, InternalLocaleBuilder*, $String*), "sun.util.locale.LocaleSyntaxException"},
		{"checkVariants", "(Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PRIVATE, $method(InternalLocaleBuilder, checkVariants, int32_t, $String*, $String*)},
		{"clear", "()Lsun/util/locale/InternalLocaleBuilder;", nullptr, $PUBLIC, $method(InternalLocaleBuilder, clear, InternalLocaleBuilder*)},
		{"clearExtensions", "()Lsun/util/locale/InternalLocaleBuilder;", nullptr, $PUBLIC, $method(InternalLocaleBuilder, clearExtensions, InternalLocaleBuilder*)},
		{"getBaseLocale", "()Lsun/util/locale/BaseLocale;", nullptr, $PUBLIC, $method(InternalLocaleBuilder, getBaseLocale, $BaseLocale*)},
		{"getLocaleExtensions", "()Lsun/util/locale/LocaleExtensions;", nullptr, $PUBLIC, $method(InternalLocaleBuilder, getLocaleExtensions, $LocaleExtensions*)},
		{"removePrivateuseVariant", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $staticMethod(InternalLocaleBuilder, removePrivateuseVariant, $String*, $String*)},
		{"removeUnicodeLocaleAttribute", "(Ljava/lang/String;)Lsun/util/locale/InternalLocaleBuilder;", nullptr, $PUBLIC, $method(InternalLocaleBuilder, removeUnicodeLocaleAttribute, InternalLocaleBuilder*, $String*), "sun.util.locale.LocaleSyntaxException"},
		{"setExtension", "(CLjava/lang/String;)Lsun/util/locale/InternalLocaleBuilder;", nullptr, $PUBLIC, $method(InternalLocaleBuilder, setExtension, InternalLocaleBuilder*, char16_t, $String*), "sun.util.locale.LocaleSyntaxException"},
		{"setExtensions", "(Ljava/lang/String;)Lsun/util/locale/InternalLocaleBuilder;", nullptr, $PUBLIC, $method(InternalLocaleBuilder, setExtensions, InternalLocaleBuilder*, $String*), "sun.util.locale.LocaleSyntaxException"},
		{"setExtensions", "(Ljava/util/List;Ljava/lang/String;)Lsun/util/locale/InternalLocaleBuilder;", "(Ljava/util/List<Ljava/lang/String;>;Ljava/lang/String;)Lsun/util/locale/InternalLocaleBuilder;", $PRIVATE, $method(InternalLocaleBuilder, setExtensions, InternalLocaleBuilder*, $List*, $String*)},
		{"setLanguage", "(Ljava/lang/String;)Lsun/util/locale/InternalLocaleBuilder;", nullptr, $PUBLIC, $method(InternalLocaleBuilder, setLanguage, InternalLocaleBuilder*, $String*), "sun.util.locale.LocaleSyntaxException"},
		{"setLanguageTag", "(Lsun/util/locale/LanguageTag;)Lsun/util/locale/InternalLocaleBuilder;", nullptr, $PUBLIC, $method(InternalLocaleBuilder, setLanguageTag, InternalLocaleBuilder*, $LanguageTag*)},
		{"setLocale", "(Lsun/util/locale/BaseLocale;Lsun/util/locale/LocaleExtensions;)Lsun/util/locale/InternalLocaleBuilder;", nullptr, $PUBLIC, $method(InternalLocaleBuilder, setLocale, InternalLocaleBuilder*, $BaseLocale*, $LocaleExtensions*), "sun.util.locale.LocaleSyntaxException"},
		{"setRegion", "(Ljava/lang/String;)Lsun/util/locale/InternalLocaleBuilder;", nullptr, $PUBLIC, $method(InternalLocaleBuilder, setRegion, InternalLocaleBuilder*, $String*), "sun.util.locale.LocaleSyntaxException"},
		{"setScript", "(Ljava/lang/String;)Lsun/util/locale/InternalLocaleBuilder;", nullptr, $PUBLIC, $method(InternalLocaleBuilder, setScript, InternalLocaleBuilder*, $String*), "sun.util.locale.LocaleSyntaxException"},
		{"setUnicodeLocaleExtension", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(InternalLocaleBuilder, setUnicodeLocaleExtension, void, $String*)},
		{"setUnicodeLocaleKeyword", "(Ljava/lang/String;Ljava/lang/String;)Lsun/util/locale/InternalLocaleBuilder;", nullptr, $PUBLIC, $method(InternalLocaleBuilder, setUnicodeLocaleKeyword, InternalLocaleBuilder*, $String*, $String*), "sun.util.locale.LocaleSyntaxException"},
		{"setVariant", "(Ljava/lang/String;)Lsun/util/locale/InternalLocaleBuilder;", nullptr, $PUBLIC, $method(InternalLocaleBuilder, setVariant, InternalLocaleBuilder*, $String*), "sun.util.locale.LocaleSyntaxException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.util.locale.InternalLocaleBuilder$CaseInsensitiveChar", "sun.util.locale.InternalLocaleBuilder", "CaseInsensitiveChar", $STATIC | $FINAL},
		{"sun.util.locale.InternalLocaleBuilder$CaseInsensitiveString", "sun.util.locale.InternalLocaleBuilder", "CaseInsensitiveString", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.locale.InternalLocaleBuilder",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.util.locale.InternalLocaleBuilder$CaseInsensitiveChar,sun.util.locale.InternalLocaleBuilder$CaseInsensitiveString"
	};
	$loadClass(InternalLocaleBuilder, name, initialize, &classInfo$$, InternalLocaleBuilder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(InternalLocaleBuilder);
	});
	return class$;
}

$Class* InternalLocaleBuilder::class$ = nullptr;

		} // locale
	} // util
} // sun