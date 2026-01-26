#include <Basic4ThreadLocal$2.h>

#include <Basic4ThreadLocal.h>
#include <java/lang/ThreadLocal.h>
#include <jcpp.h>

using $Basic4ThreadLocal = ::Basic4ThreadLocal;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadLocal = ::java::lang::ThreadLocal;

$FieldInfo _Basic4ThreadLocal$2_FieldInfo_[] = {
	{"val$x", "[I", nullptr, $FINAL | $SYNTHETIC, $field(Basic4ThreadLocal$2, val$x)},
	{}
};

$MethodInfo _Basic4ThreadLocal$2_MethodInfo_[] = {
	{"<init>", "([I)V", nullptr, 0, $method(Basic4ThreadLocal$2, init$, void, $ints*)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Basic4ThreadLocal$2, run, void)},
	{}
};

$EnclosingMethodInfo _Basic4ThreadLocal$2_EnclosingMethodInfo_ = {
	"Basic4ThreadLocal",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _Basic4ThreadLocal$2_InnerClassesInfo_[] = {
	{"Basic4ThreadLocal$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Basic4ThreadLocal$2_ClassInfo_ = {
	$ACC_SUPER,
	"Basic4ThreadLocal$2",
	"java.lang.Thread",
	nullptr,
	_Basic4ThreadLocal$2_FieldInfo_,
	_Basic4ThreadLocal$2_MethodInfo_,
	nullptr,
	&_Basic4ThreadLocal$2_EnclosingMethodInfo_,
	_Basic4ThreadLocal$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Basic4ThreadLocal"
};

$Object* allocate$Basic4ThreadLocal$2($Class* clazz) {
	return $of($alloc(Basic4ThreadLocal$2));
}

void Basic4ThreadLocal$2::init$($ints* val$x) {
	$set(this, val$x, val$x);
	$Thread::init$();
}

void Basic4ThreadLocal$2::run() {
	$useLocalCurrentObjectStackCache();
	$init($Basic4ThreadLocal);
	int32_t threadId = $nc((($cast($Integer, $($nc($Basic4ThreadLocal::n)->get())))))->intValue();
	for (int32_t j = 0; j < threadId; ++j) {
		++(*$nc(this->val$x))[threadId];
		$($Thread::currentThread())->yield();
	}
}

Basic4ThreadLocal$2::Basic4ThreadLocal$2() {
}

$Class* Basic4ThreadLocal$2::load$($String* name, bool initialize) {
	$loadClass(Basic4ThreadLocal$2, name, initialize, &_Basic4ThreadLocal$2_ClassInfo_, allocate$Basic4ThreadLocal$2);
	return class$;
}

$Class* Basic4ThreadLocal$2::class$ = nullptr;