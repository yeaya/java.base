#include <GetResource.h>

#include <GetResource$1.h>
#include <GetResource$2.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/CyclicBarrier.h>
#include <jcpp.h>

using $GetResource$1 = ::GetResource$1;
using $GetResource$2 = ::GetResource$2;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $CyclicBarrier = ::java::util::concurrent::CyclicBarrier;

$FieldInfo _GetResource_FieldInfo_[] = {
	{"go", "Ljava/util/concurrent/CyclicBarrier;", nullptr, 0, $field(GetResource, go)},
	{"done", "Ljava/util/concurrent/CyclicBarrier;", nullptr, 0, $field(GetResource, done)},
	{"t1", "Ljava/lang/Thread;", nullptr, 0, $field(GetResource, t1)},
	{"t2", "Ljava/lang/Thread;", nullptr, 0, $field(GetResource, t2)},
	{}
};

$MethodInfo _GetResource_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GetResource::*)()>(&GetResource::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&GetResource::main)), "java.lang.Exception"},
	{"run", "()V", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$InnerClassInfo _GetResource_InnerClassesInfo_[] = {
	{"GetResource$2", nullptr, nullptr, 0},
	{"GetResource$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _GetResource_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"GetResource",
	"java.lang.Object",
	nullptr,
	_GetResource_FieldInfo_,
	_GetResource_MethodInfo_,
	nullptr,
	nullptr,
	_GetResource_InnerClassesInfo_,
	nullptr,
	nullptr,
	"GetResource$2,GetResource$1"
};

$Object* allocate$GetResource($Class* clazz) {
	return $of($alloc(GetResource));
}

void GetResource::init$() {
	$set(this, go, $new($CyclicBarrier, 2));
	$set(this, done, $new($CyclicBarrier, 2));
	$set(this, t1, $new($GetResource$1, this));
	$set(this, t2, $new($GetResource$2, this));
}

void GetResource::run() {
	$nc(this->t1)->start();
	$nc(this->t2)->start();
	try {
		$nc(this->t1)->join();
	} catch ($InterruptedException&) {
		$var($InterruptedException, e, $catch());
		e->printStackTrace();
		$throw(e);
	}
	try {
		$nc(this->t2)->join();
	} catch ($InterruptedException&) {
		$var($InterruptedException, e, $catch());
		e->printStackTrace();
		$throw(e);
	}
}

void GetResource::main($StringArray* args) {
	$$new(GetResource)->run();
}

GetResource::GetResource() {
}

$Class* GetResource::load$($String* name, bool initialize) {
	$loadClass(GetResource, name, initialize, &_GetResource_ClassInfo_, allocate$GetResource);
	return class$;
}

$Class* GetResource::class$ = nullptr;