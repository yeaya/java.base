#include <java/util/concurrent/atomic/AtomicLongFieldUpdater$LockedUpdater$1.h>

#include <java/lang/reflect/Field.h>
#include <java/util/concurrent/atomic/AtomicLongFieldUpdater$LockedUpdater.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AtomicLongFieldUpdater$LockedUpdater = ::java::util::concurrent::atomic::AtomicLongFieldUpdater$LockedUpdater;

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {

$FieldInfo _AtomicLongFieldUpdater$LockedUpdater$1_FieldInfo_[] = {
	{"this$0", "Ljava/util/concurrent/atomic/AtomicLongFieldUpdater$LockedUpdater;", nullptr, $FINAL | $SYNTHETIC, $field(AtomicLongFieldUpdater$LockedUpdater$1, this$0)},
	{"val$fieldName", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(AtomicLongFieldUpdater$LockedUpdater$1, val$fieldName)},
	{"val$tclass", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(AtomicLongFieldUpdater$LockedUpdater$1, val$tclass)},
	{}
};

$MethodInfo _AtomicLongFieldUpdater$LockedUpdater$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/atomic/AtomicLongFieldUpdater$LockedUpdater;Ljava/lang/Class;Ljava/lang/String;)V", "()V", 0, $method(static_cast<void(AtomicLongFieldUpdater$LockedUpdater$1::*)($AtomicLongFieldUpdater$LockedUpdater*,$Class*,$String*)>(&AtomicLongFieldUpdater$LockedUpdater$1::init$))},
	{"run", "()Ljava/lang/reflect/Field;", nullptr, $PUBLIC, nullptr, "java.lang.NoSuchFieldException"},
	{}
};

$EnclosingMethodInfo _AtomicLongFieldUpdater$LockedUpdater$1_EnclosingMethodInfo_ = {
	"java.util.concurrent.atomic.AtomicLongFieldUpdater$LockedUpdater",
	"<init>",
	"(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/Class;)V"
};

$InnerClassInfo _AtomicLongFieldUpdater$LockedUpdater$1_InnerClassesInfo_[] = {
	{"java.util.concurrent.atomic.AtomicLongFieldUpdater$LockedUpdater", "java.util.concurrent.atomic.AtomicLongFieldUpdater", "LockedUpdater", $PRIVATE | $STATIC | $FINAL},
	{"java.util.concurrent.atomic.AtomicLongFieldUpdater$LockedUpdater$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AtomicLongFieldUpdater$LockedUpdater$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.concurrent.atomic.AtomicLongFieldUpdater$LockedUpdater$1",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	_AtomicLongFieldUpdater$LockedUpdater$1_FieldInfo_,
	_AtomicLongFieldUpdater$LockedUpdater$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/reflect/Field;>;",
	&_AtomicLongFieldUpdater$LockedUpdater$1_EnclosingMethodInfo_,
	_AtomicLongFieldUpdater$LockedUpdater$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.atomic.AtomicLongFieldUpdater"
};

$Object* allocate$AtomicLongFieldUpdater$LockedUpdater$1($Class* clazz) {
	return $of($alloc(AtomicLongFieldUpdater$LockedUpdater$1));
}

void AtomicLongFieldUpdater$LockedUpdater$1::init$($AtomicLongFieldUpdater$LockedUpdater* this$0, $Class* val$tclass, $String* val$fieldName) {
	$set(this, this$0, this$0);
	$set(this, val$tclass, val$tclass);
	$set(this, val$fieldName, val$fieldName);
}

$Object* AtomicLongFieldUpdater$LockedUpdater$1::run() {
	$beforeCallerSensitive();
	return $of($nc(this->val$tclass)->getDeclaredField(this->val$fieldName));
}

AtomicLongFieldUpdater$LockedUpdater$1::AtomicLongFieldUpdater$LockedUpdater$1() {
}

$Class* AtomicLongFieldUpdater$LockedUpdater$1::load$($String* name, bool initialize) {
	$loadClass(AtomicLongFieldUpdater$LockedUpdater$1, name, initialize, &_AtomicLongFieldUpdater$LockedUpdater$1_ClassInfo_, allocate$AtomicLongFieldUpdater$LockedUpdater$1);
	return class$;
}

$Class* AtomicLongFieldUpdater$LockedUpdater$1::class$ = nullptr;

			} // atomic
		} // concurrent
	} // util
} // java