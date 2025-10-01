#include <java/lang/invoke/VarHandleInts.h>

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

$MethodInfo _VarHandleInts_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(VarHandleInts::*)()>(&VarHandleInts::init$))},
	{}
};

$InnerClassInfo _VarHandleInts_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleInts$Array", "java.lang.invoke.VarHandleInts", "Array", $STATIC | $FINAL},
	{"java.lang.invoke.VarHandleInts$FieldStaticReadWrite", "java.lang.invoke.VarHandleInts", "FieldStaticReadWrite", $STATIC | $FINAL},
	{"java.lang.invoke.VarHandleInts$FieldStaticReadOnly", "java.lang.invoke.VarHandleInts", "FieldStaticReadOnly", $STATIC},
	{"java.lang.invoke.VarHandleInts$FieldInstanceReadWrite", "java.lang.invoke.VarHandleInts", "FieldInstanceReadWrite", $STATIC | $FINAL},
	{"java.lang.invoke.VarHandleInts$FieldInstanceReadOnly", "java.lang.invoke.VarHandleInts", "FieldInstanceReadOnly", $STATIC},
	{}
};

$ClassInfo _VarHandleInts_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.VarHandleInts",
	"java.lang.Object",
	nullptr,
	nullptr,
	_VarHandleInts_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleInts_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleInts$Array,java.lang.invoke.VarHandleInts$FieldStaticReadWrite,java.lang.invoke.VarHandleInts$FieldStaticReadOnly,java.lang.invoke.VarHandleInts$FieldInstanceReadWrite,java.lang.invoke.VarHandleInts$FieldInstanceReadOnly"
};

$Object* allocate$VarHandleInts($Class* clazz) {
	return $of($alloc(VarHandleInts));
}

void VarHandleInts::init$() {
}

VarHandleInts::VarHandleInts() {
}

$Class* VarHandleInts::load$($String* name, bool initialize) {
	$loadClass(VarHandleInts, name, initialize, &_VarHandleInts_ClassInfo_, allocate$VarHandleInts);
	return class$;
}

$Class* VarHandleInts::class$ = nullptr;

		} // invoke
	} // lang
} // java