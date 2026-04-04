#include <sun/security/util/ManifestDigester$Section.h>
#include <java/security/MessageDigest.h>
#include <sun/security/util/ManifestDigester.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MessageDigest = ::java::security::MessageDigest;

namespace sun {
	namespace security {
		namespace util {

void ManifestDigester$Section::init$(int32_t offset, int32_t length, int32_t lengthWithBlankLine, $bytes* rawBytes) {
	this->offset = offset;
	this->length = length;
	this->lengthWithBlankLine = lengthWithBlankLine;
	$set(this, rawBytes, rawBytes);
}

bool ManifestDigester$Section::isProperlySectionDelimited() {
	return this->lengthWithBlankLine > this->length;
}

void ManifestDigester$Section::doOldStyle($MessageDigest* md, $bytes* bytes, int32_t offset, int32_t length) {
	int32_t i = offset;
	int32_t start = offset;
	int32_t max = offset + length;
	int32_t prev = -1;
	while (i < max) {
		if (($nc(bytes)->get(i) == u'\r') && (prev == u' ')) {
			$nc(md)->update(bytes, start, i - start - 1);
			start = i;
		}
		prev = bytes->get(i);
		++i;
	}
	$nc(md)->update(bytes, start, i - start);
}

ManifestDigester$Section::ManifestDigester$Section() {
}

$Class* ManifestDigester$Section::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"offset", "I", nullptr, 0, $field(ManifestDigester$Section, offset)},
		{"length", "I", nullptr, 0, $field(ManifestDigester$Section, length)},
		{"lengthWithBlankLine", "I", nullptr, 0, $field(ManifestDigester$Section, lengthWithBlankLine)},
		{"rawBytes", "[B", nullptr, 0, $field(ManifestDigester$Section, rawBytes)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(III[B)V", nullptr, $PUBLIC, $method(ManifestDigester$Section, init$, void, int32_t, int32_t, int32_t, $bytes*)},
		{"doOldStyle", "(Ljava/security/MessageDigest;[BII)V", nullptr, $PRIVATE | $STATIC, $staticMethod(ManifestDigester$Section, doOldStyle, void, $MessageDigest*, $bytes*, int32_t, int32_t)},
		{"isProperlySectionDelimited", "()Z", nullptr, $PRIVATE, $method(ManifestDigester$Section, isProperlySectionDelimited, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.util.ManifestDigester$Section", "sun.security.util.ManifestDigester", "Section", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.util.ManifestDigester$Section",
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
		"sun.security.util.ManifestDigester"
	};
	$loadClass(ManifestDigester$Section, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ManifestDigester$Section);
	});
	return class$;
}

$Class* ManifestDigester$Section::class$ = nullptr;

		} // util
	} // security
} // sun