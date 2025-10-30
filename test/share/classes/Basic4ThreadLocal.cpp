#include <Basic4ThreadLocal.h>

#include <Basic4ThreadLocal$1.h>
#include <Basic4ThreadLocal$2.h>
#include <java/lang/ThreadLocal.h>
#include <jcpp.h>

using $Basic4ThreadLocal$1 = ::Basic4ThreadLocal$1;
using $Basic4ThreadLocal$2 = ::Basic4ThreadLocal$2;
using $ThreadArray = $Array<::java::lang::Thread>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ThreadLocal = ::java::lang::ThreadLocal;

$FieldInfo _Basic4ThreadLocal_FieldInfo_[] = {
	{"n", "Ljava/lang/ThreadLocal;", nullptr, $STATIC, $staticField(Basic4ThreadLocal, n)},
	{}
};

$MethodInfo _Basic4ThreadLocal_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Basic4ThreadLocal::*)()>(&Basic4ThreadLocal::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Basic4ThreadLocal::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _Basic4ThreadLocal_InnerClassesInfo_[] = {
	{"Basic4ThreadLocal$2", nullptr, nullptr, 0},
	{"Basic4ThreadLocal$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Basic4ThreadLocal_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Basic4ThreadLocal",
	"java.lang.Object",
	nullptr,
	_Basic4ThreadLocal_FieldInfo_,
	_Basic4ThreadLocal_MethodInfo_,
	nullptr,
	nullptr,
	_Basic4ThreadLocal_InnerClassesInfo_,
	nullptr,
	nullptr,
	"Basic4ThreadLocal$2,Basic4ThreadLocal$1"
};

$Object* allocate$Basic4ThreadLocal($Class* clazz) {
	return $of($alloc(Basic4ThreadLocal));
}

$ThreadLocal* Basic4ThreadLocal::n = nullptr;

void Basic4ThreadLocal::init$() {
}

void Basic4ThreadLocal::main($StringArray* args) {
	$init(Basic4ThreadLocal);
	$useLocalCurrentObjectStackCache();
	int32_t threadCount = 100;
	$var($ThreadArray, th, $new($ThreadArray, threadCount));
	$var($ints, x, $new($ints, threadCount));
	for (int32_t i = 0; i < threadCount; ++i) {
		th->set(i, $$new($Basic4ThreadLocal$2, x));
		$nc(th->get(i))->start();
	}
	for (int32_t i = 0; i < threadCount; ++i) {
		$nc(th->get(i))->join();
	}
	for (int32_t i = 0; i < threadCount; ++i) {
		if (x->get(i) != i) {
			$throw($$new($Exception, $$str({"x["_s, $$str(i), "] ="_s, $$str(x->get(i))})));
		}
	}
}

void clinit$Basic4ThreadLocal($Class* class$) {
	$assignStatic(Basic4ThreadLocal::n, $new($Basic4ThreadLocal$1));
}

Basic4ThreadLocal::Basic4ThreadLocal() {
}

$Class* Basic4ThreadLocal::load$($String* name, bool initialize) {
	$loadClass(Basic4ThreadLocal, name, initialize, &_Basic4ThreadLocal_ClassInfo_, clinit$Basic4ThreadLocal, allocate$Basic4ThreadLocal);
	return class$;
}

$Class* Basic4ThreadLocal::class$ = nullptr;