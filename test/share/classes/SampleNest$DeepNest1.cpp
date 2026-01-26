#include <SampleNest$DeepNest1.h>

#include <SampleNest.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _SampleNest$DeepNest1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(SampleNest$DeepNest1, init$, void)},
	{}
};

$InnerClassInfo _SampleNest$DeepNest1_InnerClassesInfo_[] = {
	{"SampleNest$DeepNest1", "SampleNest", "DeepNest1", $STATIC},
	{"SampleNest$DeepNest1$DeepNest2", "SampleNest$DeepNest1", "DeepNest2", $STATIC},
	{}
};

$ClassInfo _SampleNest$DeepNest1_ClassInfo_ = {
	$ACC_SUPER,
	"SampleNest$DeepNest1",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SampleNest$DeepNest1_MethodInfo_,
	nullptr,
	nullptr,
	_SampleNest$DeepNest1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"SampleNest"
};

$Object* allocate$SampleNest$DeepNest1($Class* clazz) {
	return $of($alloc(SampleNest$DeepNest1));
}

void SampleNest$DeepNest1::init$() {
}

SampleNest$DeepNest1::SampleNest$DeepNest1() {
}

$Class* SampleNest$DeepNest1::load$($String* name, bool initialize) {
	$loadClass(SampleNest$DeepNest1, name, initialize, &_SampleNest$DeepNest1_ClassInfo_, allocate$SampleNest$DeepNest1);
	return class$;
}

$Class* SampleNest$DeepNest1::class$ = nullptr;