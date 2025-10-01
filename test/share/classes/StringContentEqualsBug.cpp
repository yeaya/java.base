#include <StringContentEqualsBug.h>

#include <StringContentEqualsBug$Disturber.h>
#include <StringContentEqualsBug$Task.h>
#include <StringContentEqualsBug$Tester.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $StringContentEqualsBug$Disturber = ::StringContentEqualsBug$Disturber;
using $StringContentEqualsBug$Task = ::StringContentEqualsBug$Task;
using $StringContentEqualsBug$Tester = ::StringContentEqualsBug$Tester;
using $StringContentEqualsBug$TaskArray = $Array<StringContentEqualsBug$Task>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $StringBuffer = ::java::lang::StringBuffer;

$MethodInfo _StringContentEqualsBug_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StringContentEqualsBug::*)()>(&StringContentEqualsBug::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&StringContentEqualsBug::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _StringContentEqualsBug_InnerClassesInfo_[] = {
	{"StringContentEqualsBug$Disturber", "StringContentEqualsBug", "Disturber", $STATIC},
	{"StringContentEqualsBug$Tester", "StringContentEqualsBug", "Tester", $STATIC},
	{"StringContentEqualsBug$Task", "StringContentEqualsBug", "Task", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _StringContentEqualsBug_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"StringContentEqualsBug",
	"java.lang.Object",
	nullptr,
	nullptr,
	_StringContentEqualsBug_MethodInfo_,
	nullptr,
	nullptr,
	_StringContentEqualsBug_InnerClassesInfo_,
	nullptr,
	nullptr,
	"StringContentEqualsBug$Disturber,StringContentEqualsBug$Tester,StringContentEqualsBug$Task"
};

$Object* allocate$StringContentEqualsBug($Class* clazz) {
	return $of($alloc(StringContentEqualsBug));
}

void StringContentEqualsBug::init$() {
}

void StringContentEqualsBug::main($StringArray* args) {
	$var($StringBuffer, sb, $new($StringBuffer));
	$var($StringContentEqualsBug$TaskArray, tasks, $new($StringContentEqualsBug$TaskArray, 3));
	$nc((tasks->set(0, $$new($StringContentEqualsBug$Tester, sb))))->start();
	for (int32_t i = 1; i < tasks->length; ++i) {
		$nc((tasks->set(i, $$new($StringContentEqualsBug$Disturber, sb))))->start();
	}
	{
		$var($Throwable, var$0, nullptr);
		try {
			for (int32_t i = 0; i < 20; ++i) {
				{
					$var($StringContentEqualsBug$TaskArray, arr$, tasks);
					int32_t len$ = arr$->length;
					int32_t i$ = 0;
					for (; i$ < len$; ++i$) {
						$var($StringContentEqualsBug$Task, task, arr$->get(i$));
						{
							if ($nc(task)->exception != nullptr) {
								$throw(task->exception);
							}
						}
					}
				}
				$Thread::sleep(250);
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			{
				$var($StringContentEqualsBug$TaskArray, arr$, tasks);
				int32_t len$ = arr$->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					$var($StringContentEqualsBug$Task, task, arr$->get(i$));
					{
						$set($nc(task), sb, nullptr);
						task->join();
					}
				}
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

StringContentEqualsBug::StringContentEqualsBug() {
}

$Class* StringContentEqualsBug::load$($String* name, bool initialize) {
	$loadClass(StringContentEqualsBug, name, initialize, &_StringContentEqualsBug_ClassInfo_, allocate$StringContentEqualsBug);
	return class$;
}

$Class* StringContentEqualsBug::class$ = nullptr;