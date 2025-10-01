#include <jdk/internal/icu/text/ReplaceableString.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $Replaceable = ::jdk::internal::icu::text::Replaceable;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

$FieldInfo _ReplaceableString_FieldInfo_[] = {
	{"buf", "Ljava/lang/StringBuffer;", nullptr, $PRIVATE, $field(ReplaceableString, buf)},
	{}
};

$MethodInfo _ReplaceableString_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ReplaceableString::*)($String*)>(&ReplaceableString::init$))},
	{"<init>", "(Ljava/lang/StringBuffer;)V", nullptr, $PUBLIC, $method(static_cast<void(ReplaceableString::*)($StringBuffer*)>(&ReplaceableString::init$))},
	{"charAt", "(I)C", nullptr, $PUBLIC},
	{"getChars", "(II[CI)V", nullptr, $PUBLIC},
	{"length", "()I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ReplaceableString_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.icu.text.ReplaceableString",
	"java.lang.Object",
	"jdk.internal.icu.text.Replaceable",
	_ReplaceableString_FieldInfo_,
	_ReplaceableString_MethodInfo_
};

$Object* allocate$ReplaceableString($Class* clazz) {
	return $of($alloc(ReplaceableString));
}

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
	$loadClass(ReplaceableString, name, initialize, &_ReplaceableString_ClassInfo_, allocate$ReplaceableString);
	return class$;
}

$Class* ReplaceableString::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk