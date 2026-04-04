#include <jdk/internal/icu/text/ReplaceableString.h>
#include <java/lang/StringBuffer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

void ReplaceableString::init$($String* str) {
	$set(this, buf, $new($StringBuffer, str));
}

void ReplaceableString::init$($StringBuffer* buf) {
	$set(this, buf, buf);
}

int32_t ReplaceableString::length() {
	return $nc(this->buf)->length();
}

char16_t ReplaceableString::charAt(int32_t offset) {
	return $nc(this->buf)->charAt(offset);
}

void ReplaceableString::getChars(int32_t srcStart, int32_t srcLimit, $chars* dst, int32_t dstStart) {
	if (srcStart != srcLimit) {
		$nc(this->buf)->getChars(srcStart, srcLimit, dst, dstStart);
	}
}

ReplaceableString::ReplaceableString() {
}

$Class* ReplaceableString::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"buf", "Ljava/lang/StringBuffer;", nullptr, $PRIVATE, $field(ReplaceableString, buf)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ReplaceableString, init$, void, $String*)},
		{"<init>", "(Ljava/lang/StringBuffer;)V", nullptr, $PUBLIC, $method(ReplaceableString, init$, void, $StringBuffer*)},
		{"charAt", "(I)C", nullptr, $PUBLIC, $virtualMethod(ReplaceableString, charAt, char16_t, int32_t)},
		{"getChars", "(II[CI)V", nullptr, $PUBLIC, $virtualMethod(ReplaceableString, getChars, void, int32_t, int32_t, $chars*, int32_t)},
		{"length", "()I", nullptr, $PUBLIC, $virtualMethod(ReplaceableString, length, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.icu.text.ReplaceableString",
		"java.lang.Object",
		"jdk.internal.icu.text.Replaceable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ReplaceableString, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReplaceableString);
	});
	return class$;
}

$Class* ReplaceableString::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk