#include <java/util/regex/MatchResult.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace regex {

$MethodInfo _MatchResult_MethodInfo_[] = {
	{"end", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"end", "(I)I", nullptr, $PUBLIC | $ABSTRACT},
	{"group", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"group", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"groupCount", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"start", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"start", "(I)I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _MatchResult_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.regex.MatchResult",
	nullptr,
	nullptr,
	nullptr,
	_MatchResult_MethodInfo_
};

$Object* allocate$MatchResult($Class* clazz) {
	return $of($alloc(MatchResult));
}

$Class* MatchResult::load$($String* name, bool initialize) {
	$loadClass(MatchResult, name, initialize, &_MatchResult_ClassInfo_, allocate$MatchResult);
	return class$;
}

$Class* MatchResult::class$ = nullptr;

		} // regex
	} // util
} // java