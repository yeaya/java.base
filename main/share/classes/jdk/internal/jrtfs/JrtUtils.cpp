#include <jdk/internal/jrtfs/JrtUtils.h>

#include <java/util/regex/PatternSyntaxException.h>
#include <jcpp.h>

#undef EOL

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PatternSyntaxException = ::java::util::regex::PatternSyntaxException;

namespace jdk {
	namespace internal {
		namespace jrtfs {

$FieldInfo _JrtUtils_FieldInfo_[] = {
	{"regexMetaChars", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JrtUtils, regexMetaChars)},
	{"globMetaChars", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JrtUtils, globMetaChars)},
	{"EOL", "C", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JrtUtils, EOL)},
	{}
};

$MethodInfo _JrtUtils_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(JrtUtils::*)()>(&JrtUtils::init$))},
	{"isGlobMeta", "(C)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(char16_t)>(&JrtUtils::isGlobMeta))},
	{"isRegexMeta", "(C)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(char16_t)>(&JrtUtils::isRegexMeta))},
	{"next", "(Ljava/lang/String;I)C", nullptr, $PRIVATE | $STATIC, $method(static_cast<char16_t(*)($String*,int32_t)>(&JrtUtils::next))},
	{"toRegexPattern", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*)>(&JrtUtils::toRegexPattern))},
	{}
};

$ClassInfo _JrtUtils_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.jrtfs.JrtUtils",
	"java.lang.Object",
	nullptr,
	_JrtUtils_FieldInfo_,
	_JrtUtils_MethodInfo_
};

$Object* allocate$JrtUtils($Class* clazz) {
	return $of($alloc(JrtUtils));
}

$String* JrtUtils::regexMetaChars = nullptr;
$String* JrtUtils::globMetaChars = nullptr;

void JrtUtils::init$() {
}

bool JrtUtils::isRegexMeta(char16_t c) {
	$init(JrtUtils);
	return $nc(JrtUtils::regexMetaChars)->indexOf((int32_t)c) != -1;
}

bool JrtUtils::isGlobMeta(char16_t c) {
	$init(JrtUtils);
	return $nc(JrtUtils::globMetaChars)->indexOf((int32_t)c) != -1;
}

char16_t JrtUtils::next($String* glob, int32_t i) {
	$init(JrtUtils);
	if (i < $nc(glob)->length()) {
		return glob->charAt(i);
	}
	return JrtUtils::EOL;
}

$String* JrtUtils::toRegexPattern($String* globPattern) {
	$init(JrtUtils);
	bool inGroup = false;
	$var($StringBuilder, regex, $new($StringBuilder, "^"_s));
	int32_t i = 0;
	while (i < $nc(globPattern)->length()) {
		char16_t c = globPattern->charAt(i++);
		{
			char16_t next = 0;
			bool hasRangeStart = false;
			char16_t last = 0;
			switch (c) {
			case u'\\':
				{
					if (i == globPattern->length()) {
						$throwNew($PatternSyntaxException, "No character to escape"_s, globPattern, i - 1);
					}
					next = globPattern->charAt(i++);
					bool var$0 = isGlobMeta(next);
					if (var$0 || isRegexMeta(next)) {
						regex->append(u'\\');
					}
					regex->append(next);
					break;
				}
			case u'/':
				{
					regex->append(c);
					break;
				}
			case u'[':
				{
					regex->append("[[^/]&&["_s);
					if (JrtUtils::next(globPattern, i) == u'^') {
						regex->append("\\^"_s);
						++i;
					} else {
						if (JrtUtils::next(globPattern, i) == u'!') {
							regex->append(u'^');
							++i;
						}
						if (JrtUtils::next(globPattern, i) == u'-') {
							regex->append(u'-');
							++i;
						}
					}
					hasRangeStart = false;
					last = (char16_t)0;
					while (i < globPattern->length()) {
						c = globPattern->charAt(i++);
						if (c == u']') {
							break;
						}
						if (c == u'/') {
							$throwNew($PatternSyntaxException, "Explicit \'name separator\' in class"_s, globPattern, i - 1);
						}
						if (c == u'\\' || c == u'[' || c == u'&' && JrtUtils::next(globPattern, i) == u'&') {
							regex->append(u'\\');
						}
						regex->append(c);
						if (c == u'-') {
							if (!hasRangeStart) {
								$throwNew($PatternSyntaxException, "Invalid range"_s, globPattern, i - 1);
							}
							if ((c = JrtUtils::next(globPattern, i++)) == JrtUtils::EOL || c == u']') {
								break;
							}
							if (c < last) {
								$throwNew($PatternSyntaxException, "Invalid range"_s, globPattern, i - 3);
							}
							regex->append(c);
							hasRangeStart = false;
						} else {
							hasRangeStart = true;
							last = c;
						}
					}
					if (c != u']') {
						$throwNew($PatternSyntaxException, "Missing \']"_s, globPattern, i - 1);
					}
					regex->append("]]"_s);
					break;
				}
			case u'{':
				{
					if (inGroup) {
						$throwNew($PatternSyntaxException, "Cannot nest groups"_s, globPattern, i - 1);
					}
					regex->append("(?:(?:"_s);
					inGroup = true;
					break;
				}
			case u'}':
				{
					if (inGroup) {
						regex->append("))"_s);
						inGroup = false;
					} else {
						regex->append(u'}');
					}
					break;
				}
			case u',':
				{
					if (inGroup) {
						regex->append(")|(?:"_s);
					} else {
						regex->append(u',');
					}
					break;
				}
			case u'*':
				{
					if (JrtUtils::next(globPattern, i) == u'*') {
						regex->append(".*"_s);
						++i;
					} else {
						regex->append("[^/]*"_s);
					}
					break;
				}
			case u'?':
				{
					regex->append("[^/]"_s);
					break;
				}
			default:
				{
					if (isRegexMeta(c)) {
						regex->append(u'\\');
					}
					regex->append(c);
				}
			}
		}
	}
	if (inGroup) {
		$throwNew($PatternSyntaxException, "Missing \'}"_s, globPattern, i - 1);
	}
	return regex->append(u'$')->toString();
}

JrtUtils::JrtUtils() {
}

void clinit$JrtUtils($Class* class$) {
	$assignStatic(JrtUtils::regexMetaChars, ".^$+{[]|()"_s);
	$assignStatic(JrtUtils::globMetaChars, "\\*?[{"_s);
}

$Class* JrtUtils::load$($String* name, bool initialize) {
	$loadClass(JrtUtils, name, initialize, &_JrtUtils_ClassInfo_, clinit$JrtUtils, allocate$JrtUtils);
	return class$;
}

$Class* JrtUtils::class$ = nullptr;

		} // jrtfs
	} // internal
} // jdk