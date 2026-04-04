#include <java/io/ObjectStreamClass$ExceptionInfo.h>
#include <java/io/InvalidClassException.h>
#include <java/io/ObjectStreamClass.h>
#include <jcpp.h>

using $InvalidClassException = ::java::io::InvalidClassException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

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
	$FieldInfo fieldInfos$$[] = {
		{"className", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ObjectStreamClass$ExceptionInfo, className)},
		{"message", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ObjectStreamClass$ExceptionInfo, message)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $method(ObjectStreamClass$ExceptionInfo, init$, void, $String*, $String*)},
		{"newInvalidClassException", "()Ljava/io/InvalidClassException;", nullptr, 0, $virtualMethod(ObjectStreamClass$ExceptionInfo, newInvalidClassException, $InvalidClassException*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.io.ObjectStreamClass$ExceptionInfo", "java.io.ObjectStreamClass", "ExceptionInfo", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.io.ObjectStreamClass$ExceptionInfo",
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
		"java.io.ObjectStreamClass"
	};
	$loadClass(ObjectStreamClass$ExceptionInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ObjectStreamClass$ExceptionInfo);
	});
	return class$;
}

$Class* ObjectStreamClass$ExceptionInfo::class$ = nullptr;

	} // io
} // java