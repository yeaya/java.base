#include <java/io/ObjectInputStream$1.h>

#include <java/io/ObjectInputStream.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef FALSE
#undef TRUE

using $ObjectInputStream = ::java::io::ObjectInputStream;
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

$FieldInfo _ObjectInputStream$1_FieldInfo_[] = {
	{"val$subcl", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(ObjectInputStream$1, val$subcl)},
	{}
};

$MethodInfo _ObjectInputStream$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;)V", "()V", 0, $method(static_cast<void(ObjectInputStream$1::*)($Class*)>(&ObjectInputStream$1::init$))},
	{"run", "()Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ObjectInputStream$1_EnclosingMethodInfo_ = {
	"java.io.ObjectInputStream",
	"auditSubclass",
	"(Ljava/lang/Class;)Ljava/lang/Boolean;"
};

$InnerClassInfo _ObjectInputStream$1_InnerClassesInfo_[] = {
	{"java.io.ObjectInputStream$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ObjectInputStream$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.io.ObjectInputStream$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_ObjectInputStream$1_FieldInfo_,
	_ObjectInputStream$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Boolean;>;",
	&_ObjectInputStream$1_EnclosingMethodInfo_,
	_ObjectInputStream$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.io.ObjectInputStream"
};

$Object* allocate$ObjectInputStream$1($Class* clazz) {
	return $of($alloc(ObjectInputStream$1));
}

void ObjectInputStream$1::init$($Class* val$subcl) {
	$set(this, val$subcl, val$subcl);
}

$Object* ObjectInputStream$1::run() {
	$beforeCallerSensitive();
	$load($ObjectInputStream);
	{
		$Class* cl = this->val$subcl;
		for (; cl != $ObjectInputStream::class$; cl = $nc(cl)->getSuperclass()) {
			try {
				cl->getDeclaredMethod("readUnshared"_s, ($ClassArray*)nullptr);
				$init($Boolean);
				return $of($Boolean::FALSE);
			} catch ($NoSuchMethodException& ex) {
			}
			try {
				cl->getDeclaredMethod("readFields"_s, ($ClassArray*)nullptr);
				$init($Boolean);
				return $of($Boolean::FALSE);
			} catch ($NoSuchMethodException& ex) {
			}
		}
	}
	$init($Boolean);
	return $of($Boolean::TRUE);
}

ObjectInputStream$1::ObjectInputStream$1() {
}

$Class* ObjectInputStream$1::load$($String* name, bool initialize) {
	$loadClass(ObjectInputStream$1, name, initialize, &_ObjectInputStream$1_ClassInfo_, allocate$ObjectInputStream$1);
	return class$;
}

$Class* ObjectInputStream$1::class$ = nullptr;

	} // io
} // java