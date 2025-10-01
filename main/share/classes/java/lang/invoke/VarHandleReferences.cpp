#include <java/lang/invoke/VarHandleReferences.h>

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

$MethodInfo _VarHandleReferences_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(VarHandleReferences::*)()>(&VarHandleReferences::init$))},
	{}
};

$InnerClassInfo _VarHandleReferences_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleReferences$Array", "java.lang.invoke.VarHandleReferences", "Array", $STATIC | $FINAL},
	{"java.lang.invoke.VarHandleReferences$FieldStaticReadWrite", "java.lang.invoke.VarHandleReferences", "FieldStaticReadWrite", $STATIC | $FINAL},
	{"java.lang.invoke.VarHandleReferences$FieldStaticReadOnly", "java.lang.invoke.VarHandleReferences", "FieldStaticReadOnly", $STATIC},
	{"java.lang.invoke.VarHandleReferences$FieldInstanceReadWrite", "java.lang.invoke.VarHandleReferences", "FieldInstanceReadWrite", $STATIC | $FINAL},
	{"java.lang.invoke.VarHandleReferences$FieldInstanceReadOnly", "java.lang.invoke.VarHandleReferences", "FieldInstanceReadOnly", $STATIC},
	{}
};

$ClassInfo _VarHandleReferences_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.VarHandleReferences",
	"java.lang.Object",
	nullptr,
	nullptr,
	_VarHandleReferences_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleReferences_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleReferences$Array,java.lang.invoke.VarHandleReferences$FieldStaticReadWrite,java.lang.invoke.VarHandleReferences$FieldStaticReadOnly,java.lang.invoke.VarHandleReferences$FieldInstanceReadWrite,java.lang.invoke.VarHandleReferences$FieldInstanceReadOnly"
};

$Object* allocate$VarHandleReferences($Class* clazz) {
	return $of($alloc(VarHandleReferences));
}

void VarHandleReferences::init$() {
}

VarHandleReferences::VarHandleReferences() {
}

$Class* VarHandleReferences::load$($String* name, bool initialize) {
	$loadClass(VarHandleReferences, name, initialize, &_VarHandleReferences_ClassInfo_, allocate$VarHandleReferences);
	return class$;
}

$Class* VarHandleReferences::class$ = nullptr;

		} // invoke
	} // lang
} // java