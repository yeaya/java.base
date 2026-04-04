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

void ObjectStreamClass$EntryFuture$1::init$($ObjectStreamClass$EntryFuture* this$0) {
	$set(this, this$0, this$0);
}

$Object* ObjectStreamClass$EntryFuture$1::run() {
	$($Thread::currentThread())->interrupt();
	return nullptr;
}

ObjectStreamClass$EntryFuture$1::ObjectStreamClass$EntryFuture$1() {
}

$Class* ObjectStreamClass$EntryFuture$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/io/ObjectStreamClass$EntryFuture;", nullptr, $FINAL | $SYNTHETIC, $field(ObjectStreamClass$EntryFuture$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/ObjectStreamClass$EntryFuture;)V", nullptr, 0, $method(ObjectStreamClass$EntryFuture$1, init$, void, $ObjectStreamClass$EntryFuture*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(ObjectStreamClass$EntryFuture$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.io.ObjectStreamClass$EntryFuture",
		"get",
		"()Ljava/lang/Object;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.io.ObjectStreamClass$EntryFuture", "java.io.ObjectStreamClass", "EntryFuture", $PRIVATE | $STATIC},
		{"java.io.ObjectStreamClass$EntryFuture$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.io.ObjectStreamClass$EntryFuture$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.io.ObjectStreamClass"
	};
	$loadClass(ObjectStreamClass$EntryFuture$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ObjectStreamClass$EntryFuture$1);
	});
	return class$;
}

$Class* ObjectStreamClass$EntryFuture$1::class$ = nullptr;

	} // io
} // java