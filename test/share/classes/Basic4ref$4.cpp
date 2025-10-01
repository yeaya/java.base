#include <Basic4ref$4.h>

#include <Basic4ref$ClearFinalizerThread.h>
#include <Basic4ref.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Basic4ref = ::Basic4ref;
using $Basic4ref$ClearFinalizerThread = ::Basic4ref$ClearFinalizerThread;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$MethodInfo _Basic4ref$4_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Basic4ref$4::*)()>(&Basic4ref$4::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Basic4ref$4_EnclosingMethodInfo_ = {
	"Basic4ref",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _Basic4ref$4_InnerClassesInfo_[] = {
	{"Basic4ref$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Basic4ref$4_ClassInfo_ = {
	$ACC_SUPER,
	"Basic4ref$4",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Basic4ref$4_MethodInfo_,
	nullptr,
	&_Basic4ref$4_EnclosingMethodInfo_,
	_Basic4ref$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Basic4ref"
};

$Object* allocate$Basic4ref$4($Class* clazz) {
	return $of($alloc(Basic4ref$4));
}

void Basic4ref$4::init$() {
}

void Basic4ref$4::run() {
	$new($Basic4ref$ClearFinalizerThread);
}

Basic4ref$4::Basic4ref$4() {
}

$Class* Basic4ref$4::load$($String* name, bool initialize) {
	$loadClass(Basic4ref$4, name, initialize, &_Basic4ref$4_ClassInfo_, allocate$Basic4ref$4);
	return class$;
}

$Class* Basic4ref$4::class$ = nullptr;