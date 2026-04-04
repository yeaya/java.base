#include <java/util/regex/Pattern$Bound.h>
#include <java/lang/CharSequence.h>
#include <java/util/regex/CharPredicates.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern$CharPredicate.h>
#include <java/util/regex/Pattern$Node.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

#undef BOTH
#undef LEFT
#undef NONE
#undef NON_SPACING_MARK
#undef RIGHT

using $CharSequence = ::java::lang::CharSequence;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CharPredicates = ::java::util::regex::CharPredicates;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern = ::java::util::regex::Pattern;
using $Pattern$Node = ::java::util::regex::Pattern$Node;

namespace java {
	namespace util {
		namespace regex {

int32_t Pattern$Bound::LEFT = 0;
int32_t Pattern$Bound::RIGHT = 0;
int32_t Pattern$Bound::BOTH = 0;
int32_t Pattern$Bound::NONE = 0;

void Pattern$Bound::init$(int32_t n, bool useUWORD) {
	$Pattern$Node::init$();
	this->type = n;
	this->useUWORD = useUWORD;
}

bool Pattern$Bound::isWord(int32_t ch) {
	return this->useUWORD ? $$nc($CharPredicates::WORD())->is(ch) : (ch == u'_' || $Character::isLetterOrDigit(ch));
}

int32_t Pattern$Bound::check($Matcher* matcher, int32_t i, $CharSequence* seq) {
	int32_t ch = 0;
	bool left = false;
	int32_t startIndex = $nc(matcher)->from;
	int32_t endIndex = matcher->to;
	if (matcher->transparentBounds) {
		startIndex = 0;
		endIndex = matcher->getTextLength();
	}
	if (i > startIndex) {
		ch = $Character::codePointBefore(seq, i);
		bool var$0 = isWord(ch);
		if (!var$0) {
			bool var$1 = $Character::getType(ch) == $Character::NON_SPACING_MARK;
			var$0 = var$1 && $Pattern::hasBaseCharacter(matcher, i - 1, seq);
		}
		left = (var$0);
	}
	bool right = false;
	if (i < endIndex) {
		ch = $Character::codePointAt(seq, i);
		bool var$2 = isWord(ch);
		if (!var$2) {
			bool var$3 = $Character::getType(ch) == $Character::NON_SPACING_MARK;
			var$2 = var$3 && $Pattern::hasBaseCharacter(matcher, i, seq);
		}
		right = (var$2);
	} else {
		matcher->hitEnd$ = true;
		matcher->requireEnd$ = true;
	}
	return ((left ^ right) ? (right ? Pattern$Bound::LEFT : Pattern$Bound::RIGHT) : Pattern$Bound::NONE);
}

bool Pattern$Bound::match($Matcher* matcher, int32_t i, $CharSequence* seq) {
	bool var$0 = (check(matcher, i, seq) & this->type) > 0;
	return var$0 && $nc(this->next)->match(matcher, i, seq);
}

void Pattern$Bound::clinit$($Class* clazz) {
	Pattern$Bound::LEFT = 1;
	Pattern$Bound::RIGHT = 2;
	Pattern$Bound::BOTH = 3;
	Pattern$Bound::NONE = 4;
}

Pattern$Bound::Pattern$Bound() {
}

$Class* Pattern$Bound::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"LEFT", "I", nullptr, $STATIC, $staticField(Pattern$Bound, LEFT)},
		{"RIGHT", "I", nullptr, $STATIC, $staticField(Pattern$Bound, RIGHT)},
		{"BOTH", "I", nullptr, $STATIC, $staticField(Pattern$Bound, BOTH)},
		{"NONE", "I", nullptr, $STATIC, $staticField(Pattern$Bound, NONE)},
		{"type", "I", nullptr, 0, $field(Pattern$Bound, type)},
		{"useUWORD", "Z", nullptr, 0, $field(Pattern$Bound, useUWORD)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(IZ)V", nullptr, 0, $method(Pattern$Bound, init$, void, int32_t, bool)},
		{"check", "(Ljava/util/regex/Matcher;ILjava/lang/CharSequence;)I", nullptr, 0, $method(Pattern$Bound, check, int32_t, $Matcher*, int32_t, $CharSequence*)},
		{"isWord", "(I)Z", nullptr, 0, $method(Pattern$Bound, isWord, bool, int32_t)},
		{"match", "(Ljava/util/regex/Matcher;ILjava/lang/CharSequence;)Z", nullptr, 0, $virtualMethod(Pattern$Bound, match, bool, $Matcher*, int32_t, $CharSequence*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.regex.Pattern$Bound", "java.util.regex.Pattern", "Bound", $STATIC | $FINAL},
		{"java.util.regex.Pattern$Node", "java.util.regex.Pattern", "Node", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.regex.Pattern$Bound",
		"java.util.regex.Pattern$Node",
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
	$loadClass(Pattern$Bound, name, initialize, &classInfo$$, Pattern$Bound::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Pattern$Bound);
	});
	return class$;
}

$Class* Pattern$Bound::class$ = nullptr;

		} // regex
	} // util
} // java