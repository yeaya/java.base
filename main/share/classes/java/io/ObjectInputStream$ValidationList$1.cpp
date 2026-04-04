#include <java/io/ObjectInputStream$ValidationList$1.h>
#include <java/io/ObjectInputStream$ValidationList$Callback.h>
#include <java/io/ObjectInputStream$ValidationList.h>
#include <java/io/ObjectInputValidation.h>
#include <jcpp.h>

using $ObjectInputStream$ValidationList = ::java::io::ObjectInputStream$ValidationList;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

void ObjectInputStream$ValidationList$1::init$($ObjectInputStream$ValidationList* this$0) {
	$set(this, this$0, this$0);
}

$Object* ObjectInputStream$ValidationList$1::run() {
	$nc($nc(this->this$0->list)->obj)->validateObject();
	return nullptr;
}

ObjectInputStream$ValidationList$1::ObjectInputStream$ValidationList$1() {
}

$Class* ObjectInputStream$ValidationList$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/io/ObjectInputStream$ValidationList;", nullptr, $FINAL | $SYNTHETIC, $field(ObjectInputStream$ValidationList$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/ObjectInputStream$ValidationList;)V", nullptr, 0, $method(ObjectInputStream$ValidationList$1, init$, void, $ObjectInputStream$ValidationList*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(ObjectInputStream$ValidationList$1, run, $Object*), "java.io.InvalidObjectException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.io.ObjectInputStream$ValidationList",
		"doCallbacks",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.io.ObjectInputStream$ValidationList", "java.io.ObjectInputStream", "ValidationList", $PRIVATE | $STATIC},
		{"java.io.ObjectInputStream$ValidationList$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.io.ObjectInputStream$ValidationList$1",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.io.ObjectInputStream"
	};
	$loadClass(ObjectInputStream$ValidationList$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ObjectInputStream$ValidationList$1);
	});
	return class$;
}

$Class* ObjectInputStream$ValidationList$1::class$ = nullptr;

	} // io
} // java