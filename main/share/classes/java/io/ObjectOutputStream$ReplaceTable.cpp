#include <java/io/ObjectOutputStream$ReplaceTable.h>
#include <java/io/ObjectOutputStream$HandleTable.h>
#include <java/io/ObjectOutputStream.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

using $ObjectOutputStream$HandleTable = ::java::io::ObjectOutputStream$HandleTable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;

namespace java {
	namespace io {

void ObjectOutputStream$ReplaceTable::init$(int32_t initialCapacity, float loadFactor) {
	$set(this, htab, $new($ObjectOutputStream$HandleTable, initialCapacity, loadFactor));
	$set(this, reps, $new($ObjectArray, initialCapacity));
}

void ObjectOutputStream$ReplaceTable::assign(Object$* obj, Object$* rep) {
	int32_t index = this->htab->assign(obj);
	while (index >= $nc(this->reps)->length) {
		grow();
	}
	this->reps->set(index, rep);
}

$Object* ObjectOutputStream$ReplaceTable::lookup(Object$* obj) {
	int32_t index = this->htab->lookup(obj);
	return (index >= 0) ? $nc(this->reps)->get(index) : $of(obj);
}

void ObjectOutputStream$ReplaceTable::clear() {
	$Arrays::fill(this->reps, 0, this->htab->size(), nullptr);
	this->htab->clear();
}

int32_t ObjectOutputStream$ReplaceTable::size() {
	return this->htab->size();
}

void ObjectOutputStream$ReplaceTable::grow() {
	$var($ObjectArray, newReps, $new($ObjectArray, ($nc(this->reps)->length << 1) + 1));
	$System::arraycopy(this->reps, 0, newReps, 0, this->reps->length);
	$set(this, reps, newReps);
}

ObjectOutputStream$ReplaceTable::ObjectOutputStream$ReplaceTable() {
}

$Class* ObjectOutputStream$ReplaceTable::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"htab", "Ljava/io/ObjectOutputStream$HandleTable;", nullptr, $PRIVATE | $FINAL, $field(ObjectOutputStream$ReplaceTable, htab)},
		{"reps", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(ObjectOutputStream$ReplaceTable, reps)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(IF)V", nullptr, 0, $method(ObjectOutputStream$ReplaceTable, init$, void, int32_t, float)},
		{"assign", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, 0, $virtualMethod(ObjectOutputStream$ReplaceTable, assign, void, Object$*, Object$*)},
		{"clear", "()V", nullptr, 0, $virtualMethod(ObjectOutputStream$ReplaceTable, clear, void)},
		{"grow", "()V", nullptr, $PRIVATE, $method(ObjectOutputStream$ReplaceTable, grow, void)},
		{"lookup", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, 0, $virtualMethod(ObjectOutputStream$ReplaceTable, lookup, $Object*, Object$*)},
		{"size", "()I", nullptr, 0, $virtualMethod(ObjectOutputStream$ReplaceTable, size, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.io.ObjectOutputStream$ReplaceTable", "java.io.ObjectOutputStream", "ReplaceTable", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.io.ObjectOutputStream$ReplaceTable",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.io.ObjectOutputStream"
	};
	$loadClass(ObjectOutputStream$ReplaceTable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ObjectOutputStream$ReplaceTable);
	});
	return class$;
}

$Class* ObjectOutputStream$ReplaceTable::class$ = nullptr;

	} // io
} // java