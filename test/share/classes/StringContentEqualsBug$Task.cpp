#include <StringContentEqualsBug$Task.h>

#include <StringContentEqualsBug.h>
#include <java/lang/StringBuffer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;

$FieldInfo _StringContentEqualsBug$Task_FieldInfo_[] = {
	{"sb", "Ljava/lang/StringBuffer;", nullptr, $VOLATILE, $field(StringContentEqualsBug$Task, sb)},
	{"exception", "Ljava/lang/Exception;", nullptr, $VOLATILE, $field(StringContentEqualsBug$Task, exception)},
	{}
};

$MethodInfo _StringContentEqualsBug$Task_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/StringBuffer;)V", nullptr, 0, $method(static_cast<void(StringContentEqualsBug$Task::*)($StringBuffer*)>(&StringContentEqualsBug$Task::init$))},
	{"doWith", "(Ljava/lang/StringBuffer;)V", nullptr, $PROTECTED | $ABSTRACT},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _StringContentEqualsBug$Task_InnerClassesInfo_[] = {
	{"StringContentEqualsBug$Task", "StringContentEqualsBug", "Task", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _StringContentEqualsBug$Task_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"StringContentEqualsBug$Task",
	"java.lang.Thread",
	nullptr,
	_StringContentEqualsBug$Task_FieldInfo_,
	_StringContentEqualsBug$Task_MethodInfo_,
	nullptr,
	nullptr,
	_StringContentEqualsBug$Task_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"StringContentEqualsBug"
};

$Object* allocate$StringContentEqualsBug$Task($Class* clazz) {
	return $of($alloc(StringContentEqualsBug$Task));
}

void StringContentEqualsBug$Task::init$($StringBuffer* sb) {
	$Thread::init$();
	$set(this, sb, sb);
}

void StringContentEqualsBug$Task::run() {
	try {
		$var($StringBuffer, sb, nullptr);
		while (($assign(sb, this->sb)) != nullptr) {
			doWith(sb);
		}
	} catch ($Exception& e) {
		$set(this, exception, e);
	}
}

StringContentEqualsBug$Task::StringContentEqualsBug$Task() {
}

$Class* StringContentEqualsBug$Task::load$($String* name, bool initialize) {
	$loadClass(StringContentEqualsBug$Task, name, initialize, &_StringContentEqualsBug$Task_ClassInfo_, allocate$StringContentEqualsBug$Task);
	return class$;
}

$Class* StringContentEqualsBug$Task::class$ = nullptr;