#include <N1$Inner3.h>

#include <N1$Inner1.h>
#include <N1$Inner3$InnerInner.h>
#include <N1.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $N1 = ::N1;
using $N1$Inner1 = ::N1$Inner1;
using $N1$Inner3$InnerInner = ::N1$Inner3$InnerInner;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _N1$Inner3_FieldInfo_[] = {
	{"this$0", "LN1;", nullptr, $FINAL | $SYNTHETIC, $field(N1$Inner3, this$0)},
	{"x1", "Ljava/lang/Object;", "TX1;", 0, $field(N1$Inner3, x1)},
	{}
};

$MethodInfo _N1$Inner3_MethodInfo_[] = {
	{"<init>", "(LN1;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V", "(TX1;TX2;TX3;TT1;TT2;)V", 0, $method(static_cast<void(N1$Inner3::*)($N1*,Object$*,Object$*,Object$*,Object$*,Object$*)>(&N1$Inner3::init$))},
	{"<init>", "(LN1;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V", "<T:Ljava/lang/Object;R:Ljava/lang/Object;S:Ljava/lang/Object;>(TT;TR;TS;TX1;)V", 0, $method(static_cast<void(N1$Inner3::*)($N1*,Object$*,Object$*,Object$*,Object$*)>(&N1$Inner3::init$))},
	{"shazam", "(ZS[I[Ljava/lang/Object;LN1$Inner1;LN1$Inner1;LN1$Inner3$InnerInner;)I", "(ZS[I[Ljava/lang/Object;LN1<TT1;TT2;>.Inner1;LN1<TT1;TT2;>.Inner1;LN1<TT1;TT2;>.Inner3<TX1;TX2;TX3;>.InnerInner<Ljava/lang/String;LN1<TT1;TT2;>.Inner3<Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;>;>;)I", 0},
	{}
};

$InnerClassInfo _N1$Inner3_InnerClassesInfo_[] = {
	{"N1$Inner3", "N1", "Inner3", $PUBLIC},
	{"N1$Inner3$InnerInner", "N1$Inner3", "InnerInner", $PUBLIC},
	{}
};

$ClassInfo _N1$Inner3_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"N1$Inner3",
	"java.lang.Object",
	nullptr,
	_N1$Inner3_FieldInfo_,
	_N1$Inner3_MethodInfo_,
	"<X1:Ljava/lang/Object;X2:Ljava/lang/Object;X3:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_N1$Inner3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"N1"
};

$Object* allocate$N1$Inner3($Class* clazz) {
	return $of($alloc(N1$Inner3));
}

void N1$Inner3::init$($N1* this$0, Object$* x1, Object$* x2, Object$* x3, Object$* t1, Object$* t2) {
	$set(this, this$0, this$0);
}

void N1$Inner3::init$($N1* this$0, Object$* t, Object$* r, Object$* s, Object$* x1) {
	$set(this, this$0, this$0);
}

int32_t N1$Inner3::shazam(bool b, int16_t s, $ints* ia, $ObjectArray* oa, $N1$Inner1* i1, $N1$Inner1* i1a, $N1$Inner3$InnerInner* ii) {
	return 3;
}

N1$Inner3::N1$Inner3() {
}

$Class* N1$Inner3::load$($String* name, bool initialize) {
	$loadClass(N1$Inner3, name, initialize, &_N1$Inner3_ClassInfo_, allocate$N1$Inner3);
	return class$;
}

$Class* N1$Inner3::class$ = nullptr;