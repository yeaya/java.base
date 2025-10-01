#include <sun/security/util/ByteArrayLexOrder.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Comparator = ::java::util::Comparator;

namespace sun {
	namespace security {
		namespace util {

$MethodInfo _ByteArrayLexOrder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ByteArrayLexOrder::*)()>(&ByteArrayLexOrder::init$))},
	{"compare", "([B[B)I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(ByteArrayLexOrder::*)($bytes*,$bytes*)>(&ByteArrayLexOrder::compare))},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _ByteArrayLexOrder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.util.ByteArrayLexOrder",
	"java.lang.Object",
	"java.util.Comparator",
	nullptr,
	_ByteArrayLexOrder_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Comparator<[B>;"
};

$Object* allocate$ByteArrayLexOrder($Class* clazz) {
	return $of($alloc(ByteArrayLexOrder));
}

void ByteArrayLexOrder::init$() {
}

int32_t ByteArrayLexOrder::compare($bytes* bytes1, $bytes* bytes2) {
	int32_t diff = 0;
	for (int32_t i = 0; i < $nc(bytes1)->length && i < $nc(bytes2)->length; ++i) {
		diff = ((int32_t)(bytes1->get(i) & (uint32_t)255)) - ((int32_t)(bytes2->get(i) & (uint32_t)255));
		if (diff != 0) {
			return diff;
		}
	}
	return $nc(bytes1)->length - $nc(bytes2)->length;
}

int32_t ByteArrayLexOrder::compare(Object$* bytes1, Object$* bytes2) {
	return this->compare($cast($bytes, bytes1), $cast($bytes, bytes2));
}

ByteArrayLexOrder::ByteArrayLexOrder() {
}

$Class* ByteArrayLexOrder::load$($String* name, bool initialize) {
	$loadClass(ByteArrayLexOrder, name, initialize, &_ByteArrayLexOrder_ClassInfo_, allocate$ByteArrayLexOrder);
	return class$;
}

$Class* ByteArrayLexOrder::class$ = nullptr;

		} // util
	} // security
} // sun