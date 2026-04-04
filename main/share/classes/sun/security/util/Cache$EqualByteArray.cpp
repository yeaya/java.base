#include <sun/security/util/Cache$EqualByteArray.h>
#include <java/util/Arrays.h>
#include <sun/security/util/Cache.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;

namespace sun {
	namespace security {
		namespace util {

void Cache$EqualByteArray::init$($bytes* b) {
	$set(this, b, b);
}

int32_t Cache$EqualByteArray::hashCode() {
	int32_t h = this->hash;
	if (h == 0 && $nc(this->b)->length > 0) {
		this->hash = (h = $Arrays::hashCode(this->b));
	}
	return h;
}

bool Cache$EqualByteArray::equals(Object$* obj) {
	if ($equals(this, obj)) {
		return true;
	}
	if ($instanceOf(Cache$EqualByteArray, obj) == false) {
		return false;
	}
	$var(Cache$EqualByteArray, other, $cast(Cache$EqualByteArray, obj));
	return $Arrays::equals(this->b, $nc(other)->b);
}

Cache$EqualByteArray::Cache$EqualByteArray() {
}

$Class* Cache$EqualByteArray::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"b", "[B", nullptr, $PRIVATE | $FINAL, $field(Cache$EqualByteArray, b)},
		{"hash", "I", nullptr, $PRIVATE, $field(Cache$EqualByteArray, hash)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([B)V", nullptr, $PUBLIC, $method(Cache$EqualByteArray, init$, void, $bytes*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Cache$EqualByteArray, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(Cache$EqualByteArray, hashCode, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.util.Cache$EqualByteArray", "sun.security.util.Cache", "EqualByteArray", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.util.Cache$EqualByteArray",
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
		"sun.security.util.Cache"
	};
	$loadClass(Cache$EqualByteArray, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Cache$EqualByteArray);
	});
	return class$;
}

$Class* Cache$EqualByteArray::class$ = nullptr;

		} // util
	} // security
} // sun