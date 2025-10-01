#include <java/nio/ByteOrder.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

#undef BIG_ENDIAN
#undef LITTLE_ENDIAN
#undef NATIVE_ORDER

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace nio {

$FieldInfo _ByteOrder_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ByteOrder, name)},
	{"BIG_ENDIAN", "Ljava/nio/ByteOrder;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ByteOrder, BIG_ENDIAN)},
	{"LITTLE_ENDIAN", "Ljava/nio/ByteOrder;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ByteOrder, LITTLE_ENDIAN)},
	{"NATIVE_ORDER", "Ljava/nio/ByteOrder;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ByteOrder, NATIVE_ORDER)},
	{}
};

$MethodInfo _ByteOrder_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(ByteOrder::*)($String*)>(&ByteOrder::init$))},
	{"nativeOrder", "()Ljava/nio/ByteOrder;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ByteOrder*(*)()>(&ByteOrder::nativeOrder))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ByteOrder_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.nio.ByteOrder",
	"java.lang.Object",
	nullptr,
	_ByteOrder_FieldInfo_,
	_ByteOrder_MethodInfo_
};

$Object* allocate$ByteOrder($Class* clazz) {
	return $of($alloc(ByteOrder));
}


ByteOrder* ByteOrder::BIG_ENDIAN = nullptr;

ByteOrder* ByteOrder::LITTLE_ENDIAN = nullptr;
ByteOrder* ByteOrder::NATIVE_ORDER = nullptr;

void ByteOrder::init$($String* name) {
	$set(this, name, name);
}

ByteOrder* ByteOrder::nativeOrder() {
	$init(ByteOrder);
	return ByteOrder::NATIVE_ORDER;
}

$String* ByteOrder::toString() {
	return this->name;
}

void clinit$ByteOrder($Class* class$) {
	$assignStatic(ByteOrder::BIG_ENDIAN, $new(ByteOrder, "BIG_ENDIAN"_s));
	$assignStatic(ByteOrder::LITTLE_ENDIAN, $new(ByteOrder, "LITTLE_ENDIAN"_s));
	$assignStatic(ByteOrder::NATIVE_ORDER, $nc($($Unsafe::getUnsafe()))->isBigEndian() ? ByteOrder::BIG_ENDIAN : ByteOrder::LITTLE_ENDIAN);
}

ByteOrder::ByteOrder() {
}

$Class* ByteOrder::load$($String* name, bool initialize) {
	$loadClass(ByteOrder, name, initialize, &_ByteOrder_ClassInfo_, clinit$ByteOrder, allocate$ByteOrder);
	return class$;
}

$Class* ByteOrder::class$ = nullptr;

	} // nio
} // java