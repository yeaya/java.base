#include <StringContentEqualsBug$Tester.h>
#include <StringContentEqualsBug$Task.h>
#include <StringContentEqualsBug.h>
#include <java/lang/StringBuffer.h>
#include <jcpp.h>

using $StringContentEqualsBug$Task = ::StringContentEqualsBug$Task;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;

void StringContentEqualsBug$Tester::init$($StringBuffer* sb) {
	$StringContentEqualsBug$Task::init$(sb);
}

void StringContentEqualsBug$Tester::doWith($StringBuffer* sb) {
	"AA"_s->contentEquals(sb);
}

StringContentEqualsBug$Tester::StringContentEqualsBug$Tester() {
}

$Class* StringContentEqualsBug$Tester::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/StringBuffer;)V", nullptr, 0, $method(StringContentEqualsBug$Tester, init$, void, $StringBuffer*)},
		{"doWith", "(Ljava/lang/StringBuffer;)V", nullptr, $PROTECTED, $virtualMethod(StringContentEqualsBug$Tester, doWith, void, $StringBuffer*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"StringContentEqualsBug$Tester", "StringContentEqualsBug", "Tester", $STATIC},
		{"StringContentEqualsBug$Task", "StringContentEqualsBug", "Task", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"StringContentEqualsBug$Tester",
		"StringContentEqualsBug$Task",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"StringContentEqualsBug"
	};
	$loadClass(StringContentEqualsBug$Tester, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StringContentEqualsBug$Tester);
	});
	return class$;
}

$Class* StringContentEqualsBug$Tester::class$ = nullptr;