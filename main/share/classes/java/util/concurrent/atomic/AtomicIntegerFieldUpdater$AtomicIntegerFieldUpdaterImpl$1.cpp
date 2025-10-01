#include <java/util/concurrent/atomic/AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Field.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/atomic/AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Field = ::java::lang::reflect::Field;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl = ::java::util::concurrent::atomic::AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl;

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {

$FieldInfo _AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl$1_FieldInfo_[] = {
	{"this$0", "Ljava/util/concurrent/atomic/AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl;", nullptr, $FINAL | $SYNTHETIC, $field(AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl$1, this$0)},
	{"val$fieldName", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl$1, val$fieldName)},
	{"val$tclass", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl$1, val$tclass)},
	{}
};

$MethodInfo _AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/atomic/AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl;Ljava/lang/Class;Ljava/lang/String;)V", "()V", 0, $method(static_cast<void(AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl$1::*)($AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl*,$Class*,$String*)>(&AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl$1::init$))},
	{"run", "()Ljava/lang/reflect/Field;", nullptr, $PUBLIC, nullptr, "java.lang.NoSuchFieldException"},
	{}
};

$EnclosingMethodInfo _AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl$1_EnclosingMethodInfo_ = {
	"java.util.concurrent.atomic.AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl",
	"<init>",
	"(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/Class;)V"
};

$InnerClassInfo _AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl$1_InnerClassesInfo_[] = {
	{"java.util.concurrent.atomic.AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl", "java.util.concurrent.atomic.AtomicIntegerFieldUpdater", "AtomicIntegerFieldUpdaterImpl", $PRIVATE | $STATIC | $FINAL},
	{"java.util.concurrent.atomic.AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.concurrent.atomic.AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl$1",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	_AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl$1_FieldInfo_,
	_AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/reflect/Field;>;",
	&_AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl$1_EnclosingMethodInfo_,
	_AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.atomic.AtomicIntegerFieldUpdater"
};

$Object* allocate$AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl$1($Class* clazz) {
	return $of($alloc(AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl$1));
}

void AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl$1::init$($AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl* this$0, $Class* val$tclass, $String* val$fieldName) {
	$set(this, this$0, this$0);
	$set(this, val$tclass, val$tclass);
	$set(this, val$fieldName, val$fieldName);
}

$Object* AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl$1::run() {
	$beforeCallerSensitive();
	return $of($nc(this->val$tclass)->getDeclaredField(this->val$fieldName));
}

AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl$1::AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl$1() {
}

$Class* AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl$1::load$($String* name, bool initialize) {
	$loadClass(AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl$1, name, initialize, &_AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl$1_ClassInfo_, allocate$AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl$1);
	return class$;
}

$Class* AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl$1::class$ = nullptr;

			} // atomic
		} // concurrent
	} // util
} // java