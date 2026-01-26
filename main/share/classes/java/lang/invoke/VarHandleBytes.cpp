#include <java/lang/invoke/VarHandleBytes.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace invoke {

$MethodInfo _VarHandleBytes_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(VarHandleBytes, init$, void)},
	{}
};

$InnerClassInfo _VarHandleBytes_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleBytes$Array", "java.lang.invoke.VarHandleBytes", "Array", $STATIC | $FINAL},
	{"java.lang.invoke.VarHandleBytes$FieldStaticReadWrite", "java.lang.invoke.VarHandleBytes", "FieldStaticReadWrite", $STATIC | $FINAL},
	{"java.lang.invoke.VarHandleBytes$FieldStaticReadOnly", "java.lang.invoke.VarHandleBytes", "FieldStaticReadOnly", $STATIC},
	{"java.lang.invoke.VarHandleBytes$FieldInstanceReadWrite", "java.lang.invoke.VarHandleBytes", "FieldInstanceReadWrite", $STATIC | $FINAL},
	{"java.lang.invoke.VarHandleBytes$FieldInstanceReadOnly", "java.lang.invoke.VarHandleBytes", "FieldInstanceReadOnly", $STATIC},
	{}
};

$ClassInfo _VarHandleBytes_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.VarHandleBytes",
	"java.lang.Object",
	nullptr,
	nullptr,
	_VarHandleBytes_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleBytes_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleBytes$Array,java.lang.invoke.VarHandleBytes$FieldStaticReadWrite,java.lang.invoke.VarHandleBytes$FieldStaticReadOnly,java.lang.invoke.VarHandleBytes$FieldInstanceReadWrite,java.lang.invoke.VarHandleBytes$FieldInstanceReadOnly"
};

$Object* allocate$VarHandleBytes($Class* clazz) {
	return $of($alloc(VarHandleBytes));
}

void VarHandleBytes::init$() {
}

VarHandleBytes::VarHandleBytes() {
}

$Class* VarHandleBytes::load$($String* name, bool initialize) {
	$loadClass(VarHandleBytes, name, initialize, &_VarHandleBytes_ClassInfo_, allocate$VarHandleBytes);
	return class$;
}

$Class* VarHandleBytes::class$ = nullptr;

		} // invoke
	} // lang
} // java