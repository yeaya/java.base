#include <java/util/regex/Pattern$BmpCharProperty.h>

#include <java/lang/CharSequence.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern$BmpCharPredicate.h>
#include <java/util/regex/Pattern$CharPredicate.h>
#include <java/util/regex/Pattern$CharProperty.h>
#include <java/util/regex/Pattern$Node.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern$BmpCharPredicate = ::java::util::regex::Pattern$BmpCharPredicate;
using $Pattern$CharPredicate = ::java::util::regex::Pattern$CharPredicate;
using $Pattern$CharProperty = ::java::util::regex::Pattern$CharProperty;
using $Pattern$Node = ::java::util::regex::Pattern$Node;

namespace java {
	namespace util {
		namespace regex {

$MethodInfo _Pattern$BmpCharProperty_MethodInfo_[] = {
	{"<init>", "(Ljava/util/regex/Pattern$BmpCharPredicate;)V", nullptr, 0, $method(static_cast<void(Pattern$BmpCharProperty::*)($Pattern$BmpCharPredicate*)>(&Pattern$BmpCharProperty::init$))},
	{"match", "(Ljava/util/regex/Matcher;ILjava/lang/CharSequence;)Z", nullptr, 0},
	{}
};

$InnerClassInfo _Pattern$BmpCharProperty_InnerClassesInfo_[] = {
	{"java.util.regex.Pattern$BmpCharProperty", "java.util.regex.Pattern", "BmpCharProperty", $PRIVATE | $STATIC},
	{"java.util.regex.Pattern$CharProperty", "java.util.regex.Pattern", "CharProperty", $STATIC},
	{}
};

$ClassInfo _Pattern$BmpCharProperty_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.regex.Pattern$BmpCharProperty",
	"java.util.regex.Pattern$CharProperty",
	nullptr,
	nullptr,
	_Pattern$BmpCharProperty_MethodInfo_,
	nullptr,
	nullptr,
	_Pattern$BmpCharProperty_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.regex.Pattern"
};

$Object* allocate$Pattern$BmpCharProperty($Class* clazz) {
	return $of($alloc(Pattern$BmpCharProperty));
}

void Pattern$BmpCharProperty::init$($Pattern$BmpCharPredicate* predicate) {
	$Pattern$CharProperty::init$(predicate);
}

bool Pattern$BmpCharProperty::match($Matcher* matcher, int32_t i, $CharSequence* seq) {
	if (i < $nc(matcher)->to) {
		bool var$0 = $nc(this->predicate)->is($nc(seq)->charAt(i));
		return var$0 && $nc(this->next)->match(matcher, i + 1, seq);
	} else {
		matcher->hitEnd$ = true;
		return false;
	}
}

Pattern$BmpCharProperty::Pattern$BmpCharProperty() {
}

$Class* Pattern$BmpCharProperty::load$($String* name, bool initialize) {
	$loadClass(Pattern$BmpCharProperty, name, initialize, &_Pattern$BmpCharProperty_ClassInfo_, allocate$Pattern$BmpCharProperty);
	return class$;
}

$Class* Pattern$BmpCharProperty::class$ = nullptr;

		} // regex
	} // util
} // java