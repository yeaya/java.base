#include <N1$Inner3$InnerInner.h>

#include <N1$Inner2.h>
#include <N1$Inner3.h>
#include <N1.h>
#include <jcpp.h>

using $N1 = ::N1;
using $N1$Inner3 = ::N1$Inner3;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _N1$Inner3$InnerInner_FieldInfo_[] = {
	{"this$1", "LN1$Inner3;", nullptr, $FINAL | $SYNTHETIC, $field(N1$Inner3$InnerInner, this$1)},
	{"b", "Z", nullptr, 0, $field(N1$Inner3$InnerInner, b)},
	{"i2x", "LN1$Inner2;", "LN1<TT1;TT2;>.Inner2<TX2;>;", 0, $field(N1$Inner3$InnerInner, i2x)},
	{}
};

$MethodInfo _N1$Inner3$InnerInner_MethodInfo_[] = {
	{"<init>", "(LN1$Inner3;)V", nullptr, $PUBLIC, $method(static_cast<void(N1$Inner3$InnerInner::*)($N1$Inner3*)>(&N1$Inner3$InnerInner::init$))},
	{"bam", "(LN1;)LN1;", "(LN1<TT1;TX2;>;)LN1<**>;", 0},
	{"bar", "(Ljava/lang/Object;[Ljava/lang/Object;Ljava/lang/Object;)[Ljava/lang/Object;", "<X3:Ljava/lang/Object;>(TX1;[TX3;TT1;)[TX3;", 0},
	{"baz", "(LN1;)LN1;", "(LN1<TX1;TX2;>;)LN1<TX1;TX2;>;", 0},
	{"boom", "(LN1;)LN1;", "(LN1<TT1;TX2;>;)LN1<+TT1;*>;", 0},
	{"foo", "(Ljava/lang/Object;)V", "(TX3;)V", 0},
	{}
};

$InnerClassInfo _N1$Inner3$InnerInner_InnerClassesInfo_[] = {
	{"N1$Inner3", "N1", "Inner3", $PUBLIC},
	{"N1$Inner3$InnerInner", "N1$Inner3", "InnerInner", $PUBLIC},
	{}
};

$ClassInfo _N1$Inner3$InnerInner_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"N1$Inner3$InnerInner",
	"java.lang.Object",
	nullptr,
	_N1$Inner3$InnerInner_FieldInfo_,
	_N1$Inner3$InnerInner_MethodInfo_,
	"<T2:Ljava/lang/Object;X2:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_N1$Inner3$InnerInner_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"N1"
};

$Object* allocate$N1$Inner3$InnerInner($Class* clazz) {
	return $of($alloc(N1$Inner3$InnerInner));
}

void N1$Inner3$InnerInner::init$($N1$Inner3* this$1) {
	$set(this, this$1, this$1);
}

void N1$Inner3$InnerInner::foo(Object$* x3) {
}

$ObjectArray* N1$Inner3$InnerInner::bar(Object$* x1, $ObjectArray* x3, Object$* t1) {
	return x3;
}

$N1* N1$Inner3$InnerInner::baz($N1* n1) {
	return n1;
}

$N1* N1$Inner3$InnerInner::bam($N1* n1) {
	return n1;
}

$N1* N1$Inner3$InnerInner::boom($N1* n1) {
	return n1;
}

N1$Inner3$InnerInner::N1$Inner3$InnerInner() {
}

$Class* N1$Inner3$InnerInner::load$($String* name, bool initialize) {
	$loadClass(N1$Inner3$InnerInner, name, initialize, &_N1$Inner3$InnerInner_ClassInfo_, allocate$N1$Inner3$InnerInner);
	return class$;
}

$Class* N1$Inner3$InnerInner::class$ = nullptr;