#include <java/util/regex/Pattern$Pos.h>

#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _Pattern$Pos_FieldInfo_[] = {
	{"cond", "Ljava/util/regex/Pattern$Node;", nullptr, 0, $field(Pattern$Pos, cond)},
	{}
};

$MethodInfo _Pattern$Pos_MethodInfo_[] = {
	{"<init>", "(Ljava/util/regex/Pattern$Node;)V", nullptr, 0, $method(static_cast<void(Pattern$Pos::*)($Pattern$Node*)>(&Pattern$Pos::init$))},
	{"match", "(Ljava/util/regex/Matcher;ILjava/lang/CharSequence;)Z", nullptr, 0},
	{}
};

$InnerClassInfo _Pattern$Pos_InnerClassesInfo_[] = {
	{"java.util.regex.Pattern$Pos", "java.util.regex.Pattern", "Pos", $STATIC | $FINAL},
	{"java.util.regex.Pattern$Node", "java.util.regex.Pattern", "Node", $STATIC},
	{}
};

$ClassInfo _Pattern$Pos_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.regex.Pattern$Pos",
	"java.util.regex.Pattern$Node",
	nullptr,
	_Pattern$Pos_FieldInfo_,
	_Pattern$Pos_MethodInfo_,
	nullptr,
	nullptr,
	_Pattern$Pos_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.regex.Pattern"
};

$Object* allocate$Pattern$Pos($Class* clazz) {
	return $of($alloc(Pattern$Pos));
}

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
	{
		$var($Throwable, var$0, nullptr);
		try {
			conditionMatched = $nc(this->cond)->match(matcher, i, seq);
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			matcher->to = savedTo;
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return conditionMatched && $nc(this->next)->match(matcher, i, seq);
}

Pattern$Pos::Pattern$Pos() {
}

$Class* Pattern$Pos::load$($String* name, bool initialize) {
	$loadClass(Pattern$Pos, name, initialize, &_Pattern$Pos_ClassInfo_, allocate$Pattern$Pos);
	return class$;
}

$Class* Pattern$Pos::class$ = nullptr;

		} // regex
	} // util
} // java