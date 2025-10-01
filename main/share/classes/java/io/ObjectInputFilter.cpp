#include <java/io/ObjectInputFilter.h>

#include <java/io/ObjectInputFilter$Config$MergeFilter.h>
#include <java/io/ObjectInputFilter$Config$PredicateFilter.h>
#include <java/io/ObjectInputFilter$Config$RejectUndecidedFilter.h>
#include <java/io/ObjectInputFilter$FilterInfo.h>
#include <java/io/ObjectInputFilter$Status.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Objects.h>
#include <java/util/function/Predicate.h>
#include <jcpp.h>

#undef ALLOWED
#undef REJECTED

using $ObjectInputFilter$Config$MergeFilter = ::java::io::ObjectInputFilter$Config$MergeFilter;
using $ObjectInputFilter$Config$PredicateFilter = ::java::io::ObjectInputFilter$Config$PredicateFilter;
using $ObjectInputFilter$Config$RejectUndecidedFilter = ::java::io::ObjectInputFilter$Config$RejectUndecidedFilter;
using $ObjectInputFilter$FilterInfo = ::java::io::ObjectInputFilter$FilterInfo;
using $ObjectInputFilter$Status = ::java::io::ObjectInputFilter$Status;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;
using $Predicate = ::java::util::function::Predicate;

namespace java {
	namespace io {
$CompoundAttribute _ObjectInputFilter_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};


$MethodInfo _ObjectInputFilter_MethodInfo_[] = {
	{"allowFilter", "(Ljava/util/function/Predicate;Ljava/io/ObjectInputFilter$Status;)Ljava/io/ObjectInputFilter;", "(Ljava/util/function/Predicate<Ljava/lang/Class<*>;>;Ljava/io/ObjectInputFilter$Status;)Ljava/io/ObjectInputFilter;", $PUBLIC | $STATIC, $method(static_cast<ObjectInputFilter*(*)($Predicate*,$ObjectInputFilter$Status*)>(&ObjectInputFilter::allowFilter))},
	{"checkInput", "(Ljava/io/ObjectInputFilter$FilterInfo;)Ljava/io/ObjectInputFilter$Status;", nullptr, $PUBLIC | $ABSTRACT},
	{"merge", "(Ljava/io/ObjectInputFilter;Ljava/io/ObjectInputFilter;)Ljava/io/ObjectInputFilter;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ObjectInputFilter*(*)(ObjectInputFilter*,ObjectInputFilter*)>(&ObjectInputFilter::merge))},
	{"rejectFilter", "(Ljava/util/function/Predicate;Ljava/io/ObjectInputFilter$Status;)Ljava/io/ObjectInputFilter;", "(Ljava/util/function/Predicate<Ljava/lang/Class<*>;>;Ljava/io/ObjectInputFilter$Status;)Ljava/io/ObjectInputFilter;", $PUBLIC | $STATIC, $method(static_cast<ObjectInputFilter*(*)($Predicate*,$ObjectInputFilter$Status*)>(&ObjectInputFilter::rejectFilter))},
	{"rejectUndecidedClass", "(Ljava/io/ObjectInputFilter;)Ljava/io/ObjectInputFilter;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ObjectInputFilter*(*)(ObjectInputFilter*)>(&ObjectInputFilter::rejectUndecidedClass))},
	{}
};

$InnerClassInfo _ObjectInputFilter_InnerClassesInfo_[] = {
	{"java.io.ObjectInputFilter$Config", "java.io.ObjectInputFilter", "Config", $PUBLIC | $STATIC | $FINAL},
	{"java.io.ObjectInputFilter$Status", "java.io.ObjectInputFilter", "Status", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{"java.io.ObjectInputFilter$FilterInfo", "java.io.ObjectInputFilter", "FilterInfo", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ObjectInputFilter_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.io.ObjectInputFilter",
	nullptr,
	nullptr,
	nullptr,
	_ObjectInputFilter_MethodInfo_,
	nullptr,
	nullptr,
	_ObjectInputFilter_InnerClassesInfo_,
	_ObjectInputFilter_Annotations_,
	nullptr,
	"java.io.ObjectInputFilter$Config,java.io.ObjectInputFilter$Config$BuiltinFilterFactory,java.io.ObjectInputFilter$Config$RejectUndecidedFilter,java.io.ObjectInputFilter$Config$RejectUndecidedFilter$SerialInfo,java.io.ObjectInputFilter$Config$MergeFilter,java.io.ObjectInputFilter$Config$PredicateFilter,java.io.ObjectInputFilter$Config$Global,java.io.ObjectInputFilter$Status,java.io.ObjectInputFilter$FilterInfo"
};

$Object* allocate$ObjectInputFilter($Class* clazz) {
	return $of($alloc(ObjectInputFilter));
}

ObjectInputFilter* ObjectInputFilter::allowFilter($Predicate* predicate, $ObjectInputFilter$Status* otherStatus) {
	$Objects::requireNonNull($of(predicate), "predicate"_s);
	$Objects::requireNonNull($of(otherStatus), "otherStatus"_s);
	$init($ObjectInputFilter$Status);
	return $new($ObjectInputFilter$Config$PredicateFilter, predicate, $ObjectInputFilter$Status::ALLOWED, otherStatus);
}

ObjectInputFilter* ObjectInputFilter::rejectFilter($Predicate* predicate, $ObjectInputFilter$Status* otherStatus) {
	$Objects::requireNonNull($of(predicate), "predicate"_s);
	$Objects::requireNonNull($of(otherStatus), "otherStatus"_s);
	$init($ObjectInputFilter$Status);
	return $new($ObjectInputFilter$Config$PredicateFilter, predicate, $ObjectInputFilter$Status::REJECTED, otherStatus);
}

ObjectInputFilter* ObjectInputFilter::merge(ObjectInputFilter* filter, ObjectInputFilter* anotherFilter) {
	$Objects::requireNonNull($of(filter), "filter"_s);
	return (anotherFilter == nullptr) ? filter : static_cast<ObjectInputFilter*>($new($ObjectInputFilter$Config$MergeFilter, filter, anotherFilter));
}

ObjectInputFilter* ObjectInputFilter::rejectUndecidedClass(ObjectInputFilter* filter) {
	$Objects::requireNonNull($of(filter), "filter"_s);
	return $new($ObjectInputFilter$Config$RejectUndecidedFilter, filter);
}

$Class* ObjectInputFilter::load$($String* name, bool initialize) {
	$loadClass(ObjectInputFilter, name, initialize, &_ObjectInputFilter_ClassInfo_, allocate$ObjectInputFilter);
	return class$;
}

$Class* ObjectInputFilter::class$ = nullptr;

	} // io
} // java