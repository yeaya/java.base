#include <Identity$2.h>

#include <Identity$2$1.h>
#include <Identity.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Identity = ::Identity;
using $Identity$2$1 = ::Identity$2$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ThreadFactory = ::java::util::concurrent::ThreadFactory;

$FieldInfo _Identity$2_FieldInfo_[] = {
	{"val$groupId", "I", nullptr, $FINAL | $SYNTHETIC, $field(Identity$2, val$groupId)},
	{}
};

$MethodInfo _Identity$2_MethodInfo_[] = {
	{"<init>", "(I)V", "()V", 0, $method(static_cast<void(Identity$2::*)(int32_t)>(&Identity$2::init$))},
	{"newThread", "(Ljava/lang/Runnable;)Ljava/lang/Thread;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Identity$2_EnclosingMethodInfo_ = {
	"Identity",
	"createThreadFactory",
	"(I)Ljava/util/concurrent/ThreadFactory;"
};

$InnerClassInfo _Identity$2_InnerClassesInfo_[] = {
	{"Identity$2", nullptr, nullptr, 0},
	{"Identity$2$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Identity$2_ClassInfo_ = {
	$ACC_SUPER,
	"Identity$2",
	"java.lang.Object",
	"java.util.concurrent.ThreadFactory",
	_Identity$2_FieldInfo_,
	_Identity$2_MethodInfo_,
	nullptr,
	&_Identity$2_EnclosingMethodInfo_,
	_Identity$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Identity"
};

$Object* allocate$Identity$2($Class* clazz) {
	return $of($alloc(Identity$2));
}

void Identity$2::init$(int32_t val$groupId) {
	this->val$groupId = val$groupId;
}

$Thread* Identity$2::newThread($Runnable* r) {
	$useLocalCurrentObjectStackCache();
	$var($Thread, t, $new($Thread, static_cast<$Runnable*>($$new($Identity$2$1, this, r))));
	t->setDaemon(true);
	return t;
}

Identity$2::Identity$2() {
}

$Class* Identity$2::load$($String* name, bool initialize) {
	$loadClass(Identity$2, name, initialize, &_Identity$2_ClassInfo_, allocate$Identity$2);
	return class$;
}

$Class* Identity$2::class$ = nullptr;