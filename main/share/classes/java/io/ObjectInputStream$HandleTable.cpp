#include <java/io/ObjectInputStream$HandleTable.h>

#include <java/io/ObjectInputStream$HandleTable$HandleList.h>
#include <java/io/ObjectInputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InternalError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

#undef STATUS_EXCEPTION
#undef STATUS_OK
#undef STATUS_UNKNOWN

using $ObjectInputStream$HandleTable$HandleListArray = $Array<::java::io::ObjectInputStream$HandleTable$HandleList>;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$HandleTable$HandleList = ::java::io::ObjectInputStream$HandleTable$HandleList;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;

namespace java {
	namespace io {

$FieldInfo _ObjectInputStream$HandleTable_FieldInfo_[] = {
	{"STATUS_OK", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ObjectInputStream$HandleTable, STATUS_OK)},
	{"STATUS_UNKNOWN", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ObjectInputStream$HandleTable, STATUS_UNKNOWN)},
	{"STATUS_EXCEPTION", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ObjectInputStream$HandleTable, STATUS_EXCEPTION)},
	{"status", "[B", nullptr, 0, $field(ObjectInputStream$HandleTable, status)},
	{"entries", "[Ljava/lang/Object;", nullptr, 0, $field(ObjectInputStream$HandleTable, entries)},
	{"deps", "[Ljava/io/ObjectInputStream$HandleTable$HandleList;", nullptr, 0, $field(ObjectInputStream$HandleTable, deps)},
	{"lowDep", "I", nullptr, 0, $field(ObjectInputStream$HandleTable, lowDep)},
	{"size", "I", nullptr, 0, $field(ObjectInputStream$HandleTable, size$)},
	{}
};

$MethodInfo _ObjectInputStream$HandleTable_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(ObjectInputStream$HandleTable::*)(int32_t)>(&ObjectInputStream$HandleTable::init$))},
	{"assign", "(Ljava/lang/Object;)I", nullptr, 0},
	{"clear", "()V", nullptr, 0},
	{"finish", "(I)V", nullptr, 0},
	{"grow", "()V", nullptr, $PRIVATE, $method(static_cast<void(ObjectInputStream$HandleTable::*)()>(&ObjectInputStream$HandleTable::grow))},
	{"lookupException", "(I)Ljava/lang/ClassNotFoundException;", nullptr, 0},
	{"lookupObject", "(I)Ljava/lang/Object;", nullptr, 0},
	{"markDependency", "(II)V", nullptr, 0},
	{"markException", "(ILjava/lang/ClassNotFoundException;)V", nullptr, 0},
	{"setObject", "(ILjava/lang/Object;)V", nullptr, 0},
	{"size", "()I", nullptr, 0},
	{}
};

$InnerClassInfo _ObjectInputStream$HandleTable_InnerClassesInfo_[] = {
	{"java.io.ObjectInputStream$HandleTable", "java.io.ObjectInputStream", "HandleTable", $PRIVATE | $STATIC},
	{"java.io.ObjectInputStream$HandleTable$HandleList", "java.io.ObjectInputStream$HandleTable", "HandleList", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ObjectInputStream$HandleTable_ClassInfo_ = {
	$ACC_SUPER,
	"java.io.ObjectInputStream$HandleTable",
	"java.lang.Object",
	nullptr,
	_ObjectInputStream$HandleTable_FieldInfo_,
	_ObjectInputStream$HandleTable_MethodInfo_,
	nullptr,
	nullptr,
	_ObjectInputStream$HandleTable_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.io.ObjectInputStream"
};

$Object* allocate$ObjectInputStream$HandleTable($Class* clazz) {
	return $of($alloc(ObjectInputStream$HandleTable));
}

void ObjectInputStream$HandleTable::init$(int32_t initialCapacity) {
	this->lowDep = -1;
	this->size$ = 0;
	$set(this, status, $new($bytes, initialCapacity));
	$set(this, entries, $new($ObjectArray, initialCapacity));
	$set(this, deps, $new($ObjectInputStream$HandleTable$HandleListArray, initialCapacity));
}

int32_t ObjectInputStream$HandleTable::assign(Object$* obj) {
	if (this->size$ >= $nc(this->entries)->length) {
		grow();
	}
	$nc(this->status)->set(this->size$, ObjectInputStream$HandleTable::STATUS_UNKNOWN);
	$nc(this->entries)->set(this->size$, obj);
	return this->size$++;
}

void ObjectInputStream$HandleTable::markDependency(int32_t dependent, int32_t target) {
	if (dependent == target || dependent == -1 || target == -1) {
		return;
	}
	switch ($nc(this->status)->get(dependent)) {
	case ObjectInputStream$HandleTable::STATUS_UNKNOWN:
		{
			switch ($nc(this->status)->get(target)) {
			case ObjectInputStream$HandleTable::STATUS_OK:
				{
					break;
				}
			case ObjectInputStream$HandleTable::STATUS_EXCEPTION:
				{
					markException(dependent, $cast($ClassNotFoundException, $nc(this->entries)->get(target)));
					break;
				}
			case ObjectInputStream$HandleTable::STATUS_UNKNOWN:
				{
					if ($nc(this->deps)->get(target) == nullptr) {
						$nc(this->deps)->set(target, $$new($ObjectInputStream$HandleTable$HandleList));
					}
					$nc($nc(this->deps)->get(target))->add(dependent);
					if (this->lowDep < 0 || this->lowDep > target) {
						this->lowDep = target;
					}
					break;
				}
			default:
				{
					$throwNew($InternalError);
				}
			}
			break;
		}
	case ObjectInputStream$HandleTable::STATUS_EXCEPTION:
		{
			break;
		}
	default:
		{
			$throwNew($InternalError);
		}
	}
}

void ObjectInputStream$HandleTable::markException(int32_t handle, $ClassNotFoundException* ex) {
	{
		$var($ObjectInputStream$HandleTable$HandleList, dlist, nullptr)
		switch ($nc(this->status)->get(handle)) {
		case ObjectInputStream$HandleTable::STATUS_UNKNOWN:
			{
				$nc(this->status)->set(handle, ObjectInputStream$HandleTable::STATUS_EXCEPTION);
				$nc(this->entries)->set(handle, ex);
				$assign(dlist, $nc(this->deps)->get(handle));
				if (dlist != nullptr) {
					int32_t ndeps = dlist->size();
					for (int32_t i = 0; i < ndeps; ++i) {
						markException(dlist->get(i), ex);
					}
					$nc(this->deps)->set(handle, nullptr);
				}
				break;
			}
		case ObjectInputStream$HandleTable::STATUS_EXCEPTION:
			{
				break;
			}
		default:
			{
				$throwNew($InternalError);
			}
		}
	}
}

void ObjectInputStream$HandleTable::finish(int32_t handle) {
	int32_t end = 0;
	if (this->lowDep < 0) {
		end = handle + 1;
	} else if (this->lowDep >= handle) {
		end = this->size$;
		this->lowDep = -1;
	} else {
		return;
	}
	for (int32_t i = handle; i < end; ++i) {
		switch ($nc(this->status)->get(i)) {
		case ObjectInputStream$HandleTable::STATUS_UNKNOWN:
			{
				$nc(this->status)->set(i, ObjectInputStream$HandleTable::STATUS_OK);
				$nc(this->deps)->set(i, nullptr);
				break;
			}
		case ObjectInputStream$HandleTable::STATUS_OK:
			{}
		case ObjectInputStream$HandleTable::STATUS_EXCEPTION:
			{
				break;
			}
		default:
			{
				$throwNew($InternalError);
			}
		}
	}
}

void ObjectInputStream$HandleTable::setObject(int32_t handle, Object$* obj) {
	switch ($nc(this->status)->get(handle)) {
	case ObjectInputStream$HandleTable::STATUS_UNKNOWN:
		{}
	case ObjectInputStream$HandleTable::STATUS_OK:
		{
			$nc(this->entries)->set(handle, obj);
			break;
		}
	case ObjectInputStream$HandleTable::STATUS_EXCEPTION:
		{
			break;
		}
	default:
		{
			$throwNew($InternalError);
		}
	}
}

$Object* ObjectInputStream$HandleTable::lookupObject(int32_t handle) {
	return $of((handle != -1 && $nc(this->status)->get(handle) != ObjectInputStream$HandleTable::STATUS_EXCEPTION) ? $nc(this->entries)->get(handle) : ($Object*)nullptr);
}

$ClassNotFoundException* ObjectInputStream$HandleTable::lookupException(int32_t handle) {
	return (handle != -1 && $nc(this->status)->get(handle) == ObjectInputStream$HandleTable::STATUS_EXCEPTION) ? $cast($ClassNotFoundException, $nc(this->entries)->get(handle)) : ($ClassNotFoundException*)nullptr;
}

void ObjectInputStream$HandleTable::clear() {
	$Arrays::fill(this->status, 0, this->size$, (int8_t)0);
	$Arrays::fill(this->entries, 0, this->size$, ($Object*)nullptr);
	$Arrays::fill(this->deps, 0, this->size$, ($Object*)nullptr);
	this->lowDep = -1;
	this->size$ = 0;
}

int32_t ObjectInputStream$HandleTable::size() {
	return this->size$;
}

void ObjectInputStream$HandleTable::grow() {
	$useLocalCurrentObjectStackCache();
	int32_t newCapacity = ($nc(this->entries)->length << 1) + 1;
	$var($bytes, newStatus, $new($bytes, newCapacity));
	$var($ObjectArray, newEntries, $new($ObjectArray, newCapacity));
	$var($ObjectInputStream$HandleTable$HandleListArray, newDeps, $new($ObjectInputStream$HandleTable$HandleListArray, newCapacity));
	$System::arraycopy(this->status, 0, newStatus, 0, this->size$);
	$System::arraycopy(this->entries, 0, newEntries, 0, this->size$);
	$System::arraycopy(this->deps, 0, newDeps, 0, this->size$);
	$set(this, status, newStatus);
	$set(this, entries, newEntries);
	$set(this, deps, newDeps);
}

ObjectInputStream$HandleTable::ObjectInputStream$HandleTable() {
}

$Class* ObjectInputStream$HandleTable::load$($String* name, bool initialize) {
	$loadClass(ObjectInputStream$HandleTable, name, initialize, &_ObjectInputStream$HandleTable_ClassInfo_, allocate$ObjectInputStream$HandleTable);
	return class$;
}

$Class* ObjectInputStream$HandleTable::class$ = nullptr;

	} // io
} // java