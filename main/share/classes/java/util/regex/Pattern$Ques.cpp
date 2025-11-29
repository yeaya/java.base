#include <java/util/regex/Pattern$Ques.h>

#include <java/lang/CharSequence.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern$1.h>
#include <java/util/regex/Pattern$Node.h>
#include <java/util/regex/Pattern$Qtype.h>
#include <java/util/regex/Pattern$TreeInfo.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

#undef INDEPENDENT

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern$1 = ::java::util::regex::Pattern$1;
using $Pattern$Node = ::java::util::regex::Pattern$Node;
using $Pattern$Qtype = ::java::util::regex::Pattern$Qtype;
using $Pattern$TreeInfo = ::java::util::regex::Pattern$TreeInfo;

namespace java {
	namespace util {
		namespace regex {

$FieldInfo _Pattern$Ques_FieldInfo_[] = {
	{"atom", "Ljava/util/regex/Pattern$Node;", nullptr, 0, $field(Pattern$Ques, atom)},
	{"type", "Ljava/util/regex/Pattern$Qtype;", nullptr, 0, $field(Pattern$Ques, type)},
	{}
};

$MethodInfo _Pattern$Ques_MethodInfo_[] = {
	{"<init>", "(Ljava/util/regex/Pattern$Node;Ljava/util/regex/Pattern$Qtype;)V", nullptr, 0, $method(static_cast<void(Pattern$Ques::*)($Pattern$Node*,$Pattern$Qtype*)>(&Pattern$Ques::init$))},
	{"match", "(Ljava/util/regex/Matcher;ILjava/lang/CharSequence;)Z", nullptr, 0},
	{"study", "(Ljava/util/regex/Pattern$TreeInfo;)Z", nullptr, 0},
	{}
};

$InnerClassInfo _Pattern$Ques_InnerClassesInfo_[] = {
	{"java.util.regex.Pattern$Ques", "java.util.regex.Pattern", "Ques", $STATIC | $FINAL},
	{"java.util.regex.Pattern$Node", "java.util.regex.Pattern", "Node", $STATIC},
	{}
};

$ClassInfo _Pattern$Ques_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.regex.Pattern$Ques",
	"java.util.regex.Pattern$Node",
	nullptr,
	_Pattern$Ques_FieldInfo_,
	_Pattern$Ques_MethodInfo_,
	nullptr,
	nullptr,
	_Pattern$Ques_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.regex.Pattern"
};

$Object* allocate$Pattern$Ques($Class* clazz) {
	return $of($alloc(Pattern$Ques));
}

void Pattern$Ques::init$($Pattern$Node* node, $Pattern$Qtype* type) {
	$Pattern$Node::init$();
	$set(this, atom, node);
	$set(this, type, type);
}

bool Pattern$Ques::match($Matcher* matcher, int32_t i, $CharSequence* seq) {
	$init($Pattern$1);
	switch ($nc($Pattern$1::$SwitchMap$java$util$regex$Pattern$Qtype)->get($nc((this->type))->ordinal())) {
	case 1:
		{
			bool var$1 = $nc(this->atom)->match(matcher, i, seq);
			bool var$0 = (var$1 && $nc(this->next)->match(matcher, $nc(matcher)->last, seq));
			return var$0 || $nc(this->next)->match(matcher, i, seq);
		}
	case 2:
		{
			bool var$2 = $nc(this->next)->match(matcher, i, seq);
			if (!var$2) {
				bool var$3 = $nc(this->atom)->match(matcher, i, seq);
				var$2 = (var$3 && $nc(this->next)->match(matcher, $nc(matcher)->last, seq));
			}
			return var$2;
		}
	case 3:
		{
			if ($nc(this->atom)->match(matcher, i, seq)) {
				i = $nc(matcher)->last;
			}
			return $nc(this->next)->match(matcher, i, seq);
		}
	default:
		{
			bool var$4 = $nc(this->atom)->match(matcher, i, seq);
			return var$4 && $nc(this->next)->match(matcher, $nc(matcher)->last, seq);
		}
	}
}

bool Pattern$Ques::study($Pattern$TreeInfo* info) {
	$init($Pattern$Qtype);
	if (this->type != $Pattern$Qtype::INDEPENDENT) {
		int32_t minL = $nc(info)->minLength;
		$nc(this->atom)->study(info);
		info->minLength = minL;
		info->deterministic = false;
		return $nc(this->next)->study(info);
	} else {
		$nc(this->atom)->study(info);
		return $nc(this->next)->study(info);
	}
}

Pattern$Ques::Pattern$Ques() {
}

$Class* Pattern$Ques::load$($String* name, bool initialize) {
	$loadClass(Pattern$Ques, name, initialize, &_Pattern$Ques_ClassInfo_, allocate$Pattern$Ques);
	return class$;
}

$Class* Pattern$Ques::class$ = nullptr;

		} // regex
	} // util
} // java