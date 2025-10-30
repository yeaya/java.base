#include <Basic4InheritableThreadLocal.h>

#include <Basic4InheritableThreadLocal$1.h>
#include <Basic4InheritableThreadLocal$MyThread.h>
#include <java/lang/InheritableThreadLocal.h>
#include <jcpp.h>

using $Basic4InheritableThreadLocal$1 = ::Basic4InheritableThreadLocal$1;
using $Basic4InheritableThreadLocal$MyThread = ::Basic4InheritableThreadLocal$MyThread;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InheritableThreadLocal = ::java::lang::InheritableThreadLocal;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;

$FieldInfo _Basic4InheritableThreadLocal_FieldInfo_[] = {
	{"n", "Ljava/lang/InheritableThreadLocal;", nullptr, $STATIC, $staticField(Basic4InheritableThreadLocal, n)},
	{"threadCount", "I", nullptr, $STATIC, $staticField(Basic4InheritableThreadLocal, threadCount)},
	{"x", "[I", nullptr, $STATIC, $staticField(Basic4InheritableThreadLocal, x)},
	{}
};

$MethodInfo _Basic4InheritableThreadLocal_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Basic4InheritableThreadLocal::*)()>(&Basic4InheritableThreadLocal::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Basic4InheritableThreadLocal::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _Basic4InheritableThreadLocal_InnerClassesInfo_[] = {
	{"Basic4InheritableThreadLocal$MyThread", "Basic4InheritableThreadLocal", "MyThread", $PRIVATE | $STATIC},
	{"Basic4InheritableThreadLocal$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Basic4InheritableThreadLocal_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Basic4InheritableThreadLocal",
	"java.lang.Object",
	nullptr,
	_Basic4InheritableThreadLocal_FieldInfo_,
	_Basic4InheritableThreadLocal_MethodInfo_,
	nullptr,
	nullptr,
	_Basic4InheritableThreadLocal_InnerClassesInfo_,
	nullptr,
	nullptr,
	"Basic4InheritableThreadLocal$MyThread,Basic4InheritableThreadLocal$1"
};

$Object* allocate$Basic4InheritableThreadLocal($Class* clazz) {
	return $of($alloc(Basic4InheritableThreadLocal));
}

$InheritableThreadLocal* Basic4InheritableThreadLocal::n = nullptr;
int32_t Basic4InheritableThreadLocal::threadCount = 0;
$ints* Basic4InheritableThreadLocal::x = nullptr;

void Basic4InheritableThreadLocal::init$() {
}

void Basic4InheritableThreadLocal::main($StringArray* args) {
	$init(Basic4InheritableThreadLocal);
	$useLocalCurrentObjectStackCache();
	$assignStatic(Basic4InheritableThreadLocal::x, $new($ints, Basic4InheritableThreadLocal::threadCount));
	$var($Thread, progenitor, $new($Basic4InheritableThreadLocal$MyThread));
	progenitor->start();
	progenitor->join();
	for (int32_t i = 0; i < Basic4InheritableThreadLocal::threadCount; ++i) {
		if ($nc(Basic4InheritableThreadLocal::x)->get(i) != i) {
			$throw($$new($Exception, $$str({"x["_s, $$str(i), "] ="_s, $$str($nc(Basic4InheritableThreadLocal::x)->get(i))})));
		}
	}
}

void clinit$Basic4InheritableThreadLocal($Class* class$) {
	$assignStatic(Basic4InheritableThreadLocal::n, $new($Basic4InheritableThreadLocal$1));
	Basic4InheritableThreadLocal::threadCount = 100;
}

Basic4InheritableThreadLocal::Basic4InheritableThreadLocal() {
}

$Class* Basic4InheritableThreadLocal::load$($String* name, bool initialize) {
	$loadClass(Basic4InheritableThreadLocal, name, initialize, &_Basic4InheritableThreadLocal_ClassInfo_, clinit$Basic4InheritableThreadLocal, allocate$Basic4InheritableThreadLocal);
	return class$;
}

$Class* Basic4InheritableThreadLocal::class$ = nullptr;