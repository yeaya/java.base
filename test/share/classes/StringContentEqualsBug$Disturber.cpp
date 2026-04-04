#include <StringContentEqualsBug$Disturber.h>
#include <StringContentEqualsBug$Task.h>
#include <StringContentEqualsBug.h>
#include <java/lang/StringBuffer.h>
#include <jcpp.h>

using $StringContentEqualsBug$Task = ::StringContentEqualsBug$Task;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;

void StringContentEqualsBug$Disturber::init$($StringBuffer* sb) {
	$StringContentEqualsBug$Task::init$(sb);
}

void StringContentEqualsBug$Disturber::doWith($StringBuffer* sb) {
	$nc(sb)->setLength(0);
	sb->trimToSize();
	sb->append("AA"_s);
}

StringContentEqualsBug$Disturber::StringContentEqualsBug$Disturber() {
}

$Class* StringContentEqualsBug$Disturber::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/StringBuffer;)V", nullptr, 0, $method(StringContentEqualsBug$Disturber, init$, void, $StringBuffer*)},
		{"doWith", "(Ljava/lang/StringBuffer;)V", nullptr, $PROTECTED, $virtualMethod(StringContentEqualsBug$Disturber, doWith, void, $StringBuffer*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"StringContentEqualsBug$Disturber", "StringContentEqualsBug", "Disturber", $STATIC},
		{"StringContentEqualsBug$Task", "StringContentEqualsBug", "Task", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"StringContentEqualsBug$Disturber",
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
	$loadClass(StringContentEqualsBug$Disturber, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StringContentEqualsBug$Disturber);
	});
	return class$;
}

$Class* StringContentEqualsBug$Disturber::class$ = nullptr;