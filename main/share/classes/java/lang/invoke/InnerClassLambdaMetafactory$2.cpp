#include <java/lang/invoke/InnerClassLambdaMetafactory$2.h>

#include <java/lang/invoke/InnerClassLambdaMetafactory.h>
#include <java/lang/invoke/ProxyClassesDumper.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InnerClassLambdaMetafactory = ::java::lang::invoke::InnerClassLambdaMetafactory;
using $ProxyClassesDumper = ::java::lang::invoke::ProxyClassesDumper;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _InnerClassLambdaMetafactory$2_FieldInfo_[] = {
	{"this$0", "Ljava/lang/invoke/InnerClassLambdaMetafactory;", nullptr, $FINAL | $SYNTHETIC, $field(InnerClassLambdaMetafactory$2, this$0)},
	{"val$classBytes", "[B", nullptr, $FINAL | $SYNTHETIC, $field(InnerClassLambdaMetafactory$2, val$classBytes)},
	{}
};

$MethodInfo _InnerClassLambdaMetafactory$2_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/invoke/InnerClassLambdaMetafactory;[B)V", nullptr, 0, $method(InnerClassLambdaMetafactory$2, init$, void, $InnerClassLambdaMetafactory*, $bytes*)},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(InnerClassLambdaMetafactory$2, run, $Object*)},
	{}
};

$EnclosingMethodInfo _InnerClassLambdaMetafactory$2_EnclosingMethodInfo_ = {
	"java.lang.invoke.InnerClassLambdaMetafactory",
	"generateInnerClass",
	"()Ljava/lang/Class;"
};

$InnerClassInfo _InnerClassLambdaMetafactory$2_InnerClassesInfo_[] = {
	{"java.lang.invoke.InnerClassLambdaMetafactory$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _InnerClassLambdaMetafactory$2_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.InnerClassLambdaMetafactory$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_InnerClassLambdaMetafactory$2_FieldInfo_,
	_InnerClassLambdaMetafactory$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	&_InnerClassLambdaMetafactory$2_EnclosingMethodInfo_,
	_InnerClassLambdaMetafactory$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.InnerClassLambdaMetafactory"
};

$Object* allocate$InnerClassLambdaMetafactory$2($Class* clazz) {
	return $of($alloc(InnerClassLambdaMetafactory$2));
}

void InnerClassLambdaMetafactory$2::init$($InnerClassLambdaMetafactory* this$0, $bytes* val$classBytes) {
	$set(this, this$0, this$0);
	$set(this, val$classBytes, val$classBytes);
}

$Object* InnerClassLambdaMetafactory$2::run() {
	$init($InnerClassLambdaMetafactory);
	$nc($InnerClassLambdaMetafactory::dumper)->dumpClass(this->this$0->lambdaClassName$, this->val$classBytes);
	return $of(nullptr);
}

InnerClassLambdaMetafactory$2::InnerClassLambdaMetafactory$2() {
}

$Class* InnerClassLambdaMetafactory$2::load$($String* name, bool initialize) {
	$loadClass(InnerClassLambdaMetafactory$2, name, initialize, &_InnerClassLambdaMetafactory$2_ClassInfo_, allocate$InnerClassLambdaMetafactory$2);
	return class$;
}

$Class* InnerClassLambdaMetafactory$2::class$ = nullptr;

		} // invoke
	} // lang
} // java