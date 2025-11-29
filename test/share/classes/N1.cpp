#include <N1.h>

#include <N1$Inner1.h>
#include <N1$Inner2.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _N1_FieldInfo_[] = {
	{"i1", "LN1$Inner1;", "LN1<TT1;TT2;>.Inner1;", $PUBLIC, $field(N1, i1)},
	{"i2", "LN1$Inner2;", nullptr, $PUBLIC, $field(N1, i2)},
	{"i2sc", "LN1$Inner2;", "LN1<TT1;TT2;>.Inner2<-Ljava/lang/Character;>;", $PUBLIC, $field(N1, i2sc)},
	{}
};

$MethodInfo _N1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(N1::*)()>(&N1::init$))},
	{}
};

$InnerClassInfo _N1_InnerClassesInfo_[] = {
	{"N1$Inner3", "N1", "Inner3", $PUBLIC},
	{"N1$Inner2", "N1", "Inner2", $PUBLIC},
	{"N1$Inner1", "N1", "Inner1", $PUBLIC},
	{}
};

$ClassInfo _N1_ClassInfo_ = {
	$ACC_SUPER,
	"N1",
	"java.lang.Object",
	nullptr,
	_N1_FieldInfo_,
	_N1_MethodInfo_,
	"<T1:Ljava/lang/Object;T2:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_N1_InnerClassesInfo_,
	nullptr,
	nullptr,
	"N1$Inner3,N1$Inner3$InnerInner,N1$Inner2,N1$Inner1"
};

$Object* allocate$N1($Class* clazz) {
	return $of($alloc(N1));
}

void N1::init$() {
}

N1::N1() {
}

$Class* N1::load$($String* name, bool initialize) {
	$loadClass(N1, name, initialize, &_N1_ClassInfo_, allocate$N1);
	return class$;
}

$Class* N1::class$ = nullptr;