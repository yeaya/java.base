#include <java/io/ObjectStreamClass$1.h>
#include <java/io/ObjectStreamClass.h>
#include <jcpp.h>

using $ObjectStreamClass = ::java::io::ObjectStreamClass;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

void ObjectStreamClass$1::init$($ObjectStreamClass* this$0) {
	$set(this, this$0, this$0);
}

$Object* ObjectStreamClass$1::run() {
	return $of($Long::valueOf($ObjectStreamClass::computeDefaultSUID(this->this$0->cl)));
}

ObjectStreamClass$1::ObjectStreamClass$1() {
}

$Class* ObjectStreamClass$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/io/ObjectStreamClass;", nullptr, $FINAL | $SYNTHETIC, $field(ObjectStreamClass$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/ObjectStreamClass;)V", nullptr, 0, $method(ObjectStreamClass$1, init$, void, $ObjectStreamClass*)},
		{"run", "()Ljava/lang/Long;", nullptr, $PUBLIC, $virtualMethod(ObjectStreamClass$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.io.ObjectStreamClass",
		"getSerialVersionUID",
		"()J"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.io.ObjectStreamClass$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.io.ObjectStreamClass$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Long;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.io.ObjectStreamClass"
	};
	$loadClass(ObjectStreamClass$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ObjectStreamClass$1);
	});
	return class$;
}

$Class* ObjectStreamClass$1::class$ = nullptr;

	} // io
} // java