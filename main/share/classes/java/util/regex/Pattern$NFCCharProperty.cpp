#include <java/util/regex/Pattern$NFCCharProperty.h>

#include <java/lang/CharSequence.h>
#include <java/text/Normalizer$Form.h>
#include <java/text/Normalizer.h>
#include <java/util/regex/Grapheme.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern$CharPredicate.h>
#include <java/util/regex/Pattern$Node.h>
#include <java/util/regex/Pattern$TreeInfo.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

#undef NFC

using $CharSequence = ::java::lang::CharSequence;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Normalizer = ::java::text::Normalizer;
using $Normalizer$Form = ::java::text::Normalizer$Form;
using $Grapheme = ::java::util::regex::Grapheme;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern$CharPredicate = ::java::util::regex::Pattern$CharPredicate;
using $Pattern$Node = ::java::util::regex::Pattern$Node;
using $Pattern$TreeInfo = ::java::util::regex::Pattern$TreeInfo;

namespace java {
	namespace util {
		namespace regex {

$FieldInfo _Pattern$NFCCharProperty_FieldInfo_[] = {
	{"predicate", "Ljava/util/regex/Pattern$CharPredicate;", nullptr, 0, $field(Pattern$NFCCharProperty, predicate)},
	{}
};

$MethodInfo _Pattern$NFCCharProperty_MethodInfo_[] = {
	{"<init>", "(Ljava/util/regex/Pattern$CharPredicate;)V", nullptr, 0, $method(static_cast<void(Pattern$NFCCharProperty::*)($Pattern$CharPredicate*)>(&Pattern$NFCCharProperty::init$))},
	{"match", "(Ljava/util/regex/Matcher;ILjava/lang/CharSequence;)Z", nullptr, 0},
	{"study", "(Ljava/util/regex/Pattern$TreeInfo;)Z", nullptr, 0},
	{}
};

$InnerClassInfo _Pattern$NFCCharProperty_InnerClassesInfo_[] = {
	{"java.util.regex.Pattern$NFCCharProperty", "java.util.regex.Pattern", "NFCCharProperty", $PRIVATE | $STATIC},
	{"java.util.regex.Pattern$Node", "java.util.regex.Pattern", "Node", $STATIC},
	{}
};

$ClassInfo _Pattern$NFCCharProperty_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.regex.Pattern$NFCCharProperty",
	"java.util.regex.Pattern$Node",
	nullptr,
	_Pattern$NFCCharProperty_FieldInfo_,
	_Pattern$NFCCharProperty_MethodInfo_,
	nullptr,
	nullptr,
	_Pattern$NFCCharProperty_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.regex.Pattern"
};

$Object* allocate$Pattern$NFCCharProperty($Class* clazz) {
	return $of($alloc(Pattern$NFCCharProperty));
}

void Pattern$NFCCharProperty::init$($Pattern$CharPredicate* predicate) {
	$Pattern$Node::init$();
	$set(this, predicate, predicate);
}

bool Pattern$NFCCharProperty::match($Matcher* matcher, int32_t i, $CharSequence* seq) {
	$useLocalCurrentObjectStackCache();
	if (i < $nc(matcher)->to) {
		int32_t ch0 = $Character::codePointAt(seq, i);
		int32_t n = $Character::charCount(ch0);
		int32_t j = $Grapheme::nextBoundary(seq, i, matcher->to);
		if (i + n == j) {
			if ($nc(this->predicate)->is(ch0)) {
				return $nc(this->next)->match(matcher, j, seq);
			}
		} else {
			while (i + n < j) {
				$init($Normalizer$Form);
				$var($String, nfc, $Normalizer::normalize($($nc($($nc(seq)->toString()))->substring(i, j)), $Normalizer$Form::NFC));
				if ($nc(nfc)->codePointCount(0, nfc->length()) == 1) {
					bool var$0 = $nc(this->predicate)->is(nfc->codePointAt(0));
					if (var$0 && $nc(this->next)->match(matcher, j, seq)) {
						return true;
					}
				}
				ch0 = $Character::codePointBefore(seq, j);
				j -= $Character::charCount(ch0);
			}
		}
		if (j < matcher->to) {
			return false;
		}
	}
	$nc(matcher)->hitEnd$ = true;
	return false;
}

bool Pattern$NFCCharProperty::study($Pattern$TreeInfo* info) {
	++$nc(info)->minLength;
	info->deterministic = false;
	return $nc(this->next)->study(info);
}

Pattern$NFCCharProperty::Pattern$NFCCharProperty() {
}

$Class* Pattern$NFCCharProperty::load$($String* name, bool initialize) {
	$loadClass(Pattern$NFCCharProperty, name, initialize, &_Pattern$NFCCharProperty_ClassInfo_, allocate$Pattern$NFCCharProperty);
	return class$;
}

$Class* Pattern$NFCCharProperty::class$ = nullptr;

		} // regex
	} // util
} // java