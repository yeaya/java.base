#include <GroupOfOne$2.h>

#include <GroupOfOne.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $GroupOfOne = ::GroupOfOne;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ThreadFactory = ::java::util::concurrent::ThreadFactory;

$MethodInfo _GroupOfOne$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(GroupOfOne$2::*)()>(&GroupOfOne$2::init$))},
	{"newThread", "(Ljava/lang/Runnable;)Ljava/lang/Thread;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _GroupOfOne$2_EnclosingMethodInfo_ = {
	"GroupOfOne",
	"test",
	"(Ljava/net/SocketAddress;ZZ)V"
};

$InnerClassInfo _GroupOfOne$2_InnerClassesInfo_[] = {
	{"GroupOfOne$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _GroupOfOne$2_ClassInfo_ = {
	$ACC_SUPER,
	"GroupOfOne$2",
	"java.lang.Object",
	"java.util.concurrent.ThreadFactory",
	nullptr,
	_GroupOfOne$2_MethodInfo_,
	nullptr,
	&_GroupOfOne$2_EnclosingMethodInfo_,
	_GroupOfOne$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"GroupOfOne"
};

$Object* allocate$GroupOfOne$2($Class* clazz) {
	return $of($alloc(GroupOfOne$2));
}

void GroupOfOne$2::init$() {
}

$Thread* GroupOfOne$2::newThread($Runnable* r) {
	return $new($Thread, r);
}

GroupOfOne$2::GroupOfOne$2() {
}

$Class* GroupOfOne$2::load$($String* name, bool initialize) {
	$loadClass(GroupOfOne$2, name, initialize, &_GroupOfOne$2_ClassInfo_, allocate$GroupOfOne$2);
	return class$;
}

$Class* GroupOfOne$2::class$ = nullptr;