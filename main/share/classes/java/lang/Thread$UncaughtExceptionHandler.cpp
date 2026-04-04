#include <java/lang/Thread$UncaughtExceptionHandler.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

$Class* Thread$UncaughtExceptionHandler::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"uncaughtException", "(Ljava/lang/Thread;Ljava/lang/Throwable;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Thread$UncaughtExceptionHandler, uncaughtException, void, $Thread*, $Throwable*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.Thread$UncaughtExceptionHandler", "java.lang.Thread", "UncaughtExceptionHandler", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.lang.Thread$UncaughtExceptionHandler",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		nullptr,
		"java.lang.Thread"
	};
	$loadClass(Thread$UncaughtExceptionHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Thread$UncaughtExceptionHandler);
	});
	return class$;
}

$Class* Thread$UncaughtExceptionHandler::class$ = nullptr;

	} // lang
} // java