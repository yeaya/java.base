#include <java/io/ObjectInputStream$FilterValues.h>

#include <java/io/ObjectInputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ObjectInputFilter$FilterInfo = ::java::io::ObjectInputFilter$FilterInfo;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

$FieldInfo _ObjectInputStream$FilterValues_FieldInfo_[] = {
	{"clazz", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $FINAL, $field(ObjectInputStream$FilterValues, clazz)},
	{"arrayLength", "J", nullptr, $FINAL, $field(ObjectInputStream$FilterValues, arrayLength$)},
	{"totalObjectRefs", "J", nullptr, $FINAL, $field(ObjectInputStream$FilterValues, totalObjectRefs)},
	{"depth", "J", nullptr, $FINAL, $field(ObjectInputStream$FilterValues, depth$)},
	{"streamBytes", "J", nullptr, $FINAL, $field(ObjectInputStream$FilterValues, streamBytes$)},
	{}
};

$MethodInfo _ObjectInputStream$FilterValues_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;JJJJ)V", "(Ljava/lang/Class<*>;JJJJ)V", $PUBLIC, $method(static_cast<void(ObjectInputStream$FilterValues::*)($Class*,int64_t,int64_t,int64_t,int64_t)>(&ObjectInputStream$FilterValues::init$))},
	{"arrayLength", "()J", nullptr, $PUBLIC},
	{"depth", "()J", nullptr, $PUBLIC},
	{"references", "()J", nullptr, $PUBLIC},
	{"serialClass", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC},
	{"streamBytes", "()J", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ObjectInputStream$FilterValues_InnerClassesInfo_[] = {
	{"java.io.ObjectInputStream$FilterValues", "java.io.ObjectInputStream", "FilterValues", $STATIC},
	{"java.io.ObjectInputFilter$FilterInfo", "java.io.ObjectInputFilter", "FilterInfo", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ObjectInputStream$FilterValues_ClassInfo_ = {
	$ACC_SUPER,
	"java.io.ObjectInputStream$FilterValues",
	"java.lang.Object",
	"java.io.ObjectInputFilter$FilterInfo",
	_ObjectInputStream$FilterValues_FieldInfo_,
	_ObjectInputStream$FilterValues_MethodInfo_,
	nullptr,
	nullptr,
	_ObjectInputStream$FilterValues_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.io.ObjectInputStream"
};

$Object* allocate$ObjectInputStream$FilterValues($Class* clazz) {
	return $of($alloc(ObjectInputStream$FilterValues));
}

void ObjectInputStream$FilterValues::init$($Class* clazz, int64_t arrayLength, int64_t totalObjectRefs, int64_t depth, int64_t streamBytes) {
	$set(this, clazz, clazz);
	this->arrayLength$ = arrayLength;
	this->totalObjectRefs = totalObjectRefs;
	this->depth$ = depth;
	this->streamBytes$ = streamBytes;
}

$Class* ObjectInputStream$FilterValues::serialClass() {
	return this->clazz;
}

int64_t ObjectInputStream$FilterValues::arrayLength() {
	return this->arrayLength$;
}

int64_t ObjectInputStream$FilterValues::references() {
	return this->totalObjectRefs;
}

int64_t ObjectInputStream$FilterValues::depth() {
	return this->depth$;
}

int64_t ObjectInputStream$FilterValues::streamBytes() {
	return this->streamBytes$;
}

ObjectInputStream$FilterValues::ObjectInputStream$FilterValues() {
}

$Class* ObjectInputStream$FilterValues::load$($String* name, bool initialize) {
	$loadClass(ObjectInputStream$FilterValues, name, initialize, &_ObjectInputStream$FilterValues_ClassInfo_, allocate$ObjectInputStream$FilterValues);
	return class$;
}

$Class* ObjectInputStream$FilterValues::class$ = nullptr;

	} // io
} // java