#include <java/io/ObjectInputStream$ValidationList$1.h>

#include <java/io/ObjectInputStream$ValidationList$Callback.h>
#include <java/io/ObjectInputStream$ValidationList.h>
#include <java/io/ObjectInputValidation.h>
#include <jcpp.h>

using $ObjectInputStream$ValidationList = ::java::io::ObjectInputStream$ValidationList;
using $ObjectInputValidation = ::java::io::ObjectInputValidation;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

$FieldInfo _ObjectInputStream$ValidationList$1_FieldInfo_[] = {
	{"this$0", "Ljava/io/ObjectInputStream$ValidationList;", nullptr, $FINAL | $SYNTHETIC, $field(ObjectInputStream$ValidationList$1, this$0)},
	{}
};

$MethodInfo _ObjectInputStream$ValidationList$1_MethodInfo_[] = {
	{"<init>", "(Ljava/io/ObjectInputStream$ValidationList;)V", nullptr, 0, $method(static_cast<void(ObjectInputStream$ValidationList$1::*)($ObjectInputStream$ValidationList*)>(&ObjectInputStream$ValidationList$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, nullptr, "java.io.InvalidObjectException"},
	{}
};

$EnclosingMethodInfo _ObjectInputStream$ValidationList$1_EnclosingMethodInfo_ = {
	"java.io.ObjectInputStream$ValidationList",
	"doCallbacks",
	"()V"
};

$InnerClassInfo _ObjectInputStream$ValidationList$1_InnerClassesInfo_[] = {
	{"java.io.ObjectInputStream$ValidationList", "java.io.ObjectInputStream", "ValidationList", $PRIVATE | $STATIC},
	{"java.io.ObjectInputStream$ValidationList$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ObjectInputStream$ValidationList$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.io.ObjectInputStream$ValidationList$1",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	_ObjectInputStream$ValidationList$1_FieldInfo_,
	_ObjectInputStream$ValidationList$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/Void;>;",
	&_ObjectInputStream$ValidationList$1_EnclosingMethodInfo_,
	_ObjectInputStream$ValidationList$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.io.ObjectInputStream"
};

$Object* allocate$ObjectInputStream$ValidationList$1($Class* clazz) {
	return $of($alloc(ObjectInputStream$ValidationList$1));
}

void ObjectInputStream$ValidationList$1::init$($ObjectInputStream$ValidationList* this$0) {
	$set(this, this$0, this$0);
}

$Object* ObjectInputStream$ValidationList$1::run() {
	$nc($nc(this->this$0->list)->obj)->validateObject();
	return $of(nullptr);
}

ObjectInputStream$ValidationList$1::ObjectInputStream$ValidationList$1() {
}

$Class* ObjectInputStream$ValidationList$1::load$($String* name, bool initialize) {
	$loadClass(ObjectInputStream$ValidationList$1, name, initialize, &_ObjectInputStream$ValidationList$1_ClassInfo_, allocate$ObjectInputStream$ValidationList$1);
	return class$;
}

$Class* ObjectInputStream$ValidationList$1::class$ = nullptr;

	} // io
} // java