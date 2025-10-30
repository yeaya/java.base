#include <java/lang/invoke/VarHandleShorts.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace invoke {

$MethodInfo _VarHandleShorts_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(VarHandleShorts::*)()>(&VarHandleShorts::init$))},
	{}
};

$InnerClassInfo _VarHandleShorts_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleShorts$Array", "java.lang.invoke.VarHandleShorts", "Array", $STATIC | $FINAL},
	{"java.lang.invoke.VarHandleShorts$FieldStaticReadWrite", "java.lang.invoke.VarHandleShorts", "FieldStaticReadWrite", $STATIC | $FINAL},
	{"java.lang.invoke.VarHandleShorts$FieldStaticReadOnly", "java.lang.invoke.VarHandleShorts", "FieldStaticReadOnly", $STATIC},
	{"java.lang.invoke.VarHandleShorts$FieldInstanceReadWrite", "java.lang.invoke.VarHandleShorts", "FieldInstanceReadWrite", $STATIC | $FINAL},
	{"java.lang.invoke.VarHandleShorts$FieldInstanceReadOnly", "java.lang.invoke.VarHandleShorts", "FieldInstanceReadOnly", $STATIC},
	{}
};

$ClassInfo _VarHandleShorts_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.VarHandleShorts",
	"java.lang.Object",
	nullptr,
	nullptr,
	_VarHandleShorts_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleShorts_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleShorts$Array,java.lang.invoke.VarHandleShorts$FieldStaticReadWrite,java.lang.invoke.VarHandleShorts$FieldStaticReadOnly,java.lang.invoke.VarHandleShorts$FieldInstanceReadWrite,java.lang.invoke.VarHandleShorts$FieldInstanceReadOnly"
};

$Object* allocate$VarHandleShorts($Class* clazz) {
	return $of($alloc(VarHandleShorts));
}

void VarHandleShorts::init$() {
}

VarHandleShorts::VarHandleShorts() {
}

$Class* VarHandleShorts::load$($String* name, bool initialize) {
	$loadClass(VarHandleShorts, name, initialize, &_VarHandleShorts_ClassInfo_, allocate$VarHandleShorts);
	return class$;
}

$Class* VarHandleShorts::class$ = nullptr;

		} // invoke
	} // lang
} // java