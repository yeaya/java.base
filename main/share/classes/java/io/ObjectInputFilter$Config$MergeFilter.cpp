#include <java/io/ObjectInputFilter$Config$MergeFilter.h>

#include <java/io/ObjectInputFilter$Config.h>
#include <java/io/ObjectInputFilter$FilterInfo.h>
#include <java/io/ObjectInputFilter$Status.h>
#include <java/io/ObjectInputFilter.h>
#include <java/util/Objects.h>
#include <jcpp.h>

#undef ALLOWED
#undef REJECTED
#undef UNDECIDED

using $ObjectInputFilter = ::java::io::ObjectInputFilter;
using $ObjectInputFilter$Config = ::java::io::ObjectInputFilter$Config;
using $ObjectInputFilter$FilterInfo = ::java::io::ObjectInputFilter$FilterInfo;
using $ObjectInputFilter$Status = ::java::io::ObjectInputFilter$Status;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;

namespace java {
	namespace io {

$FieldInfo _ObjectInputFilter$Config$MergeFilter_FieldInfo_[] = {
	{"first", "Ljava/io/ObjectInputFilter;", nullptr, $PRIVATE | $FINAL, $field(ObjectInputFilter$Config$MergeFilter, first)},
	{"second", "Ljava/io/ObjectInputFilter;", nullptr, $PRIVATE | $FINAL, $field(ObjectInputFilter$Config$MergeFilter, second)},
	{}
};

$MethodInfo _ObjectInputFilter$Config$MergeFilter_MethodInfo_[] = {
	{"<init>", "(Ljava/io/ObjectInputFilter;Ljava/io/ObjectInputFilter;)V", nullptr, 0, $method(ObjectInputFilter$Config$MergeFilter, init$, void, $ObjectInputFilter*, $ObjectInputFilter*)},
	{"checkInput", "(Ljava/io/ObjectInputFilter$FilterInfo;)Ljava/io/ObjectInputFilter$Status;", nullptr, $PUBLIC, $virtualMethod(ObjectInputFilter$Config$MergeFilter, checkInput, $ObjectInputFilter$Status*, $ObjectInputFilter$FilterInfo*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ObjectInputFilter$Config$MergeFilter, toString, $String*)},
	{}
};

$InnerClassInfo _ObjectInputFilter$Config$MergeFilter_InnerClassesInfo_[] = {
	{"java.io.ObjectInputFilter$Config", "java.io.ObjectInputFilter", "Config", $PUBLIC | $STATIC | $FINAL},
	{"java.io.ObjectInputFilter$Config$MergeFilter", "java.io.ObjectInputFilter$Config", "MergeFilter", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ObjectInputFilter$Config$MergeFilter_ClassInfo_ = {
	$ACC_SUPER,
	"java.io.ObjectInputFilter$Config$MergeFilter",
	"java.lang.Object",
	"java.io.ObjectInputFilter",
	_ObjectInputFilter$Config$MergeFilter_FieldInfo_,
	_ObjectInputFilter$Config$MergeFilter_MethodInfo_,
	nullptr,
	nullptr,
	_ObjectInputFilter$Config$MergeFilter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.io.ObjectInputFilter"
};

$Object* allocate$ObjectInputFilter$Config$MergeFilter($Class* clazz) {
	return $of($alloc(ObjectInputFilter$Config$MergeFilter));
}

void ObjectInputFilter$Config$MergeFilter::init$($ObjectInputFilter* first, $ObjectInputFilter* second) {
	$set(this, first, first);
	$set(this, second, second);
}

$ObjectInputFilter$Status* ObjectInputFilter$Config$MergeFilter::checkInput($ObjectInputFilter$FilterInfo* info) {
	$useLocalCurrentObjectStackCache();
	$ObjectInputFilter$Status* firstStatus = $cast($ObjectInputFilter$Status, $Objects::requireNonNull($($of($nc(this->first)->checkInput(info))), "status"_s));
	$init($ObjectInputFilter$Status);
	if ($ObjectInputFilter$Status::REJECTED->equals(firstStatus)) {
		$ObjectInputFilter$Config::traceFilter("MergeFilter REJECTED first: {0}, filter: {1}"_s, $$new($ObjectArray, {
			$of(firstStatus),
			$of(this)
		}));
		return $ObjectInputFilter$Status::REJECTED;
	}
	$ObjectInputFilter$Status* secondStatus = $cast($ObjectInputFilter$Status, $Objects::requireNonNull($($of($nc(this->second)->checkInput(info))), "other status"_s));
	if ($ObjectInputFilter$Status::REJECTED->equals(secondStatus)) {
		$ObjectInputFilter$Config::traceFilter("MergeFilter REJECTED {0}, {1}, filter: {2}"_s, $$new($ObjectArray, {
			$of(firstStatus),
			$of(secondStatus),
			$of(this)
		}));
		return $ObjectInputFilter$Status::REJECTED;
	}
	bool var$0 = $ObjectInputFilter$Status::ALLOWED->equals(firstStatus);
	if (var$0 || $ObjectInputFilter$Status::ALLOWED->equals(secondStatus)) {
		$ObjectInputFilter$Config::traceFilter("MergeFilter ALLOWED either: {0}, {1}, filter: {2}"_s, $$new($ObjectArray, {
			$of(firstStatus),
			$of(secondStatus),
			$of(this)
		}));
		return $ObjectInputFilter$Status::ALLOWED;
	}
	$ObjectInputFilter$Config::traceFilter("MergeFilter UNDECIDED {0}, {1}, filter: {2}"_s, $$new($ObjectArray, {
		$of(firstStatus),
		$of(secondStatus),
		$of(this)
	}));
	return $ObjectInputFilter$Status::UNDECIDED;
}

$String* ObjectInputFilter$Config$MergeFilter::toString() {
	return $str({"merge("_s, this->first, ", "_s, this->second, ")"_s});
}

ObjectInputFilter$Config$MergeFilter::ObjectInputFilter$Config$MergeFilter() {
}

$Class* ObjectInputFilter$Config$MergeFilter::load$($String* name, bool initialize) {
	$loadClass(ObjectInputFilter$Config$MergeFilter, name, initialize, &_ObjectInputFilter$Config$MergeFilter_ClassInfo_, allocate$ObjectInputFilter$Config$MergeFilter);
	return class$;
}

$Class* ObjectInputFilter$Config$MergeFilter::class$ = nullptr;

	} // io
} // java