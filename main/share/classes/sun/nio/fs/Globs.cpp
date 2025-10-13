#include <sun/nio/fs/Globs.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/regex/PatternSyntaxException.h>
#include <jcpp.h>

#undef EOL

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PatternSyntaxException = ::java::util::regex::PatternSyntaxException;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _Globs_FieldInfo_[] = {
	{"regexMetaChars", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Globs, regexMetaChars)},
	{"globMetaChars", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Globs, globMetaChars)},
	{"EOL", "C", nullptr, $PRIVATE | $STATIC, $staticField(Globs, EOL)},
	{}
};

$MethodInfo _Globs_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Globs::*)()>(&Globs::init$))},
	{"isGlobMeta", "(C)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(char16_t)>(&Globs::isGlobMeta))},
	{"isRegexMeta", "(C)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(char16_t)>(&Globs::isRegexMeta))},
	{"next", "(Ljava/lang/String;I)C", nullptr, $PRIVATE | $STATIC, $method(static_cast<char16_t(*)($String*,int32_t)>(&Globs::next))},
	{"toRegexPattern", "(Ljava/lang/String;Z)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*,bool)>(&Globs::toRegexPattern))},
	{"toUnixRegexPattern", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($String*)>(&Globs::toUnixRegexPattern))},
	{"toWindowsRegexPattern", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($String*)>(&Globs::toWindowsRegexPattern))},
	{}
};

$ClassInfo _Globs_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.fs.Globs",
	"java.lang.Object",
	nullptr,
	_Globs_FieldInfo_,
	_Globs_MethodInfo_
};

$Object* allocate$Globs($Class* clazz) {
	return $of($alloc(Globs));
}

$String* Globs::regexMetaChars = nullptr;
$String* Globs::globMetaChars = nullptr;
char16_t Globs::EOL = 0;

void Globs::init$() {
}

bool Globs::isRegexMeta(char16_t c) {
	$init(Globs);
	return $nc(Globs::regexMetaChars)->indexOf((int32_t)c) != -1;
}

bool Globs::isGlobMeta(char16_t c) {
	$init(Globs);
	return $nc(Globs::globMetaChars)->indexOf((int32_t)c) != -1;
}

char16_t Globs::next($String* glob, int32_t i) {
	$init(Globs);
	if (i < $nc(glob)->length()) {
		return glob->charAt(i);
	}
	return Globs::EOL;
}

$String* Globs::toRegexPattern($String* globPattern, bool isDos) {
	$init(Globs);
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
					if (isDos) {
						regex->append("\\\\"_s);
					} else {
						regex->append(c);
					}
					break;
				}
			case u'[':
				{
					if (isDos) {
						regex->append("[[^\\\\]&&["_s);
					} else {
						regex->append("[[^/]&&["_s);
					}
					if (Globs::next(globPattern, i) == u'^') {
						regex->append("\\^"_s);
						++i;
					} else {
						if (Globs::next(globPattern, i) == u'!') {
							regex->append(u'^');
							++i;
						}
						if (Globs::next(globPattern, i) == u'-') {
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
						if (c == u'/' || (isDos && c == u'\\')) {
							$throwNew($PatternSyntaxException, "Explicit \'name separator\' in class"_s, globPattern, i - 1);
						}
						if (c == u'\\' || c == u'[' || c == u'&' && Globs::next(globPattern, i) == u'&') {
							regex->append(u'\\');
						}
						regex->append(c);
						if (c == u'-') {
							if (!hasRangeStart) {
								$throwNew($PatternSyntaxException, "Invalid range"_s, globPattern, i - 1);
							}
							if ((c = Globs::next(globPattern, i++)) == Globs::EOL || c == u']') {
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
					if (Globs::next(globPattern, i) == u'*') {
						regex->append(".*"_s);
						++i;
					} else if (isDos) {
						regex->append("[^\\\\]*"_s);
					} else {
						regex->append("[^/]*"_s);
					}
					break;
				}
			case u'?':
				{
					if (isDos) {
						regex->append("[^\\\\]"_s);
					} else {
						regex->append("[^/]"_s);
					}
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

$String* Globs::toUnixRegexPattern($String* globPattern) {
	$init(Globs);
	return toRegexPattern(globPattern, false);
}

$String* Globs::toWindowsRegexPattern($String* globPattern) {
	$init(Globs);
	return toRegexPattern(globPattern, true);
}

void clinit$Globs($Class* class$) {
	$assignStatic(Globs::regexMetaChars, ".^$+{[]|()"_s);
	$assignStatic(Globs::globMetaChars, "\\*?[{"_s);
	Globs::EOL = (char16_t)0;
}

Globs::Globs() {
}

$Class* Globs::load$($String* name, bool initialize) {
	$loadClass(Globs, name, initialize, &_Globs_ClassInfo_, clinit$Globs, allocate$Globs);
	return class$;
}

$Class* Globs::class$ = nullptr;

		} // fs
	} // nio
} // sun