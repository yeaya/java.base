#include <java/util/Objects.h>

#include <java/lang/AssertionError.h>
#include <java/util/Arrays.h>
#include <java/util/Comparator.h>
#include <java/util/function/BiFunction.h>
#include <java/util/function/Supplier.h>
#include <jdk/internal/util/Preconditions.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Arrays = ::java::util::Arrays;
using $Comparator = ::java::util::Comparator;
using $BiFunction = ::java::util::function::BiFunction;
using $Supplier = ::java::util::function::Supplier;
using $Preconditions = ::jdk::internal::util::Preconditions;

namespace java {
	namespace util {

$CompoundAttribute _Objects_MethodAnnotations_checkIndex5[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Objects_MethodAnnotations_checkIndex6[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$MethodInfo _Objects_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Objects::*)()>(&Objects::init$))},
	{"checkFromIndexSize", "(III)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t,int32_t)>(&Objects::checkFromIndexSize))},
	{"checkFromIndexSize", "(JJJ)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)(int64_t,int64_t,int64_t)>(&Objects::checkFromIndexSize))},
	{"checkFromToIndex", "(III)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t,int32_t)>(&Objects::checkFromToIndex))},
	{"checkFromToIndex", "(JJJ)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)(int64_t,int64_t,int64_t)>(&Objects::checkFromToIndex))},
	{"checkIndex", "(II)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t)>(&Objects::checkIndex)), nullptr, nullptr, _Objects_MethodAnnotations_checkIndex5},
	{"checkIndex", "(JJ)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)(int64_t,int64_t)>(&Objects::checkIndex)), nullptr, nullptr, _Objects_MethodAnnotations_checkIndex6},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/Comparator;)I", "<T:Ljava/lang/Object;>(TT;TT;Ljava/util/Comparator<-TT;>;)I", $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(Object$*,Object$*,$Comparator*)>(&Objects::compare))},
	{"deepEquals", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(Object$*,Object$*)>(&Objects::deepEquals))},
	{"equals", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(Object$*,Object$*)>(&Objects::equals))},
	{"hash", "([Ljava/lang/Object;)I", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<int32_t(*)($ObjectArray*)>(&Objects::hash))},
	{"hashCode", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(Object$*)>(&Objects::hashCode))},
	{"isNull", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(Object$*)>(&Objects::isNull))},
	{"nonNull", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(Object$*)>(&Objects::nonNull))},
	{"requireNonNull", "(Ljava/lang/Object;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(TT;)TT;", $PUBLIC | $STATIC, $method(static_cast<$Object*(*)(Object$*)>(&Objects::requireNonNull))},
	{"requireNonNull", "(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(TT;Ljava/lang/String;)TT;", $PUBLIC | $STATIC, $method(static_cast<$Object*(*)(Object$*,$String*)>(&Objects::requireNonNull))},
	{"requireNonNull", "(Ljava/lang/Object;Ljava/util/function/Supplier;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(TT;Ljava/util/function/Supplier<Ljava/lang/String;>;)TT;", $PUBLIC | $STATIC, $method(static_cast<$Object*(*)(Object$*,$Supplier*)>(&Objects::requireNonNull))},
	{"requireNonNullElse", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(TT;TT;)TT;", $PUBLIC | $STATIC, $method(static_cast<$Object*(*)(Object$*,Object$*)>(&Objects::requireNonNullElse))},
	{"requireNonNullElseGet", "(Ljava/lang/Object;Ljava/util/function/Supplier;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(TT;Ljava/util/function/Supplier<+TT;>;)TT;", $PUBLIC | $STATIC, $method(static_cast<$Object*(*)(Object$*,$Supplier*)>(&Objects::requireNonNullElseGet))},
	{"toString", "(Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)(Object$*)>(&Objects::toString))},
	{"toString", "(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)(Object$*,$String*)>(&Objects::toString))},
	{}
};

$ClassInfo _Objects_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.util.Objects",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Objects_MethodInfo_
};

$Object* allocate$Objects($Class* clazz) {
	return $of($alloc(Objects));
}

void Objects::init$() {
	$throwNew($AssertionError, $of("No java.util.Objects instances for you!"_s));
}

bool Objects::equals(Object$* a, Object$* b) {
	return ($equals(a, b)) || (a != nullptr && $of(a)->equals(b));
}

bool Objects::deepEquals(Object$* a, Object$* b) {
	if ($equals(a, b)) {
		return true;
	} else if (a == nullptr || b == nullptr) {
		return false;
	} else {
		return $Arrays::deepEquals0(a, b);
	}
}

int32_t Objects::hashCode(Object$* o) {
	return o != nullptr ? $nc($of(o))->hashCode() : 0;
}

int32_t Objects::hash($ObjectArray* values) {
	return $Arrays::hashCode(values);
}

$String* Objects::toString(Object$* o) {
	return $String::valueOf(o);
}

$String* Objects::toString(Object$* o, $String* nullDefault) {
	return (o != nullptr) ? $nc($of(o))->toString() : nullDefault;
}

int32_t Objects::compare(Object$* a, Object$* b, $Comparator* c) {
	return ($equals(a, b)) ? 0 : $nc(c)->compare(a, b);
}

$Object* Objects::requireNonNull(Object$* obj) {
	if (obj == nullptr) {
		$throwNew($NullPointerException);
	}
	return $of(obj);
}

$Object* Objects::requireNonNull(Object$* obj, $String* message) {
	if (obj == nullptr) {
		$throwNew($NullPointerException, message);
	}
	return $of(obj);
}

bool Objects::isNull(Object$* obj) {
	return obj == nullptr;
}

bool Objects::nonNull(Object$* obj) {
	return obj != nullptr;
}

$Object* Objects::requireNonNullElse(Object$* obj, Object$* defaultObj) {
	return $of((obj != nullptr) ? $of(obj) : requireNonNull(defaultObj, "defaultObj"_s));
}

$Object* Objects::requireNonNullElseGet(Object$* obj, $Supplier* supplier) {
	return $of((obj != nullptr) ? $of(obj) : requireNonNull($($nc(($cast($Supplier, requireNonNull($of(supplier), "supplier"_s))))->get()), "supplier.get()"_s));
}

$Object* Objects::requireNonNull(Object$* obj, $Supplier* messageSupplier) {
	if (obj == nullptr) {
		$throwNew($NullPointerException, messageSupplier == nullptr ? ($String*)nullptr : $cast($String, $($nc(messageSupplier)->get())));
	}
	return $of(obj);
}

int32_t Objects::checkIndex(int32_t index, int32_t length) {
	return $Preconditions::checkIndex(index, length, ($BiFunction*)nullptr);
}

int32_t Objects::checkFromToIndex(int32_t fromIndex, int32_t toIndex, int32_t length) {
	return $Preconditions::checkFromToIndex(fromIndex, toIndex, length, ($BiFunction*)nullptr);
}

int32_t Objects::checkFromIndexSize(int32_t fromIndex, int32_t size, int32_t length) {
	return $Preconditions::checkFromIndexSize(fromIndex, size, length, ($BiFunction*)nullptr);
}

int64_t Objects::checkIndex(int64_t index, int64_t length) {
	return $Preconditions::checkIndex(index, length, ($BiFunction*)nullptr);
}

int64_t Objects::checkFromToIndex(int64_t fromIndex, int64_t toIndex, int64_t length) {
	return $Preconditions::checkFromToIndex(fromIndex, toIndex, length, ($BiFunction*)nullptr);
}

int64_t Objects::checkFromIndexSize(int64_t fromIndex, int64_t size, int64_t length) {
	return $Preconditions::checkFromIndexSize(fromIndex, size, length, ($BiFunction*)nullptr);
}

Objects::Objects() {
}

$Class* Objects::load$($String* name, bool initialize) {
	$loadClass(Objects, name, initialize, &_Objects_ClassInfo_, allocate$Objects);
	return class$;
}

$Class* Objects::class$ = nullptr;

	} // util
} // java