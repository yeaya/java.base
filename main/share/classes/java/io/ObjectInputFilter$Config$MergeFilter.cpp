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

void ObjectInputFilter$Config$MergeFilter::init$($ObjectInputFilter* first, $ObjectInputFilter* second) {
	$set(this, first, first);
	$set(this, second, second);
}

$ObjectInputFilter$Status* ObjectInputFilter$Config$MergeFilter::checkInput($ObjectInputFilter$FilterInfo* info) {
	$useLocalObjectStack();
	$ObjectInputFilter$Status* firstStatus = $cast($ObjectInputFilter$Status, $Objects::requireNonNull($($nc(this->first)->checkInput(info)), "status"_s));
	$init($ObjectInputFilter$Status);
	if ($ObjectInputFilter$Status::REJECTED->equals(firstStatus)) {
		$ObjectInputFilter$Config::traceFilter("MergeFilter REJECTED first: {0}, filter: {1}"_s, $$new($ObjectArray, {
			firstStatus,
			this
		}));
		return $ObjectInputFilter$Status::REJECTED;
	}
	$ObjectInputFilter$Status* secondStatus = $cast($ObjectInputFilter$Status, $Objects::requireNonNull($($nc(this->second)->checkInput(info)), "other status"_s));
	if ($ObjectInputFilter$Status::REJECTED->equals(secondStatus)) {
		$ObjectInputFilter$Config::traceFilter("MergeFilter REJECTED {0}, {1}, filter: {2}"_s, $$new($ObjectArray, {
			firstStatus,
			secondStatus,
			this
		}));
		return $ObjectInputFilter$Status::REJECTED;
	}
	bool var$0 = $ObjectInputFilter$Status::ALLOWED->equals(firstStatus);
	if (var$0 || $ObjectInputFilter$Status::ALLOWED->equals(secondStatus)) {
		$ObjectInputFilter$Config::traceFilter("MergeFilter ALLOWED either: {0}, {1}, filter: {2}"_s, $$new($ObjectArray, {
			firstStatus,
			secondStatus,
			this
		}));
		return $ObjectInputFilter$Status::ALLOWED;
	}
	$ObjectInputFilter$Config::traceFilter("MergeFilter UNDECIDED {0}, {1}, filter: {2}"_s, $$new($ObjectArray, {
		firstStatus,
		secondStatus,
		this
	}));
	return $ObjectInputFilter$Status::UNDECIDED;
}

$String* ObjectInputFilter$Config$MergeFilter::toString() {
	return $str({"merge("_s, this->first, ", "_s, this->second, ")"_s});
}

ObjectInputFilter$Config$MergeFilter::ObjectInputFilter$Config$MergeFilter() {
}

$Class* ObjectInputFilter$Config$MergeFilter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"first", "Ljava/io/ObjectInputFilter;", nullptr, $PRIVATE | $FINAL, $field(ObjectInputFilter$Config$MergeFilter, first)},
		{"second", "Ljava/io/ObjectInputFilter;", nullptr, $PRIVATE | $FINAL, $field(ObjectInputFilter$Config$MergeFilter, second)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/ObjectInputFilter;Ljava/io/ObjectInputFilter;)V", nullptr, 0, $method(ObjectInputFilter$Config$MergeFilter, init$, void, $ObjectInputFilter*, $ObjectInputFilter*)},
		{"checkInput", "(Ljava/io/ObjectInputFilter$FilterInfo;)Ljava/io/ObjectInputFilter$Status;", nullptr, $PUBLIC, $virtualMethod(ObjectInputFilter$Config$MergeFilter, checkInput, $ObjectInputFilter$Status*, $ObjectInputFilter$FilterInfo*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ObjectInputFilter$Config$MergeFilter, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.io.ObjectInputFilter$Config", "java.io.ObjectInputFilter", "Config", $PUBLIC | $STATIC | $FINAL},
		{"java.io.ObjectInputFilter$Config$MergeFilter", "java.io.ObjectInputFilter$Config", "MergeFilter", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.io.ObjectInputFilter$Config$MergeFilter",
		"java.lang.Object",
		"java.io.ObjectInputFilter",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.io.ObjectInputFilter"
	};
	$loadClass(ObjectInputFilter$Config$MergeFilter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ObjectInputFilter$Config$MergeFilter);
	});
	return class$;
}

$Class* ObjectInputFilter$Config$MergeFilter::class$ = nullptr;

	} // io
} // java