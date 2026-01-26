#include <SampleNest$1.h>

#include <SampleNest.h>
#include <java/util/List.h>
#include <jcpp.h>

using $SampleNest = ::SampleNest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

$FieldInfo _SampleNest$1_FieldInfo_[] = {
	{"this$0", "LSampleNest;", nullptr, $FINAL | $SYNTHETIC, $field(SampleNest$1, this$0)},
	{}
};

$MethodInfo _SampleNest$1_MethodInfo_[] = {
	{"<init>", "(LSampleNest;)V", nullptr, 0, $method(SampleNest$1, init$, void, $SampleNest*)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SampleNest$1, run, void)},
	{}
};

$EnclosingMethodInfo _SampleNest$1_EnclosingMethodInfo_ = {
	"SampleNest",
	"<init>",
	"()V"
};

$InnerClassInfo _SampleNest$1_InnerClassesInfo_[] = {
	{"SampleNest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SampleNest$1_ClassInfo_ = {
	$ACC_SUPER,
	"SampleNest$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_SampleNest$1_FieldInfo_,
	_SampleNest$1_MethodInfo_,
	nullptr,
	&_SampleNest$1_EnclosingMethodInfo_,
	_SampleNest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"SampleNest"
};

$Object* allocate$SampleNest$1($Class* clazz) {
	return $of($alloc(SampleNest$1));
}

void SampleNest$1::init$($SampleNest* this$0) {
	$set(this, this$0, this$0);
}

void SampleNest$1::run() {
	$init($SampleNest);
	$nc($SampleNest::_nestedTypes)->add($of(this)->getClass());
}

SampleNest$1::SampleNest$1() {
}

$Class* SampleNest$1::load$($String* name, bool initialize) {
	$loadClass(SampleNest$1, name, initialize, &_SampleNest$1_ClassInfo_, allocate$SampleNest$1);
	return class$;
}

$Class* SampleNest$1::class$ = nullptr;