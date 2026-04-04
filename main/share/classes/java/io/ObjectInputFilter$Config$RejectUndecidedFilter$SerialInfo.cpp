#include <java/io/ObjectInputFilter$Config$RejectUndecidedFilter$SerialInfo.h>
#include <java/io/ObjectInputFilter$Config$RejectUndecidedFilter.h>
#include <java/io/ObjectInputFilter$FilterInfo.h>
#include <jcpp.h>

using $ObjectInputFilter$FilterInfo = ::java::io::ObjectInputFilter$FilterInfo;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

void ObjectInputFilter$Config$RejectUndecidedFilter$SerialInfo::init$($ObjectInputFilter$FilterInfo* base, $Class* clazz) {
	$set(this, base, base);
	$set(this, clazz, clazz);
}

$Class* ObjectInputFilter$Config$RejectUndecidedFilter$SerialInfo::serialClass() {
	return this->clazz;
}

int64_t ObjectInputFilter$Config$RejectUndecidedFilter$SerialInfo::arrayLength() {
	return $nc(this->base)->arrayLength();
}

int64_t ObjectInputFilter$Config$RejectUndecidedFilter$SerialInfo::depth() {
	return $nc(this->base)->depth();
}

int64_t ObjectInputFilter$Config$RejectUndecidedFilter$SerialInfo::references() {
	return $nc(this->base)->references();
}

int64_t ObjectInputFilter$Config$RejectUndecidedFilter$SerialInfo::streamBytes() {
	return $nc(this->base)->streamBytes();
}

ObjectInputFilter$Config$RejectUndecidedFilter$SerialInfo::ObjectInputFilter$Config$RejectUndecidedFilter$SerialInfo() {
}

$Class* ObjectInputFilter$Config$RejectUndecidedFilter$SerialInfo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"base", "Ljava/io/ObjectInputFilter$FilterInfo;", nullptr, $PRIVATE | $FINAL, $field(ObjectInputFilter$Config$RejectUndecidedFilter$SerialInfo, base)},
		{"clazz", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $FINAL, $field(ObjectInputFilter$Config$RejectUndecidedFilter$SerialInfo, clazz)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/ObjectInputFilter$FilterInfo;Ljava/lang/Class;)V", "(Ljava/io/ObjectInputFilter$FilterInfo;Ljava/lang/Class<*>;)V", 0, $method(ObjectInputFilter$Config$RejectUndecidedFilter$SerialInfo, init$, void, $ObjectInputFilter$FilterInfo*, $Class*)},
		{"arrayLength", "()J", nullptr, $PUBLIC, $virtualMethod(ObjectInputFilter$Config$RejectUndecidedFilter$SerialInfo, arrayLength, int64_t)},
		{"depth", "()J", nullptr, $PUBLIC, $virtualMethod(ObjectInputFilter$Config$RejectUndecidedFilter$SerialInfo, depth, int64_t)},
		{"references", "()J", nullptr, $PUBLIC, $virtualMethod(ObjectInputFilter$Config$RejectUndecidedFilter$SerialInfo, references, int64_t)},
		{"serialClass", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC, $virtualMethod(ObjectInputFilter$Config$RejectUndecidedFilter$SerialInfo, serialClass, $Class*)},
		{"streamBytes", "()J", nullptr, $PUBLIC, $virtualMethod(ObjectInputFilter$Config$RejectUndecidedFilter$SerialInfo, streamBytes, int64_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.io.ObjectInputFilter$Config", "java.io.ObjectInputFilter", "Config", $PUBLIC | $STATIC | $FINAL},
		{"java.io.ObjectInputFilter$Config$RejectUndecidedFilter", "java.io.ObjectInputFilter$Config", "RejectUndecidedFilter", $PRIVATE | $STATIC},
		{"java.io.ObjectInputFilter$Config$RejectUndecidedFilter$SerialInfo", "java.io.ObjectInputFilter$Config$RejectUndecidedFilter", "SerialInfo", $STATIC},
		{"java.io.ObjectInputFilter$FilterInfo", "java.io.ObjectInputFilter", "FilterInfo", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.io.ObjectInputFilter$Config$RejectUndecidedFilter$SerialInfo",
		"java.lang.Object",
		"java.io.ObjectInputFilter$FilterInfo",
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
	$loadClass(ObjectInputFilter$Config$RejectUndecidedFilter$SerialInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ObjectInputFilter$Config$RejectUndecidedFilter$SerialInfo);
	});
	return class$;
}

$Class* ObjectInputFilter$Config$RejectUndecidedFilter$SerialInfo::class$ = nullptr;

	} // io
} // java