#include <PrivilegedThreadFactory$1.h>

#include <PrivilegedThreadFactory.h>
#include <java/lang/Runnable.h>
#include <jcpp.h>

using $PrivilegedThreadFactory = ::PrivilegedThreadFactory;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $PrivilegedAction = ::java::security::PrivilegedAction;

$FieldInfo _PrivilegedThreadFactory$1_FieldInfo_[] = {
	{"this$0", "LPrivilegedThreadFactory;", nullptr, $FINAL | $SYNTHETIC, $field(PrivilegedThreadFactory$1, this$0)},
	{"val$r", "Ljava/lang/Runnable;", nullptr, $FINAL | $SYNTHETIC, $field(PrivilegedThreadFactory$1, val$r)},
	{}
};

$MethodInfo _PrivilegedThreadFactory$1_MethodInfo_[] = {
	{"<init>", "(LPrivilegedThreadFactory;Ljava/lang/Runnable;)V", "()V", 0, $method(static_cast<void(PrivilegedThreadFactory$1::*)($PrivilegedThreadFactory*,$Runnable*)>(&PrivilegedThreadFactory$1::init$))},
	{"run", "()Ljava/lang/Thread;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _PrivilegedThreadFactory$1_EnclosingMethodInfo_ = {
	"PrivilegedThreadFactory",
	"newThread",
	"(Ljava/lang/Runnable;)Ljava/lang/Thread;"
};

$InnerClassInfo _PrivilegedThreadFactory$1_InnerClassesInfo_[] = {
	{"PrivilegedThreadFactory$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _PrivilegedThreadFactory$1_ClassInfo_ = {
	$ACC_SUPER,
	"PrivilegedThreadFactory$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_PrivilegedThreadFactory$1_FieldInfo_,
	_PrivilegedThreadFactory$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Thread;>;",
	&_PrivilegedThreadFactory$1_EnclosingMethodInfo_,
	_PrivilegedThreadFactory$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"PrivilegedThreadFactory"
};

$Object* allocate$PrivilegedThreadFactory$1($Class* clazz) {
	return $of($alloc(PrivilegedThreadFactory$1));
}

void PrivilegedThreadFactory$1::init$($PrivilegedThreadFactory* this$0, $Runnable* val$r) {
	$set(this, this$0, this$0);
	$set(this, val$r, val$r);
}

$Object* PrivilegedThreadFactory$1::run() {
	$var($Thread, t, $new($Thread, this->val$r));
	t->setDaemon(true);
	return $of(t);
}

PrivilegedThreadFactory$1::PrivilegedThreadFactory$1() {
}

$Class* PrivilegedThreadFactory$1::load$($String* name, bool initialize) {
	$loadClass(PrivilegedThreadFactory$1, name, initialize, &_PrivilegedThreadFactory$1_ClassInfo_, allocate$PrivilegedThreadFactory$1);
	return class$;
}

$Class* PrivilegedThreadFactory$1::class$ = nullptr;