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

$MethodInfo _StringContentEqualsBug$Tester_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/StringBuffer;)V", nullptr, 0, $method(static_cast<void(StringContentEqualsBug$Tester::*)($StringBuffer*)>(&StringContentEqualsBug$Tester::init$))},
	{"doWith", "(Ljava/lang/StringBuffer;)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _StringContentEqualsBug$Tester_InnerClassesInfo_[] = {
	{"StringContentEqualsBug$Tester", "StringContentEqualsBug", "Tester", $STATIC},
	{"StringContentEqualsBug$Task", "StringContentEqualsBug", "Task", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _StringContentEqualsBug$Tester_ClassInfo_ = {
	$ACC_SUPER,
	"StringContentEqualsBug$Tester",
	"StringContentEqualsBug$Task",
	nullptr,
	nullptr,
	_StringContentEqualsBug$Tester_MethodInfo_,
	nullptr,
	nullptr,
	_StringContentEqualsBug$Tester_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"StringContentEqualsBug"
};

$Object* allocate$StringContentEqualsBug$Tester($Class* clazz) {
	return $of($alloc(StringContentEqualsBug$Tester));
}

void StringContentEqualsBug$Tester::init$($StringBuffer* sb) {
	$StringContentEqualsBug$Task::init$(sb);
}

void StringContentEqualsBug$Tester::doWith($StringBuffer* sb) {
	"AA"_s->contentEquals(sb);
}

StringContentEqualsBug$Tester::StringContentEqualsBug$Tester() {
}

$Class* StringContentEqualsBug$Tester::load$($String* name, bool initialize) {
	$loadClass(StringContentEqualsBug$Tester, name, initialize, &_StringContentEqualsBug$Tester_ClassInfo_, allocate$StringContentEqualsBug$Tester);
	return class$;
}

$Class* StringContentEqualsBug$Tester::class$ = nullptr;