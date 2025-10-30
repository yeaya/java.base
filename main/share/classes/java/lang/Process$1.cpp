#include <java/lang/Process$1.h>

#include <java/lang/Process.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Process = ::java::lang::Process;
using $ForkJoinPool$ManagedBlocker = ::java::util::concurrent::ForkJoinPool$ManagedBlocker;

namespace java {
	namespace lang {

$FieldInfo _Process$1_FieldInfo_[] = {
	{"this$0", "Ljava/lang/Process;", nullptr, $FINAL | $SYNTHETIC, $field(Process$1, this$0)},
	{}
};

$MethodInfo _Process$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Process;)V", nullptr, 0, $method(static_cast<void(Process$1::*)($Process*)>(&Process$1::init$))},
	{"block", "()Z", nullptr, $PUBLIC, nullptr, "java.lang.InterruptedException"},
	{"isReleasable", "()Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Process$1_EnclosingMethodInfo_ = {
	"java.lang.Process",
	"waitForInternal",
	"()Ljava/lang/Process;"
};

$InnerClassInfo _Process$1_InnerClassesInfo_[] = {
	{"java.lang.Process$1", nullptr, nullptr, 0},
	{"java.util.concurrent.ForkJoinPool$ManagedBlocker", "java.util.concurrent.ForkJoinPool", "ManagedBlocker", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Process$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.Process$1",
	"java.lang.Object",
	"java.util.concurrent.ForkJoinPool$ManagedBlocker",
	_Process$1_FieldInfo_,
	_Process$1_MethodInfo_,
	nullptr,
	&_Process$1_EnclosingMethodInfo_,
	_Process$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.Process"
};

$Object* allocate$Process$1($Class* clazz) {
	return $of($alloc(Process$1));
}

void Process$1::init$($Process* this$0) {
	$set(this, this$0, this$0);
}

bool Process$1::block() {
	this->this$0->waitFor();
	return true;
}

bool Process$1::isReleasable() {
	return !this->this$0->isAlive();
}

Process$1::Process$1() {
}

$Class* Process$1::load$($String* name, bool initialize) {
	$loadClass(Process$1, name, initialize, &_Process$1_ClassInfo_, allocate$Process$1);
	return class$;
}

$Class* Process$1::class$ = nullptr;

	} // lang
} // java