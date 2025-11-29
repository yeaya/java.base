#include <MultiThreadStackWalk$Call$WalkType.h>

#include <MultiThreadStackWalk$Call.h>
#include <MultiThreadStackWalk.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef WALKSTACK

using $MultiThreadStackWalk$Call$WalkTypeArray = $Array<MultiThreadStackWalk$Call$WalkType>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _MultiThreadStackWalk$Call$WalkType_FieldInfo_[] = {
	{"WALKSTACK", "LMultiThreadStackWalk$Call$WalkType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MultiThreadStackWalk$Call$WalkType, WALKSTACK)},
	{"$VALUES", "[LMultiThreadStackWalk$Call$WalkType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(MultiThreadStackWalk$Call$WalkType, $VALUES)},
	{}
};

$MethodInfo _MultiThreadStackWalk$Call$WalkType_MethodInfo_[] = {
	{"$values", "()[LMultiThreadStackWalk$Call$WalkType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$MultiThreadStackWalk$Call$WalkTypeArray*(*)()>(&MultiThreadStackWalk$Call$WalkType::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(MultiThreadStackWalk$Call$WalkType::*)($String*,int32_t)>(&MultiThreadStackWalk$Call$WalkType::init$))},
	{"valueOf", "(Ljava/lang/String;)LMultiThreadStackWalk$Call$WalkType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<MultiThreadStackWalk$Call$WalkType*(*)($String*)>(&MultiThreadStackWalk$Call$WalkType::valueOf))},
	{"values", "()[LMultiThreadStackWalk$Call$WalkType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MultiThreadStackWalk$Call$WalkTypeArray*(*)()>(&MultiThreadStackWalk$Call$WalkType::values))},
	{}
};

$InnerClassInfo _MultiThreadStackWalk$Call$WalkType_InnerClassesInfo_[] = {
	{"MultiThreadStackWalk$Call", "MultiThreadStackWalk", "Call", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"MultiThreadStackWalk$Call$WalkType", "MultiThreadStackWalk$Call", "WalkType", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _MultiThreadStackWalk$Call$WalkType_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"MultiThreadStackWalk$Call$WalkType",
	"java.lang.Enum",
	nullptr,
	_MultiThreadStackWalk$Call$WalkType_FieldInfo_,
	_MultiThreadStackWalk$Call$WalkType_MethodInfo_,
	"Ljava/lang/Enum<LMultiThreadStackWalk$Call$WalkType;>;",
	nullptr,
	_MultiThreadStackWalk$Call$WalkType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"MultiThreadStackWalk"
};

$Object* allocate$MultiThreadStackWalk$Call$WalkType($Class* clazz) {
	return $of($alloc(MultiThreadStackWalk$Call$WalkType));
}

MultiThreadStackWalk$Call$WalkType* MultiThreadStackWalk$Call$WalkType::WALKSTACK = nullptr;
$MultiThreadStackWalk$Call$WalkTypeArray* MultiThreadStackWalk$Call$WalkType::$VALUES = nullptr;

$MultiThreadStackWalk$Call$WalkTypeArray* MultiThreadStackWalk$Call$WalkType::$values() {
	$init(MultiThreadStackWalk$Call$WalkType);
	return $new($MultiThreadStackWalk$Call$WalkTypeArray, {MultiThreadStackWalk$Call$WalkType::WALKSTACK});
}

$MultiThreadStackWalk$Call$WalkTypeArray* MultiThreadStackWalk$Call$WalkType::values() {
	$init(MultiThreadStackWalk$Call$WalkType);
	return $cast($MultiThreadStackWalk$Call$WalkTypeArray, MultiThreadStackWalk$Call$WalkType::$VALUES->clone());
}

MultiThreadStackWalk$Call$WalkType* MultiThreadStackWalk$Call$WalkType::valueOf($String* name) {
	$init(MultiThreadStackWalk$Call$WalkType);
	return $cast(MultiThreadStackWalk$Call$WalkType, $Enum::valueOf(MultiThreadStackWalk$Call$WalkType::class$, name));
}

void MultiThreadStackWalk$Call$WalkType::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$MultiThreadStackWalk$Call$WalkType($Class* class$) {
	$assignStatic(MultiThreadStackWalk$Call$WalkType::WALKSTACK, $new(MultiThreadStackWalk$Call$WalkType, "WALKSTACK"_s, 0));
	$assignStatic(MultiThreadStackWalk$Call$WalkType::$VALUES, MultiThreadStackWalk$Call$WalkType::$values());
}

MultiThreadStackWalk$Call$WalkType::MultiThreadStackWalk$Call$WalkType() {
}

$Class* MultiThreadStackWalk$Call$WalkType::load$($String* name, bool initialize) {
	$loadClass(MultiThreadStackWalk$Call$WalkType, name, initialize, &_MultiThreadStackWalk$Call$WalkType_ClassInfo_, clinit$MultiThreadStackWalk$Call$WalkType, allocate$MultiThreadStackWalk$Call$WalkType);
	return class$;
}

$Class* MultiThreadStackWalk$Call$WalkType::class$ = nullptr;