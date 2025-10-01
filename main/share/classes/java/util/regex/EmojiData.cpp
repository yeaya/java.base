#include <java/util/regex/EmojiData.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace regex {

$MethodInfo _EmojiData_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(EmojiData::*)()>(&EmojiData::init$))},
	{"isExtendedPictographic", "(I)Z", nullptr, $STATIC, $method(static_cast<bool(*)(int32_t)>(&EmojiData::isExtendedPictographic))},
	{"isHigh", "(I)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(int32_t)>(&EmojiData::isHigh))},
	{}
};

$ClassInfo _EmojiData_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.regex.EmojiData",
	"java.lang.Object",
	nullptr,
	nullptr,
	_EmojiData_MethodInfo_
};

$Object* allocate$EmojiData($Class* clazz) {
	return $of($alloc(EmojiData));
}

void EmojiData::init$() {
}

bool EmojiData::isExtendedPictographic(int32_t cp) {
	if (cp < 8192) {
		return cp == 169 || cp == 174;
	} else {
		return isHigh(cp);
	}
}

bool EmojiData::isHigh(int32_t cp) {
	return cp == 8252 || cp == 8265 || cp == 8482 || cp == 8505 || (cp >= 8596 && cp <= 8601) || cp == 8617 || cp == 8618 || cp == 8986 || cp == 8987 || cp == 9000 || cp == 9096 || cp == 9167 || (cp >= 9193 && cp <= 9203) || (cp >= 9208 && cp <= 9210) || cp == 9410 || cp == 9642 || cp == 9643 || cp == 9654 || cp == 9664 || (cp >= 9723 && cp <= 9726) || (cp >= 9728 && cp <= 9733) || (cp >= 9735 && cp <= 9746) || (cp >= 9748 && cp <= 9861) || (cp >= 9872 && cp <= 9989) || (cp >= 9992 && cp <= 10002) || cp == 10004 || cp == 10006 || cp == 10013 || cp == 10017 || cp == 10024 || cp == 10035 || cp == 10036 || cp == 10052 || cp == 10055 || cp == 10060 || cp == 10062 || (cp >= 10067 && cp <= 10069) || cp == 10071 || (cp >= 10083 && cp <= 10087) || (cp >= 10133 && cp <= 10135) || cp == 10145 || cp == 10160 || cp == 10175 || cp == 10548 || cp == 10549 || (cp >= 11013 && cp <= 11015) || cp == 11035 || cp == 11036 || cp == 11088 || cp == 11093 || cp == 12336 || cp == 12349 || cp == 12951 || cp == 12953 || (cp >= 0x0001F000 && cp <= 0x0001F0FF) || (cp >= 0x0001F10D && cp <= 0x0001F10F) || cp == 0x0001F12F || (cp >= 0x0001F16C && cp <= 0x0001F171) || cp == 0x0001F17E || cp == 0x0001F17F || cp == 0x0001F18E || (cp >= 0x0001F191 && cp <= 0x0001F19A) || (cp >= 0x0001F1AD && cp <= 0x0001F1E5) || (cp >= 0x0001F201 && cp <= 0x0001F20F) || cp == 0x0001F21A || cp == 0x0001F22F || (cp >= 0x0001F232 && cp <= 0x0001F23A) || (cp >= 0x0001F23C && cp <= 0x0001F23F) || (cp >= 0x0001F249 && cp <= 0x0001F3FA) || (cp >= 0x0001F400 && cp <= 0x0001F53D) || (cp >= 0x0001F546 && cp <= 0x0001F64F) || (cp >= 0x0001F680 && cp <= 0x0001F6FF) || (cp >= 0x0001F774 && cp <= 0x0001F77F) || (cp >= 0x0001F7D5 && cp <= 0x0001F7FF) || (cp >= 0x0001F80C && cp <= 0x0001F80F) || (cp >= 0x0001F848 && cp <= 0x0001F84F) || (cp >= 0x0001F85A && cp <= 0x0001F85F) || (cp >= 0x0001F888 && cp <= 0x0001F88F) || (cp >= 0x0001F8AE && cp <= 0x0001F8FF) || (cp >= 0x0001F90C && cp <= 0x0001F93A) || (cp >= 0x0001F93C && cp <= 0x0001F945) || (cp >= 0x0001F947 && cp <= 0x0001FAFF) || (cp >= 0x0001FC00 && cp <= 0x0001FFFD);
}

EmojiData::EmojiData() {
}

$Class* EmojiData::load$($String* name, bool initialize) {
	$loadClass(EmojiData, name, initialize, &_EmojiData_ClassInfo_, allocate$EmojiData);
	return class$;
}

$Class* EmojiData::class$ = nullptr;

		} // regex
	} // util
} // java