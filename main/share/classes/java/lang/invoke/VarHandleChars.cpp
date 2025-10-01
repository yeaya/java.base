#include <java/lang/invoke/VarHandleChars.h>

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

$MethodInfo _VarHandleChars_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(VarHandleChars::*)()>(&VarHandleChars::init$))},
	{}
};

$InnerClassInfo _VarHandleChars_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleChars$Array", "java.lang.invoke.VarHandleChars", "Array", $STATIC | $FINAL},
	{"java.lang.invoke.VarHandleChars$FieldStaticReadWrite", "java.lang.invoke.VarHandleChars", "FieldStaticReadWrite", $STATIC | $FINAL},
	{"java.lang.invoke.VarHandleChars$FieldStaticReadOnly", "java.lang.invoke.VarHandleChars", "FieldStaticReadOnly", $STATIC},
	{"java.lang.invoke.VarHandleChars$FieldInstanceReadWrite", "java.lang.invoke.VarHandleChars", "FieldInstanceReadWrite", $STATIC | $FINAL},
	{"java.lang.invoke.VarHandleChars$FieldInstanceReadOnly", "java.lang.invoke.VarHandleChars", "FieldInstanceReadOnly", $STATIC},
	{}
};

$ClassInfo _VarHandleChars_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.VarHandleChars",
	"java.lang.Object",
	nullptr,
	nullptr,
	_VarHandleChars_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleChars_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleChars$Array,java.lang.invoke.VarHandleChars$FieldStaticReadWrite,java.lang.invoke.VarHandleChars$FieldStaticReadOnly,java.lang.invoke.VarHandleChars$FieldInstanceReadWrite,java.lang.invoke.VarHandleChars$FieldInstanceReadOnly"
};

$Object* allocate$VarHandleChars($Class* clazz) {
	return $of($alloc(VarHandleChars));
}

void VarHandleChars::init$() {
}

VarHandleChars::VarHandleChars() {
}

$Class* VarHandleChars::load$($String* name, bool initialize) {
	$loadClass(VarHandleChars, name, initialize, &_VarHandleChars_ClassInfo_, allocate$VarHandleChars);
	return class$;
}

$Class* VarHandleChars::class$ = nullptr;

		} // invoke
	} // lang
} // java