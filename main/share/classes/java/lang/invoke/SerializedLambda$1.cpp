#include <java/lang/invoke/SerializedLambda$1.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/SerializedLambda.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SerializedLambda = ::java::lang::invoke::SerializedLambda;
using $Method = ::java::lang::reflect::Method;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _SerializedLambda$1_FieldInfo_[] = {
	{"this$0", "Ljava/lang/invoke/SerializedLambda;", nullptr, $FINAL | $SYNTHETIC, $field(SerializedLambda$1, this$0)},
	{}
};

$MethodInfo _SerializedLambda$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/invoke/SerializedLambda;)V", nullptr, 0, $method(static_cast<void(SerializedLambda$1::*)($SerializedLambda*)>(&SerializedLambda$1::init$))},
	{"run", "()Ljava/lang/reflect/Method;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _SerializedLambda$1_EnclosingMethodInfo_ = {
	"java.lang.invoke.SerializedLambda",
	"readResolve",
	"()Ljava/lang/Object;"
};

$InnerClassInfo _SerializedLambda$1_InnerClassesInfo_[] = {
	{"java.lang.invoke.SerializedLambda$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SerializedLambda$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.SerializedLambda$1",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	_SerializedLambda$1_FieldInfo_,
	_SerializedLambda$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/reflect/Method;>;",
	&_SerializedLambda$1_EnclosingMethodInfo_,
	_SerializedLambda$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.SerializedLambda"
};

$Object* allocate$SerializedLambda$1($Class* clazz) {
	return $of($alloc(SerializedLambda$1));
}

void SerializedLambda$1::init$($SerializedLambda* this$0) {
	$set(this, this$0, this$0);
}

$Object* SerializedLambda$1::run() {
	$beforeCallerSensitive();
	$load($SerializedLambda);
	$var($Method, m, $nc(this->this$0->capturingClass)->getDeclaredMethod("$deserializeLambda$"_s, $$new($ClassArray, {$SerializedLambda::class$})));
	$nc(m)->setAccessible(true);
	return $of(m);
}

SerializedLambda$1::SerializedLambda$1() {
}

$Class* SerializedLambda$1::load$($String* name, bool initialize) {
	$loadClass(SerializedLambda$1, name, initialize, &_SerializedLambda$1_ClassInfo_, allocate$SerializedLambda$1);
	return class$;
}

$Class* SerializedLambda$1::class$ = nullptr;

		} // invoke
	} // lang
} // java