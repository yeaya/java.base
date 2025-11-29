#include <java/io/ObjectStreamClass$EntryFuture$1.h>

#include <java/io/ObjectStreamClass$EntryFuture.h>
#include <jcpp.h>

using $ObjectStreamClass$EntryFuture = ::java::io::ObjectStreamClass$EntryFuture;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

$FieldInfo _ObjectStreamClass$EntryFuture$1_FieldInfo_[] = {
	{"this$0", "Ljava/io/ObjectStreamClass$EntryFuture;", nullptr, $FINAL | $SYNTHETIC, $field(ObjectStreamClass$EntryFuture$1, this$0)},
	{}
};

$MethodInfo _ObjectStreamClass$EntryFuture$1_MethodInfo_[] = {
	{"<init>", "(Ljava/io/ObjectStreamClass$EntryFuture;)V", nullptr, 0, $method(static_cast<void(ObjectStreamClass$EntryFuture$1::*)($ObjectStreamClass$EntryFuture*)>(&ObjectStreamClass$EntryFuture$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ObjectStreamClass$EntryFuture$1_EnclosingMethodInfo_ = {
	"java.io.ObjectStreamClass$EntryFuture",
	"get",
	"()Ljava/lang/Object;"
};

$InnerClassInfo _ObjectStreamClass$EntryFuture$1_InnerClassesInfo_[] = {
	{"java.io.ObjectStreamClass$EntryFuture", "java.io.ObjectStreamClass", "EntryFuture", $PRIVATE | $STATIC},
	{"java.io.ObjectStreamClass$EntryFuture$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ObjectStreamClass$EntryFuture$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.io.ObjectStreamClass$EntryFuture$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_ObjectStreamClass$EntryFuture$1_FieldInfo_,
	_ObjectStreamClass$EntryFuture$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	&_ObjectStreamClass$EntryFuture$1_EnclosingMethodInfo_,
	_ObjectStreamClass$EntryFuture$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.io.ObjectStreamClass"
};

$Object* allocate$ObjectStreamClass$EntryFuture$1($Class* clazz) {
	return $of($alloc(ObjectStreamClass$EntryFuture$1));
}

void ObjectStreamClass$EntryFuture$1::init$($ObjectStreamClass$EntryFuture* this$0) {
	$set(this, this$0, this$0);
}

$Object* ObjectStreamClass$EntryFuture$1::run() {
	$($Thread::currentThread())->interrupt();
	return $of(nullptr);
}

ObjectStreamClass$EntryFuture$1::ObjectStreamClass$EntryFuture$1() {
}

$Class* ObjectStreamClass$EntryFuture$1::load$($String* name, bool initialize) {
	$loadClass(ObjectStreamClass$EntryFuture$1, name, initialize, &_ObjectStreamClass$EntryFuture$1_ClassInfo_, allocate$ObjectStreamClass$EntryFuture$1);
	return class$;
}

$Class* ObjectStreamClass$EntryFuture$1::class$ = nullptr;

	} // io
} // java