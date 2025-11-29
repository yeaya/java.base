#include <SampleNest$DeepNest1$DeepNest2.h>

#include <SampleNest$DeepNest1.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _SampleNest$DeepNest1$DeepNest2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SampleNest$DeepNest1$DeepNest2::*)()>(&SampleNest$DeepNest1$DeepNest2::init$))},
	{}
};

$InnerClassInfo _SampleNest$DeepNest1$DeepNest2_InnerClassesInfo_[] = {
	{"SampleNest$DeepNest1", "SampleNest", "DeepNest1", $STATIC},
	{"SampleNest$DeepNest1$DeepNest2", "SampleNest$DeepNest1", "DeepNest2", $STATIC},
	{"SampleNest$DeepNest1$DeepNest2$DeepNest3", "SampleNest$DeepNest1$DeepNest2", "DeepNest3", $STATIC},
	{}
};

$ClassInfo _SampleNest$DeepNest1$DeepNest2_ClassInfo_ = {
	$ACC_SUPER,
	"SampleNest$DeepNest1$DeepNest2",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SampleNest$DeepNest1$DeepNest2_MethodInfo_,
	nullptr,
	nullptr,
	_SampleNest$DeepNest1$DeepNest2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"SampleNest"
};

$Object* allocate$SampleNest$DeepNest1$DeepNest2($Class* clazz) {
	return $of($alloc(SampleNest$DeepNest1$DeepNest2));
}

void SampleNest$DeepNest1$DeepNest2::init$() {
}

SampleNest$DeepNest1$DeepNest2::SampleNest$DeepNest1$DeepNest2() {
}

$Class* SampleNest$DeepNest1$DeepNest2::load$($String* name, bool initialize) {
	$loadClass(SampleNest$DeepNest1$DeepNest2, name, initialize, &_SampleNest$DeepNest1$DeepNest2_ClassInfo_, allocate$SampleNest$DeepNest1$DeepNest2);
	return class$;
}

$Class* SampleNest$DeepNest1$DeepNest2::class$ = nullptr;