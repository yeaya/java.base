#include <InheritedMethodTest$D.h>

#include <InheritedMethodTest$C.h>
#include <InheritedMethodTest.h>
#include <jcpp.h>

using $InheritedMethodTest = ::InheritedMethodTest;
using $InheritedMethodTest$C = ::InheritedMethodTest$C;
using $InheritedMethodTest$J = ::InheritedMethodTest$J;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _InheritedMethodTest$D_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InheritedMethodTest$D::*)()>(&InheritedMethodTest$D::init$))},
	{"iString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _InheritedMethodTest$D_InnerClassesInfo_[] = {
	{"InheritedMethodTest$D", "InheritedMethodTest", "D", $PUBLIC | $STATIC},
	{"InheritedMethodTest$C", "InheritedMethodTest", "C", $PUBLIC | $STATIC | $ABSTRACT},
	{"InheritedMethodTest$J", "InheritedMethodTest", "J", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _InheritedMethodTest$D_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"InheritedMethodTest$D",
	"InheritedMethodTest$C",
	"InheritedMethodTest$J",
	nullptr,
	_InheritedMethodTest$D_MethodInfo_,
	nullptr,
	nullptr,
	_InheritedMethodTest$D_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"InheritedMethodTest"
};

$Object* allocate$InheritedMethodTest$D($Class* clazz) {
	return $of($alloc(InheritedMethodTest$D));
}

int32_t InheritedMethodTest$D::hashCode() {
	 return this->$InheritedMethodTest$C::hashCode();
}

bool InheritedMethodTest$D::equals(Object$* arg0) {
	 return this->$InheritedMethodTest$C::equals(arg0);
}

$Object* InheritedMethodTest$D::clone() {
	 return this->$InheritedMethodTest$C::clone();
}

void InheritedMethodTest$D::finalize() {
	this->$InheritedMethodTest$C::finalize();
}

void InheritedMethodTest$D::init$() {
	$InheritedMethodTest$C::init$();
}

$String* InheritedMethodTest$D::toString() {
	return "a"_s;
}

$String* InheritedMethodTest$D::iString() {
	return "b"_s;
}

InheritedMethodTest$D::InheritedMethodTest$D() {
}

$Class* InheritedMethodTest$D::load$($String* name, bool initialize) {
	$loadClass(InheritedMethodTest$D, name, initialize, &_InheritedMethodTest$D_ClassInfo_, allocate$InheritedMethodTest$D);
	return class$;
}

$Class* InheritedMethodTest$D::class$ = nullptr;