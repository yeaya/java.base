#include <C2B.h>

#include <C0B.h>
#include <jcpp.h>

#undef C2B

using $C0B = ::C0B;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _C2B_FieldInfo_[] = {
	{"ft", "LC2B;", "TT1;", $PUBLIC, $field(C2B, ft)},
	{"fc1t", "LC0B;", "LC0B<Ljava/lang/String;>;", $PUBLIC, $field(C2B, fc1t)},
	{"fc1", "LC0B;", nullptr, $PUBLIC, $field(C2B, fc1)},
	{"fi", "I", nullptr, $PUBLIC, $field(C2B, fi)},
	{}
};

$MethodInfo _C2B_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(LC0B;)V", "(TT2;)V", $PUBLIC, $method(C2B, init$, void, $C0B*)},
	{"<init>", "(Ljava/lang/Object;)V", "<T:Ljava/lang/Object;>(TT;)V", $PUBLIC, $method(C2B, init$, void, Object$*)},
	{"<init>", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V", "<T1:Ljava/lang/Object;T2:Ljava/lang/Object;T3:Ljava/lang/Object;T4:Ljava/lang/Object;>(TT1;TT2;TT4;)V", $PUBLIC, $method(C2B, init$, void, Object$*, Object$*, Object$*)},
	{"<init>", "()V", "()V^TT3;", $PUBLIC, $method(C2B, init$, void), "java.lang.Throwable"},
	{"mc1", "(Ljava/lang/Object;)LC0B;", "<E:Ljava/lang/Object;R:Ljava/lang/Object;>(TE;)LC0B;", $PUBLIC | $ABSTRACT, $virtualMethod(C2B, mc1, $C0B*, Object$*)},
	{"mc1t", "(Ljava/lang/Throwable;LC0B;LC0B;)LC0B;", "<T:Ljava/lang/Object;>(TT3;LC0B<TT;>;LC0B;)LC0B<TT;>;", $PUBLIC | $ABSTRACT, $virtualMethod(C2B, mc1t, $C0B*, $Throwable*, $C0B*, $C0B*)},
	{"mt", "(LC0B;)LC2B;", "(TT2;)TT1;", $PUBLIC | $ABSTRACT, $virtualMethod(C2B, mt, C2B*, $C0B*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _C2B_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"C2B",
	"C0B",
	"I1B,I2B",
	_C2B_FieldInfo_,
	_C2B_MethodInfo_,
	"<T1:LC2B<TT1;TT2;TT3;>;T2:LC0B<TT2;>;T3:Ljava/lang/Throwable;>LC0B<TT1;>;LI1B<TT1;TT2;>;LI2B<TT1;TT3;TT2;>;LI3B;"
};

$Object* allocate$C2B($Class* clazz) {
	return $of($alloc(C2B));
}

int32_t C2B::hashCode() {
	 return this->$C0B::hashCode();
}

bool C2B::equals(Object$* arg0) {
	 return this->$C0B::equals(arg0);
}

$Object* C2B::clone() {
	 return this->$C0B::clone();
}

$String* C2B::toString() {
	 return this->$C0B::toString();
}

void C2B::finalize() {
	this->$C0B::finalize();
}

void C2B::init$($C0B* t2) {
	$C0B::init$();
}

void C2B::init$(Object$* t) {
	$C0B::init$();
}

void C2B::init$(Object$* t1, Object$* t2, Object$* t4) {
	$C0B::init$();
}

void C2B::init$() {
	$C0B::init$();
}

C2B::C2B() {
}

$Class* C2B::load$($String* name, bool initialize) {
	$loadClass(C2B, name, initialize, &_C2B_ClassInfo_, allocate$C2B);
	return class$;
}

$Class* C2B::class$ = nullptr;