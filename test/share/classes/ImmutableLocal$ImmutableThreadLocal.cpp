#include <ImmutableLocal$ImmutableThreadLocal.h>

#include <ImmutableLocal.h>
#include <java/lang/ThreadLocal.h>
#include <jcpp.h>

using $ImmutableLocal = ::ImmutableLocal;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ThreadLocal = ::java::lang::ThreadLocal;

$MethodInfo _ImmutableLocal$ImmutableThreadLocal_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ImmutableLocal$ImmutableThreadLocal::*)()>(&ImmutableLocal$ImmutableThreadLocal::init$))},
	{"initialValue", "()Ljava/lang/Object;", nullptr, $PROTECTED | $ABSTRACT},
	{"set", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ImmutableLocal$ImmutableThreadLocal_InnerClassesInfo_[] = {
	{"ImmutableLocal$ImmutableThreadLocal", "ImmutableLocal", "ImmutableThreadLocal", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ImmutableLocal$ImmutableThreadLocal_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"ImmutableLocal$ImmutableThreadLocal",
	"java.lang.ThreadLocal",
	nullptr,
	nullptr,
	_ImmutableLocal$ImmutableThreadLocal_MethodInfo_,
	nullptr,
	nullptr,
	_ImmutableLocal$ImmutableThreadLocal_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ImmutableLocal"
};

$Object* allocate$ImmutableLocal$ImmutableThreadLocal($Class* clazz) {
	return $of($alloc(ImmutableLocal$ImmutableThreadLocal));
}

$Object* ImmutableLocal$ImmutableThreadLocal::initialValue() {
	 return this->$ThreadLocal::initialValue();
}

void ImmutableLocal$ImmutableThreadLocal::init$() {
	$ThreadLocal::init$();
}

void ImmutableLocal$ImmutableThreadLocal::set(Object$* value) {
	$throwNew($RuntimeException, "ImmutableThreadLocal set called"_s);
}

ImmutableLocal$ImmutableThreadLocal::ImmutableLocal$ImmutableThreadLocal() {
}

$Class* ImmutableLocal$ImmutableThreadLocal::load$($String* name, bool initialize) {
	$loadClass(ImmutableLocal$ImmutableThreadLocal, name, initialize, &_ImmutableLocal$ImmutableThreadLocal_ClassInfo_, allocate$ImmutableLocal$ImmutableThreadLocal);
	return class$;
}

$Class* ImmutableLocal$ImmutableThreadLocal::class$ = nullptr;