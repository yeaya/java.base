#include <StringContentEqualsBug$Disturber.h>

#include <StringContentEqualsBug$Task.h>
#include <StringContentEqualsBug.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $StringContentEqualsBug = ::StringContentEqualsBug;
using $StringContentEqualsBug$Task = ::StringContentEqualsBug$Task;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;

$MethodInfo _StringContentEqualsBug$Disturber_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/StringBuffer;)V", nullptr, 0, $method(static_cast<void(StringContentEqualsBug$Disturber::*)($StringBuffer*)>(&StringContentEqualsBug$Disturber::init$))},
	{"doWith", "(Ljava/lang/StringBuffer;)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _StringContentEqualsBug$Disturber_InnerClassesInfo_[] = {
	{"StringContentEqualsBug$Disturber", "StringContentEqualsBug", "Disturber", $STATIC},
	{"StringContentEqualsBug$Task", "StringContentEqualsBug", "Task", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _StringContentEqualsBug$Disturber_ClassInfo_ = {
	$ACC_SUPER,
	"StringContentEqualsBug$Disturber",
	"StringContentEqualsBug$Task",
	nullptr,
	nullptr,
	_StringContentEqualsBug$Disturber_MethodInfo_,
	nullptr,
	nullptr,
	_StringContentEqualsBug$Disturber_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"StringContentEqualsBug"
};

$Object* allocate$StringContentEqualsBug$Disturber($Class* clazz) {
	return $of($alloc(StringContentEqualsBug$Disturber));
}

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
	$loadClass(StringContentEqualsBug$Disturber, name, initialize, &_StringContentEqualsBug$Disturber_ClassInfo_, allocate$StringContentEqualsBug$Disturber);
	return class$;
}

$Class* StringContentEqualsBug$Disturber::class$ = nullptr;