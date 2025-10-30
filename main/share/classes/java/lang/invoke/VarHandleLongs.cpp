#include <java/lang/invoke/VarHandleLongs.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace invoke {

$MethodInfo _VarHandleLongs_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(VarHandleLongs::*)()>(&VarHandleLongs::init$))},
	{}
};

$InnerClassInfo _VarHandleLongs_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleLongs$Array", "java.lang.invoke.VarHandleLongs", "Array", $STATIC | $FINAL},
	{"java.lang.invoke.VarHandleLongs$FieldStaticReadWrite", "java.lang.invoke.VarHandleLongs", "FieldStaticReadWrite", $STATIC | $FINAL},
	{"java.lang.invoke.VarHandleLongs$FieldStaticReadOnly", "java.lang.invoke.VarHandleLongs", "FieldStaticReadOnly", $STATIC},
	{"java.lang.invoke.VarHandleLongs$FieldInstanceReadWrite", "java.lang.invoke.VarHandleLongs", "FieldInstanceReadWrite", $STATIC | $FINAL},
	{"java.lang.invoke.VarHandleLongs$FieldInstanceReadOnly", "java.lang.invoke.VarHandleLongs", "FieldInstanceReadOnly", $STATIC},
	{}
};

$ClassInfo _VarHandleLongs_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.VarHandleLongs",
	"java.lang.Object",
	nullptr,
	nullptr,
	_VarHandleLongs_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleLongs_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleLongs$Array,java.lang.invoke.VarHandleLongs$FieldStaticReadWrite,java.lang.invoke.VarHandleLongs$FieldStaticReadOnly,java.lang.invoke.VarHandleLongs$FieldInstanceReadWrite,java.lang.invoke.VarHandleLongs$FieldInstanceReadOnly"
};

$Object* allocate$VarHandleLongs($Class* clazz) {
	return $of($alloc(VarHandleLongs));
}

void VarHandleLongs::init$() {
}

VarHandleLongs::VarHandleLongs() {
}

$Class* VarHandleLongs::load$($String* name, bool initialize) {
	$loadClass(VarHandleLongs, name, initialize, &_VarHandleLongs_ClassInfo_, allocate$VarHandleLongs);
	return class$;
}

$Class* VarHandleLongs::class$ = nullptr;

		} // invoke
	} // lang
} // java