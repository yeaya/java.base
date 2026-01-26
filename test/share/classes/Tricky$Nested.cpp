#include <Tricky$Nested.h>

#include <Tricky.h>
#include <jcpp.h>

using $Tricky = ::Tricky;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _Tricky$Nested_FieldInfo_[] = {
	{"t", "LTricky;", nullptr, 0, $field(Tricky$Nested, t)},
	{}
};

$MethodInfo _Tricky$Nested_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Tricky$Nested, init$, void)},
	{}
};

$InnerClassInfo _Tricky$Nested_InnerClassesInfo_[] = {
	{"Tricky$Nested", "Tricky", "Nested", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Tricky$Nested_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Tricky$Nested",
	"java.lang.Object",
	nullptr,
	_Tricky$Nested_FieldInfo_,
	_Tricky$Nested_MethodInfo_,
	nullptr,
	nullptr,
	_Tricky$Nested_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Tricky"
};

$Object* allocate$Tricky$Nested($Class* clazz) {
	return $of($alloc(Tricky$Nested));
}

void Tricky$Nested::init$() {
	$set(this, t, $new($Tricky));
}

Tricky$Nested::Tricky$Nested() {
}

$Class* Tricky$Nested::load$($String* name, bool initialize) {
	$loadClass(Tricky$Nested, name, initialize, &_Tricky$Nested_ClassInfo_, allocate$Tricky$Nested);
	return class$;
}

$Class* Tricky$Nested::class$ = nullptr;