#include <java/io/ObjectInputFilter$Config$RejectUndecidedFilter$SerialInfo.h>

#include <java/io/ObjectInputFilter$Config$RejectUndecidedFilter.h>
#include <java/io/ObjectInputFilter$FilterInfo.h>
#include <jcpp.h>

using $ObjectInputFilter$Config$RejectUndecidedFilter = ::java::io::ObjectInputFilter$Config$RejectUndecidedFilter;
using $ObjectInputFilter$FilterInfo = ::java::io::ObjectInputFilter$FilterInfo;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

$FieldInfo _ObjectInputFilter$Config$RejectUndecidedFilter$SerialInfo_FieldInfo_[] = {
	{"base", "Ljava/io/ObjectInputFilter$FilterInfo;", nullptr, $PRIVATE | $FINAL, $field(ObjectInputFilter$Config$RejectUndecidedFilter$SerialInfo, base)},
	{"clazz", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $FINAL, $field(ObjectInputFilter$Config$RejectUndecidedFilter$SerialInfo, clazz)},
	{}
};

$MethodInfo _ObjectInputFilter$Config$RejectUndecidedFilter$SerialInfo_MethodInfo_[] = {
	{"<init>", "(Ljava/io/ObjectInputFilter$FilterInfo;Ljava/lang/Class;)V", "(Ljava/io/ObjectInputFilter$FilterInfo;Ljava/lang/Class<*>;)V", 0, $method(static_cast<void(ObjectInputFilter$Config$RejectUndecidedFilter$SerialInfo::*)($ObjectInputFilter$FilterInfo*,$Class*)>(&ObjectInputFilter$Config$RejectUndecidedFilter$SerialInfo::init$))},
	{"arrayLength", "()J", nullptr, $PUBLIC},
	{"depth", "()J", nullptr, $PUBLIC},
	{"references", "()J", nullptr, $PUBLIC},
	{"serialClass", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC},
	{"streamBytes", "()J", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ObjectInputFilter$Config$RejectUndecidedFilter$SerialInfo_InnerClassesInfo_[] = {
	{"java.io.ObjectInputFilter$Config", "java.io.ObjectInputFilter", "Config", $PUBLIC | $STATIC | $FINAL},
	{"java.io.ObjectInputFilter$Config$RejectUndecidedFilter", "java.io.ObjectInputFilter$Config", "RejectUndecidedFilter", $PRIVATE | $STATIC},
	{"java.io.ObjectInputFilter$Config$RejectUndecidedFilter$SerialInfo", "java.io.ObjectInputFilter$Config$RejectUndecidedFilter", "SerialInfo", $STATIC},
	{"java.io.ObjectInputFilter$FilterInfo", "java.io.ObjectInputFilter", "FilterInfo", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ObjectInputFilter$Config$RejectUndecidedFilter$SerialInfo_ClassInfo_ = {
	$ACC_SUPER,
	"java.io.ObjectInputFilter$Config$RejectUndecidedFilter$SerialInfo",
	"java.lang.Object",
	"java.io.ObjectInputFilter$FilterInfo",
	_ObjectInputFilter$Config$RejectUndecidedFilter$SerialInfo_FieldInfo_,
	_ObjectInputFilter$Config$RejectUndecidedFilter$SerialInfo_MethodInfo_,
	nullptr,
	nullptr,
	_ObjectInputFilter$Config$RejectUndecidedFilter$SerialInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.io.ObjectInputFilter"
};

$Object* allocate$ObjectInputFilter$Config$RejectUndecidedFilter$SerialInfo($Class* clazz) {
	return $of($alloc(ObjectInputFilter$Config$RejectUndecidedFilter$SerialInfo));
}

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
	$loadClass(ObjectInputFilter$Config$RejectUndecidedFilter$SerialInfo, name, initialize, &_ObjectInputFilter$Config$RejectUndecidedFilter$SerialInfo_ClassInfo_, allocate$ObjectInputFilter$Config$RejectUndecidedFilter$SerialInfo);
	return class$;
}

$Class* ObjectInputFilter$Config$RejectUndecidedFilter$SerialInfo::class$ = nullptr;

	} // io
} // java