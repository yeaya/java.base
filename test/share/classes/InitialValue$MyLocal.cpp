#include <InitialValue$MyLocal.h>

#include <InitialValue.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/ThreadLocal.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $InitialValue = ::InitialValue;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadLocal = ::java::lang::ThreadLocal;

$FieldInfo _InitialValue$MyLocal_FieldInfo_[] = {
	{"this$0", "LInitialValue;", nullptr, $FINAL | $SYNTHETIC, $field(InitialValue$MyLocal, this$0)},
	{"val", "Ljava/lang/String;", nullptr, 0, $field(InitialValue$MyLocal, val)},
	{}
};

$MethodInfo _InitialValue$MyLocal_MethodInfo_[] = {
	{"<init>", "(LInitialValue;)V", nullptr, $PUBLIC, $method(static_cast<void(InitialValue$MyLocal::*)($InitialValue*)>(&InitialValue$MyLocal::init$))},
	{"initialValue", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _InitialValue$MyLocal_InnerClassesInfo_[] = {
	{"InitialValue$MyLocal", "InitialValue", "MyLocal", $PUBLIC},
	{}
};

$ClassInfo _InitialValue$MyLocal_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"InitialValue$MyLocal",
	"java.lang.ThreadLocal",
	nullptr,
	_InitialValue$MyLocal_FieldInfo_,
	_InitialValue$MyLocal_MethodInfo_,
	"Ljava/lang/ThreadLocal<Ljava/lang/String;>;",
	nullptr,
	_InitialValue$MyLocal_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"InitialValue"
};

$Object* allocate$InitialValue$MyLocal($Class* clazz) {
	return $of($alloc(InitialValue$MyLocal));
}

void InitialValue$MyLocal::init$($InitialValue* this$0) {
	$set(this, this$0, this$0);
	$ThreadLocal::init$();
}

$Object* InitialValue$MyLocal::initialValue() {
	$init($InitialValue);
	$assignStatic($InitialValue::other, $new($ThreadLocal));
	$nc($InitialValue::other)->set("Other"_s);
	return $of("Initial"_s);
}

InitialValue$MyLocal::InitialValue$MyLocal() {
}

$Class* InitialValue$MyLocal::load$($String* name, bool initialize) {
	$loadClass(InitialValue$MyLocal, name, initialize, &_InitialValue$MyLocal_ClassInfo_, allocate$InitialValue$MyLocal);
	return class$;
}

$Class* InitialValue$MyLocal::class$ = nullptr;