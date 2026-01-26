#include <sun/security/util/ByteArrayTagOrder.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace util {

$MethodInfo _ByteArrayTagOrder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ByteArrayTagOrder, init$, void)},
	{"compare", "([B[B)I", nullptr, $PUBLIC | $FINAL, $method(ByteArrayTagOrder, compare, int32_t, $bytes*, $bytes*)},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(ByteArrayTagOrder, compare, int32_t, Object$*, Object$*)},
	{}
};

$ClassInfo _ByteArrayTagOrder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.util.ByteArrayTagOrder",
	"java.lang.Object",
	"java.util.Comparator",
	nullptr,
	_ByteArrayTagOrder_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Comparator<[B>;"
};

$Object* allocate$ByteArrayTagOrder($Class* clazz) {
	return $of($alloc(ByteArrayTagOrder));
}

void ByteArrayTagOrder::init$() {
}

int32_t ByteArrayTagOrder::compare($bytes* bytes1, $bytes* bytes2) {
	return ($nc(bytes1)->get(0) | 32) - ($nc(bytes2)->get(0) | 32);
}

int32_t ByteArrayTagOrder::compare(Object$* bytes1, Object$* bytes2) {
	return this->compare($cast($bytes, bytes1), $cast($bytes, bytes2));
}

ByteArrayTagOrder::ByteArrayTagOrder() {
}

$Class* ByteArrayTagOrder::load$($String* name, bool initialize) {
	$loadClass(ByteArrayTagOrder, name, initialize, &_ByteArrayTagOrder_ClassInfo_, allocate$ByteArrayTagOrder);
	return class$;
}

$Class* ByteArrayTagOrder::class$ = nullptr;

		} // util
	} // security
} // sun