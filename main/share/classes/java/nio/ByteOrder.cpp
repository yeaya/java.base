#include <java/nio/ByteOrder.h>
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

void ByteOrder::clinit$($Class* clazz) {
	$assignStatic(ByteOrder::BIG_ENDIAN, $new(ByteOrder, "BIG_ENDIAN"_s));
	$assignStatic(ByteOrder::LITTLE_ENDIAN, $new(ByteOrder, "LITTLE_ENDIAN"_s));
	$assignStatic(ByteOrder::NATIVE_ORDER, $$nc($Unsafe::getUnsafe())->isBigEndian() ? ByteOrder::BIG_ENDIAN : ByteOrder::LITTLE_ENDIAN);
}

ByteOrder::ByteOrder() {
}

$Class* ByteOrder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ByteOrder, name)},
		{"BIG_ENDIAN", "Ljava/nio/ByteOrder;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ByteOrder, BIG_ENDIAN)},
		{"LITTLE_ENDIAN", "Ljava/nio/ByteOrder;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ByteOrder, LITTLE_ENDIAN)},
		{"NATIVE_ORDER", "Ljava/nio/ByteOrder;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ByteOrder, NATIVE_ORDER)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(ByteOrder, init$, void, $String*)},
		{"nativeOrder", "()Ljava/nio/ByteOrder;", nullptr, $PUBLIC | $STATIC, $staticMethod(ByteOrder, nativeOrder, ByteOrder*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ByteOrder, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.nio.ByteOrder",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ByteOrder, name, initialize, &classInfo$$, ByteOrder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ByteOrder);
	});
	return class$;
}

$Class* ByteOrder::class$ = nullptr;

	} // nio
} // java