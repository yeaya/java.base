#include <sun/nio/ch/UnixAsynchronousSocketChannelImpl$OpType.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/nio/ch/UnixAsynchronousSocketChannelImpl.h>
#include <jcpp.h>

#undef CONNECT
#undef READ
#undef WRITE

using $UnixAsynchronousSocketChannelImpl$OpTypeArray = $Array<::sun::nio::ch::UnixAsynchronousSocketChannelImpl$OpType>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnixAsynchronousSocketChannelImpl = ::sun::nio::ch::UnixAsynchronousSocketChannelImpl;

namespace sun {
	namespace nio {
		namespace ch {

$FieldInfo _UnixAsynchronousSocketChannelImpl$OpType_FieldInfo_[] = {
	{"CONNECT", "Lsun/nio/ch/UnixAsynchronousSocketChannelImpl$OpType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnixAsynchronousSocketChannelImpl$OpType, CONNECT)},
	{"READ", "Lsun/nio/ch/UnixAsynchronousSocketChannelImpl$OpType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnixAsynchronousSocketChannelImpl$OpType, READ)},
	{"WRITE", "Lsun/nio/ch/UnixAsynchronousSocketChannelImpl$OpType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnixAsynchronousSocketChannelImpl$OpType, WRITE)},
	{"$VALUES", "[Lsun/nio/ch/UnixAsynchronousSocketChannelImpl$OpType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(UnixAsynchronousSocketChannelImpl$OpType, $VALUES)},
	{}
};

$MethodInfo _UnixAsynchronousSocketChannelImpl$OpType_MethodInfo_[] = {
	{"$values", "()[Lsun/nio/ch/UnixAsynchronousSocketChannelImpl$OpType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$UnixAsynchronousSocketChannelImpl$OpTypeArray*(*)()>(&UnixAsynchronousSocketChannelImpl$OpType::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(UnixAsynchronousSocketChannelImpl$OpType::*)($String*,int32_t)>(&UnixAsynchronousSocketChannelImpl$OpType::init$))},
	{"valueOf", "(Ljava/lang/String;)Lsun/nio/ch/UnixAsynchronousSocketChannelImpl$OpType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<UnixAsynchronousSocketChannelImpl$OpType*(*)($String*)>(&UnixAsynchronousSocketChannelImpl$OpType::valueOf))},
	{"values", "()[Lsun/nio/ch/UnixAsynchronousSocketChannelImpl$OpType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$UnixAsynchronousSocketChannelImpl$OpTypeArray*(*)()>(&UnixAsynchronousSocketChannelImpl$OpType::values))},
	{}
};

$InnerClassInfo _UnixAsynchronousSocketChannelImpl$OpType_InnerClassesInfo_[] = {
	{"sun.nio.ch.UnixAsynchronousSocketChannelImpl$OpType", "sun.nio.ch.UnixAsynchronousSocketChannelImpl", "OpType", $PRIVATE | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _UnixAsynchronousSocketChannelImpl$OpType_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"sun.nio.ch.UnixAsynchronousSocketChannelImpl$OpType",
	"java.lang.Enum",
	nullptr,
	_UnixAsynchronousSocketChannelImpl$OpType_FieldInfo_,
	_UnixAsynchronousSocketChannelImpl$OpType_MethodInfo_,
	"Ljava/lang/Enum<Lsun/nio/ch/UnixAsynchronousSocketChannelImpl$OpType;>;",
	nullptr,
	_UnixAsynchronousSocketChannelImpl$OpType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.ch.UnixAsynchronousSocketChannelImpl"
};

$Object* allocate$UnixAsynchronousSocketChannelImpl$OpType($Class* clazz) {
	return $of($alloc(UnixAsynchronousSocketChannelImpl$OpType));
}

UnixAsynchronousSocketChannelImpl$OpType* UnixAsynchronousSocketChannelImpl$OpType::CONNECT = nullptr;
UnixAsynchronousSocketChannelImpl$OpType* UnixAsynchronousSocketChannelImpl$OpType::READ = nullptr;
UnixAsynchronousSocketChannelImpl$OpType* UnixAsynchronousSocketChannelImpl$OpType::WRITE = nullptr;
$UnixAsynchronousSocketChannelImpl$OpTypeArray* UnixAsynchronousSocketChannelImpl$OpType::$VALUES = nullptr;

$UnixAsynchronousSocketChannelImpl$OpTypeArray* UnixAsynchronousSocketChannelImpl$OpType::$values() {
	$init(UnixAsynchronousSocketChannelImpl$OpType);
	return $new($UnixAsynchronousSocketChannelImpl$OpTypeArray, {
		UnixAsynchronousSocketChannelImpl$OpType::CONNECT,
		UnixAsynchronousSocketChannelImpl$OpType::READ,
		UnixAsynchronousSocketChannelImpl$OpType::WRITE
	});
}

$UnixAsynchronousSocketChannelImpl$OpTypeArray* UnixAsynchronousSocketChannelImpl$OpType::values() {
	$init(UnixAsynchronousSocketChannelImpl$OpType);
	return $cast($UnixAsynchronousSocketChannelImpl$OpTypeArray, UnixAsynchronousSocketChannelImpl$OpType::$VALUES->clone());
}

UnixAsynchronousSocketChannelImpl$OpType* UnixAsynchronousSocketChannelImpl$OpType::valueOf($String* name) {
	$init(UnixAsynchronousSocketChannelImpl$OpType);
	return $cast(UnixAsynchronousSocketChannelImpl$OpType, $Enum::valueOf(UnixAsynchronousSocketChannelImpl$OpType::class$, name));
}

void UnixAsynchronousSocketChannelImpl$OpType::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$UnixAsynchronousSocketChannelImpl$OpType($Class* class$) {
	$assignStatic(UnixAsynchronousSocketChannelImpl$OpType::CONNECT, $new(UnixAsynchronousSocketChannelImpl$OpType, "CONNECT"_s, 0));
	$assignStatic(UnixAsynchronousSocketChannelImpl$OpType::READ, $new(UnixAsynchronousSocketChannelImpl$OpType, "READ"_s, 1));
	$assignStatic(UnixAsynchronousSocketChannelImpl$OpType::WRITE, $new(UnixAsynchronousSocketChannelImpl$OpType, "WRITE"_s, 2));
	$assignStatic(UnixAsynchronousSocketChannelImpl$OpType::$VALUES, UnixAsynchronousSocketChannelImpl$OpType::$values());
}

UnixAsynchronousSocketChannelImpl$OpType::UnixAsynchronousSocketChannelImpl$OpType() {
}

$Class* UnixAsynchronousSocketChannelImpl$OpType::load$($String* name, bool initialize) {
	$loadClass(UnixAsynchronousSocketChannelImpl$OpType, name, initialize, &_UnixAsynchronousSocketChannelImpl$OpType_ClassInfo_, clinit$UnixAsynchronousSocketChannelImpl$OpType, allocate$UnixAsynchronousSocketChannelImpl$OpType);
	return class$;
}

$Class* UnixAsynchronousSocketChannelImpl$OpType::class$ = nullptr;

		} // ch
	} // nio
} // sun