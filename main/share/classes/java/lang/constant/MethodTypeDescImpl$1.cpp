#include <java/lang/constant/MethodTypeDescImpl$1.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/constant/MethodTypeDescImpl.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodTypeDescImpl = ::java::lang::constant::MethodTypeDescImpl;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;

namespace java {
	namespace lang {
		namespace constant {

void MethodTypeDescImpl$1::init$($MethodTypeDescImpl* this$0, $MethodHandles$Lookup* val$lookup) {
	$set(this, this$0, this$0);
	$set(this, val$lookup, val$lookup);
}

$Object* MethodTypeDescImpl$1::run() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($String, var$0, this->this$0->descriptorString());
	return $of($MethodType::fromMethodDescriptorString(var$0, $($nc($nc(this->val$lookup)->lookupClass())->getClassLoader())));
}

MethodTypeDescImpl$1::MethodTypeDescImpl$1() {
}

$Class* MethodTypeDescImpl$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/lang/constant/MethodTypeDescImpl;", nullptr, $FINAL | $SYNTHETIC, $field(MethodTypeDescImpl$1, this$0)},
		{"val$lookup", "Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $FINAL | $SYNTHETIC, $field(MethodTypeDescImpl$1, val$lookup)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/constant/MethodTypeDescImpl;Ljava/lang/invoke/MethodHandles$Lookup;)V", nullptr, 0, $method(MethodTypeDescImpl$1, init$, void, $MethodTypeDescImpl*, $MethodHandles$Lookup*)},
		{"run", "()Ljava/lang/invoke/MethodType;", nullptr, $PUBLIC, $virtualMethod(MethodTypeDescImpl$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.lang.constant.MethodTypeDescImpl",
		"resolveConstantDesc",
		"(Ljava/lang/invoke/MethodHandles$Lookup;)Ljava/lang/invoke/MethodType;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.constant.MethodTypeDescImpl$1", nullptr, nullptr, 0},
		{"java.lang.invoke.MethodHandles$Lookup", "java.lang.invoke.MethodHandles", "Lookup", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.constant.MethodTypeDescImpl$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/invoke/MethodType;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.constant.MethodTypeDescImpl"
	};
	$loadClass(MethodTypeDescImpl$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MethodTypeDescImpl$1);
	});
	return class$;
}

$Class* MethodTypeDescImpl$1::class$ = nullptr;

		} // constant
	} // lang
} // java