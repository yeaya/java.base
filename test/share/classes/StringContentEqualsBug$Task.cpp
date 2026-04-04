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
	$FieldInfo fieldInfos$$[] = {
		{"sb", "Ljava/lang/StringBuffer;", nullptr, $VOLATILE, $field(StringContentEqualsBug$Task, sb)},
		{"exception", "Ljava/lang/Exception;", nullptr, $VOLATILE, $field(StringContentEqualsBug$Task, exception)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/StringBuffer;)V", nullptr, 0, $method(StringContentEqualsBug$Task, init$, void, $StringBuffer*)},
		{"doWith", "(Ljava/lang/StringBuffer;)V", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(StringContentEqualsBug$Task, doWith, void, $StringBuffer*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(StringContentEqualsBug$Task, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"StringContentEqualsBug$Task", "StringContentEqualsBug", "Task", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"StringContentEqualsBug$Task",
		"java.lang.Thread",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"StringContentEqualsBug"
	};
	$loadClass(StringContentEqualsBug$Task, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StringContentEqualsBug$Task);
	});
	return class$;
}

$Class* StringContentEqualsBug$Task::class$ = nullptr;