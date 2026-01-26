#include <SampleNest$1LocalClass.h>

#include <SampleNest.h>
#include <jcpp.h>

using $SampleNest = ::SampleNest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _SampleNest$1LocalClass_FieldInfo_[] = {
	{"this$0", "LSampleNest;", nullptr, $FINAL | $SYNTHETIC, $field(SampleNest$1LocalClass, this$0)},
	{}
};

$MethodInfo _SampleNest$1LocalClass_MethodInfo_[] = {
	{"<init>", "(LSampleNest;)V", nullptr, 0, $method(SampleNest$1LocalClass, init$, void, $SampleNest*)},
	{}
};

$EnclosingMethodInfo _SampleNest$1LocalClass_EnclosingMethodInfo_ = {
	"SampleNest",
	"<init>",
	"()V"
};

$InnerClassInfo _SampleNest$1LocalClass_InnerClassesInfo_[] = {
	{"SampleNest$1LocalClass", nullptr, "LocalClass", 0},
	{}
};

$ClassInfo _SampleNest$1LocalClass_ClassInfo_ = {
	$ACC_SUPER,
	"SampleNest$1LocalClass",
	"java.lang.Object",
	nullptr,
	_SampleNest$1LocalClass_FieldInfo_,
	_SampleNest$1LocalClass_MethodInfo_,
	nullptr,
	&_SampleNest$1LocalClass_EnclosingMethodInfo_,
	_SampleNest$1LocalClass_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"SampleNest"
};

$Object* allocate$SampleNest$1LocalClass($Class* clazz) {
	return $of($alloc(SampleNest$1LocalClass));
}

void SampleNest$1LocalClass::init$($SampleNest* this$0) {
	$set(this, this$0, this$0);
}

SampleNest$1LocalClass::SampleNest$1LocalClass() {
}

$Class* SampleNest$1LocalClass::load$($String* name, bool initialize) {
	$loadClass(SampleNest$1LocalClass, name, initialize, &_SampleNest$1LocalClass_ClassInfo_, allocate$SampleNest$1LocalClass);
	return class$;
}

$Class* SampleNest$1LocalClass::class$ = nullptr;