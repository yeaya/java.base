#include <java/io/ObjectInputFilter$Config$PredicateFilter.h>
#include <java/io/ObjectInputFilter$Config.h>
#include <java/io/ObjectInputFilter$FilterInfo.h>
#include <java/io/ObjectInputFilter$Status.h>
#include <java/util/function/Predicate.h>
#include <jcpp.h>

#undef UNDECIDED

using $ObjectInputFilter$Config = ::java::io::ObjectInputFilter$Config;
using $ObjectInputFilter$FilterInfo = ::java::io::ObjectInputFilter$FilterInfo;
using $ObjectInputFilter$Status = ::java::io::ObjectInputFilter$Status;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Predicate = ::java::util::function::Predicate;

namespace java {
	namespace io {

void ObjectInputFilter$Config$PredicateFilter::init$($Predicate* predicate, $ObjectInputFilter$Status* ifTrueStatus, $ObjectInputFilter$Status* ifFalseStatus) {
	$set(this, predicate, predicate);
	$set(this, ifTrueStatus, ifTrueStatus);
	$set(this, ifFalseStatus, ifFalseStatus);
}

$ObjectInputFilter$Status* ObjectInputFilter$Config$PredicateFilter::checkInput($ObjectInputFilter$FilterInfo* info) {
	$Class* clazz = $nc(info)->serialClass();
	$init($ObjectInputFilter$Status);
	$ObjectInputFilter$Status* status = (clazz == nullptr) ? $ObjectInputFilter$Status::UNDECIDED : ($nc(this->predicate)->test(clazz)) ? this->ifTrueStatus : this->ifFalseStatus;
	$ObjectInputFilter$Config::traceFilter("PredicateFilter {0}, filter: {1}"_s, $$new($ObjectArray, {
		status,
		this
	}));
	return status;
}

$String* ObjectInputFilter$Config$PredicateFilter::toString() {
	return $str({"predicate("_s, this->predicate, ", ifTrue: "_s, this->ifTrueStatus, ", ifFalse:"_s, this->ifFalseStatus, ")"_s});
}

ObjectInputFilter$Config$PredicateFilter::ObjectInputFilter$Config$PredicateFilter() {
}

$Class* ObjectInputFilter$Config$PredicateFilter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"predicate", "Ljava/util/function/Predicate;", "Ljava/util/function/Predicate<Ljava/lang/Class<*>;>;", $PRIVATE | $FINAL, $field(ObjectInputFilter$Config$PredicateFilter, predicate)},
		{"ifTrueStatus", "Ljava/io/ObjectInputFilter$Status;", nullptr, $PRIVATE | $FINAL, $field(ObjectInputFilter$Config$PredicateFilter, ifTrueStatus)},
		{"ifFalseStatus", "Ljava/io/ObjectInputFilter$Status;", nullptr, $PRIVATE | $FINAL, $field(ObjectInputFilter$Config$PredicateFilter, ifFalseStatus)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/Predicate;Ljava/io/ObjectInputFilter$Status;Ljava/io/ObjectInputFilter$Status;)V", "(Ljava/util/function/Predicate<Ljava/lang/Class<*>;>;Ljava/io/ObjectInputFilter$Status;Ljava/io/ObjectInputFilter$Status;)V", 0, $method(ObjectInputFilter$Config$PredicateFilter, init$, void, $Predicate*, $ObjectInputFilter$Status*, $ObjectInputFilter$Status*)},
		{"checkInput", "(Ljava/io/ObjectInputFilter$FilterInfo;)Ljava/io/ObjectInputFilter$Status;", nullptr, $PUBLIC, $virtualMethod(ObjectInputFilter$Config$PredicateFilter, checkInput, $ObjectInputFilter$Status*, $ObjectInputFilter$FilterInfo*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ObjectInputFilter$Config$PredicateFilter, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.io.ObjectInputFilter$Config", "java.io.ObjectInputFilter", "Config", $PUBLIC | $STATIC | $FINAL},
		{"java.io.ObjectInputFilter$Config$PredicateFilter", "java.io.ObjectInputFilter$Config", "PredicateFilter", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.io.ObjectInputFilter$Config$PredicateFilter",
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
	$loadClass(ObjectInputFilter$Config$PredicateFilter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ObjectInputFilter$Config$PredicateFilter);
	});
	return class$;
}

$Class* ObjectInputFilter$Config$PredicateFilter::class$ = nullptr;

	} // io
} // java