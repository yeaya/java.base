#include <Sanity$Nested.h>

#include <Sanity.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Sanity = ::Sanity;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _Sanity$Nested_FieldInfo_[] = {
	{"this$0", "LSanity;", nullptr, $FINAL | $SYNTHETIC, $field(Sanity$Nested, this$0)},
	{}
};

$MethodInfo _Sanity$Nested_MethodInfo_[] = {
	{"<init>", "(LSanity;)V", nullptr, 0, $method(static_cast<void(Sanity$Nested::*)($Sanity*)>(&Sanity$Nested::init$))},
	{}
};

$InnerClassInfo _Sanity$Nested_InnerClassesInfo_[] = {
	{"Sanity$Nested", "Sanity", "Nested", 0},
	{}
};

$ClassInfo _Sanity$Nested_ClassInfo_ = {
	$ACC_SUPER,
	"Sanity$Nested",
	"java.lang.Object",
	nullptr,
	_Sanity$Nested_FieldInfo_,
	_Sanity$Nested_MethodInfo_,
	nullptr,
	nullptr,
	_Sanity$Nested_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Sanity"
};

$Object* allocate$Sanity$Nested($Class* clazz) {
	return $of($alloc(Sanity$Nested));
}

void Sanity$Nested::init$($Sanity* this$0) {
	$set(this, this$0, this$0);
}

Sanity$Nested::Sanity$Nested() {
}

$Class* Sanity$Nested::load$($String* name, bool initialize) {
	$loadClass(Sanity$Nested, name, initialize, &_Sanity$Nested_ClassInfo_, allocate$Sanity$Nested);
	return class$;
}

$Class* Sanity$Nested::class$ = nullptr;