#include <java/util/regex/Matcher$ImmutableMatchResult.h>

#include <java/lang/CharSequence.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/util/regex/Matcher.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace regex {

$FieldInfo _Matcher$ImmutableMatchResult_FieldInfo_[] = {
	{"first", "I", nullptr, $PRIVATE | $FINAL, $field(Matcher$ImmutableMatchResult, first)},
	{"last", "I", nullptr, $PRIVATE | $FINAL, $field(Matcher$ImmutableMatchResult, last)},
	{"groups", "[I", nullptr, $PRIVATE | $FINAL, $field(Matcher$ImmutableMatchResult, groups)},
	{"groupCount", "I", nullptr, $PRIVATE | $FINAL, $field(Matcher$ImmutableMatchResult, groupCount$)},
	{"text", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Matcher$ImmutableMatchResult, text)},
	{}
};

$MethodInfo _Matcher$ImmutableMatchResult_MethodInfo_[] = {
	{"<init>", "(III[ILjava/lang/String;)V", nullptr, 0, $method(static_cast<void(Matcher$ImmutableMatchResult::*)(int32_t,int32_t,int32_t,$ints*,$String*)>(&Matcher$ImmutableMatchResult::init$))},
	{"checkMatch", "()V", nullptr, $PRIVATE, $method(static_cast<void(Matcher$ImmutableMatchResult::*)()>(&Matcher$ImmutableMatchResult::checkMatch))},
	{"end", "()I", nullptr, $PUBLIC},
	{"end", "(I)I", nullptr, $PUBLIC},
	{"group", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"group", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"groupCount", "()I", nullptr, $PUBLIC},
	{"start", "()I", nullptr, $PUBLIC},
	{"start", "(I)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Matcher$ImmutableMatchResult_InnerClassesInfo_[] = {
	{"java.util.regex.Matcher$ImmutableMatchResult", "java.util.regex.Matcher", "ImmutableMatchResult", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Matcher$ImmutableMatchResult_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.regex.Matcher$ImmutableMatchResult",
	"java.lang.Object",
	"java.util.regex.MatchResult",
	_Matcher$ImmutableMatchResult_FieldInfo_,
	_Matcher$ImmutableMatchResult_MethodInfo_,
	nullptr,
	nullptr,
	_Matcher$ImmutableMatchResult_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.regex.Matcher"
};

$Object* allocate$Matcher$ImmutableMatchResult($Class* clazz) {
	return $of($alloc(Matcher$ImmutableMatchResult));
}

void Matcher$ImmutableMatchResult::init$(int32_t first, int32_t last, int32_t groupCount, $ints* groups, $String* text) {
	this->first = first;
	this->last = last;
	this->groupCount$ = groupCount;
	$set(this, groups, groups);
	$set(this, text, text);
}

int32_t Matcher$ImmutableMatchResult::start() {
	checkMatch();
	return this->first;
}

int32_t Matcher$ImmutableMatchResult::start(int32_t group) {
	$useLocalCurrentObjectStackCache();
	checkMatch();
	if (group < 0 || group > this->groupCount$) {
		$throwNew($IndexOutOfBoundsException, $$str({"No group "_s, $$str(group)}));
	}
	return $nc(this->groups)->get(group * 2);
}

int32_t Matcher$ImmutableMatchResult::end() {
	checkMatch();
	return this->last;
}

int32_t Matcher$ImmutableMatchResult::end(int32_t group) {
	$useLocalCurrentObjectStackCache();
	checkMatch();
	if (group < 0 || group > this->groupCount$) {
		$throwNew($IndexOutOfBoundsException, $$str({"No group "_s, $$str(group)}));
	}
	return $nc(this->groups)->get(group * 2 + 1);
}

int32_t Matcher$ImmutableMatchResult::groupCount() {
	return this->groupCount$;
}

$String* Matcher$ImmutableMatchResult::group() {
	checkMatch();
	return group(0);
}

$String* Matcher$ImmutableMatchResult::group(int32_t group) {
	$useLocalCurrentObjectStackCache();
	checkMatch();
	if (group < 0 || group > this->groupCount$) {
		$throwNew($IndexOutOfBoundsException, $$str({"No group "_s, $$str(group)}));
	}
	if (($nc(this->groups)->get(group * 2) == -1) || ($nc(this->groups)->get(group * 2 + 1) == -1)) {
		return nullptr;
	}
	return $($nc(this->text)->subSequence($nc(this->groups)->get(group * 2), $nc(this->groups)->get(group * 2 + 1)))->toString();
}

void Matcher$ImmutableMatchResult::checkMatch() {
	if (this->first < 0) {
		$throwNew($IllegalStateException, "No match found"_s);
	}
}

Matcher$ImmutableMatchResult::Matcher$ImmutableMatchResult() {
}

$Class* Matcher$ImmutableMatchResult::load$($String* name, bool initialize) {
	$loadClass(Matcher$ImmutableMatchResult, name, initialize, &_Matcher$ImmutableMatchResult_ClassInfo_, allocate$Matcher$ImmutableMatchResult);
	return class$;
}

$Class* Matcher$ImmutableMatchResult::class$ = nullptr;

		} // regex
	} // util
} // java