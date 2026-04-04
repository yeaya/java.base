#include <VerifyStackTrace$TestCase.h>
#include <VerifyStackTrace.h>
#include <java/lang/StackWalker.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StackWalker = ::java::lang::StackWalker;

$Class* VerifyStackTrace$TestCase::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"description", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VerifyStackTrace$TestCase, description, $String*)},
		{"expected", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VerifyStackTrace$TestCase, expected, $String*)},
		{"walker", "()Ljava/lang/StackWalker;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VerifyStackTrace$TestCase, walker, $StackWalker*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"VerifyStackTrace$TestCase", "VerifyStackTrace", "TestCase", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"VerifyStackTrace$TestCase",
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
		"VerifyStackTrace"
	};
	$loadClass(VerifyStackTrace$TestCase, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VerifyStackTrace$TestCase);
	});
	return class$;
}

$Class* VerifyStackTrace$TestCase::class$ = nullptr;