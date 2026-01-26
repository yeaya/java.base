#include <Unnamed.h>

#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;

$MethodInfo _Unnamed_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Unnamed, init$, void)},
	{"lookup", "()Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $PUBLIC | $STATIC, $staticMethod(Unnamed, lookup, $MethodHandles$Lookup*)},
	{}
};

$ClassInfo _Unnamed_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Unnamed",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Unnamed_MethodInfo_
};

$Object* allocate$Unnamed($Class* clazz) {
	return $of($alloc(Unnamed));
}

void Unnamed::init$() {
}

$MethodHandles$Lookup* Unnamed::lookup() {
	$load(Unnamed);
	$beforeCallerSensitive();
	return $MethodHandles::lookup();
}

Unnamed::Unnamed() {
}

$Class* Unnamed::load$($String* name, bool initialize) {
	$loadClass(Unnamed, name, initialize, &_Unnamed_ClassInfo_, allocate$Unnamed);
	return class$;
}

$Class* Unnamed::class$ = nullptr;