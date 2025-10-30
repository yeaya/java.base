#include <e1/E1.h>

#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;

namespace e1 {

$MethodInfo _E1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(E1::*)()>(&E1::init$))},
	{"lookup", "()Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MethodHandles$Lookup*(*)()>(&E1::lookup))},
	{}
};

$ClassInfo _E1_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"e1.E1",
	"java.lang.Object",
	nullptr,
	nullptr,
	_E1_MethodInfo_
};

$Object* allocate$E1($Class* clazz) {
	return $of($alloc(E1));
}

void E1::init$() {
}

$MethodHandles$Lookup* E1::lookup() {
	$load(E1);
	$beforeCallerSensitive();
	return $MethodHandles::lookup();
}

E1::E1() {
}

$Class* E1::load$($String* name, bool initialize) {
	$loadClass(E1, name, initialize, &_E1_ClassInfo_, allocate$E1);
	return class$;
}

$Class* E1::class$ = nullptr;

} // e1