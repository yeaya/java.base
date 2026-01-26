#include <java/util/regex/Pattern$CharProperty.h>

#include <java/lang/CharSequence.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern$CharPredicate.h>
#include <java/util/regex/Pattern$Node.h>
#include <java/util/regex/Pattern$TreeInfo.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern$CharPredicate = ::java::util::regex::Pattern$CharPredicate;
using $Pattern$Node = ::java::util::regex::Pattern$Node;
using $Pattern$TreeInfo = ::java::util::regex::Pattern$TreeInfo;

namespace java {
	namespace util {
		namespace regex {

$FieldInfo _Pattern$CharProperty_FieldInfo_[] = {
	{"predicate", "Ljava/util/regex/Pattern$CharPredicate;", nullptr, $FINAL, $field(Pattern$CharProperty, predicate)},
	{}
};

$MethodInfo _Pattern$CharProperty_MethodInfo_[] = {
	{"<init>", "(Ljava/util/regex/Pattern$CharPredicate;)V", nullptr, 0, $method(Pattern$CharProperty, init$, void, $Pattern$CharPredicate*)},
	{"match", "(Ljava/util/regex/Matcher;ILjava/lang/CharSequence;)Z", nullptr, 0, $virtualMethod(Pattern$CharProperty, match, bool, $Matcher*, int32_t, $CharSequence*)},
	{"study", "(Ljava/util/regex/Pattern$TreeInfo;)Z", nullptr, 0, $virtualMethod(Pattern$CharProperty, study, bool, $Pattern$TreeInfo*)},
	{}
};

$InnerClassInfo _Pattern$CharProperty_InnerClassesInfo_[] = {
	{"java.util.regex.Pattern$CharProperty", "java.util.regex.Pattern", "CharProperty", $STATIC},
	{"java.util.regex.Pattern$Node", "java.util.regex.Pattern", "Node", $STATIC},
	{}
};

$ClassInfo _Pattern$CharProperty_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.regex.Pattern$CharProperty",
	"java.util.regex.Pattern$Node",
	nullptr,
	_Pattern$CharProperty_FieldInfo_,
	_Pattern$CharProperty_MethodInfo_,
	nullptr,
	nullptr,
	_Pattern$CharProperty_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.regex.Pattern"
};

$Object* allocate$Pattern$CharProperty($Class* clazz) {
	return $of($alloc(Pattern$CharProperty));
}

void Pattern$CharProperty::init$($Pattern$CharPredicate* predicate) {
	$Pattern$Node::init$();
	$set(this, predicate, predicate);
}

bool Pattern$CharProperty::match($Matcher* matcher, int32_t i, $CharSequence* seq) {
	if (i < $nc(matcher)->to) {
		int32_t ch = $Character::codePointAt(seq, i);
		i += $Character::charCount(ch);
		if (i <= matcher->to) {
			bool var$0 = $nc(this->predicate)->is(ch);
			return var$0 && $nc(this->next)->match(matcher, i, seq);
		}
	}
	$nc(matcher)->hitEnd$ = true;
	return false;
}

bool Pattern$CharProperty::study($Pattern$TreeInfo* info) {
	++$nc(info)->minLength;
	++info->maxLength;
	return $nc(this->next)->study(info);
}

Pattern$CharProperty::Pattern$CharProperty() {
}

$Class* Pattern$CharProperty::load$($String* name, bool initialize) {
	$loadClass(Pattern$CharProperty, name, initialize, &_Pattern$CharProperty_ClassInfo_, allocate$Pattern$CharProperty);
	return class$;
}

$Class* Pattern$CharProperty::class$ = nullptr;

		} // regex
	} // util
} // java