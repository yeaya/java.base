#include <java/lang/invoke/VarHandleDoubles.h>

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

$MethodInfo _VarHandleDoubles_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(VarHandleDoubles::*)()>(&VarHandleDoubles::init$))},
	{}
};

$InnerClassInfo _VarHandleDoubles_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleDoubles$Array", "java.lang.invoke.VarHandleDoubles", "Array", $STATIC | $FINAL},
	{"java.lang.invoke.VarHandleDoubles$FieldStaticReadWrite", "java.lang.invoke.VarHandleDoubles", "FieldStaticReadWrite", $STATIC | $FINAL},
	{"java.lang.invoke.VarHandleDoubles$FieldStaticReadOnly", "java.lang.invoke.VarHandleDoubles", "FieldStaticReadOnly", $STATIC},
	{"java.lang.invoke.VarHandleDoubles$FieldInstanceReadWrite", "java.lang.invoke.VarHandleDoubles", "FieldInstanceReadWrite", $STATIC | $FINAL},
	{"java.lang.invoke.VarHandleDoubles$FieldInstanceReadOnly", "java.lang.invoke.VarHandleDoubles", "FieldInstanceReadOnly", $STATIC},
	{}
};

$ClassInfo _VarHandleDoubles_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.VarHandleDoubles",
	"java.lang.Object",
	nullptr,
	nullptr,
	_VarHandleDoubles_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleDoubles_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleDoubles$Array,java.lang.invoke.VarHandleDoubles$FieldStaticReadWrite,java.lang.invoke.VarHandleDoubles$FieldStaticReadOnly,java.lang.invoke.VarHandleDoubles$FieldInstanceReadWrite,java.lang.invoke.VarHandleDoubles$FieldInstanceReadOnly"
};

$Object* allocate$VarHandleDoubles($Class* clazz) {
	return $of($alloc(VarHandleDoubles));
}

void VarHandleDoubles::init$() {
}

VarHandleDoubles::VarHandleDoubles() {
}

$Class* VarHandleDoubles::load$($String* name, bool initialize) {
	$loadClass(VarHandleDoubles, name, initialize, &_VarHandleDoubles_ClassInfo_, allocate$VarHandleDoubles);
	return class$;
}

$Class* VarHandleDoubles::class$ = nullptr;

		} // invoke
	} // lang
} // java