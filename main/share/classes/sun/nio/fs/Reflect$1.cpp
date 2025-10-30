#include <sun/nio/fs/Reflect$1.h>

#include <java/lang/reflect/AccessibleObject.h>
#include <sun/nio/fs/Reflect.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleObject = ::java::lang::reflect::AccessibleObject;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Reflect = ::sun::nio::fs::Reflect;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _Reflect$1_FieldInfo_[] = {
	{"val$ao", "Ljava/lang/reflect/AccessibleObject;", nullptr, $FINAL | $SYNTHETIC, $field(Reflect$1, val$ao)},
	{}
};

$MethodInfo _Reflect$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/reflect/AccessibleObject;)V", "()V", 0, $method(static_cast<void(Reflect$1::*)($AccessibleObject*)>(&Reflect$1::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Reflect$1_EnclosingMethodInfo_ = {
	"sun.nio.fs.Reflect",
	"setAccessible",
	"(Ljava/lang/reflect/AccessibleObject;)V"
};

$InnerClassInfo _Reflect$1_InnerClassesInfo_[] = {
	{"sun.nio.fs.Reflect$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Reflect$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.Reflect$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_Reflect$1_FieldInfo_,
	_Reflect$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	&_Reflect$1_EnclosingMethodInfo_,
	_Reflect$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.fs.Reflect"
};

$Object* allocate$Reflect$1($Class* clazz) {
	return $of($alloc(Reflect$1));
}

void Reflect$1::init$($AccessibleObject* val$ao) {
	$set(this, val$ao, val$ao);
}

$Object* Reflect$1::run() {
	$beforeCallerSensitive();
	$nc(this->val$ao)->setAccessible(true);
	return $of(nullptr);
}

Reflect$1::Reflect$1() {
}

$Class* Reflect$1::load$($String* name, bool initialize) {
	$loadClass(Reflect$1, name, initialize, &_Reflect$1_ClassInfo_, allocate$Reflect$1);
	return class$;
}

$Class* Reflect$1::class$ = nullptr;

		} // fs
	} // nio
} // sun