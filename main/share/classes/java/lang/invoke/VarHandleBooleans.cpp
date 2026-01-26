#include <java/lang/invoke/VarHandleBooleans.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace invoke {

$MethodInfo _VarHandleBooleans_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(VarHandleBooleans, init$, void)},
	{}
};

$InnerClassInfo _VarHandleBooleans_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleBooleans$Array", "java.lang.invoke.VarHandleBooleans", "Array", $STATIC | $FINAL},
	{"java.lang.invoke.VarHandleBooleans$FieldStaticReadWrite", "java.lang.invoke.VarHandleBooleans", "FieldStaticReadWrite", $STATIC | $FINAL},
	{"java.lang.invoke.VarHandleBooleans$FieldStaticReadOnly", "java.lang.invoke.VarHandleBooleans", "FieldStaticReadOnly", $STATIC},
	{"java.lang.invoke.VarHandleBooleans$FieldInstanceReadWrite", "java.lang.invoke.VarHandleBooleans", "FieldInstanceReadWrite", $STATIC | $FINAL},
	{"java.lang.invoke.VarHandleBooleans$FieldInstanceReadOnly", "java.lang.invoke.VarHandleBooleans", "FieldInstanceReadOnly", $STATIC},
	{}
};

$ClassInfo _VarHandleBooleans_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.VarHandleBooleans",
	"java.lang.Object",
	nullptr,
	nullptr,
	_VarHandleBooleans_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleBooleans_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleBooleans$Array,java.lang.invoke.VarHandleBooleans$FieldStaticReadWrite,java.lang.invoke.VarHandleBooleans$FieldStaticReadOnly,java.lang.invoke.VarHandleBooleans$FieldInstanceReadWrite,java.lang.invoke.VarHandleBooleans$FieldInstanceReadOnly"
};

$Object* allocate$VarHandleBooleans($Class* clazz) {
	return $of($alloc(VarHandleBooleans));
}

void VarHandleBooleans::init$() {
}

VarHandleBooleans::VarHandleBooleans() {
}

$Class* VarHandleBooleans::load$($String* name, bool initialize) {
	$loadClass(VarHandleBooleans, name, initialize, &_VarHandleBooleans_ClassInfo_, allocate$VarHandleBooleans);
	return class$;
}

$Class* VarHandleBooleans::class$ = nullptr;

		} // invoke
	} // lang
} // java