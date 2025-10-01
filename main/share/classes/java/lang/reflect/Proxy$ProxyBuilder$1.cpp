#include <java/lang/reflect/Proxy$ProxyBuilder$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Proxy$ProxyBuilder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Constructor = ::java::lang::reflect::Constructor;
using $Proxy$ProxyBuilder = ::java::lang::reflect::Proxy$ProxyBuilder;
using $PrivilegedAction = ::java::security::PrivilegedAction;

namespace java {
	namespace lang {
		namespace reflect {

$FieldInfo _Proxy$ProxyBuilder$1_FieldInfo_[] = {
	{"this$0", "Ljava/lang/reflect/Proxy$ProxyBuilder;", nullptr, $FINAL | $SYNTHETIC, $field(Proxy$ProxyBuilder$1, this$0)},
	{"val$cons", "Ljava/lang/reflect/Constructor;", nullptr, $FINAL | $SYNTHETIC, $field(Proxy$ProxyBuilder$1, val$cons)},
	{}
};

$MethodInfo _Proxy$ProxyBuilder$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/reflect/Proxy$ProxyBuilder;Ljava/lang/reflect/Constructor;)V", "()V", 0, $method(static_cast<void(Proxy$ProxyBuilder$1::*)($Proxy$ProxyBuilder*,$Constructor*)>(&Proxy$ProxyBuilder$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Proxy$ProxyBuilder$1_EnclosingMethodInfo_ = {
	"java.lang.reflect.Proxy$ProxyBuilder",
	"build",
	"()Ljava/lang/reflect/Constructor;"
};

$InnerClassInfo _Proxy$ProxyBuilder$1_InnerClassesInfo_[] = {
	{"java.lang.reflect.Proxy$ProxyBuilder", "java.lang.reflect.Proxy", "ProxyBuilder", $PRIVATE | $STATIC | $FINAL},
	{"java.lang.reflect.Proxy$ProxyBuilder$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Proxy$ProxyBuilder$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.reflect.Proxy$ProxyBuilder$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_Proxy$ProxyBuilder$1_FieldInfo_,
	_Proxy$ProxyBuilder$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_Proxy$ProxyBuilder$1_EnclosingMethodInfo_,
	_Proxy$ProxyBuilder$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.reflect.Proxy"
};

$Object* allocate$Proxy$ProxyBuilder$1($Class* clazz) {
	return $of($alloc(Proxy$ProxyBuilder$1));
}

void Proxy$ProxyBuilder$1::init$($Proxy$ProxyBuilder* this$0, $Constructor* val$cons) {
	$set(this, this$0, this$0);
	$set(this, val$cons, val$cons);
}

$Object* Proxy$ProxyBuilder$1::run() {
	$beforeCallerSensitive();
	$nc(this->val$cons)->setAccessible(true);
	return $of(nullptr);
}

Proxy$ProxyBuilder$1::Proxy$ProxyBuilder$1() {
}

$Class* Proxy$ProxyBuilder$1::load$($String* name, bool initialize) {
	$loadClass(Proxy$ProxyBuilder$1, name, initialize, &_Proxy$ProxyBuilder$1_ClassInfo_, allocate$Proxy$ProxyBuilder$1);
	return class$;
}

$Class* Proxy$ProxyBuilder$1::class$ = nullptr;

		} // reflect
	} // lang
} // java