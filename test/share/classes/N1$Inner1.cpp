#include <N1$Inner1.h>

#include <N1.h>
#include <jcpp.h>

using $N1 = ::N1;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _N1$Inner1_FieldInfo_[] = {
	{"this$0", "LN1;", nullptr, $FINAL | $SYNTHETIC, $field(N1$Inner1, this$0)},
	{}
};

$MethodInfo _N1$Inner1_MethodInfo_[] = {
	{"<init>", "(LN1;)V", nullptr, $PUBLIC, $method(N1$Inner1, init$, void, $N1*)},
	{}
};

$InnerClassInfo _N1$Inner1_InnerClassesInfo_[] = {
	{"N1$Inner1", "N1", "Inner1", $PUBLIC},
	{}
};

$ClassInfo _N1$Inner1_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"N1$Inner1",
	"java.lang.Object",
	nullptr,
	_N1$Inner1_FieldInfo_,
	_N1$Inner1_MethodInfo_,
	nullptr,
	nullptr,
	_N1$Inner1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"N1"
};

$Object* allocate$N1$Inner1($Class* clazz) {
	return $of($alloc(N1$Inner1));
}

void N1$Inner1::init$($N1* this$0) {
	$set(this, this$0, this$0);
}

N1$Inner1::N1$Inner1() {
}

$Class* N1$Inner1::load$($String* name, bool initialize) {
	$loadClass(N1$Inner1, name, initialize, &_N1$Inner1_ClassInfo_, allocate$N1$Inner1);
	return class$;
}

$Class* N1$Inner1::class$ = nullptr;