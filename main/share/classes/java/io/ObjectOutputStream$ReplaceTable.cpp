#include <java/io/ObjectOutputStream$ReplaceTable.h>

#include <java/io/ObjectOutputStream$HandleTable.h>
#include <java/io/ObjectOutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ObjectOutputStream$HandleTable = ::java::io::ObjectOutputStream$HandleTable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;

namespace java {
	namespace io {

$FieldInfo _ObjectOutputStream$ReplaceTable_FieldInfo_[] = {
	{"htab", "Ljava/io/ObjectOutputStream$HandleTable;", nullptr, $PRIVATE | $FINAL, $field(ObjectOutputStream$ReplaceTable, htab)},
	{"reps", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(ObjectOutputStream$ReplaceTable, reps)},
	{}
};

$MethodInfo _ObjectOutputStream$ReplaceTable_MethodInfo_[] = {
	{"<init>", "(IF)V", nullptr, 0, $method(static_cast<void(ObjectOutputStream$ReplaceTable::*)(int32_t,float)>(&ObjectOutputStream$ReplaceTable::init$))},
	{"assign", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, 0},
	{"clear", "()V", nullptr, 0},
	{"grow", "()V", nullptr, $PRIVATE, $method(static_cast<void(ObjectOutputStream$ReplaceTable::*)()>(&ObjectOutputStream$ReplaceTable::grow))},
	{"lookup", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, 0},
	{"size", "()I", nullptr, 0},
	{}
};

$InnerClassInfo _ObjectOutputStream$ReplaceTable_InnerClassesInfo_[] = {
	{"java.io.ObjectOutputStream$ReplaceTable", "java.io.ObjectOutputStream", "ReplaceTable", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ObjectOutputStream$ReplaceTable_ClassInfo_ = {
	$ACC_SUPER,
	"java.io.ObjectOutputStream$ReplaceTable",
	"java.lang.Object",
	nullptr,
	_ObjectOutputStream$ReplaceTable_FieldInfo_,
	_ObjectOutputStream$ReplaceTable_MethodInfo_,
	nullptr,
	nullptr,
	_ObjectOutputStream$ReplaceTable_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.io.ObjectOutputStream"
};

$Object* allocate$ObjectOutputStream$ReplaceTable($Class* clazz) {
	return $of($alloc(ObjectOutputStream$ReplaceTable));
}

void ObjectOutputStream$ReplaceTable::init$(int32_t initialCapacity, float loadFactor) {
	$set(this, htab, $new($ObjectOutputStream$HandleTable, initialCapacity, loadFactor));
	$set(this, reps, $new($ObjectArray, initialCapacity));
}

void ObjectOutputStream$ReplaceTable::assign(Object$* obj, Object$* rep) {
	int32_t index = $nc(this->htab)->assign(obj);
	while (index >= $nc(this->reps)->length) {
		grow();
	}
	$nc(this->reps)->set(index, rep);
}

$Object* ObjectOutputStream$ReplaceTable::lookup(Object$* obj) {
	int32_t index = $nc(this->htab)->lookup(obj);
	return $of((index >= 0) ? $nc(this->reps)->get(index) : $of(obj));
}

void ObjectOutputStream$ReplaceTable::clear() {
	$Arrays::fill(this->reps, 0, $nc(this->htab)->size(), ($Object*)nullptr);
	$nc(this->htab)->clear();
}

int32_t ObjectOutputStream$ReplaceTable::size() {
	return $nc(this->htab)->size();
}

void ObjectOutputStream$ReplaceTable::grow() {
	$var($ObjectArray, newReps, $new($ObjectArray, ($nc(this->reps)->length << 1) + 1));
	$System::arraycopy(this->reps, 0, newReps, 0, $nc(this->reps)->length);
	$set(this, reps, newReps);
}

ObjectOutputStream$ReplaceTable::ObjectOutputStream$ReplaceTable() {
}

$Class* ObjectOutputStream$ReplaceTable::load$($String* name, bool initialize) {
	$loadClass(ObjectOutputStream$ReplaceTable, name, initialize, &_ObjectOutputStream$ReplaceTable_ClassInfo_, allocate$ObjectOutputStream$ReplaceTable);
	return class$;
}

$Class* ObjectOutputStream$ReplaceTable::class$ = nullptr;

	} // io
} // java