#include <java/io/ObjectInputStream$ValidationList$Callback.h>

#include <java/io/ObjectInputStream$ValidationList.h>
#include <java/io/ObjectInputValidation.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessControlContext.h>
#include <jcpp.h>

using $ObjectInputStream$ValidationList = ::java::io::ObjectInputStream$ValidationList;
using $ObjectInputValidation = ::java::io::ObjectInputValidation;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessControlContext = ::java::security::AccessControlContext;

namespace java {
	namespace io {

$FieldInfo _ObjectInputStream$ValidationList$Callback_FieldInfo_[] = {
	{"obj", "Ljava/io/ObjectInputValidation;", nullptr, $FINAL, $field(ObjectInputStream$ValidationList$Callback, obj)},
	{"priority", "I", nullptr, $FINAL, $field(ObjectInputStream$ValidationList$Callback, priority)},
	{"next", "Ljava/io/ObjectInputStream$ValidationList$Callback;", nullptr, 0, $field(ObjectInputStream$ValidationList$Callback, next)},
	{"acc", "Ljava/security/AccessControlContext;", nullptr, $FINAL, $field(ObjectInputStream$ValidationList$Callback, acc)},
	{}
};

$MethodInfo _ObjectInputStream$ValidationList$Callback_MethodInfo_[] = {
	{"<init>", "(Ljava/io/ObjectInputValidation;ILjava/io/ObjectInputStream$ValidationList$Callback;Ljava/security/AccessControlContext;)V", nullptr, 0, $method(static_cast<void(ObjectInputStream$ValidationList$Callback::*)($ObjectInputValidation*,int32_t,ObjectInputStream$ValidationList$Callback*,$AccessControlContext*)>(&ObjectInputStream$ValidationList$Callback::init$))},
	{}
};

$InnerClassInfo _ObjectInputStream$ValidationList$Callback_InnerClassesInfo_[] = {
	{"java.io.ObjectInputStream$ValidationList", "java.io.ObjectInputStream", "ValidationList", $PRIVATE | $STATIC},
	{"java.io.ObjectInputStream$ValidationList$Callback", "java.io.ObjectInputStream$ValidationList", "Callback", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ObjectInputStream$ValidationList$Callback_ClassInfo_ = {
	$ACC_SUPER,
	"java.io.ObjectInputStream$ValidationList$Callback",
	"java.lang.Object",
	nullptr,
	_ObjectInputStream$ValidationList$Callback_FieldInfo_,
	_ObjectInputStream$ValidationList$Callback_MethodInfo_,
	nullptr,
	nullptr,
	_ObjectInputStream$ValidationList$Callback_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.io.ObjectInputStream"
};

$Object* allocate$ObjectInputStream$ValidationList$Callback($Class* clazz) {
	return $of($alloc(ObjectInputStream$ValidationList$Callback));
}

void ObjectInputStream$ValidationList$Callback::init$($ObjectInputValidation* obj, int32_t priority, ObjectInputStream$ValidationList$Callback* next, $AccessControlContext* acc) {
	$set(this, obj, obj);
	this->priority = priority;
	$set(this, next, next);
	$set(this, acc, acc);
}

ObjectInputStream$ValidationList$Callback::ObjectInputStream$ValidationList$Callback() {
}

$Class* ObjectInputStream$ValidationList$Callback::load$($String* name, bool initialize) {
	$loadClass(ObjectInputStream$ValidationList$Callback, name, initialize, &_ObjectInputStream$ValidationList$Callback_ClassInfo_, allocate$ObjectInputStream$ValidationList$Callback);
	return class$;
}

$Class* ObjectInputStream$ValidationList$Callback::class$ = nullptr;

	} // io
} // java