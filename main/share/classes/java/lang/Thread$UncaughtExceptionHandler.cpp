#include <java/lang/Thread$UncaughtExceptionHandler.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
$CompoundAttribute _Thread$UncaughtExceptionHandler_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};


$MethodInfo _Thread$UncaughtExceptionHandler_MethodInfo_[] = {
	{"uncaughtException", "(Ljava/lang/Thread;Ljava/lang/Throwable;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _Thread$UncaughtExceptionHandler_InnerClassesInfo_[] = {
	{"java.lang.Thread$UncaughtExceptionHandler", "java.lang.Thread", "UncaughtExceptionHandler", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Thread$UncaughtExceptionHandler_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.lang.Thread$UncaughtExceptionHandler",
	nullptr,
	nullptr,
	nullptr,
	_Thread$UncaughtExceptionHandler_MethodInfo_,
	nullptr,
	nullptr,
	_Thread$UncaughtExceptionHandler_InnerClassesInfo_,
	_Thread$UncaughtExceptionHandler_Annotations_,
	nullptr,
	nullptr,
	"java.lang.Thread"
};

$Object* allocate$Thread$UncaughtExceptionHandler($Class* clazz) {
	return $of($alloc(Thread$UncaughtExceptionHandler));
}

$Class* Thread$UncaughtExceptionHandler::load$($String* name, bool initialize) {
	$loadClass(Thread$UncaughtExceptionHandler, name, initialize, &_Thread$UncaughtExceptionHandler_ClassInfo_, allocate$Thread$UncaughtExceptionHandler);
	return class$;
}

$Class* Thread$UncaughtExceptionHandler::class$ = nullptr;

	} // lang
} // java