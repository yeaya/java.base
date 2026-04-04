#include <java/lang/Record.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

bool Record::equals(Object$* obj) {
	 return this->$Object::equals(obj);
}

int32_t Record::hashCode() {
	 return this->$Object::hashCode();
}

$String* Record::toString() {
	 return this->$Object::toString();
}

void Record::init$() {
}

Record::Record() {
}

$Class* Record::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
		{"hashCode", "()I", nullptr, $PUBLIC | $ABSTRACT},
		{"<init>", "()V", nullptr, $PROTECTED, $method(Record, init$, void)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.lang.Record",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Record, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Record);
	});
	return class$;
}

$Class* Record::class$ = nullptr;

	} // lang
} // java