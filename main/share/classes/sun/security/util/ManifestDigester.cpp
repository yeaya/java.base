#include <sun/security/util/ManifestDigester.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/StandardCharsets.h>
#include <java/security/MessageDigest.h>
#include <java/util/HashMap.h>
#include <java/util/function/Function.h>
#include <sun/security/util/ManifestDigester$Entry.h>
#include <sun/security/util/ManifestDigester$Position.h>
#include <sun/security/util/ManifestDigester$Section.h>
#include <jcpp.h>

#undef MF_MAIN_ATTRS
#undef MIN_VALUE
#undef UNASSIGNED
#undef UTF_8

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;
using $MessageDigest = ::java::security::MessageDigest;
using $HashMap = ::java::util::HashMap;
using $Function = ::java::util::function::Function;
using $ManifestDigester$Entry = ::sun::security::util::ManifestDigester$Entry;
using $ManifestDigester$Position = ::sun::security::util::ManifestDigester$Position;
using $ManifestDigester$Section = ::sun::security::util::ManifestDigester$Section;

namespace sun {
	namespace security {
		namespace util {

class ManifestDigester$$Lambda$lambda$new$0 : public $Function {
	$class(ManifestDigester$$Lambda$lambda$new$0, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* dummy) override {
		 return ManifestDigester::lambda$new$0($cast($String, dummy));
	}
};
$Class* ManifestDigester$$Lambda$lambda$new$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ManifestDigester$$Lambda$lambda$new$0, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ManifestDigester$$Lambda$lambda$new$0, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.security.util.ManifestDigester$$Lambda$lambda$new$0",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(ManifestDigester$$Lambda$lambda$new$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ManifestDigester$$Lambda$lambda$new$0);
	});
	return class$;
}
$Class* ManifestDigester$$Lambda$lambda$new$0::class$ = nullptr;

$String* ManifestDigester::MF_MAIN_ATTRS = nullptr;

bool ManifestDigester::findSection(int32_t offset, $ManifestDigester$Position* pos) {
	int32_t i = offset;
	int32_t len = $nc(this->rawBytes)->length;
	int32_t last = offset - 1;
	int32_t next = 0;
	bool allBlank = true;
	int32_t UNASSIGNED = $Integer::MIN_VALUE;
	$nc(pos)->endOfFirstLine = UNASSIGNED;
	while (i < len) {
		int8_t b = this->rawBytes->get(i);
		switch (b) {
		case u'\r':
			if (pos->endOfFirstLine == UNASSIGNED) {
				pos->endOfFirstLine = i - 1;
			}
			if (i < len - 1 && this->rawBytes->get(i + 1) == u'\n') {
				++i;
			}
		case u'\n':
			if (pos->endOfFirstLine == UNASSIGNED) {
				pos->endOfFirstLine = i - 1;
			}
			if (allBlank || (i == len - 1)) {
				pos->endOfSection = allBlank ? last : i;
				pos->startOfNext = i + 1;
				return true;
			} else {
				last = i;
				allBlank = true;
			}
			break;
		default:
			allBlank = false;
			break;
		}
		++i;
	}
	return false;
}

void ManifestDigester::init$($bytes* bytes) {
	$useLocalObjectStack();
	$set(this, entries, $new($HashMap));
	$set(this, rawBytes, bytes);
	$var($ManifestDigester$Position, pos, $new($ManifestDigester$Position));
	if (!findSection(0, pos)) {
		$set(this, mainAttsEntry, nullptr);
		return;
	}
	$set(this, mainAttsEntry, $$new($ManifestDigester$Entry)->addSection($$new($ManifestDigester$Section, 0, pos->endOfSection + 1, pos->startOfNext, this->rawBytes)));
	int32_t start = pos->startOfNext;
	while (findSection(start, pos)) {
		int32_t len = pos->endOfFirstLine - start + 1;
		int32_t sectionLen = pos->endOfSection - start + 1;
		int32_t sectionLenWithBlank = pos->startOfNext - start;
		if (len >= 6) {
			if (isNameAttr(bytes, start)) {
				$var($ByteArrayOutputStream, nameBuf, $new($ByteArrayOutputStream));
				nameBuf->write(bytes, start + 6, len - 6);
				int32_t i = start + len;
				if ((i - start) < sectionLen) {
					if ($nc(bytes)->get(i) == u'\r' && i + 1 - start < sectionLen && bytes->get(i + 1) == u'\n') {
						i += 2;
					} else {
						i += 1;
					}
				}
				while ((i - start) < sectionLen) {
					if ($nc(bytes)->get(i++) == u' ') {
						int32_t wrapStart = i;
						while (((i - start) < sectionLen) && (bytes->get(i) != u'\r') && (bytes->get(i) != u'\n')) {
							++i;
						}
						int32_t wrapLen = i - wrapStart;
						if (i - start < sectionLen) {
							++i;
							if (bytes->get(i - 1) == u'\r' && i - start < sectionLen && bytes->get(i) == u'\n') {
								++i;
							}
						}
						nameBuf->write(bytes, wrapStart, wrapLen);
					} else {
						break;
					}
				}
				$init($StandardCharsets);
				$var($Object, var$0, nameBuf->toString($StandardCharsets::UTF_8));
				$$sure($ManifestDigester$Entry, this->entries->computeIfAbsent(var$0, $$new(ManifestDigester$$Lambda$lambda$new$0)))->addSection($$new($ManifestDigester$Section, start, sectionLen, sectionLenWithBlank, this->rawBytes));
			}
		}
		start = pos->startOfNext;
	}
}

bool ManifestDigester::isNameAttr($bytes* bytes, int32_t start) {
	return (($nc(bytes)->get(start) == u'N') || (bytes->get(start) == u'n')) && ((bytes->get(start + 1) == u'a') || (bytes->get(start + 1) == u'A')) && ((bytes->get(start + 2) == u'm') || (bytes->get(start + 2) == u'M')) && ((bytes->get(start + 3) == u'e') || (bytes->get(start + 3) == u'E')) && (bytes->get(start + 4) == u':') && (bytes->get(start + 5) == u' ');
}

$ManifestDigester$Entry* ManifestDigester::getMainAttsEntry() {
	return this->mainAttsEntry;
}

$ManifestDigester$Entry* ManifestDigester::getMainAttsEntry(bool oldStyle) {
	$nc(this->mainAttsEntry)->oldStyle = oldStyle;
	return this->mainAttsEntry;
}

$ManifestDigester$Entry* ManifestDigester::get($String* name) {
	return $cast($ManifestDigester$Entry, this->entries->get(name));
}

$ManifestDigester$Entry* ManifestDigester::get($String* name, bool oldStyle) {
	$var($ManifestDigester$Entry, e, get(name));
	if (e == nullptr && ManifestDigester::MF_MAIN_ATTRS->equals(name)) {
		$assign(e, getMainAttsEntry());
	}
	if (e != nullptr) {
		e->oldStyle = oldStyle;
	}
	return e;
}

$bytes* ManifestDigester::manifestDigest($MessageDigest* md) {
	$nc(md)->reset();
	md->update(this->rawBytes, 0, $nc(this->rawBytes)->length);
	return md->digest();
}

$ManifestDigester$Entry* ManifestDigester::lambda$new$0($String* dummy) {
	$init(ManifestDigester);
	return $new($ManifestDigester$Entry);
}

ManifestDigester::ManifestDigester() {
}

void ManifestDigester::clinit$($Class* clazz) {
	$assignStatic(ManifestDigester::MF_MAIN_ATTRS, "Manifest-Main-Attributes"_s);
}

$Class* ManifestDigester::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("sun.security.util.ManifestDigester$$Lambda$lambda$new$0")) {
			return ManifestDigester$$Lambda$lambda$new$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"MF_MAIN_ATTRS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ManifestDigester, MF_MAIN_ATTRS)},
		{"rawBytes", "[B", nullptr, $PRIVATE | $FINAL, $field(ManifestDigester, rawBytes)},
		{"mainAttsEntry", "Lsun/security/util/ManifestDigester$Entry;", nullptr, $PRIVATE | $FINAL, $field(ManifestDigester, mainAttsEntry)},
		{"entries", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Lsun/security/util/ManifestDigester$Entry;>;", $PRIVATE | $FINAL, $field(ManifestDigester, entries)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([B)V", nullptr, $PUBLIC, $method(ManifestDigester, init$, void, $bytes*)},
		{"findSection", "(ILsun/security/util/ManifestDigester$Position;)Z", nullptr, $PRIVATE, $method(ManifestDigester, findSection, bool, int32_t, $ManifestDigester$Position*)},
		{"get", "(Ljava/lang/String;)Lsun/security/util/ManifestDigester$Entry;", nullptr, $PUBLIC, $virtualMethod(ManifestDigester, get, $ManifestDigester$Entry*, $String*)},
		{"get", "(Ljava/lang/String;Z)Lsun/security/util/ManifestDigester$Entry;", nullptr, $PUBLIC, $virtualMethod(ManifestDigester, get, $ManifestDigester$Entry*, $String*, bool)},
		{"getMainAttsEntry", "()Lsun/security/util/ManifestDigester$Entry;", nullptr, $PUBLIC, $virtualMethod(ManifestDigester, getMainAttsEntry, $ManifestDigester$Entry*)},
		{"getMainAttsEntry", "(Z)Lsun/security/util/ManifestDigester$Entry;", nullptr, $PUBLIC, $virtualMethod(ManifestDigester, getMainAttsEntry, $ManifestDigester$Entry*, bool)},
		{"isNameAttr", "([BI)Z", nullptr, $PRIVATE, $method(ManifestDigester, isNameAttr, bool, $bytes*, int32_t)},
		{"lambda$new$0", "(Ljava/lang/String;)Lsun/security/util/ManifestDigester$Entry;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ManifestDigester, lambda$new$0, $ManifestDigester$Entry*, $String*)},
		{"manifestDigest", "(Ljava/security/MessageDigest;)[B", nullptr, $PUBLIC, $virtualMethod(ManifestDigester, manifestDigest, $bytes*, $MessageDigest*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.util.ManifestDigester$Section", "sun.security.util.ManifestDigester", "Section", $PRIVATE | $STATIC},
		{"sun.security.util.ManifestDigester$Entry", "sun.security.util.ManifestDigester", "Entry", $PUBLIC | $STATIC},
		{"sun.security.util.ManifestDigester$Position", "sun.security.util.ManifestDigester", "Position", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.util.ManifestDigester",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.security.util.ManifestDigester$Section,sun.security.util.ManifestDigester$Entry,sun.security.util.ManifestDigester$Position"
	};
	$loadClass(ManifestDigester, name, initialize, &classInfo$$, ManifestDigester::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ManifestDigester);
	});
	return class$;
}

$Class* ManifestDigester::class$ = nullptr;

		} // util
	} // security
} // sun