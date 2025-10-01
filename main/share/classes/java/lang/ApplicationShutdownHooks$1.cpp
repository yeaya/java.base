#include <java/lang/ApplicationShutdownHooks$1.h>

#include <java/lang/ApplicationShutdownHooks.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ApplicationShutdownHooks = ::java::lang::ApplicationShutdownHooks;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

namespace java {
	namespace lang {

$MethodInfo _ApplicationShutdownHooks$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ApplicationShutdownHooks$1::*)()>(&ApplicationShutdownHooks$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ApplicationShutdownHooks$1_EnclosingMethodInfo_ = {
	"java.lang.ApplicationShutdownHooks",
	nullptr,
	nullptr
};

$InnerClassInfo _ApplicationShutdownHooks$1_InnerClassesInfo_[] = {
	{"java.lang.ApplicationShutdownHooks$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ApplicationShutdownHooks$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.ApplicationShutdownHooks$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_ApplicationShutdownHooks$1_MethodInfo_,
	nullptr,
	&_ApplicationShutdownHooks$1_EnclosingMethodInfo_,
	_ApplicationShutdownHooks$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.ApplicationShutdownHooks"
};

$Object* allocate$ApplicationShutdownHooks$1($Class* clazz) {
	return $of($alloc(ApplicationShutdownHooks$1));
}

void ApplicationShutdownHooks$1::init$() {
}

void ApplicationShutdownHooks$1::run() {
	$ApplicationShutdownHooks::runHooks();
}

ApplicationShutdownHooks$1::ApplicationShutdownHooks$1() {
}

$Class* ApplicationShutdownHooks$1::load$($String* name, bool initialize) {
	$loadClass(ApplicationShutdownHooks$1, name, initialize, &_ApplicationShutdownHooks$1_ClassInfo_, allocate$ApplicationShutdownHooks$1);
	return class$;
}

$Class* ApplicationShutdownHooks$1::class$ = nullptr;

	} // lang
} // java