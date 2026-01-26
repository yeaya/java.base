#include <Basic4ref$3.h>

#include <Basic4ref.h>
#include <java/lang/ref/PhantomReference.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/WeakReference.h>
#include <jcpp.h>

using $Basic4ref = ::Basic4ref;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PhantomReference = ::java::lang::ref::PhantomReference;
using $Reference = ::java::lang::ref::Reference;
using $WeakReference = ::java::lang::ref::WeakReference;

$MethodInfo _Basic4ref$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Basic4ref$3, init$, void)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Basic4ref$3, run, void)},
	{}
};

$EnclosingMethodInfo _Basic4ref$3_EnclosingMethodInfo_ = {
	"Basic4ref",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _Basic4ref$3_InnerClassesInfo_[] = {
	{"Basic4ref$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Basic4ref$3_ClassInfo_ = {
	$ACC_SUPER,
	"Basic4ref$3",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Basic4ref$3_MethodInfo_,
	nullptr,
	&_Basic4ref$3_EnclosingMethodInfo_,
	_Basic4ref$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Basic4ref"
};

$Object* allocate$Basic4ref$3($Class* clazz) {
	return $of($alloc(Basic4ref$3));
}

void Basic4ref$3::init$() {
}

void Basic4ref$3::run() {
	$var($Basic4ref, s, $new($Basic4ref));
	$init($Basic4ref);
	$assignStatic($Basic4ref::rw, $new($WeakReference, s, $Basic4ref::q));
	$assignStatic($Basic4ref::rw2, $new($WeakReference, s));
	$assignStatic($Basic4ref::rp, $new($PhantomReference, s, $Basic4ref::q));
	$assignStatic($Basic4ref::rp2, $new($PhantomReference, s->sub, $Basic4ref::q));
	$assign(s, nullptr);
}

Basic4ref$3::Basic4ref$3() {
}

$Class* Basic4ref$3::load$($String* name, bool initialize) {
	$loadClass(Basic4ref$3, name, initialize, &_Basic4ref$3_ClassInfo_, allocate$Basic4ref$3);
	return class$;
}

$Class* Basic4ref$3::class$ = nullptr;