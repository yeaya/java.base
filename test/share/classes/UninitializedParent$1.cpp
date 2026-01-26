#include <UninitializedParent$1.h>

#include <UninitializedParent.h>
#include <java/lang/ClassLoader.h>
#include <jcpp.h>

using $UninitializedParent = ::UninitializedParent;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _UninitializedParent$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/ClassLoader;)V", nullptr, 0, $method(UninitializedParent$1, init$, void, $ClassLoader*)},
	{"finalize", "()V", nullptr, $PROTECTED, $virtualMethod(UninitializedParent$1, finalize, void)},
	{}
};

$EnclosingMethodInfo _UninitializedParent$1_EnclosingMethodInfo_ = {
	"UninitializedParent",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _UninitializedParent$1_InnerClassesInfo_[] = {
	{"UninitializedParent$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _UninitializedParent$1_ClassInfo_ = {
	$ACC_SUPER,
	"UninitializedParent$1",
	"java.lang.ClassLoader",
	nullptr,
	nullptr,
	_UninitializedParent$1_MethodInfo_,
	nullptr,
	&_UninitializedParent$1_EnclosingMethodInfo_,
	_UninitializedParent$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"UninitializedParent"
};

$Object* allocate$UninitializedParent$1($Class* clazz) {
	return $of($alloc(UninitializedParent$1));
}

void UninitializedParent$1::init$($ClassLoader* arg0) {
	$ClassLoader::init$(arg0);
}

void UninitializedParent$1::finalize() {
	$init($UninitializedParent);
	$assignStatic($UninitializedParent::loader, this);
}

UninitializedParent$1::UninitializedParent$1() {
}

$Class* UninitializedParent$1::load$($String* name, bool initialize) {
	$loadClass(UninitializedParent$1, name, initialize, &_UninitializedParent$1_ClassInfo_, allocate$UninitializedParent$1);
	return class$;
}

$Class* UninitializedParent$1::class$ = nullptr;