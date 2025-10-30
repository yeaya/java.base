#include <NullQueue$1.h>

#include <NullQueue.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/WeakReference.h>
#include <jcpp.h>

using $NullQueue = ::NullQueue;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Reference = ::java::lang::ref::Reference;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $WeakReference = ::java::lang::ref::WeakReference;

$MethodInfo _NullQueue$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(NullQueue$1::*)()>(&NullQueue$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _NullQueue$1_EnclosingMethodInfo_ = {
	"NullQueue",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _NullQueue$1_InnerClassesInfo_[] = {
	{"NullQueue$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _NullQueue$1_ClassInfo_ = {
	$ACC_SUPER,
	"NullQueue$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_NullQueue$1_MethodInfo_,
	nullptr,
	&_NullQueue$1_EnclosingMethodInfo_,
	_NullQueue$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"NullQueue"
};

$Object* allocate$NullQueue$1($Class* clazz) {
	return $of($alloc(NullQueue$1));
}

void NullQueue$1::init$() {
}

void NullQueue$1::run() {
	$init($NullQueue);
	$assignStatic($NullQueue::r, $new($WeakReference, $$new($Object), nullptr));
}

NullQueue$1::NullQueue$1() {
}

$Class* NullQueue$1::load$($String* name, bool initialize) {
	$loadClass(NullQueue$1, name, initialize, &_NullQueue$1_ClassInfo_, allocate$NullQueue$1);
	return class$;
}

$Class* NullQueue$1::class$ = nullptr;