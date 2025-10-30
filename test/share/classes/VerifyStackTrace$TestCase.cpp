#include <VerifyStackTrace$TestCase.h>

#include <VerifyStackTrace.h>
#include <java/lang/StackWalker.h>
#include <jcpp.h>

using $VerifyStackTrace = ::VerifyStackTrace;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StackWalker = ::java::lang::StackWalker;

$MethodInfo _VerifyStackTrace$TestCase_MethodInfo_[] = {
	{"description", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"expected", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"walker", "()Ljava/lang/StackWalker;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _VerifyStackTrace$TestCase_InnerClassesInfo_[] = {
	{"VerifyStackTrace$TestCase", "VerifyStackTrace", "TestCase", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _VerifyStackTrace$TestCase_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"VerifyStackTrace$TestCase",
	nullptr,
	nullptr,
	nullptr,
	_VerifyStackTrace$TestCase_MethodInfo_,
	nullptr,
	nullptr,
	_VerifyStackTrace$TestCase_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"VerifyStackTrace"
};

$Object* allocate$VerifyStackTrace$TestCase($Class* clazz) {
	return $of($alloc(VerifyStackTrace$TestCase));
}

$Class* VerifyStackTrace$TestCase::load$($String* name, bool initialize) {
	$loadClass(VerifyStackTrace$TestCase, name, initialize, &_VerifyStackTrace$TestCase_ClassInfo_, allocate$VerifyStackTrace$TestCase);
	return class$;
}

$Class* VerifyStackTrace$TestCase::class$ = nullptr;