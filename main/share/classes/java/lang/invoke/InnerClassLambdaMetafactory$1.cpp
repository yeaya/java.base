#include <java/lang/invoke/InnerClassLambdaMetafactory$1.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/InnerClassLambdaMetafactory.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ConstructorArray = $Array<::java::lang::reflect::Constructor>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InnerClassLambdaMetafactory = ::java::lang::invoke::InnerClassLambdaMetafactory;
using $Constructor = ::java::lang::reflect::Constructor;
using $PrivilegedAction = ::java::security::PrivilegedAction;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _InnerClassLambdaMetafactory$1_FieldInfo_[] = {
	{"this$0", "Ljava/lang/invoke/InnerClassLambdaMetafactory;", nullptr, $FINAL | $SYNTHETIC, $field(InnerClassLambdaMetafactory$1, this$0)},
	{"val$innerClass", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(InnerClassLambdaMetafactory$1, val$innerClass)},
	{}
};

$MethodInfo _InnerClassLambdaMetafactory$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/invoke/InnerClassLambdaMetafactory;Ljava/lang/Class;)V", nullptr, 0, $method(static_cast<void(InnerClassLambdaMetafactory$1::*)($InnerClassLambdaMetafactory*,$Class*)>(&InnerClassLambdaMetafactory$1::init$))},
	{"run", "()[Ljava/lang/reflect/Constructor;", "()[Ljava/lang/reflect/Constructor<*>;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _InnerClassLambdaMetafactory$1_EnclosingMethodInfo_ = {
	"java.lang.invoke.InnerClassLambdaMetafactory",
	"buildCallSite",
	"()Ljava/lang/invoke/CallSite;"
};

$InnerClassInfo _InnerClassLambdaMetafactory$1_InnerClassesInfo_[] = {
	{"java.lang.invoke.InnerClassLambdaMetafactory$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _InnerClassLambdaMetafactory$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.InnerClassLambdaMetafactory$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_InnerClassLambdaMetafactory$1_FieldInfo_,
	_InnerClassLambdaMetafactory$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<[Ljava/lang/reflect/Constructor<*>;>;",
	&_InnerClassLambdaMetafactory$1_EnclosingMethodInfo_,
	_InnerClassLambdaMetafactory$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.InnerClassLambdaMetafactory"
};

$Object* allocate$InnerClassLambdaMetafactory$1($Class* clazz) {
	return $of($alloc(InnerClassLambdaMetafactory$1));
}

void InnerClassLambdaMetafactory$1::init$($InnerClassLambdaMetafactory* this$0, $Class* val$innerClass) {
	$set(this, this$0, this$0);
	$set(this, val$innerClass, val$innerClass);
}

$Object* InnerClassLambdaMetafactory$1::run() {
	$beforeCallerSensitive();
	$var($ConstructorArray, ctrs, $nc(this->val$innerClass)->getDeclaredConstructors());
	if ($nc(ctrs)->length == 1) {
		$nc(ctrs->get(0))->setAccessible(true);
	}
	return $of(ctrs);
}

InnerClassLambdaMetafactory$1::InnerClassLambdaMetafactory$1() {
}

$Class* InnerClassLambdaMetafactory$1::load$($String* name, bool initialize) {
	$loadClass(InnerClassLambdaMetafactory$1, name, initialize, &_InnerClassLambdaMetafactory$1_ClassInfo_, allocate$InnerClassLambdaMetafactory$1);
	return class$;
}

$Class* InnerClassLambdaMetafactory$1::class$ = nullptr;

		} // invoke
	} // lang
} // java