#include <StringContentEqualsBug.h>
#include <StringContentEqualsBug$Disturber.h>
#include <StringContentEqualsBug$Task.h>
#include <StringContentEqualsBug$Tester.h>
#include <java/lang/StringBuffer.h>
#include <jcpp.h>

using $StringContentEqualsBug$Disturber = ::StringContentEqualsBug$Disturber;
using $StringContentEqualsBug$Task = ::StringContentEqualsBug$Task;
using $StringContentEqualsBug$Tester = ::StringContentEqualsBug$Tester;
using $StringContentEqualsBug$TaskArray = $Array<StringContentEqualsBug$Task>;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;

void StringContentEqualsBug::init$() {
}

void StringContentEqualsBug::main($StringArray* args) {
	$useLocalObjectStack();
	$var($StringBuffer, sb, $new($StringBuffer));
	$var($StringContentEqualsBug$TaskArray, tasks, $new($StringContentEqualsBug$TaskArray, 3));
	$nc((tasks->set(0, $$new($StringContentEqualsBug$Tester, sb))))->start();
	for (int32_t i = 1; i < tasks->length; ++i) {
		$nc((tasks->set(i, $$new($StringContentEqualsBug$Disturber, sb))))->start();
	}
	$var($Throwable, var$0, nullptr);
	try {
		for (int32_t i = 0; i < 20; ++i) {
			{
				$var($StringContentEqualsBug$TaskArray, arr$, tasks);
				for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
					$var($StringContentEqualsBug$Task, task, arr$->get(i$));
					if ($nc(task)->exception != nullptr) {
						$throw(task->exception);
					}
				}
			}
			$Thread::sleep(250);
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$var($StringContentEqualsBug$TaskArray, arr$, tasks);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($StringContentEqualsBug$Task, task, arr$->get(i$));
			{
				$set($nc(task), sb, nullptr);
				task->join();
			}
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

StringContentEqualsBug::StringContentEqualsBug() {
}

$Class* StringContentEqualsBug::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(StringContentEqualsBug, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(StringContentEqualsBug, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"StringContentEqualsBug$Disturber", "StringContentEqualsBug", "Disturber", $STATIC},
		{"StringContentEqualsBug$Tester", "StringContentEqualsBug", "Tester", $STATIC},
		{"StringContentEqualsBug$Task", "StringContentEqualsBug", "Task", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"StringContentEqualsBug",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"StringContentEqualsBug$Disturber,StringContentEqualsBug$Tester,StringContentEqualsBug$Task"
	};
	$loadClass(StringContentEqualsBug, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StringContentEqualsBug);
	});
	return class$;
}

$Class* StringContentEqualsBug::class$ = nullptr;