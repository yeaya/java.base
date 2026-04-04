#include <Roebling.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

void Roebling::init$() {
}

int32_t Roebling::compareTo(Roebling* r) {
	$throwNew($IllegalArgumentException);
	$shouldNotReachHere();
}

void Roebling::varArg($ObjectArray* arg) {
}

int32_t Roebling::compareTo(Object$* r) {
	return this->compareTo($cast(Roebling, r));
}

Roebling::Roebling() {
}

$Class* Roebling::load$($String* name, bool initialize) {
	$NamedAttribute compareTomethodAnnotations$$$namedAttribute[] = {
		{"value", 's', "public int Roebling.compareTo(Roebling)"},
		{"bridgeValue", 's', "public int Roebling.compareTo(java.lang.Object)"},
		{}
	};
	$CompoundAttribute compareTomethodAnnotations$$[] = {
		{"LExpectedGenericString;", compareTomethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute compareTomethodAnnotations$$$1$namedAttribute[] = {
		{"value", 's', "public int Roebling.compareTo(Roebling)"},
		{"bridgeValue", 's', "public int Roebling.compareTo(java.lang.Object)"},
		{}
	};
	$CompoundAttribute compareTomethodAnnotations$$$1[] = {
		{"LExpectedGenericString;", compareTomethodAnnotations$$$1$namedAttribute},
		{}
	};
	$NamedAttribute varArgmethodAnnotations$$$namedAttribute[] = {
		{"value", 's', "void Roebling.varArg(java.lang.Object...)"},
		{}
	};
	$NamedAttribute varArgmethodAnnotations$$$namedAttribute$1[] = {
		{"value", 's', "void Roebling.varArg(java.lang.Object[])"},
		{}
	};
	$CompoundAttribute varArgmethodAnnotations$$[] = {
		{"LExpectedGenericString;", varArgmethodAnnotations$$$namedAttribute},
		{"LExpectedString;", varArgmethodAnnotations$$$namedAttribute$1},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Roebling, init$, void)},
		{"compareTo", "(LRoebling;)I", nullptr, $PUBLIC, $virtualMethod(Roebling, compareTo, int32_t, Roebling*), nullptr, nullptr, compareTomethodAnnotations$$},
		{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Roebling, compareTo, int32_t, Object$*), nullptr, nullptr, compareTomethodAnnotations$$$1},
		{"varArg", "([Ljava/lang/Object;)V", nullptr, $TRANSIENT, $virtualMethod(Roebling, varArg, void, $ObjectArray*), nullptr, nullptr, varArgmethodAnnotations$$},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Roebling",
		"java.lang.Object",
		"java.lang.Comparable",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/lang/Comparable<LRoebling;>;"
	};
	$loadClass(Roebling, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Roebling);
	});
	return class$;
}

$Class* Roebling::class$ = nullptr;