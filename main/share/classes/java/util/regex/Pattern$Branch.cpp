#include <java/util/regex/Pattern$Branch.h>

#include <java/lang/CharSequence.h>
#include <java/lang/Math.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern$Node.h>
#include <java/util/regex/Pattern$TreeInfo.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

#undef MAX_VALUE

using $Pattern$NodeArray = $Array<::java::util::regex::Pattern$Node>;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern = ::java::util::regex::Pattern;
using $Pattern$Node = ::java::util::regex::Pattern$Node;
using $Pattern$TreeInfo = ::java::util::regex::Pattern$TreeInfo;

namespace java {
	namespace util {
		namespace regex {

$FieldInfo _Pattern$Branch_FieldInfo_[] = {
	{"atoms", "[Ljava/util/regex/Pattern$Node;", nullptr, 0, $field(Pattern$Branch, atoms)},
	{"size", "I", nullptr, 0, $field(Pattern$Branch, size)},
	{"conn", "Ljava/util/regex/Pattern$Node;", nullptr, 0, $field(Pattern$Branch, conn)},
	{}
};

$MethodInfo _Pattern$Branch_MethodInfo_[] = {
	{"<init>", "(Ljava/util/regex/Pattern$Node;Ljava/util/regex/Pattern$Node;Ljava/util/regex/Pattern$Node;)V", nullptr, 0, $method(static_cast<void(Pattern$Branch::*)($Pattern$Node*,$Pattern$Node*,$Pattern$Node*)>(&Pattern$Branch::init$))},
	{"add", "(Ljava/util/regex/Pattern$Node;)V", nullptr, 0, $method(static_cast<void(Pattern$Branch::*)($Pattern$Node*)>(&Pattern$Branch::add))},
	{"match", "(Ljava/util/regex/Matcher;ILjava/lang/CharSequence;)Z", nullptr, 0},
	{"study", "(Ljava/util/regex/Pattern$TreeInfo;)Z", nullptr, 0},
	{}
};

$InnerClassInfo _Pattern$Branch_InnerClassesInfo_[] = {
	{"java.util.regex.Pattern$Branch", "java.util.regex.Pattern", "Branch", $STATIC | $FINAL},
	{"java.util.regex.Pattern$Node", "java.util.regex.Pattern", "Node", $STATIC},
	{}
};

$ClassInfo _Pattern$Branch_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.regex.Pattern$Branch",
	"java.util.regex.Pattern$Node",
	nullptr,
	_Pattern$Branch_FieldInfo_,
	_Pattern$Branch_MethodInfo_,
	nullptr,
	nullptr,
	_Pattern$Branch_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.regex.Pattern"
};

$Object* allocate$Pattern$Branch($Class* clazz) {
	return $of($alloc(Pattern$Branch));
}

void Pattern$Branch::init$($Pattern$Node* first, $Pattern$Node* second, $Pattern$Node* branchConn) {
	$Pattern$Node::init$();
	$set(this, atoms, $new($Pattern$NodeArray, 2));
	this->size = 2;
	$set(this, conn, branchConn);
	$nc(this->atoms)->set(0, first);
	$nc(this->atoms)->set(1, second);
}

void Pattern$Branch::add($Pattern$Node* node) {
	if (this->size >= $nc(this->atoms)->length) {
		$var($Pattern$NodeArray, tmp, $new($Pattern$NodeArray, $nc(this->atoms)->length * 2));
		$System::arraycopy(this->atoms, 0, tmp, 0, $nc(this->atoms)->length);
		$set(this, atoms, tmp);
	}
	$nc(this->atoms)->set(this->size++, node);
}

bool Pattern$Branch::match($Matcher* matcher, int32_t i, $CharSequence* seq) {
	for (int32_t n = 0; n < this->size; ++n) {
		if ($nc(this->atoms)->get(n) == nullptr) {
			if ($nc($nc(this->conn)->next)->match(matcher, i, seq)) {
				return true;
			}
		} else if ($nc($nc(this->atoms)->get(n))->match(matcher, i, seq)) {
			return true;
		}
	}
	return false;
}

bool Pattern$Branch::study($Pattern$TreeInfo* info) {
	int32_t minL = $nc(info)->minLength;
	int32_t maxL = info->maxLength;
	bool maxV = info->maxValid;
	int32_t minL2 = $Integer::MAX_VALUE;
	int32_t maxL2 = -1;
	for (int32_t n = 0; n < this->size; ++n) {
		info->reset();
		if ($nc(this->atoms)->get(n) != nullptr) {
			$nc($nc(this->atoms)->get(n))->study(info);
		}
		minL2 = $Math::min(minL2, info->minLength);
		maxL2 = $Math::max(maxL2, info->maxLength);
		maxV = (maxV & info->maxValid);
	}
	minL += minL2;
	maxL += maxL2;
	info->reset();
	$nc($nc(this->conn)->next)->study(info);
	info->minLength += minL;
	info->maxLength += maxL;
	info->maxValid &= maxV;
	info->deterministic = false;
	return false;
}

Pattern$Branch::Pattern$Branch() {
}

$Class* Pattern$Branch::load$($String* name, bool initialize) {
	$loadClass(Pattern$Branch, name, initialize, &_Pattern$Branch_ClassInfo_, allocate$Pattern$Branch);
	return class$;
}

$Class* Pattern$Branch::class$ = nullptr;

		} // regex
	} // util
} // java