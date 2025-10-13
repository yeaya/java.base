#include <sun/security/util/ManifestDigester.h>

#include <java/io/ByteArrayOutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Charset = ::java::nio::charset::Charset;
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
		 return $of(ManifestDigester::lambda$new$0($cast($String, dummy)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ManifestDigester$$Lambda$lambda$new$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ManifestDigester$$Lambda$lambda$new$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ManifestDigester$$Lambda$lambda$new$0::*)()>(&ManifestDigester$$Lambda$lambda$new$0::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ManifestDigester$$Lambda$lambda$new$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.security.util.ManifestDigester$$Lambda$lambda$new$0",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* ManifestDigester$$Lambda$lambda$new$0::load$($String* name, bool initialize) {
	$loadClass(ManifestDigester$$Lambda$lambda$new$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ManifestDigester$$Lambda$lambda$new$0::class$ = nullptr;

$FieldInfo _ManifestDigester_FieldInfo_[] = {
	{"MF_MAIN_ATTRS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ManifestDigester, MF_MAIN_ATTRS)},
	{"rawBytes", "[B", nullptr, $PRIVATE | $FINAL, $field(ManifestDigester, rawBytes)},
	{"mainAttsEntry", "Lsun/security/util/ManifestDigester$Entry;", nullptr, $PRIVATE | $FINAL, $field(ManifestDigester, mainAttsEntry)},
	{"entries", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Lsun/security/util/ManifestDigester$Entry;>;", $PRIVATE | $FINAL, $field(ManifestDigester, entries)},
	{}
};

$MethodInfo _ManifestDigester_MethodInfo_[] = {
	{"<init>", "([B)V", nullptr, $PUBLIC, $method(static_cast<void(ManifestDigester::*)($bytes*)>(&ManifestDigester::init$))},
	{"findSection", "(ILsun/security/util/ManifestDigester$Position;)Z", nullptr, $PRIVATE, $method(static_cast<bool(ManifestDigester::*)(int32_t,$ManifestDigester$Position*)>(&ManifestDigester::findSection))},
	{"get", "(Ljava/lang/String;)Lsun/security/util/ManifestDigester$Entry;", nullptr, $PUBLIC},
	{"get", "(Ljava/lang/String;Z)Lsun/security/util/ManifestDigester$Entry;", nullptr, $PUBLIC},
	{"getMainAttsEntry", "()Lsun/security/util/ManifestDigester$Entry;", nullptr, $PUBLIC},
	{"getMainAttsEntry", "(Z)Lsun/security/util/ManifestDigester$Entry;", nullptr, $PUBLIC},
	{"isNameAttr", "([BI)Z", nullptr, $PRIVATE, $method(static_cast<bool(ManifestDigester::*)($bytes*,int32_t)>(&ManifestDigester::isNameAttr))},
	{"lambda$new$0", "(Ljava/lang/String;)Lsun/security/util/ManifestDigester$Entry;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$ManifestDigester$Entry*(*)($String*)>(&ManifestDigester::lambda$new$0))},
	{"manifestDigest", "(Ljava/security/MessageDigest;)[B", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ManifestDigester_InnerClassesInfo_[] = {
	{"sun.security.util.ManifestDigester$Section", "sun.security.util.ManifestDigester", "Section", $PRIVATE | $STATIC},
	{"sun.security.util.ManifestDigester$Entry", "sun.security.util.ManifestDigester", "Entry", $PUBLIC | $STATIC},
	{"sun.security.util.ManifestDigester$Position", "sun.security.util.ManifestDigester", "Position", $STATIC},
	{}
};

$ClassInfo _ManifestDigester_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.util.ManifestDigester",
	"java.lang.Object",
	nullptr,
	_ManifestDigester_FieldInfo_,
	_ManifestDigester_MethodInfo_,
	nullptr,
	nullptr,
	_ManifestDigester_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.util.ManifestDigester$Section,sun.security.util.ManifestDigester$Entry,sun.security.util.ManifestDigester$Position"
};

$Object* allocate$ManifestDigester($Class* clazz) {
	return $of($alloc(ManifestDigester));
}


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
		int8_t b = $nc(this->rawBytes)->get(i);
		switch (b) {
		case u'\r':
			{
				if (pos->endOfFirstLine == UNASSIGNED) {
					pos->endOfFirstLine = i - 1;
				}
				if (i < len - 1 && $nc(this->rawBytes)->get(i + 1) == u'\n') {
					++i;
				}
			}
		case u'\n':
			{
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
			}
		default:
			{
				allBlank = false;
				break;
			}
		}
		++i;
	}
	return false;
}

void ManifestDigester::init$($bytes* bytes) {
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
				$var($Object, var$0, $of(nameBuf->toString($StandardCharsets::UTF_8)));
				$nc(($cast($ManifestDigester$Entry, $($nc(this->entries)->computeIfAbsent(var$0, static_cast<$Function*>($$new(ManifestDigester$$Lambda$lambda$new$0)))))))->addSection($$new($ManifestDigester$Section, start, sectionLen, sectionLenWithBlank, this->rawBytes));
			}
		}
		start = pos->startOfNext;
	}
}

bool ManifestDigester::isNameAttr($bytes* bytes, int32_t start) {
	return (($nc(bytes)->get(start) == u'N') || ($nc(bytes)->get(start) == u'n')) && ((bytes->get(start + 1) == u'a') || ($nc(bytes)->get(start + 1) == u'A')) && ((bytes->get(start + 2) == u'm') || ($nc(bytes)->get(start + 2) == u'M')) && ((bytes->get(start + 3) == u'e') || ($nc(bytes)->get(start + 3) == u'E')) && (bytes->get(start + 4) == u':') && (bytes->get(start + 5) == u' ');
}

$ManifestDigester$Entry* ManifestDigester::getMainAttsEntry() {
	return this->mainAttsEntry;
}

$ManifestDigester$Entry* ManifestDigester::getMainAttsEntry(bool oldStyle) {
	$nc(this->mainAttsEntry)->oldStyle = oldStyle;
	return this->mainAttsEntry;
}

$ManifestDigester$Entry* ManifestDigester::get($String* name) {
	return $cast($ManifestDigester$Entry, $nc(this->entries)->get(name));
}

$ManifestDigester$Entry* ManifestDigester::get($String* name, bool oldStyle) {
	$var($ManifestDigester$Entry, e, get(name));
	if (e == nullptr && $nc(ManifestDigester::MF_MAIN_ATTRS)->equals(name)) {
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

void clinit$ManifestDigester($Class* class$) {
	$assignStatic(ManifestDigester::MF_MAIN_ATTRS, "Manifest-Main-Attributes"_s);
}

$Class* ManifestDigester::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ManifestDigester$$Lambda$lambda$new$0::classInfo$.name)) {
			return ManifestDigester$$Lambda$lambda$new$0::load$(name, initialize);
		}
	}
	$loadClass(ManifestDigester, name, initialize, &_ManifestDigester_ClassInfo_, clinit$ManifestDigester, allocate$ManifestDigester);
	return class$;
}

$Class* ManifestDigester::class$ = nullptr;

		} // util
	} // security
} // sun