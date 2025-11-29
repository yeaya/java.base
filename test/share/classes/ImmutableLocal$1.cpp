#include <ImmutableLocal$1.h>

#include <ImmutableLocal$ImmutableThreadLocal.h>
#include <java/lang/ThreadLocal.h>
#include <jcpp.h>

using $ImmutableLocal$ImmutableThreadLocal = ::ImmutableLocal$ImmutableThreadLocal;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _ImmutableLocal$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ImmutableLocal$1::*)()>(&ImmutableLocal$1::init$))},
	{"initialValue", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ImmutableLocal$1_EnclosingMethodInfo_ = {
	"ImmutableLocal",
	nullptr,
	nullptr
};

$InnerClassInfo _ImmutableLocal$1_InnerClassesInfo_[] = {
	{"ImmutableLocal$1", nullptr, nullptr, 0},
	{"ImmutableLocal$ImmutableThreadLocal", "ImmutableLocal", "ImmutableThreadLocal", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ImmutableLocal$1_ClassInfo_ = {
	$ACC_SUPER,
	"ImmutableLocal$1",
	"ImmutableLocal$ImmutableThreadLocal",
	nullptr,
	nullptr,
	_ImmutableLocal$1_MethodInfo_,
	nullptr,
	&_ImmutableLocal$1_EnclosingMethodInfo_,
	_ImmutableLocal$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ImmutableLocal"
};

$Object* allocate$ImmutableLocal$1($Class* clazz) {
	return $of($alloc(ImmutableLocal$1));
}

void ImmutableLocal$1::init$() {
	$ImmutableLocal$ImmutableThreadLocal::init$();
}

$Object* ImmutableLocal$1::initialValue() {
	return $of($($Thread::currentThread())->getName());
}

ImmutableLocal$1::ImmutableLocal$1() {
}

$Class* ImmutableLocal$1::load$($String* name, bool initialize) {
	$loadClass(ImmutableLocal$1, name, initialize, &_ImmutableLocal$1_ClassInfo_, allocate$ImmutableLocal$1);
	return class$;
}

$Class* ImmutableLocal$1::class$ = nullptr;