#include <java/io/ObjectOutputStream$HandleTable.h>

#include <java/io/ObjectOutputStream.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;

namespace java {
	namespace io {

$FieldInfo _ObjectOutputStream$HandleTable_FieldInfo_[] = {
	{"size", "I", nullptr, $PRIVATE, $field(ObjectOutputStream$HandleTable, size$)},
	{"threshold", "I", nullptr, $PRIVATE, $field(ObjectOutputStream$HandleTable, threshold)},
	{"loadFactor", "F", nullptr, $PRIVATE | $FINAL, $field(ObjectOutputStream$HandleTable, loadFactor)},
	{"spine", "[I", nullptr, $PRIVATE, $field(ObjectOutputStream$HandleTable, spine)},
	{"next", "[I", nullptr, $PRIVATE, $field(ObjectOutputStream$HandleTable, next)},
	{"objs", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(ObjectOutputStream$HandleTable, objs)},
	{}
};

$MethodInfo _ObjectOutputStream$HandleTable_MethodInfo_[] = {
	{"<init>", "(IF)V", nullptr, 0, $method(ObjectOutputStream$HandleTable, init$, void, int32_t, float)},
	{"assign", "(Ljava/lang/Object;)I", nullptr, 0, $virtualMethod(ObjectOutputStream$HandleTable, assign, int32_t, Object$*)},
	{"clear", "()V", nullptr, 0, $virtualMethod(ObjectOutputStream$HandleTable, clear, void)},
	{"growEntries", "()V", nullptr, $PRIVATE, $method(ObjectOutputStream$HandleTable, growEntries, void)},
	{"growSpine", "()V", nullptr, $PRIVATE, $method(ObjectOutputStream$HandleTable, growSpine, void)},
	{"hash", "(Ljava/lang/Object;)I", nullptr, $PRIVATE, $method(ObjectOutputStream$HandleTable, hash, int32_t, Object$*)},
	{"insert", "(Ljava/lang/Object;I)V", nullptr, $PRIVATE, $method(ObjectOutputStream$HandleTable, insert, void, Object$*, int32_t)},
	{"lookup", "(Ljava/lang/Object;)I", nullptr, 0, $virtualMethod(ObjectOutputStream$HandleTable, lookup, int32_t, Object$*)},
	{"size", "()I", nullptr, 0, $virtualMethod(ObjectOutputStream$HandleTable, size, int32_t)},
	{}
};

$InnerClassInfo _ObjectOutputStream$HandleTable_InnerClassesInfo_[] = {
	{"java.io.ObjectOutputStream$HandleTable", "java.io.ObjectOutputStream", "HandleTable", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ObjectOutputStream$HandleTable_ClassInfo_ = {
	$ACC_SUPER,
	"java.io.ObjectOutputStream$HandleTable",
	"java.lang.Object",
	nullptr,
	_ObjectOutputStream$HandleTable_FieldInfo_,
	_ObjectOutputStream$HandleTable_MethodInfo_,
	nullptr,
	nullptr,
	_ObjectOutputStream$HandleTable_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.io.ObjectOutputStream"
};

$Object* allocate$ObjectOutputStream$HandleTable($Class* clazz) {
	return $of($alloc(ObjectOutputStream$HandleTable));
}

void ObjectOutputStream$HandleTable::init$(int32_t initialCapacity, float loadFactor) {
	this->loadFactor = loadFactor;
	$set(this, spine, $new($ints, initialCapacity));
	$set(this, next, $new($ints, initialCapacity));
	$set(this, objs, $new($ObjectArray, initialCapacity));
	this->threshold = $cast(int32_t, (initialCapacity * loadFactor));
	clear();
}

int32_t ObjectOutputStream$HandleTable::assign(Object$* obj) {
	if (this->size$ >= $nc(this->next)->length) {
		growEntries();
	}
	if (this->size$ >= this->threshold) {
		growSpine();
	}
	insert(obj, this->size$);
	return this->size$++;
}

int32_t ObjectOutputStream$HandleTable::lookup(Object$* obj) {
	if (this->size$ == 0) {
		return -1;
	}
	int32_t index = $mod(hash(obj), $nc(this->spine)->length);
	for (int32_t i = $nc(this->spine)->get(index); i >= 0; i = $nc(this->next)->get(i)) {
		if ($equals($nc(this->objs)->get(i), obj)) {
			return i;
		}
	}
	return -1;
}

void ObjectOutputStream$HandleTable::clear() {
	$Arrays::fill(this->spine, -1);
	$Arrays::fill(this->objs, 0, this->size$, ($Object*)nullptr);
	this->size$ = 0;
}

int32_t ObjectOutputStream$HandleTable::size() {
	return this->size$;
}

void ObjectOutputStream$HandleTable::insert(Object$* obj, int32_t handle) {
	int32_t index = $mod(hash(obj), $nc(this->spine)->length);
	$nc(this->objs)->set(handle, obj);
	$nc(this->next)->set(handle, $nc(this->spine)->get(index));
	$nc(this->spine)->set(index, handle);
}

void ObjectOutputStream$HandleTable::growSpine() {
	$set(this, spine, $new($ints, ($nc(this->spine)->length << 1) + 1));
	this->threshold = $cast(int32_t, ($nc(this->spine)->length * this->loadFactor));
	$Arrays::fill(this->spine, -1);
	for (int32_t i = 0; i < this->size$; ++i) {
		insert($nc(this->objs)->get(i), i);
	}
}

void ObjectOutputStream$HandleTable::growEntries() {
	$useLocalCurrentObjectStackCache();
	int32_t newLength = ($nc(this->next)->length << 1) + 1;
	$var($ints, newNext, $new($ints, newLength));
	$System::arraycopy(this->next, 0, newNext, 0, this->size$);
	$set(this, next, newNext);
	$var($ObjectArray, newObjs, $new($ObjectArray, newLength));
	$System::arraycopy(this->objs, 0, newObjs, 0, this->size$);
	$set(this, objs, newObjs);
}

int32_t ObjectOutputStream$HandleTable::hash(Object$* obj) {
	return (int32_t)($System::identityHashCode(obj) & (uint32_t)0x7FFFFFFF);
}

ObjectOutputStream$HandleTable::ObjectOutputStream$HandleTable() {
}

$Class* ObjectOutputStream$HandleTable::load$($String* name, bool initialize) {
	$loadClass(ObjectOutputStream$HandleTable, name, initialize, &_ObjectOutputStream$HandleTable_ClassInfo_, allocate$ObjectOutputStream$HandleTable);
	return class$;
}

$Class* ObjectOutputStream$HandleTable::class$ = nullptr;

	} // io
} // java