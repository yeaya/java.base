#include <Basic4ref$2.h>

#include <Basic4ref.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/ref/PhantomReference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Vector.h>
#include <jcpp.h>

using $Basic4ref = ::Basic4ref;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $PhantomReference = ::java::lang::ref::PhantomReference;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $Vector = ::java::util::Vector;

$MethodInfo _Basic4ref$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Basic4ref$2::*)()>(&Basic4ref$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Basic4ref$2_EnclosingMethodInfo_ = {
	"Basic4ref",
	"createNoise",
	"()V"
};

$InnerClassInfo _Basic4ref$2_InnerClassesInfo_[] = {
	{"Basic4ref$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Basic4ref$2_ClassInfo_ = {
	$ACC_SUPER,
	"Basic4ref$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Basic4ref$2_MethodInfo_,
	nullptr,
	&_Basic4ref$2_EnclosingMethodInfo_,
	_Basic4ref$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Basic4ref"
};

$Object* allocate$Basic4ref$2($Class* clazz) {
	return $of($alloc(Basic4ref$2));
}

void Basic4ref$2::init$() {
}

void Basic4ref$2::run() {
	$useLocalCurrentObjectStackCache();
	$init($Basic4ref);
	$nc($Basic4ref::keep)->addElement($$new($PhantomReference, $$new($Object), $Basic4ref::q2));
}

Basic4ref$2::Basic4ref$2() {
}

$Class* Basic4ref$2::load$($String* name, bool initialize) {
	$loadClass(Basic4ref$2, name, initialize, &_Basic4ref$2_ClassInfo_, allocate$Basic4ref$2);
	return class$;
}

$Class* Basic4ref$2::class$ = nullptr;