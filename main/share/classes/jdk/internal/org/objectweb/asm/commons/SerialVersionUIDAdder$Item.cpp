#include <jdk/internal/org/objectweb/asm/commons/SerialVersionUIDAdder$Item.h>
#include <jdk/internal/org/objectweb/asm/commons/SerialVersionUIDAdder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace commons {

void SerialVersionUIDAdder$Item::init$($String* name, int32_t access, $String* descriptor) {
	$set(this, name, name);
	this->access = access;
	$set(this, descriptor, descriptor);
}

int32_t SerialVersionUIDAdder$Item::compareTo(SerialVersionUIDAdder$Item* item) {
	int32_t result = $nc(this->name)->compareTo($nc(item)->name);
	if (result == 0) {
		result = $nc(this->descriptor)->compareTo(item->descriptor);
	}
	return result;
}

bool SerialVersionUIDAdder$Item::equals(Object$* other) {
	if ($instanceOf(SerialVersionUIDAdder$Item, other)) {
		return compareTo($cast(SerialVersionUIDAdder$Item, other)) == 0;
	}
	return false;
}

int32_t SerialVersionUIDAdder$Item::hashCode() {
	int32_t var$0 = $nc(this->name)->hashCode();
	return var$0 ^ $nc(this->descriptor)->hashCode();
}

int32_t SerialVersionUIDAdder$Item::compareTo(Object$* item) {
	return this->compareTo($cast(SerialVersionUIDAdder$Item, item));
}

SerialVersionUIDAdder$Item::SerialVersionUIDAdder$Item() {
}

$Class* SerialVersionUIDAdder$Item::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"name", "Ljava/lang/String;", nullptr, $FINAL, $field(SerialVersionUIDAdder$Item, name)},
		{"access", "I", nullptr, $FINAL, $field(SerialVersionUIDAdder$Item, access)},
		{"descriptor", "Ljava/lang/String;", nullptr, $FINAL, $field(SerialVersionUIDAdder$Item, descriptor)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;ILjava/lang/String;)V", nullptr, 0, $method(SerialVersionUIDAdder$Item, init$, void, $String*, int32_t, $String*)},
		{"compareTo", "(Ljdk/internal/org/objectweb/asm/commons/SerialVersionUIDAdder$Item;)I", nullptr, $PUBLIC, $method(SerialVersionUIDAdder$Item, compareTo, int32_t, SerialVersionUIDAdder$Item*)},
		{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(SerialVersionUIDAdder$Item, compareTo, int32_t, Object$*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(SerialVersionUIDAdder$Item, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(SerialVersionUIDAdder$Item, hashCode, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.org.objectweb.asm.commons.SerialVersionUIDAdder$Item", "jdk.internal.org.objectweb.asm.commons.SerialVersionUIDAdder", "Item", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.org.objectweb.asm.commons.SerialVersionUIDAdder$Item",
		"java.lang.Object",
		"java.lang.Comparable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/lang/Comparable<Ljdk/internal/org/objectweb/asm/commons/SerialVersionUIDAdder$Item;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.org.objectweb.asm.commons.SerialVersionUIDAdder"
	};
	$loadClass(SerialVersionUIDAdder$Item, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SerialVersionUIDAdder$Item);
	});
	return class$;
}

$Class* SerialVersionUIDAdder$Item::class$ = nullptr;

					} // commons
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk