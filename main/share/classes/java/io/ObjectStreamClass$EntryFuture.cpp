#include <java/io/ObjectStreamClass$EntryFuture.h>

#include <java/io/ObjectStreamClass$EntryFuture$1.h>
#include <java/io/ObjectStreamClass.h>
#include <java/lang/InterruptedException.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <jcpp.h>

using $ObjectStreamClass$EntryFuture$1 = ::java::io::ObjectStreamClass$EntryFuture$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;

namespace java {
	namespace io {

$FieldInfo _ObjectStreamClass$EntryFuture_FieldInfo_[] = {
	{"unset", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ObjectStreamClass$EntryFuture, unset)},
	{"owner", "Ljava/lang/Thread;", nullptr, $PRIVATE | $FINAL, $field(ObjectStreamClass$EntryFuture, owner)},
	{"entry", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(ObjectStreamClass$EntryFuture, entry)},
	{}
};

$MethodInfo _ObjectStreamClass$EntryFuture_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(ObjectStreamClass$EntryFuture, init$, void)},
	{"get", "()Ljava/lang/Object;", nullptr, $SYNCHRONIZED, $virtualMethod(ObjectStreamClass$EntryFuture, get, $Object*)},
	{"getOwner", "()Ljava/lang/Thread;", nullptr, 0, $virtualMethod(ObjectStreamClass$EntryFuture, getOwner, $Thread*)},
	{"set", "(Ljava/lang/Object;)Z", nullptr, $SYNCHRONIZED, $virtualMethod(ObjectStreamClass$EntryFuture, set, bool, Object$*)},
	{}
};

$InnerClassInfo _ObjectStreamClass$EntryFuture_InnerClassesInfo_[] = {
	{"java.io.ObjectStreamClass$EntryFuture", "java.io.ObjectStreamClass", "EntryFuture", $PRIVATE | $STATIC},
	{"java.io.ObjectStreamClass$EntryFuture$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ObjectStreamClass$EntryFuture_ClassInfo_ = {
	$ACC_SUPER,
	"java.io.ObjectStreamClass$EntryFuture",
	"java.lang.Object",
	nullptr,
	_ObjectStreamClass$EntryFuture_FieldInfo_,
	_ObjectStreamClass$EntryFuture_MethodInfo_,
	nullptr,
	nullptr,
	_ObjectStreamClass$EntryFuture_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.io.ObjectStreamClass"
};

$Object* allocate$ObjectStreamClass$EntryFuture($Class* clazz) {
	return $of($alloc(ObjectStreamClass$EntryFuture));
}

$Object* ObjectStreamClass$EntryFuture::unset = nullptr;

void ObjectStreamClass$EntryFuture::init$() {
	$set(this, owner, $Thread::currentThread());
	$set(this, entry, ObjectStreamClass$EntryFuture::unset);
}

bool ObjectStreamClass$EntryFuture::set(Object$* entry) {
	$synchronized(this) {
		if (!$equals(this->entry, ObjectStreamClass$EntryFuture::unset)) {
			return false;
		}
		$set(this, entry, entry);
		$of(this)->notifyAll();
		return true;
	}
}

$Object* ObjectStreamClass$EntryFuture::get() {
	$synchronized(this) {
		$beforeCallerSensitive();
		bool interrupted = false;
		while ($equals(this->entry, ObjectStreamClass$EntryFuture::unset)) {
			try {
				$of(this)->wait();
			} catch ($InterruptedException& ex) {
				interrupted = true;
			}
		}
		if (interrupted) {
			$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($ObjectStreamClass$EntryFuture$1, this)));
		}
		return $of(this->entry);
	}
}

$Thread* ObjectStreamClass$EntryFuture::getOwner() {
	return this->owner;
}

void clinit$ObjectStreamClass$EntryFuture($Class* class$) {
	$assignStatic(ObjectStreamClass$EntryFuture::unset, $new($Object));
}

ObjectStreamClass$EntryFuture::ObjectStreamClass$EntryFuture() {
}

$Class* ObjectStreamClass$EntryFuture::load$($String* name, bool initialize) {
	$loadClass(ObjectStreamClass$EntryFuture, name, initialize, &_ObjectStreamClass$EntryFuture_ClassInfo_, clinit$ObjectStreamClass$EntryFuture, allocate$ObjectStreamClass$EntryFuture);
	return class$;
}

$Class* ObjectStreamClass$EntryFuture::class$ = nullptr;

	} // io
} // java