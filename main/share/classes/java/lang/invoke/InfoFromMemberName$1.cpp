#include <java/lang/invoke/InfoFromMemberName$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/invoke/InfoFromMemberName.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Member.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $InfoFromMemberName = ::java::lang::invoke::InfoFromMemberName;
using $Member = ::java::lang::reflect::Member;
using $PrivilegedAction = ::java::security::PrivilegedAction;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _InfoFromMemberName$1_FieldInfo_[] = {
	{"this$0", "Ljava/lang/invoke/InfoFromMemberName;", nullptr, $FINAL | $SYNTHETIC, $field(InfoFromMemberName$1, this$0)},
	{}
};

$MethodInfo _InfoFromMemberName$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/invoke/InfoFromMemberName;)V", nullptr, 0, $method(static_cast<void(InfoFromMemberName$1::*)($InfoFromMemberName*)>(&InfoFromMemberName$1::init$))},
	{"run", "()Ljava/lang/reflect/Member;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _InfoFromMemberName$1_EnclosingMethodInfo_ = {
	"java.lang.invoke.InfoFromMemberName",
	"reflectAs",
	"(Ljava/lang/Class;Ljava/lang/invoke/MethodHandles$Lookup;)Ljava/lang/reflect/Member;"
};

$InnerClassInfo _InfoFromMemberName$1_InnerClassesInfo_[] = {
	{"java.lang.invoke.InfoFromMemberName$1", nullptr, nullptr, 0},
	{"java.lang.invoke.MethodHandles$Lookup", "java.lang.invoke.MethodHandles", "Lookup", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _InfoFromMemberName$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.InfoFromMemberName$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_InfoFromMemberName$1_FieldInfo_,
	_InfoFromMemberName$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/reflect/Member;>;",
	&_InfoFromMemberName$1_EnclosingMethodInfo_,
	_InfoFromMemberName$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.InfoFromMemberName"
};

$Object* allocate$InfoFromMemberName$1($Class* clazz) {
	return $of($alloc(InfoFromMemberName$1));
}

void InfoFromMemberName$1::init$($InfoFromMemberName* this$0) {
	$set(this, this$0, this$0);
}

$Object* InfoFromMemberName$1::run() {
	try {
		return $of(this->this$0->reflectUnchecked());
	} catch ($ReflectiveOperationException&) {
		$var($ReflectiveOperationException, ex, $catch());
		$throwNew($IllegalArgumentException, static_cast<$Throwable*>(ex));
	}
	$shouldNotReachHere();
}

InfoFromMemberName$1::InfoFromMemberName$1() {
}

$Class* InfoFromMemberName$1::load$($String* name, bool initialize) {
	$loadClass(InfoFromMemberName$1, name, initialize, &_InfoFromMemberName$1_ClassInfo_, allocate$InfoFromMemberName$1);
	return class$;
}

$Class* InfoFromMemberName$1::class$ = nullptr;

		} // invoke
	} // lang
} // java