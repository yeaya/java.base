#include <TLRemoveTest$1.h>

#include <java/lang/ThreadLocal.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadLocal = ::java::lang::ThreadLocal;

$MethodInfo _TLRemoveTest$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(TLRemoveTest$1, init$, void)},
	{"initialValue", "()Ljava/lang/Integer;", nullptr, $PROTECTED | $SYNCHRONIZED, $virtualMethod(TLRemoveTest$1, initialValue, $Object*)},
	{}
};

$EnclosingMethodInfo _TLRemoveTest$1_EnclosingMethodInfo_ = {
	"TLRemoveTest",
	nullptr,
	nullptr
};

$InnerClassInfo _TLRemoveTest$1_InnerClassesInfo_[] = {
	{"TLRemoveTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TLRemoveTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"TLRemoveTest$1",
	"java.lang.ThreadLocal",
	nullptr,
	nullptr,
	_TLRemoveTest$1_MethodInfo_,
	"Ljava/lang/ThreadLocal<Ljava/lang/Integer;>;",
	&_TLRemoveTest$1_EnclosingMethodInfo_,
	_TLRemoveTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TLRemoveTest"
};

$Object* allocate$TLRemoveTest$1($Class* clazz) {
	return $of($alloc(TLRemoveTest$1));
}

void TLRemoveTest$1::init$() {
	$ThreadLocal::init$();
}

$Object* TLRemoveTest$1::initialValue() {
	$synchronized(this) {
		return $of($Integer::valueOf(101));
	}
}

TLRemoveTest$1::TLRemoveTest$1() {
}

$Class* TLRemoveTest$1::load$($String* name, bool initialize) {
	$loadClass(TLRemoveTest$1, name, initialize, &_TLRemoveTest$1_ClassInfo_, allocate$TLRemoveTest$1);
	return class$;
}

$Class* TLRemoveTest$1::class$ = nullptr;