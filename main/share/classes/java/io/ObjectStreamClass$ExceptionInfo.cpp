#include <java/io/ObjectStreamClass$ExceptionInfo.h>

#include <java/io/InvalidClassException.h>
#include <java/io/ObjectStreamClass.h>
#include <jcpp.h>

using $InvalidClassException = ::java::io::InvalidClassException;
using $ObjectStreamClass = ::java::io::ObjectStreamClass;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

$FieldInfo _ObjectStreamClass$ExceptionInfo_FieldInfo_[] = {
	{"className", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ObjectStreamClass$ExceptionInfo, className)},
	{"message", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ObjectStreamClass$ExceptionInfo, message)},
	{}
};

$MethodInfo _ObjectStreamClass$ExceptionInfo_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(ObjectStreamClass$ExceptionInfo::*)($String*,$String*)>(&ObjectStreamClass$ExceptionInfo::init$))},
	{"newInvalidClassException", "()Ljava/io/InvalidClassException;", nullptr, 0},
	{}
};

$InnerClassInfo _ObjectStreamClass$ExceptionInfo_InnerClassesInfo_[] = {
	{"java.io.ObjectStreamClass$ExceptionInfo", "java.io.ObjectStreamClass", "ExceptionInfo", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ObjectStreamClass$ExceptionInfo_ClassInfo_ = {
	$ACC_SUPER,
	"java.io.ObjectStreamClass$ExceptionInfo",
	"java.lang.Object",
	nullptr,
	_ObjectStreamClass$ExceptionInfo_FieldInfo_,
	_ObjectStreamClass$ExceptionInfo_MethodInfo_,
	nullptr,
	nullptr,
	_ObjectStreamClass$ExceptionInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.io.ObjectStreamClass"
};

$Object* allocate$ObjectStreamClass$ExceptionInfo($Class* clazz) {
	return $of($alloc(ObjectStreamClass$ExceptionInfo));
}

void ObjectStreamClass$ExceptionInfo::init$($String* cn, $String* msg) {
	$set(this, className, cn);
	$set(this, message, msg);
}

$InvalidClassException* ObjectStreamClass$ExceptionInfo::newInvalidClassException() {
	return $new($InvalidClassException, this->className, this->message);
}

ObjectStreamClass$ExceptionInfo::ObjectStreamClass$ExceptionInfo() {
}

$Class* ObjectStreamClass$ExceptionInfo::load$($String* name, bool initialize) {
	$loadClass(ObjectStreamClass$ExceptionInfo, name, initialize, &_ObjectStreamClass$ExceptionInfo_ClassInfo_, allocate$ObjectStreamClass$ExceptionInfo);
	return class$;
}

$Class* ObjectStreamClass$ExceptionInfo::class$ = nullptr;

	} // io
} // java