#include <java/util/regex/Pattern$BnM.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Math.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern$BnMS.h>
#include <java/util/regex/Pattern$Node.h>
#include <java/util/regex/Pattern$Slice.h>
#include <java/util/regex/Pattern$SliceS.h>
#include <java/util/regex/Pattern$TreeInfo.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern$BnMS = ::java::util::regex::Pattern$BnMS;
using $Pattern$Node = ::java::util::regex::Pattern$Node;
using $Pattern$Slice = ::java::util::regex::Pattern$Slice;
using $Pattern$SliceS = ::java::util::regex::Pattern$SliceS;
using $Pattern$TreeInfo = ::java::util::regex::Pattern$TreeInfo;

namespace java {
	namespace util {
		namespace regex {

$Pattern$Node* Pattern$BnM::optimize($Pattern$Node* node) {
	$init(Pattern$BnM);
	$useLocalObjectStack();
	if (!($instanceOf($Pattern$Slice, node))) {
		return node;
	}
	$var($ints, src, $nc($cast($Pattern$Slice, node))->buffer);
	int32_t patternLength = $nc(src)->length;
	if (patternLength < 4) {
		return node;
	}
	int32_t i = 0;
	int32_t j = 0;
	$var($ints, lastOcc, $new($ints, 128));
	$var($ints, optoSft, $new($ints, patternLength));
	for (i = 0; i < patternLength; ++i) {
		lastOcc->set(src->get(i) & 0x7f, i + 1);
	}
	bool NEXT$continue = false;
	for (i = patternLength; i > 0; --i) {
		for (j = patternLength - 1; j >= i; --j) {
			if (src->get(j) == src->get(j - i)) {
				optoSft->set(j - 1, i);
			} else {
				NEXT$continue = true;
				break;
			}
		}
		if (NEXT$continue) {
			NEXT$continue = false;
			continue;
		}
		while (j > 0) {
			optoSft->set(--j, i);
		}
	}
	optoSft->set(patternLength - 1, 1);
	if ($instanceOf($Pattern$SliceS, node)) {
		return $new($Pattern$BnMS, src, lastOcc, optoSft, node->next);
	}
	return $new(Pattern$BnM, src, lastOcc, optoSft, node->next);
}

void Pattern$BnM::init$($ints* src, $ints* lastOcc, $ints* optoSft, $Pattern$Node* next) {
	$Pattern$Node::init$();
	$set(this, buffer, src);
	$set(this, lastOcc, lastOcc);
	$set(this, optoSft, optoSft);
	$set(this, next, next);
}

bool Pattern$BnM::match($Matcher* matcher, int32_t i, $CharSequence* seq) {
	$var($ints, src, this->buffer);
	int32_t patternLength = $nc(src)->length;
	int32_t last = $nc(matcher)->to - patternLength;
	bool NEXT$continue = false;
	while (i <= last) {
		for (int32_t j = patternLength - 1; j >= 0; --j) {
			int32_t ch = $nc(seq)->charAt(i + j);
			if (ch != src->get(j)) {
				i += $Math::max(j + 1 - $nc(this->lastOcc)->get(ch & 0x7f), $nc(this->optoSft)->get(j));
				NEXT$continue = true;
				break;
			}
		}
		if (NEXT$continue) {
			NEXT$continue = false;
			continue;
		}
		matcher->first = i;
		bool ret = $nc(this->next)->match(matcher, i + patternLength, seq);
		if (ret) {
			matcher->first = i;
			$nc(matcher->groups)->set(0, matcher->first);
			matcher->groups->set(1, matcher->last);
			return true;
		}
		++i;
	}
	matcher->hitEnd$ = true;
	return false;
}

bool Pattern$BnM::study($Pattern$TreeInfo* info) {
	$nc(info)->minLength += $nc(this->buffer)->length;
	info->maxValid = false;
	return $nc(this->next)->study(info);
}

Pattern$BnM::Pattern$BnM() {
}

$Class* Pattern$BnM::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"buffer", "[I", nullptr, 0, $field(Pattern$BnM, buffer)},
		{"lastOcc", "[I", nullptr, 0, $field(Pattern$BnM, lastOcc)},
		{"optoSft", "[I", nullptr, 0, $field(Pattern$BnM, optoSft)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([I[I[ILjava/util/regex/Pattern$Node;)V", nullptr, 0, $method(Pattern$BnM, init$, void, $ints*, $ints*, $ints*, $Pattern$Node*)},
		{"match", "(Ljava/util/regex/Matcher;ILjava/lang/CharSequence;)Z", nullptr, 0, $virtualMethod(Pattern$BnM, match, bool, $Matcher*, int32_t, $CharSequence*)},
		{"optimize", "(Ljava/util/regex/Pattern$Node;)Ljava/util/regex/Pattern$Node;", nullptr, $STATIC, $staticMethod(Pattern$BnM, optimize, $Pattern$Node*, $Pattern$Node*)},
		{"study", "(Ljava/util/regex/Pattern$TreeInfo;)Z", nullptr, 0, $virtualMethod(Pattern$BnM, study, bool, $Pattern$TreeInfo*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.regex.Pattern$BnM", "java.util.regex.Pattern", "BnM", $STATIC},
		{"java.util.regex.Pattern$Node", "java.util.regex.Pattern", "Node", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.regex.Pattern$BnM",
		"java.util.regex.Pattern$Node",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.regex.Pattern"
	};
	$loadClass(Pattern$BnM, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Pattern$BnM);
	});
	return class$;
}

$Class* Pattern$BnM::class$ = nullptr;

		} // regex
	} // util
} // java