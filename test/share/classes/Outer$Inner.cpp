#include <Outer$Inner.h>

#include <Outer.h>
#include <jcpp.h>

using $Outer = ::Outer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _Outer$Inner_FieldInfo_[] = {
	{"this$0", "LOuter;", nullptr, $FINAL | $SYNTHETIC, $field(Outer$Inner, this$0)},
	{}
};

$MethodInfo _Outer$Inner_MethodInfo_[] = {
	{"<init>", "(LOuter;)V", nullptr, 0, $method(static_cast<void(Outer$Inner::*)($Outer*)>(&Outer$Inner::init$))},
	{}
};

$InnerClassInfo _Outer$Inner_InnerClassesInfo_[] = {
	{"Outer$Inner", "Outer", "Inner", 0},
	{}
};

$ClassInfo _Outer$Inner_ClassInfo_ = {
	$ACC_SUPER,
	"Outer$Inner",
	"java.lang.Object",
	nullptr,
	_Outer$Inner_FieldInfo_,
	_Outer$Inner_MethodInfo_,
	nullptr,
	nullptr,
	_Outer$Inner_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Outer"
};

$Object* allocate$Outer$Inner($Class* clazz) {
	return $of($alloc(Outer$Inner));
}

void Outer$Inner::init$($Outer* this$0) {
	$set(this, this$0, this$0);
}

Outer$Inner::Outer$Inner() {
}

$Class* Outer$Inner::load$($String* name, bool initialize) {
	$loadClass(Outer$Inner, name, initialize, &_Outer$Inner_ClassInfo_, allocate$Outer$Inner);
	return class$;
}

$Class* Outer$Inner::class$ = nullptr;