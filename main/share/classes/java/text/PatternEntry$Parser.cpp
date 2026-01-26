#include <java/text/PatternEntry$Parser.h>

#include <java/lang/StringBuffer.h>
#include <java/text/Collator.h>
#include <java/text/ParseException.h>
#include <java/text/PatternEntry.h>
#include <jcpp.h>

#undef IDENTICAL
#undef PRIMARY
#undef SECONDARY
#undef TERTIARY

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $Collator = ::java::text::Collator;
using $ParseException = ::java::text::ParseException;
using $PatternEntry = ::java::text::PatternEntry;

namespace java {
	namespace text {

$FieldInfo _PatternEntry$Parser_FieldInfo_[] = {
	{"pattern", "Ljava/lang/String;", nullptr, $PRIVATE, $field(PatternEntry$Parser, pattern)},
	{"i", "I", nullptr, $PRIVATE, $field(PatternEntry$Parser, i)},
	{"newChars", "Ljava/lang/StringBuffer;", nullptr, $PRIVATE, $field(PatternEntry$Parser, newChars)},
	{"newExtension", "Ljava/lang/StringBuffer;", nullptr, $PRIVATE, $field(PatternEntry$Parser, newExtension)},
	{}
};

$MethodInfo _PatternEntry$Parser_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(PatternEntry$Parser, init$, void, $String*)},
	{"next", "()Ljava/text/PatternEntry;", nullptr, $PUBLIC, $virtualMethod(PatternEntry$Parser, next, $PatternEntry*), "java.text.ParseException"},
	{}
};

$InnerClassInfo _PatternEntry$Parser_InnerClassesInfo_[] = {
	{"java.text.PatternEntry$Parser", "java.text.PatternEntry", "Parser", $STATIC},
	{}
};

$ClassInfo _PatternEntry$Parser_ClassInfo_ = {
	$ACC_SUPER,
	"java.text.PatternEntry$Parser",
	"java.lang.Object",
	nullptr,
	_PatternEntry$Parser_FieldInfo_,
	_PatternEntry$Parser_MethodInfo_,
	nullptr,
	nullptr,
	_PatternEntry$Parser_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.text.PatternEntry"
};

$Object* allocate$PatternEntry$Parser($Class* clazz) {
	return $of($alloc(PatternEntry$Parser));
}

void PatternEntry$Parser::init$($String* pattern) {
	$set(this, newChars, $new($StringBuffer));
	$set(this, newExtension, $new($StringBuffer));
	$set(this, pattern, pattern);
	this->i = 0;
}

$PatternEntry* PatternEntry$Parser::next() {
	$useLocalCurrentObjectStackCache();
	int32_t newStrength = -1;
	$nc(this->newChars)->setLength(0);
	$nc(this->newExtension)->setLength(0);
	bool inChars = true;
	bool inQuote = false;
	bool mainLoop$break = false;
	while (this->i < $nc(this->pattern)->length()) {
		char16_t ch = $nc(this->pattern)->charAt(this->i);
		if (inQuote) {
			if (ch == u'\'') {
				inQuote = false;
			} else if ($nc(this->newChars)->length() == 0) {
				$nc(this->newChars)->append(ch);
			} else if (inChars) {
				$nc(this->newChars)->append(ch);
			} else {
				$nc(this->newExtension)->append(ch);
			}
		} else {
			switch (ch) {
			case u'=':
				{
					if (newStrength != -1) {
						mainLoop$break = true;
						break;
					}
					newStrength = $Collator::IDENTICAL;
					break;
				}
			case u',':
				{
					if (newStrength != -1) {
						mainLoop$break = true;
						break;
					}
					newStrength = $Collator::TERTIARY;
					break;
				}
			case u';':
				{
					if (newStrength != -1) {
						mainLoop$break = true;
						break;
					}
					newStrength = $Collator::SECONDARY;
					break;
				}
			case u'<':
				{
					if (newStrength != -1) {
						mainLoop$break = true;
						break;
					}
					newStrength = $Collator::PRIMARY;
					break;
				}
			case u'&':
				{
					if (newStrength != -1) {
						mainLoop$break = true;
						break;
					}
					newStrength = -2;
					break;
				}
			case u'\t':
				{}
			case u'\n':
				{}
			case u'\f':
				{}
			case u'\r':
				{}
			case u' ':
				{
					break;
				}
			case u'/':
				{
					inChars = false;
					break;
				}
			case u'\'':
				{
					inQuote = true;
					ch = $nc(this->pattern)->charAt(++this->i);
					if ($nc(this->newChars)->length() == 0) {
						$nc(this->newChars)->append(ch);
					} else if (inChars) {
						$nc(this->newChars)->append(ch);
					} else {
						$nc(this->newExtension)->append(ch);
					}
					break;
				}
			default:
				{
					if (newStrength == -1) {
						$throwNew($ParseException, $$str({"missing char (=,;<&) : "_s, $($nc(this->pattern)->substring(this->i, (this->i + 10 < $nc(this->pattern)->length()) ? this->i + 10 : $nc(this->pattern)->length()))}), this->i);
					}
					if ($PatternEntry::isSpecialChar(ch) && (inQuote == false)) {
						$throwNew($ParseException, $$str({"Unquoted punctuation character : "_s, $($Integer::toString(ch, 16))}), this->i);
					}
					if (inChars) {
						$nc(this->newChars)->append(ch);
					} else {
						$nc(this->newExtension)->append(ch);
					}
					break;
				}
			}

			if (mainLoop$break) {
				break;
			}		}
		++this->i;
	}
	if (newStrength == -1) {
		return nullptr;
	}
	if ($nc(this->newChars)->length() == 0) {
		$throwNew($ParseException, $$str({"missing chars (=,;<&): "_s, $($nc(this->pattern)->substring(this->i, (this->i + 10 < $nc(this->pattern)->length()) ? this->i + 10 : $nc(this->pattern)->length()))}), this->i);
	}
	return $new($PatternEntry, newStrength, this->newChars, this->newExtension);
}

PatternEntry$Parser::PatternEntry$Parser() {
}

$Class* PatternEntry$Parser::load$($String* name, bool initialize) {
	$loadClass(PatternEntry$Parser, name, initialize, &_PatternEntry$Parser_ClassInfo_, allocate$PatternEntry$Parser);
	return class$;
}

$Class* PatternEntry$Parser::class$ = nullptr;

	} // text
} // java