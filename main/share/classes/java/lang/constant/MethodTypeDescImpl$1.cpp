#include <java/lang/constant/MethodTypeDescImpl$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/constant/MethodTypeDescImpl.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodTypeDesc = ::java::lang::constant::MethodTypeDesc;
using $MethodTypeDescImpl = ::java::lang::constant::MethodTypeDescImpl;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $PrivilegedAction = ::java::security::PrivilegedAction;

namespace java {
	namespace lang {
		namespace constant {

$FieldInfo _MethodTypeDescImpl$1_FieldInfo_[] = {
	{"this$0", "Ljava/lang/constant/MethodTypeDescImpl;", nullptr, $FINAL | $SYNTHETIC, $field(MethodTypeDescImpl$1, this$0)},
	{"val$lookup", "Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $FINAL | $SYNTHETIC, $field(MethodTypeDescImpl$1, val$lookup)},
	{}
};

$MethodInfo _MethodTypeDescImpl$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/constant/MethodTypeDescImpl;Ljava/lang/invoke/MethodHandles$Lookup;)V", nullptr, 0, $method(static_cast<void(MethodTypeDescImpl$1::*)($MethodTypeDescImpl*,$MethodHandles$Lookup*)>(&MethodTypeDescImpl$1::init$))},
	{"run", "()Ljava/lang/invoke/MethodType;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _MethodTypeDescImpl$1_EnclosingMethodInfo_ = {
	"java.lang.constant.MethodTypeDescImpl",
	"resolveConstantDesc",
	"(Ljava/lang/invoke/MethodHandles$Lookup;)Ljava/lang/invoke/MethodType;"
};

$InnerClassInfo _MethodTypeDescImpl$1_InnerClassesInfo_[] = {
	{"java.lang.constant.MethodTypeDescImpl$1", nullptr, nullptr, 0},
	{"java.lang.invoke.MethodHandles$Lookup", "java.lang.invoke.MethodHandles", "Lookup", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _MethodTypeDescImpl$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.constant.MethodTypeDescImpl$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_MethodTypeDescImpl$1_FieldInfo_,
	_MethodTypeDescImpl$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/invoke/MethodType;>;",
	&_MethodTypeDescImpl$1_EnclosingMethodInfo_,
	_MethodTypeDescImpl$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.constant.MethodTypeDescImpl"
};

$Object* allocate$MethodTypeDescImpl$1($Class* clazz) {
	return $of($alloc(MethodTypeDescImpl$1));
}

void MethodTypeDescImpl$1::init$($MethodTypeDescImpl* this$0, $MethodHandles$Lookup* val$lookup) {
	$set(this, this$0, this$0);
	$set(this, val$lookup, val$lookup);
}

$Object* MethodTypeDescImpl$1::run() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($String, var$0, this->this$0->descriptorString());
	return $of($MethodType::fromMethodDescriptorString(var$0, $($nc($nc(this->val$lookup)->lookupClass())->getClassLoader())));
}

MethodTypeDescImpl$1::MethodTypeDescImpl$1() {
}

$Class* MethodTypeDescImpl$1::load$($String* name, bool initialize) {
	$loadClass(MethodTypeDescImpl$1, name, initialize, &_MethodTypeDescImpl$1_ClassInfo_, allocate$MethodTypeDescImpl$1);
	return class$;
}

$Class* MethodTypeDescImpl$1::class$ = nullptr;

		} // constant
	} // lang
} // java