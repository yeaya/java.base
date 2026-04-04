#include <java/util/regex/EmojiData.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace regex {

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
	return cp == 8252 || cp == 8265 || cp == 8482 || cp == 8505 || (cp >= 8596 && cp <= 8601) || cp == 8617 || cp == 8618 || cp == 8986 || cp == 8987 || cp == 9000 || cp == 9096 || cp == 9167 || (cp >= 9193 && cp <= 9203) || (cp >= 9208 && cp <= 9210) || cp == 9410 || cp == 9642 || cp == 9643 || cp == 9654 || cp == 9664 || (cp >= 9723 && cp <= 9726) || (cp >= 9728 && cp <= 9733) || (cp >= 9735 && cp <= 9746) || (cp >= 9748 && cp <= 9861) || (cp >= 9872 && cp <= 9989) || (cp >= 9992 && cp <= 10002) || cp == 10004 || cp == 10006 || cp == 10013 || cp == 10017 || cp == 10024 || cp == 10035 || cp == 10036 || cp == 10052 || cp == 10055 || cp == 10060 || cp == 10062 || (cp >= 10067 && cp <= 10069) || cp == 10071 || (cp >= 10083 && cp <= 10087) || (cp >= 10133 && cp <= 10135) || cp == 10145 || cp == 10160 || cp == 10175 || cp == 10548 || cp == 10549 || (cp >= 11013 && cp <= 11015) || cp == 11035 || cp == 11036 || cp == 11088 || cp == 11093 || cp == 12336 || cp == 12349 || cp == 12951 || cp == 12953 || (cp >= 0x0001f000 && cp <= 0x0001f0ff) || (cp >= 0x0001f10d && cp <= 0x0001f10f) || cp == 0x0001f12f || (cp >= 0x0001f16c && cp <= 0x0001f171) || cp == 0x0001f17e || cp == 0x0001f17f || cp == 0x0001f18e || (cp >= 0x0001f191 && cp <= 0x0001f19a) || (cp >= 0x0001f1ad && cp <= 0x0001f1e5) || (cp >= 0x0001f201 && cp <= 0x0001f20f) || cp == 0x0001f21a || cp == 0x0001f22f || (cp >= 0x0001f232 && cp <= 0x0001f23a) || (cp >= 0x0001f23c && cp <= 0x0001f23f) || (cp >= 0x0001f249 && cp <= 0x0001f3fa) || (cp >= 128000 && cp <= 0x0001f53d) || (cp >= 0x0001f546 && cp <= 0x0001f64f) || (cp >= 0x0001f680 && cp <= 0x0001f6ff) || (cp >= 0x0001f774 && cp <= 0x0001f77f) || (cp >= 0x0001f7d5 && cp <= 0x0001f7ff) || (cp >= 0x0001f80c && cp <= 0x0001f80f) || (cp >= 0x0001f848 && cp <= 0x0001f84f) || (cp >= 0x0001f85a && cp <= 0x0001f85f) || (cp >= 0x0001f888 && cp <= 0x0001f88f) || (cp >= 0x0001f8ae && cp <= 0x0001f8ff) || (cp >= 0x0001f90c && cp <= 0x0001f93a) || (cp >= 0x0001f93c && cp <= 0x0001f945) || (cp >= 0x0001f947 && cp <= 0x0001faff) || (cp >= 0x0001fc00 && cp <= 0x0001fffd);
}

EmojiData::EmojiData() {
}

$Class* EmojiData::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(EmojiData, init$, void)},
		{"isExtendedPictographic", "(I)Z", nullptr, $STATIC, $staticMethod(EmojiData, isExtendedPictographic, bool, int32_t)},
		{"isHigh", "(I)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(EmojiData, isHigh, bool, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.regex.EmojiData",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(EmojiData, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EmojiData);
	});
	return class$;
}

$Class* EmojiData::class$ = nullptr;

		} // regex
	} // util
} // java