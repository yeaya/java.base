#include <java/io/ObjectOutputStream$1.h>

#include <java/io/ObjectOutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef FALSE
#undef TRUE

using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $Method = ::java::lang::reflect::Method;
using $PrivilegedAction = ::java::security::PrivilegedAction;

namespace java {
	namespace io {

$FieldInfo _ObjectOutputStream$1_FieldInfo_[] = {
	{"val$subcl", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(ObjectOutputStream$1, val$subcl)},
	{}
};

$MethodInfo _ObjectOutputStream$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;)V", nullptr, 0, $method(static_cast<void(ObjectOutputStream$1::*)($Class*)>(&ObjectOutputStream$1::init$))},
	{"run", "()Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ObjectOutputStream$1_EnclosingMethodInfo_ = {
	"java.io.ObjectOutputStream",
	"auditSubclass",
	"(Ljava/lang/Class;)Ljava/lang/Boolean;"
};

$InnerClassInfo _ObjectOutputStream$1_InnerClassesInfo_[] = {
	{"java.io.ObjectOutputStream$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ObjectOutputStream$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.io.ObjectOutputStream$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_ObjectOutputStream$1_FieldInfo_,
	_ObjectOutputStream$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Boolean;>;",
	&_ObjectOutputStream$1_EnclosingMethodInfo_,
	_ObjectOutputStream$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.io.ObjectOutputStream"
};

$Object* allocate$ObjectOutputStream$1($Class* clazz) {
	return $of($alloc(ObjectOutputStream$1));
}

void ObjectOutputStream$1::init$($Class* val$subcl) {
	$set(this, val$subcl, val$subcl);
}

$Object* ObjectOutputStream$1::run() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
		$load($ObjectOutputStream);
	{
		$Class* cl = this->val$subcl;
		for (; cl != $ObjectOutputStream::class$; cl = $nc(cl)->getSuperclass()) {
			try {
				$load($Object);
				cl->getDeclaredMethod("writeUnshared"_s, $$new($ClassArray, {$Object::class$}));
				$init($Boolean);
				return $of($Boolean::FALSE);
			} catch ($NoSuchMethodException&) {
				$catch();
			}
			try {
				cl->getDeclaredMethod("putFields"_s, ($ClassArray*)nullptr);
				$init($Boolean);
				return $of($Boolean::FALSE);
			} catch ($NoSuchMethodException&) {
				$catch();
			}
		}
	}
	$init($Boolean);
	return $of($Boolean::TRUE);
}

ObjectOutputStream$1::ObjectOutputStream$1() {
}

$Class* ObjectOutputStream$1::load$($String* name, bool initialize) {
	$loadClass(ObjectOutputStream$1, name, initialize, &_ObjectOutputStream$1_ClassInfo_, allocate$ObjectOutputStream$1);
	return class$;
}

$Class* ObjectOutputStream$1::class$ = nullptr;

	} // io
} // java