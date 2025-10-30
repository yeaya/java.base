#include <Destroy$1.h>

#include <Destroy.h>
#include <java/lang/ThreadGroup.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <jcpp.h>

using $Destroy = ::Destroy;
using $ThreadArray = $Array<::java::lang::Thread>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;

$FieldInfo _Destroy$1_FieldInfo_[] = {
	{"val$root", "Ljava/lang/ThreadGroup;", nullptr, $FINAL | $SYNTHETIC, $field(Destroy$1, val$root)},
	{"val$nbr", "Ljava/util/concurrent/atomic/AtomicInteger;", nullptr, $FINAL | $SYNTHETIC, $field(Destroy$1, val$nbr)},
	{}
};

$MethodInfo _Destroy$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/util/concurrent/atomic/AtomicInteger;Ljava/lang/ThreadGroup;)V", nullptr, 0, $method(static_cast<void(Destroy$1::*)($String*,$AtomicInteger*,$ThreadGroup*)>(&Destroy$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Destroy$1_EnclosingMethodInfo_ = {
	"Destroy",
	"testDestroyChild",
	"()V"
};

$InnerClassInfo _Destroy$1_InnerClassesInfo_[] = {
	{"Destroy$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Destroy$1_ClassInfo_ = {
	$ACC_SUPER,
	"Destroy$1",
	"java.lang.Thread",
	nullptr,
	_Destroy$1_FieldInfo_,
	_Destroy$1_MethodInfo_,
	nullptr,
	&_Destroy$1_EnclosingMethodInfo_,
	_Destroy$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Destroy"
};

$Object* allocate$Destroy$1($Class* clazz) {
	return $of($alloc(Destroy$1));
}

void Destroy$1::init$($String* arg0, $AtomicInteger* val$nbr, $ThreadGroup* val$root) {
	$set(this, val$nbr, val$nbr);
	$set(this, val$root, val$root);
	$Thread::init$(arg0);
}

void Destroy$1::run() {
	$var($ThreadArray, threads, $new($ThreadArray, 42));
	$nc(this->val$nbr)->addAndGet($nc(this->val$root)->enumerate(threads, true));
}

Destroy$1::Destroy$1() {
}

$Class* Destroy$1::load$($String* name, bool initialize) {
	$loadClass(Destroy$1, name, initialize, &_Destroy$1_ClassInfo_, allocate$Destroy$1);
	return class$;
}

$Class* Destroy$1::class$ = nullptr;