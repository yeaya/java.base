#include <D1B.h>
#include <SonSuperIwithDefault.h>
#include <jcpp.h>

#undef D1B

using $SonSuperIwithDefault = ::SonSuperIwithDefault;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

void D1B::bar() {
	this->$SonSuperIwithDefault::bar();
}

int32_t D1B::hashCode() {
	 return this->$SonSuperIwithDefault::hashCode();
}

bool D1B::equals(Object$* arg0) {
	 return this->$SonSuperIwithDefault::equals(arg0);
}

$Object* D1B::clone() {
	 return this->$SonSuperIwithDefault::clone();
}

$String* D1B::toString() {
	 return this->$SonSuperIwithDefault::toString();
}

void D1B::finalize() {
	this->$SonSuperIwithDefault::finalize();
}

void D1B::init$() {
}

void D1B::foo() {
}

void D1B::baz() {
}

void D1B::quux() {
}

D1B::D1B() {
}

$Class* D1B::load$($String* name, bool initialize) {
	$NamedAttribute bazmethodAnnotations$$$namedAttribute[] = {
		{"declaringClass", 'c', "LD1B;"},
		{}
	};
	$CompoundAttribute bazmethodAnnotations$$[] = {
		{"LExpectedModel;", bazmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute foomethodAnnotations$$$namedAttribute[] = {
		{"declaringClass", 'c', "LD1B;"},
		{}
	};
	$CompoundAttribute foomethodAnnotations$$[] = {
		{"LExpectedModel;", foomethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute quuxmethodAnnotations$$$namedAttribute[] = {
		{"declaringClass", 'c', "LD1B;"},
		{}
	};
	$CompoundAttribute quuxmethodAnnotations$$[] = {
		{"LExpectedModel;", quuxmethodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*bar", "()V", nullptr, $PUBLIC | $ABSTRACT},
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, 0, $method(D1B, init$, void)},
		{"baz", "()V", nullptr, $PUBLIC, $virtualMethod(D1B, baz, void), nullptr, nullptr, bazmethodAnnotations$$},
		{"foo", "()V", nullptr, $PUBLIC, $virtualMethod(D1B, foo, void), nullptr, nullptr, foomethodAnnotations$$},
		{"quux", "()V", nullptr, $PUBLIC, $virtualMethod(D1B, quux, void), nullptr, nullptr, quuxmethodAnnotations$$},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"D1B",
		"java.lang.Object",
		"SonSuperIwithDefault,DaughterSuperIwithDefault",
		nullptr,
		methodInfos$$
	};
	$loadClass(D1B, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(D1B));
	});
	return class$;
}

$Class* D1B::class$ = nullptr;