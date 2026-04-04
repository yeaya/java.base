#include <java/util/regex/Pattern$Pos.h>
#include <java/lang/CharSequence.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern$Node.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern$Node = ::java::util::regex::Pattern$Node;

namespace java {
	namespace util {
		namespace regex {

void Pattern$Pos::init$($Pattern$Node* cond) {
	$Pattern$Node::init$();
	$set(this, cond, cond);
}

bool Pattern$Pos::match($Matcher* matcher, int32_t i, $CharSequence* seq) {
	int32_t savedTo = $nc(matcher)->to;
	bool conditionMatched = false;
	if (matcher->transparentBounds) {
		matcher->to = matcher->getTextLength();
	}
	$var($Throwable, var$0, nullptr);
	try {
		conditionMatched = $nc(this->cond)->match(matcher, i, seq);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		matcher->to = savedTo;
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	return conditionMatched && $nc(this->next)->match(matcher, i, seq);
}

Pattern$Pos::Pattern$Pos() {
}

$Class* Pattern$Pos::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"cond", "Ljava/util/regex/Pattern$Node;", nullptr, 0, $field(Pattern$Pos, cond)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/regex/Pattern$Node;)V", nullptr, 0, $method(Pattern$Pos, init$, void, $Pattern$Node*)},
		{"match", "(Ljava/util/regex/Matcher;ILjava/lang/CharSequence;)Z", nullptr, 0, $virtualMethod(Pattern$Pos, match, bool, $Matcher*, int32_t, $CharSequence*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.regex.Pattern$Pos", "java.util.regex.Pattern", "Pos", $STATIC | $FINAL},
		{"java.util.regex.Pattern$Node", "java.util.regex.Pattern", "Node", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.regex.Pattern$Pos",
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
	$loadClass(Pattern$Pos, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Pattern$Pos);
	});
	return class$;
}

$Class* Pattern$Pos::class$ = nullptr;

		} // regex
	} // util
} // java