#include <java/util/regex/MatchResult.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace regex {

$MethodInfo _MatchResult_MethodInfo_[] = {
	{"end", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MatchResult, end, int32_t)},
	{"end", "(I)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MatchResult, end, int32_t, int32_t)},
	{"group", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MatchResult, group, $String*)},
	{"group", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MatchResult, group, $String*, int32_t)},
	{"groupCount", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MatchResult, groupCount, int32_t)},
	{"start", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MatchResult, start, int32_t)},
	{"start", "(I)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MatchResult, start, int32_t, int32_t)},
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