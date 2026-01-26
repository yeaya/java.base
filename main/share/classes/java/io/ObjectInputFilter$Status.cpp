#include <java/io/ObjectInputFilter$Status.h>

#include <java/io/ObjectInputFilter.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef ALLOWED
#undef REJECTED
#undef UNDECIDED

using $ObjectInputFilter$StatusArray = $Array<::java::io::ObjectInputFilter$Status>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

$FieldInfo _ObjectInputFilter$Status_FieldInfo_[] = {
	{"UNDECIDED", "Ljava/io/ObjectInputFilter$Status;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ObjectInputFilter$Status, UNDECIDED)},
	{"ALLOWED", "Ljava/io/ObjectInputFilter$Status;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ObjectInputFilter$Status, ALLOWED)},
	{"REJECTED", "Ljava/io/ObjectInputFilter$Status;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ObjectInputFilter$Status, REJECTED)},
	{"$VALUES", "[Ljava/io/ObjectInputFilter$Status;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(ObjectInputFilter$Status, $VALUES)},
	{}
};

$MethodInfo _ObjectInputFilter$Status_MethodInfo_[] = {
	{"$values", "()[Ljava/io/ObjectInputFilter$Status;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ObjectInputFilter$Status, $values, $ObjectInputFilter$StatusArray*)},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(ObjectInputFilter$Status, init$, void, $String*, int32_t)},
	{"valueOf", "(Ljava/lang/String;)Ljava/io/ObjectInputFilter$Status;", nullptr, $PUBLIC | $STATIC, $staticMethod(ObjectInputFilter$Status, valueOf, ObjectInputFilter$Status*, $String*)},
	{"values", "()[Ljava/io/ObjectInputFilter$Status;", nullptr, $PUBLIC | $STATIC, $staticMethod(ObjectInputFilter$Status, values, $ObjectInputFilter$StatusArray*)},
	{}
};

$InnerClassInfo _ObjectInputFilter$Status_InnerClassesInfo_[] = {
	{"java.io.ObjectInputFilter$Status", "java.io.ObjectInputFilter", "Status", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _ObjectInputFilter$Status_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"java.io.ObjectInputFilter$Status",
	"java.lang.Enum",
	nullptr,
	_ObjectInputFilter$Status_FieldInfo_,
	_ObjectInputFilter$Status_MethodInfo_,
	"Ljava/lang/Enum<Ljava/io/ObjectInputFilter$Status;>;",
	nullptr,
	_ObjectInputFilter$Status_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.io.ObjectInputFilter"
};

$Object* allocate$ObjectInputFilter$Status($Class* clazz) {
	return $of($alloc(ObjectInputFilter$Status));
}

ObjectInputFilter$Status* ObjectInputFilter$Status::UNDECIDED = nullptr;
ObjectInputFilter$Status* ObjectInputFilter$Status::ALLOWED = nullptr;
ObjectInputFilter$Status* ObjectInputFilter$Status::REJECTED = nullptr;
$ObjectInputFilter$StatusArray* ObjectInputFilter$Status::$VALUES = nullptr;

$ObjectInputFilter$StatusArray* ObjectInputFilter$Status::$values() {
	$init(ObjectInputFilter$Status);
	return $new($ObjectInputFilter$StatusArray, {
		ObjectInputFilter$Status::UNDECIDED,
		ObjectInputFilter$Status::ALLOWED,
		ObjectInputFilter$Status::REJECTED
	});
}

$ObjectInputFilter$StatusArray* ObjectInputFilter$Status::values() {
	$init(ObjectInputFilter$Status);
	return $cast($ObjectInputFilter$StatusArray, ObjectInputFilter$Status::$VALUES->clone());
}

ObjectInputFilter$Status* ObjectInputFilter$Status::valueOf($String* name) {
	$init(ObjectInputFilter$Status);
	return $cast(ObjectInputFilter$Status, $Enum::valueOf(ObjectInputFilter$Status::class$, name));
}

void ObjectInputFilter$Status::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$ObjectInputFilter$Status($Class* class$) {
	$assignStatic(ObjectInputFilter$Status::UNDECIDED, $new(ObjectInputFilter$Status, "UNDECIDED"_s, 0));
	$assignStatic(ObjectInputFilter$Status::ALLOWED, $new(ObjectInputFilter$Status, "ALLOWED"_s, 1));
	$assignStatic(ObjectInputFilter$Status::REJECTED, $new(ObjectInputFilter$Status, "REJECTED"_s, 2));
	$assignStatic(ObjectInputFilter$Status::$VALUES, ObjectInputFilter$Status::$values());
}

ObjectInputFilter$Status::ObjectInputFilter$Status() {
}

$Class* ObjectInputFilter$Status::load$($String* name, bool initialize) {
	$loadClass(ObjectInputFilter$Status, name, initialize, &_ObjectInputFilter$Status_ClassInfo_, clinit$ObjectInputFilter$Status, allocate$ObjectInputFilter$Status);
	return class$;
}

$Class* ObjectInputFilter$Status::class$ = nullptr;

	} // io
} // java