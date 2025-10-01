#include <java/lang/invoke/VarHandleFloats.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace invoke {

$MethodInfo _VarHandleFloats_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(VarHandleFloats::*)()>(&VarHandleFloats::init$))},
	{}
};

$InnerClassInfo _VarHandleFloats_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleFloats$Array", "java.lang.invoke.VarHandleFloats", "Array", $STATIC | $FINAL},
	{"java.lang.invoke.VarHandleFloats$FieldStaticReadWrite", "java.lang.invoke.VarHandleFloats", "FieldStaticReadWrite", $STATIC | $FINAL},
	{"java.lang.invoke.VarHandleFloats$FieldStaticReadOnly", "java.lang.invoke.VarHandleFloats", "FieldStaticReadOnly", $STATIC},
	{"java.lang.invoke.VarHandleFloats$FieldInstanceReadWrite", "java.lang.invoke.VarHandleFloats", "FieldInstanceReadWrite", $STATIC | $FINAL},
	{"java.lang.invoke.VarHandleFloats$FieldInstanceReadOnly", "java.lang.invoke.VarHandleFloats", "FieldInstanceReadOnly", $STATIC},
	{}
};

$ClassInfo _VarHandleFloats_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.VarHandleFloats",
	"java.lang.Object",
	nullptr,
	nullptr,
	_VarHandleFloats_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleFloats_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleFloats$Array,java.lang.invoke.VarHandleFloats$FieldStaticReadWrite,java.lang.invoke.VarHandleFloats$FieldStaticReadOnly,java.lang.invoke.VarHandleFloats$FieldInstanceReadWrite,java.lang.invoke.VarHandleFloats$FieldInstanceReadOnly"
};

$Object* allocate$VarHandleFloats($Class* clazz) {
	return $of($alloc(VarHandleFloats));
}

void VarHandleFloats::init$() {
}

VarHandleFloats::VarHandleFloats() {
}

$Class* VarHandleFloats::load$($String* name, bool initialize) {
	$loadClass(VarHandleFloats, name, initialize, &_VarHandleFloats_ClassInfo_, allocate$VarHandleFloats);
	return class$;
}

$Class* VarHandleFloats::class$ = nullptr;

		} // invoke
	} // lang
} // java