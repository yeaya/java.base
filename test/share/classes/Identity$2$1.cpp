#include <Identity$2$1.h>

#include <Identity$2.h>
#include <Identity.h>
#include <java/lang/Runnable.h>
#include <java/lang/ThreadLocal.h>
#include <jcpp.h>

using $Identity = ::Identity;
using $Identity$2 = ::Identity$2;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ThreadLocal = ::java::lang::ThreadLocal;

$FieldInfo _Identity$2$1_FieldInfo_[] = {
	{"this$0", "LIdentity$2;", nullptr, $FINAL | $SYNTHETIC, $field(Identity$2$1, this$0)},
	{"val$r", "Ljava/lang/Runnable;", nullptr, $FINAL | $SYNTHETIC, $field(Identity$2$1, val$r)},
	{}
};

$MethodInfo _Identity$2$1_MethodInfo_[] = {
	{"<init>", "(LIdentity$2;Ljava/lang/Runnable;)V", "()V", 0, $method(Identity$2$1, init$, void, $Identity$2*, $Runnable*)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Identity$2$1, run, void)},
	{}
};

$EnclosingMethodInfo _Identity$2$1_EnclosingMethodInfo_ = {
	"Identity$2",
	"newThread",
	"(Ljava/lang/Runnable;)Ljava/lang/Thread;"
};

$InnerClassInfo _Identity$2$1_InnerClassesInfo_[] = {
	{"Identity$2", nullptr, nullptr, 0},
	{"Identity$2$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Identity$2$1_ClassInfo_ = {
	$ACC_SUPER,
	"Identity$2$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_Identity$2$1_FieldInfo_,
	_Identity$2$1_MethodInfo_,
	nullptr,
	&_Identity$2$1_EnclosingMethodInfo_,
	_Identity$2$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Identity"
};

$Object* allocate$Identity$2$1($Class* clazz) {
	return $of($alloc(Identity$2$1));
}

void Identity$2$1::init$($Identity$2* this$0, $Runnable* val$r) {
	$set(this, this$0, this$0);
	$set(this, val$r, val$r);
}

void Identity$2$1::run() {
	$init($Identity);
	$nc($Identity::myGroup)->set($($Integer::valueOf(this->this$0->val$groupId)));
	$nc(this->val$r)->run();
}

Identity$2$1::Identity$2$1() {
}

$Class* Identity$2$1::load$($String* name, bool initialize) {
	$loadClass(Identity$2$1, name, initialize, &_Identity$2$1_ClassInfo_, allocate$Identity$2$1);
	return class$;
}

$Class* Identity$2$1::class$ = nullptr;