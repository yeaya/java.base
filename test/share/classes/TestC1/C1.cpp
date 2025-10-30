#include <TestC1/C1.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace TestC1 {

$FieldInfo _C1_FieldInfo_[] = {
	{"ft", "Ljava/lang/Object;", "TT;", $PUBLIC, $field(C1, ft)},
	{"fc1t", "LTestC1/C1;", "LTestC1/C1<TT;>;", $PUBLIC, $field(C1, fc1t)},
	{"fc1", "LTestC1/C1;", nullptr, $PUBLIC, $field(C1, fc1)},
	{}
};

$MethodInfo _C1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;)V", "(TT;)V", $PUBLIC, $method(static_cast<void(C1::*)(Object$*)>(&C1::init$))},
	{"mc1", "()LTestC1/C1;", nullptr, $PUBLIC | $ABSTRACT},
	{"mc1t", "(Ljava/lang/Object;LTestC1/C1;LTestC1/C1;)LTestC1/C1;", "(TT;LTestC1/C1<TT;>;LTestC1/C1;)LTestC1/C1<TT;>;", $PUBLIC | $ABSTRACT},
	{"mt", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TT;)TT;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _C1_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"TestC1.C1",
	"java.lang.Object",
	nullptr,
	_C1_FieldInfo_,
	_C1_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;"
};

$Object* allocate$C1($Class* clazz) {
	return $of($alloc(C1));
}

void C1::init$(Object$* t) {
}

C1::C1() {
}

$Class* C1::load$($String* name, bool initialize) {
	$loadClass(C1, name, initialize, &_C1_ClassInfo_, allocate$C1);
	return class$;
}

$Class* C1::class$ = nullptr;

} // TestC1