#include <C0B.h>

#include <jcpp.h>

#undef C0B

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _C0B_FieldInfo_[] = {
	{"ft", "Ljava/lang/Object;", "TT;", $PUBLIC, $field(C0B, ft)},
	{"fc1t", "LC0B;", "LC0B<TT;>;", $PUBLIC, $field(C0B, fc1t)},
	{"fc1", "LC0B;", nullptr, $PUBLIC, $field(C0B, fc1)},
	{}
};

$MethodInfo _C0B_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(C0B, init$, void)},
	{"<init>", "(Ljava/lang/Object;)V", "(TT;)V", $PUBLIC, $method(C0B, init$, void, Object$*)},
	{"mc1", "()LC0B;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(C0B, mc1, C0B*)},
	{"mc1t", "(Ljava/lang/Object;LC0B;LC0B;)LC0B;", "(TT;LC0B<TT;>;LC0B;)LC0B<TT;>;", $PUBLIC | $ABSTRACT, $virtualMethod(C0B, mc1t, C0B*, Object$*, C0B*, C0B*)},
	{"mt", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TT;)TT;", $PUBLIC | $ABSTRACT, $virtualMethod(C0B, mt, $Object*, Object$*)},
	{}
};

$ClassInfo _C0B_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"C0B",
	"java.lang.Object",
	nullptr,
	_C0B_FieldInfo_,
	_C0B_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;"
};

$Object* allocate$C0B($Class* clazz) {
	return $of($alloc(C0B));
}

void C0B::init$() {
}

void C0B::init$(Object$* t) {
}

C0B::C0B() {
}

$Class* C0B::load$($String* name, bool initialize) {
	$loadClass(C0B, name, initialize, &_C0B_ClassInfo_, allocate$C0B);
	return class$;
}

$Class* C0B::class$ = nullptr;