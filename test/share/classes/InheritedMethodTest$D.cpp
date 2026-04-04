#include <InheritedMethodTest$D.h>
#include <InheritedMethodTest$C.h>
#include <InheritedMethodTest.h>
#include <jcpp.h>

using $InheritedMethodTest$C = ::InheritedMethodTest$C;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

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
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(InheritedMethodTest$D, init$, void)},
		{"iString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(InheritedMethodTest$D, iString, $String*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(InheritedMethodTest$D, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"InheritedMethodTest$D", "InheritedMethodTest", "D", $PUBLIC | $STATIC},
		{"InheritedMethodTest$C", "InheritedMethodTest", "C", $PUBLIC | $STATIC | $ABSTRACT},
		{"InheritedMethodTest$J", "InheritedMethodTest", "J", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"InheritedMethodTest$D",
		"InheritedMethodTest$C",
		"InheritedMethodTest$J",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"InheritedMethodTest"
	};
	$loadClass(InheritedMethodTest$D, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(InheritedMethodTest$D));
	});
	return class$;
}

$Class* InheritedMethodTest$D::class$ = nullptr;