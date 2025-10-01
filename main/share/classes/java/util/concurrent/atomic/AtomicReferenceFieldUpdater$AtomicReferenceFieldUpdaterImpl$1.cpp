#include <java/util/concurrent/atomic/AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl$1.h>

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
#include <java/util/concurrent/atomic/AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Field = ::java::lang::reflect::Field;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl = ::java::util::concurrent::atomic::AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl;

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {

$FieldInfo _AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl$1_FieldInfo_[] = {
	{"this$0", "Ljava/util/concurrent/atomic/AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl;", nullptr, $FINAL | $SYNTHETIC, $field(AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl$1, this$0)},
	{"val$fieldName", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl$1, val$fieldName)},
	{"val$tclass", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl$1, val$tclass)},
	{}
};

$MethodInfo _AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/atomic/AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl;Ljava/lang/Class;Ljava/lang/String;)V", "()V", 0, $method(static_cast<void(AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl$1::*)($AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl*,$Class*,$String*)>(&AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl$1::init$))},
	{"run", "()Ljava/lang/reflect/Field;", nullptr, $PUBLIC, nullptr, "java.lang.NoSuchFieldException"},
	{}
};

$EnclosingMethodInfo _AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl$1_EnclosingMethodInfo_ = {
	"java.util.concurrent.atomic.AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl",
	"<init>",
	"(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/String;Ljava/lang/Class;)V"
};

$InnerClassInfo _AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl$1_InnerClassesInfo_[] = {
	{"java.util.concurrent.atomic.AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl", "java.util.concurrent.atomic.AtomicReferenceFieldUpdater", "AtomicReferenceFieldUpdaterImpl", $PRIVATE | $STATIC | $FINAL},
	{"java.util.concurrent.atomic.AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.concurrent.atomic.AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl$1",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl$1_FieldInfo_,
	_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/reflect/Field;>;",
	&_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl$1_EnclosingMethodInfo_,
	_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.atomic.AtomicReferenceFieldUpdater"
};

$Object* allocate$AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl$1($Class* clazz) {
	return $of($alloc(AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl$1));
}

void AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl$1::init$($AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl* this$0, $Class* val$tclass, $String* val$fieldName) {
	$set(this, this$0, this$0);
	$set(this, val$tclass, val$tclass);
	$set(this, val$fieldName, val$fieldName);
}

$Object* AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl$1::run() {
	$beforeCallerSensitive();
	return $of($nc(this->val$tclass)->getDeclaredField(this->val$fieldName));
}

AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl$1::AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl$1() {
}

$Class* AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl$1::load$($String* name, bool initialize) {
	$loadClass(AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl$1, name, initialize, &_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl$1_ClassInfo_, allocate$AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl$1);
	return class$;
}

$Class* AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl$1::class$ = nullptr;

			} // atomic
		} // concurrent
	} // util
} // java