#include <sun/security/util/ByteArrayLexOrder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace util {

void ByteArrayLexOrder::init$() {
}

int32_t ByteArrayLexOrder::compare($bytes* bytes1, $bytes* bytes2) {
	int32_t diff = 0;
	for (int32_t i = 0; i < $nc(bytes1)->length && i < $nc(bytes2)->length; ++i) {
		diff = (bytes1->get(i) & 0xff) - (bytes2->get(i) & 0xff);
		if (diff != 0) {
			return diff;
		}
	}
	return bytes1->length - $nc(bytes2)->length;
}

int32_t ByteArrayLexOrder::compare(Object$* bytes1, Object$* bytes2) {
	return this->compare($cast($bytes, bytes1), $cast($bytes, bytes2));
}

ByteArrayLexOrder::ByteArrayLexOrder() {
}

$Class* ByteArrayLexOrder::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ByteArrayLexOrder, init$, void)},
		{"compare", "([B[B)I", nullptr, $PUBLIC | $FINAL, $method(ByteArrayLexOrder, compare, int32_t, $bytes*, $bytes*)},
		{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(ByteArrayLexOrder, compare, int32_t, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.util.ByteArrayLexOrder",
		"java.lang.Object",
		"java.util.Comparator",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Comparator<[B>;"
	};
	$loadClass(ByteArrayLexOrder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ByteArrayLexOrder);
	});
	return class$;
}

$Class* ByteArrayLexOrder::class$ = nullptr;

		} // util
	} // security
} // sun