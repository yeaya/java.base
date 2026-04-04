#include <PipelineTest$Fun.h>
#include <PipelineTest.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$Class* PipelineTest$Fun::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"f", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PipelineTest$Fun, f, void), "java.lang.Throwable"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"PipelineTest$Fun", "PipelineTest", "Fun", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"PipelineTest$Fun",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"PipelineTest"
	};
	$loadClass(PipelineTest$Fun, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PipelineTest$Fun);
	});
	return class$;
}

$Class* PipelineTest$Fun::class$ = nullptr;