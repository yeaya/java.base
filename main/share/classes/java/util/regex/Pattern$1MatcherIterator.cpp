#include <java/util/regex/Pattern$1MatcherIterator.h>

#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern = ::java::util::regex::Pattern;

namespace java {
	namespace util {
		namespace regex {

$FieldInfo _Pattern$1MatcherIterator_FieldInfo_[] = {
	{"this$0", "Ljava/util/regex/Pattern;", nullptr, $FINAL | $SYNTHETIC, $field(Pattern$1MatcherIterator, this$0)},
	{"val$input", "Ljava/lang/CharSequence;", nullptr, $FINAL | $SYNTHETIC, $field(Pattern$1MatcherIterator, val$input)},
	{"matcher", "Ljava/util/regex/Matcher;", nullptr, $PRIVATE, $field(Pattern$1MatcherIterator, matcher)},
	{"current", "I", nullptr, $PRIVATE, $field(Pattern$1MatcherIterator, current)},
	{"nextElement", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Pattern$1MatcherIterator, nextElement)},
	{"emptyElementCount", "I", nullptr, $PRIVATE, $field(Pattern$1MatcherIterator, emptyElementCount)},
	{}
};

$MethodInfo _Pattern$1MatcherIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/regex/Pattern;Ljava/lang/CharSequence;)V", "()V", 0, $method(static_cast<void(Pattern$1MatcherIterator::*)($Pattern*,$CharSequence*)>(&Pattern$1MatcherIterator::init$))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Pattern$1MatcherIterator_EnclosingMethodInfo_ = {
	"java.util.regex.Pattern",
	"splitAsStream",
	"(Ljava/lang/CharSequence;)Ljava/util/stream/Stream;"
};

$InnerClassInfo _Pattern$1MatcherIterator_InnerClassesInfo_[] = {
	{"java.util.regex.Pattern$1MatcherIterator", nullptr, "MatcherIterator", 0},
	{}
};

$ClassInfo _Pattern$1MatcherIterator_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.regex.Pattern$1MatcherIterator",
	"java.lang.Object",
	"java.util.Iterator",
	_Pattern$1MatcherIterator_FieldInfo_,
	_Pattern$1MatcherIterator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Ljava/lang/String;>;",
	&_Pattern$1MatcherIterator_EnclosingMethodInfo_,
	_Pattern$1MatcherIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.regex.Pattern"
};

$Object* allocate$Pattern$1MatcherIterator($Class* clazz) {
	return $of($alloc(Pattern$1MatcherIterator));
}

void Pattern$1MatcherIterator::init$($Pattern* this$0, $CharSequence* val$input) {
	$set(this, this$0, this$0);
	$set(this, val$input, val$input);
}

$Object* Pattern$1MatcherIterator::next() {
	if (!hasNext()) {
		$throwNew($NoSuchElementException);
	}
	if (this->emptyElementCount == 0) {
		$var($String, n, this->nextElement);
		$set(this, nextElement, nullptr);
		return $of(n);
	} else {
		--this->emptyElementCount;
		return $of(""_s);
	}
}

bool Pattern$1MatcherIterator::hasNext() {
	if (this->matcher == nullptr) {
		$set(this, matcher, this->this$0->matcher(this->val$input));
		this->emptyElementCount = $nc(this->val$input)->length() == 0 ? 1 : 0;
	}
	if (this->nextElement != nullptr || this->emptyElementCount > 0) {
		return true;
	}
	if (this->current == $nc(this->val$input)->length()) {
		return false;
	}
	while ($nc(this->matcher)->find()) {
		$set(this, nextElement, $nc($($nc(this->val$input)->subSequence(this->current, $nc(this->matcher)->start())))->toString());
		this->current = $nc(this->matcher)->end();
		if (!$nc(this->nextElement)->isEmpty()) {
			return true;
		} else if (this->current > 0) {
			++this->emptyElementCount;
		}
	}
	$set(this, nextElement, $nc($($nc(this->val$input)->subSequence(this->current, $nc(this->val$input)->length())))->toString());
	this->current = $nc(this->val$input)->length();
	if (!$nc(this->nextElement)->isEmpty()) {
		return true;
	} else {
		this->emptyElementCount = 0;
		$set(this, nextElement, nullptr);
		return false;
	}
}

Pattern$1MatcherIterator::Pattern$1MatcherIterator() {
}

$Class* Pattern$1MatcherIterator::load$($String* name, bool initialize) {
	$loadClass(Pattern$1MatcherIterator, name, initialize, &_Pattern$1MatcherIterator_ClassInfo_, allocate$Pattern$1MatcherIterator);
	return class$;
}

$Class* Pattern$1MatcherIterator::class$ = nullptr;

		} // regex
	} // util
} // java