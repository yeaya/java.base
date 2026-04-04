#include <java/io/ObjectInputStream$ValidationList$Callback.h>
#include <java/io/ObjectInputStream$ValidationList.h>
#include <java/io/ObjectInputValidation.h>
#include <java/security/AccessControlContext.h>
#include <jcpp.h>

using $ObjectInputValidation = ::java::io::ObjectInputValidation;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessControlContext = ::java::security::AccessControlContext;

namespace java {
	namespace io {

void ObjectInputStream$ValidationList$Callback::init$($ObjectInputValidation* obj, int32_t priority, ObjectInputStream$ValidationList$Callback* next, $AccessControlContext* acc) {
	$set(this, obj, obj);
	this->priority = priority;
	$set(this, next, next);
	$set(this, acc, acc);
}

ObjectInputStream$ValidationList$Callback::ObjectInputStream$ValidationList$Callback() {
}

$Class* ObjectInputStream$ValidationList$Callback::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"obj", "Ljava/io/ObjectInputValidation;", nullptr, $FINAL, $field(ObjectInputStream$ValidationList$Callback, obj)},
		{"priority", "I", nullptr, $FINAL, $field(ObjectInputStream$ValidationList$Callback, priority)},
		{"next", "Ljava/io/ObjectInputStream$ValidationList$Callback;", nullptr, 0, $field(ObjectInputStream$ValidationList$Callback, next)},
		{"acc", "Ljava/security/AccessControlContext;", nullptr, $FINAL, $field(ObjectInputStream$ValidationList$Callback, acc)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/ObjectInputValidation;ILjava/io/ObjectInputStream$ValidationList$Callback;Ljava/security/AccessControlContext;)V", nullptr, 0, $method(ObjectInputStream$ValidationList$Callback, init$, void, $ObjectInputValidation*, int32_t, ObjectInputStream$ValidationList$Callback*, $AccessControlContext*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.io.ObjectInputStream$ValidationList", "java.io.ObjectInputStream", "ValidationList", $PRIVATE | $STATIC},
		{"java.io.ObjectInputStream$ValidationList$Callback", "java.io.ObjectInputStream$ValidationList", "Callback", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.io.ObjectInputStream$ValidationList$Callback",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.io.ObjectInputStream"
	};
	$loadClass(ObjectInputStream$ValidationList$Callback, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ObjectInputStream$ValidationList$Callback);
	});
	return class$;
}

$Class* ObjectInputStream$ValidationList$Callback::class$ = nullptr;

	} // io
} // java