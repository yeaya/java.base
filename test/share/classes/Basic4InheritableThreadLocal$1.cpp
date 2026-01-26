#include <Basic4InheritableThreadLocal$1.h>

#include <java/lang/InheritableThreadLocal.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InheritableThreadLocal = ::java::lang::InheritableThreadLocal;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Basic4InheritableThreadLocal$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Basic4InheritableThreadLocal$1, init$, void)},
	{"childValue", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PROTECTED, $virtualMethod(Basic4InheritableThreadLocal$1, childValue, $Object*, Object$*)},
	{"initialValue", "()Ljava/lang/Object;", nullptr, $PROTECTED, $virtualMethod(Basic4InheritableThreadLocal$1, initialValue, $Object*)},
	{}
};

$EnclosingMethodInfo _Basic4InheritableThreadLocal$1_EnclosingMethodInfo_ = {
	"Basic4InheritableThreadLocal",
	nullptr,
	nullptr
};

$InnerClassInfo _Basic4InheritableThreadLocal$1_InnerClassesInfo_[] = {
	{"Basic4InheritableThreadLocal$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Basic4InheritableThreadLocal$1_ClassInfo_ = {
	$ACC_SUPER,
	"Basic4InheritableThreadLocal$1",
	"java.lang.InheritableThreadLocal",
	nullptr,
	nullptr,
	_Basic4InheritableThreadLocal$1_MethodInfo_,
	nullptr,
	&_Basic4InheritableThreadLocal$1_EnclosingMethodInfo_,
	_Basic4InheritableThreadLocal$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Basic4InheritableThreadLocal"
};

$Object* allocate$Basic4InheritableThreadLocal$1($Class* clazz) {
	return $of($alloc(Basic4InheritableThreadLocal$1));
}

void Basic4InheritableThreadLocal$1::init$() {
	$InheritableThreadLocal::init$();
}

$Object* Basic4InheritableThreadLocal$1::initialValue() {
	return $of($new($Integer, 0));
}

$Object* Basic4InheritableThreadLocal$1::childValue(Object$* parentValue) {
	return $of($new($Integer, $nc(($cast($Integer, parentValue)))->intValue() + 1));
}

Basic4InheritableThreadLocal$1::Basic4InheritableThreadLocal$1() {
}

$Class* Basic4InheritableThreadLocal$1::load$($String* name, bool initialize) {
	$loadClass(Basic4InheritableThreadLocal$1, name, initialize, &_Basic4InheritableThreadLocal$1_ClassInfo_, allocate$Basic4InheritableThreadLocal$1);
	return class$;
}

$Class* Basic4InheritableThreadLocal$1::class$ = nullptr;