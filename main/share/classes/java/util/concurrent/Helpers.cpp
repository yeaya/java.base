#include <java/util/concurrent/Helpers.h>

#include <java/util/Collection.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collection = ::java::util::Collection;

namespace java {
	namespace util {
		namespace concurrent {

$MethodInfo _Helpers_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(Helpers, init$, void)},
	{"collectionToString", "(Ljava/util/Collection;)Ljava/lang/String;", "(Ljava/util/Collection<*>;)Ljava/lang/String;", $STATIC, $staticMethod(Helpers, collectionToString, $String*, $Collection*)},
	{"mapEntryToString", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/String;", nullptr, $STATIC, $staticMethod(Helpers, mapEntryToString, $String*, Object$*, Object$*)},
	{"objectToString", "(Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(Helpers, objectToString, $String*, Object$*)},
	{"toString", "([Ljava/lang/Object;II)Ljava/lang/String;", nullptr, $STATIC, $staticMethod(Helpers, toString, $String*, $ObjectArray*, int32_t, int32_t)},
	{}
};

$ClassInfo _Helpers_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.concurrent.Helpers",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Helpers_MethodInfo_
};

$Object* allocate$Helpers($Class* clazz) {
	return $of($alloc(Helpers));
}

void Helpers::init$() {
}

$String* Helpers::collectionToString($Collection* c) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, a, $nc(c)->toArray());
	int32_t size = $nc(a)->length;
	if (size == 0) {
		return "[]"_s;
	}
	int32_t charLength = 0;
	for (int32_t i = 0; i < size; ++i) {
		$var($Object0, e, a->get(i));
		$var($String, s, ($equals(e, c)) ? "(this Collection)"_s : objectToString(e));
		a->set(i, s);
		charLength += $nc(s)->length();
	}
	return toString(a, size, charLength);
}

$String* Helpers::toString($ObjectArray* a, int32_t size, int32_t charLength) {
	$useLocalCurrentObjectStackCache();
	$var($chars, chars, $new($chars, charLength + 2 * size));
	chars->set(0, u'[');
	int32_t j = 1;
	for (int32_t i = 0; i < size; ++i) {
		if (i > 0) {
			chars->set(j++, u',');
			chars->set(j++, u' ');
		}
		$var($String, s, $cast($String, $nc(a)->get(i)));
		int32_t len = $nc(s)->length();
		s->getChars(0, len, chars, j);
		j += len;
	}
	chars->set(j, u']');
	return $new($String, chars);
}

$String* Helpers::mapEntryToString(Object$* key, Object$* val) {
	$useLocalCurrentObjectStackCache();
	$var($String, k, nullptr);
	$var($String, v, nullptr);
	int32_t klen = 0;
	int32_t vlen = 0;
	int32_t var$0 = (klen = $nc(($assign(k, objectToString(key))))->length());
	$var($chars, chars, $new($chars, var$0 + (vlen = $nc(($assign(v, objectToString(val))))->length()) + 1));
	$nc(k)->getChars(0, klen, chars, 0);
	chars->set(klen, u'=');
	$nc(v)->getChars(0, vlen, chars, klen + 1);
	return $new($String, chars);
}

$String* Helpers::objectToString(Object$* x) {
	$var($String, s, nullptr);
	return (x == nullptr || ($assign(s, $nc($of(x))->toString())) == nullptr) ? "null"_s : s;
}

Helpers::Helpers() {
}

$Class* Helpers::load$($String* name, bool initialize) {
	$loadClass(Helpers, name, initialize, &_Helpers_ClassInfo_, allocate$Helpers);
	return class$;
}

$Class* Helpers::class$ = nullptr;

		} // concurrent
	} // util
} // java