#include <java/util/regex/Pattern$LazyLoop.h>

#include <java/lang/Array.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern$Loop.h>
#include <java/util/regex/Pattern$Node.h>
#include <java/util/regex/Pattern$TreeInfo.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern = ::java::util::regex::Pattern;
using $Pattern$Loop = ::java::util::regex::Pattern$Loop;
using $Pattern$Node = ::java::util::regex::Pattern$Node;
using $Pattern$TreeInfo = ::java::util::regex::Pattern$TreeInfo;

namespace java {
	namespace util {
		namespace regex {

$MethodInfo _Pattern$LazyLoop_MethodInfo_[] = {
	{"<init>", "(II)V", nullptr, 0, $method(static_cast<void(Pattern$LazyLoop::*)(int32_t,int32_t)>(&Pattern$LazyLoop::init$))},
	{"match", "(Ljava/util/regex/Matcher;ILjava/lang/CharSequence;)Z", nullptr, 0},
	{"matchInit", "(Ljava/util/regex/Matcher;ILjava/lang/CharSequence;)Z", nullptr, 0},
	{"study", "(Ljava/util/regex/Pattern$TreeInfo;)Z", nullptr, 0},
	{}
};

$InnerClassInfo _Pattern$LazyLoop_InnerClassesInfo_[] = {
	{"java.util.regex.Pattern$LazyLoop", "java.util.regex.Pattern", "LazyLoop", $STATIC | $FINAL},
	{"java.util.regex.Pattern$Loop", "java.util.regex.Pattern", "Loop", $STATIC},
	{}
};

$ClassInfo _Pattern$LazyLoop_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.regex.Pattern$LazyLoop",
	"java.util.regex.Pattern$Loop",
	nullptr,
	nullptr,
	_Pattern$LazyLoop_MethodInfo_,
	nullptr,
	nullptr,
	_Pattern$LazyLoop_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.regex.Pattern"
};

$Object* allocate$Pattern$LazyLoop($Class* clazz) {
	return $of($alloc(Pattern$LazyLoop));
}

void Pattern$LazyLoop::init$(int32_t countIndex, int32_t beginIndex) {
	$Pattern$Loop::init$(countIndex, beginIndex);
}

bool Pattern$LazyLoop::match($Matcher* matcher, int32_t i, $CharSequence* seq) {
	if (i > $nc($nc(matcher)->locals)->get(this->beginIndex)) {
		int32_t count = $nc(matcher->locals)->get(this->countIndex);
		if (count < this->cmin) {
			$nc(matcher->locals)->set(this->countIndex, count + 1);
			bool result = $nc(this->body)->match(matcher, i, seq);
			if (!result) {
				$nc(matcher->locals)->set(this->countIndex, count);
			}
			return result;
		}
		if ($nc(this->next)->match(matcher, i, seq)) {
			return true;
		}
		if (count < this->cmax) {
			$nc(matcher->locals)->set(this->countIndex, count + 1);
			bool result = $nc(this->body)->match(matcher, i, seq);
			if (!result) {
				$nc(matcher->locals)->set(this->countIndex, count);
			}
			return result;
		}
		return false;
	}
	return $nc(this->next)->match(matcher, i, seq);
}

bool Pattern$LazyLoop::matchInit($Matcher* matcher, int32_t i, $CharSequence* seq) {
	int32_t save = $nc($nc(matcher)->locals)->get(this->countIndex);
	bool ret = false;
	if (0 < this->cmin) {
		$nc(matcher->locals)->set(this->countIndex, 1);
		ret = $nc(this->body)->match(matcher, i, seq);
	} else if ($nc(this->next)->match(matcher, i, seq)) {
		ret = true;
	} else if (0 < this->cmax) {
		$nc($nc(matcher)->locals)->set(this->countIndex, 1);
		ret = $nc(this->body)->match(matcher, i, seq);
	}
	$nc(matcher->locals)->set(this->countIndex, save);
	return ret;
}

bool Pattern$LazyLoop::study($Pattern$TreeInfo* info) {
	$nc(info)->maxValid = false;
	info->deterministic = false;
	return false;
}

Pattern$LazyLoop::Pattern$LazyLoop() {
}

$Class* Pattern$LazyLoop::load$($String* name, bool initialize) {
	$loadClass(Pattern$LazyLoop, name, initialize, &_Pattern$LazyLoop_ClassInfo_, allocate$Pattern$LazyLoop);
	return class$;
}

$Class* Pattern$LazyLoop::class$ = nullptr;

		} // regex
	} // util
} // java