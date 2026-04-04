#include <java/util/regex/Pattern$BnMS.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Math.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern$BnM.h>
#include <java/util/regex/Pattern$Node.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern = ::java::util::regex::Pattern;
using $Pattern$BnM = ::java::util::regex::Pattern$BnM;
using $Pattern$Node = ::java::util::regex::Pattern$Node;

namespace java {
	namespace util {
		namespace regex {

void Pattern$BnMS::init$($ints* src, $ints* lastOcc, $ints* optoSft, $Pattern$Node* next) {
	$Pattern$BnM::init$(src, lastOcc, optoSft, next);
	{
		$var($ints, arr$, this->buffer);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			int32_t cp = arr$->get(i$);
			{
				this->lengthInChars += $Character::charCount(cp);
			}
		}
	}
}

bool Pattern$BnMS::match($Matcher* matcher, int32_t i, $CharSequence* seq) {
	$var($ints, src, this->buffer);
	int32_t patternLength = $nc(src)->length;
	int32_t last = $nc(matcher)->to - this->lengthInChars;
	bool NEXT$continue = false;
	while (i <= last) {
		int32_t ch = 0;
		for (int32_t j = $Pattern::countChars(seq, i, patternLength), x = patternLength - 1; j > 0; j -= $Character::charCount(ch), --x) {
			ch = $Character::codePointBefore(seq, i + j);
			if (ch != src->get(x)) {
				int32_t n = $Math::max(x + 1 - $nc(this->lastOcc)->get(ch & 0x7f), $nc(this->optoSft)->get(x));
				i += $Pattern::countChars(seq, i, n);
				NEXT$continue = true;
				break;
			}
		}
		if (NEXT$continue) {
			NEXT$continue = false;
			continue;
		}
		matcher->first = i;
		bool ret = $nc(this->next)->match(matcher, i + this->lengthInChars, seq);
		if (ret) {
			matcher->first = i;
			$nc(matcher->groups)->set(0, matcher->first);
			matcher->groups->set(1, matcher->last);
			return true;
		}
		i += $Pattern::countChars(seq, i, 1);
	}
	matcher->hitEnd$ = true;
	return false;
}

Pattern$BnMS::Pattern$BnMS() {
}

$Class* Pattern$BnMS::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"lengthInChars", "I", nullptr, 0, $field(Pattern$BnMS, lengthInChars)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([I[I[ILjava/util/regex/Pattern$Node;)V", nullptr, 0, $method(Pattern$BnMS, init$, void, $ints*, $ints*, $ints*, $Pattern$Node*)},
		{"match", "(Ljava/util/regex/Matcher;ILjava/lang/CharSequence;)Z", nullptr, 0, $virtualMethod(Pattern$BnMS, match, bool, $Matcher*, int32_t, $CharSequence*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.regex.Pattern$BnMS", "java.util.regex.Pattern", "BnMS", $STATIC | $FINAL},
		{"java.util.regex.Pattern$BnM", "java.util.regex.Pattern", "BnM", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.regex.Pattern$BnMS",
		"java.util.regex.Pattern$BnM",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.regex.Pattern"
	};
	$loadClass(Pattern$BnMS, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Pattern$BnMS);
	});
	return class$;
}

$Class* Pattern$BnMS::class$ = nullptr;

		} // regex
	} // util
} // java