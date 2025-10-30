#include <java/util/regex/Pattern$Neg.h>

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
using $Pattern = ::java::util::regex::Pattern;
using $Pattern$Node = ::java::util::regex::Pattern$Node;

namespace java {
	namespace util {
		namespace regex {

$FieldInfo _Pattern$Neg_FieldInfo_[] = {
	{"cond", "Ljava/util/regex/Pattern$Node;", nullptr, 0, $field(Pattern$Neg, cond)},
	{}
};

$MethodInfo _Pattern$Neg_MethodInfo_[] = {
	{"<init>", "(Ljava/util/regex/Pattern$Node;)V", nullptr, 0, $method(static_cast<void(Pattern$Neg::*)($Pattern$Node*)>(&Pattern$Neg::init$))},
	{"match", "(Ljava/util/regex/Matcher;ILjava/lang/CharSequence;)Z", nullptr, 0},
	{}
};

$InnerClassInfo _Pattern$Neg_InnerClassesInfo_[] = {
	{"java.util.regex.Pattern$Neg", "java.util.regex.Pattern", "Neg", $STATIC | $FINAL},
	{"java.util.regex.Pattern$Node", "java.util.regex.Pattern", "Node", $STATIC},
	{}
};

$ClassInfo _Pattern$Neg_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.regex.Pattern$Neg",
	"java.util.regex.Pattern$Node",
	nullptr,
	_Pattern$Neg_FieldInfo_,
	_Pattern$Neg_MethodInfo_,
	nullptr,
	nullptr,
	_Pattern$Neg_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.regex.Pattern"
};

$Object* allocate$Pattern$Neg($Class* clazz) {
	return $of($alloc(Pattern$Neg));
}

void Pattern$Neg::init$($Pattern$Node* cond) {
	$Pattern$Node::init$();
	$set(this, cond, cond);
}

bool Pattern$Neg::match($Matcher* matcher, int32_t i, $CharSequence* seq) {
	int32_t savedTo = $nc(matcher)->to;
	bool conditionMatched = false;
	if (matcher->transparentBounds) {
		matcher->to = matcher->getTextLength();
	}
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (i < matcher->to) {
				conditionMatched = !$nc(this->cond)->match(matcher, i, seq);
			} else {
				matcher->requireEnd$ = true;
				conditionMatched = !$nc(this->cond)->match(matcher, i, seq);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			matcher->to = savedTo;
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return conditionMatched && $nc(this->next)->match(matcher, i, seq);
}

Pattern$Neg::Pattern$Neg() {
}

$Class* Pattern$Neg::load$($String* name, bool initialize) {
	$loadClass(Pattern$Neg, name, initialize, &_Pattern$Neg_ClassInfo_, allocate$Pattern$Neg);
	return class$;
}

$Class* Pattern$Neg::class$ = nullptr;

		} // regex
	} // util
} // java