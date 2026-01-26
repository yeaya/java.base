#include <java/io/ObjectInputStream$HandleTable$HandleList.h>

#include <java/io/ObjectInputStream$HandleTable.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <jcpp.h>

using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

$FieldInfo _ObjectInputStream$HandleTable$HandleList_FieldInfo_[] = {
	{"list", "[I", nullptr, $PRIVATE, $field(ObjectInputStream$HandleTable$HandleList, list)},
	{"size", "I", nullptr, $PRIVATE, $field(ObjectInputStream$HandleTable$HandleList, size$)},
	{}
};

$MethodInfo _ObjectInputStream$HandleTable$HandleList_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ObjectInputStream$HandleTable$HandleList, init$, void)},
	{"add", "(I)V", nullptr, $PUBLIC, $virtualMethod(ObjectInputStream$HandleTable$HandleList, add, void, int32_t)},
	{"get", "(I)I", nullptr, $PUBLIC, $virtualMethod(ObjectInputStream$HandleTable$HandleList, get, int32_t, int32_t)},
	{"size", "()I", nullptr, $PUBLIC, $virtualMethod(ObjectInputStream$HandleTable$HandleList, size, int32_t)},
	{}
};

$InnerClassInfo _ObjectInputStream$HandleTable$HandleList_InnerClassesInfo_[] = {
	{"java.io.ObjectInputStream$HandleTable", "java.io.ObjectInputStream", "HandleTable", $PRIVATE | $STATIC},
	{"java.io.ObjectInputStream$HandleTable$HandleList", "java.io.ObjectInputStream$HandleTable", "HandleList", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ObjectInputStream$HandleTable$HandleList_ClassInfo_ = {
	$ACC_SUPER,
	"java.io.ObjectInputStream$HandleTable$HandleList",
	"java.lang.Object",
	nullptr,
	_ObjectInputStream$HandleTable$HandleList_FieldInfo_,
	_ObjectInputStream$HandleTable$HandleList_MethodInfo_,
	nullptr,
	nullptr,
	_ObjectInputStream$HandleTable$HandleList_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.io.ObjectInputStream"
};

$Object* allocate$ObjectInputStream$HandleTable$HandleList($Class* clazz) {
	return $of($alloc(ObjectInputStream$HandleTable$HandleList));
}

void ObjectInputStream$HandleTable$HandleList::init$() {
	$set(this, list, $new($ints, 4));
	this->size$ = 0;
}

void ObjectInputStream$HandleTable$HandleList::add(int32_t handle) {
	if (this->size$ >= $nc(this->list)->length) {
		$var($ints, newList, $new($ints, $nc(this->list)->length << 1));
		$System::arraycopy(this->list, 0, newList, 0, $nc(this->list)->length);
		$set(this, list, newList);
	}
	$nc(this->list)->set(this->size$++, handle);
}

int32_t ObjectInputStream$HandleTable$HandleList::get(int32_t index) {
	if (index >= this->size$) {
		$throwNew($ArrayIndexOutOfBoundsException);
	}
	return $nc(this->list)->get(index);
}

int32_t ObjectInputStream$HandleTable$HandleList::size() {
	return this->size$;
}

ObjectInputStream$HandleTable$HandleList::ObjectInputStream$HandleTable$HandleList() {
}

$Class* ObjectInputStream$HandleTable$HandleList::load$($String* name, bool initialize) {
	$loadClass(ObjectInputStream$HandleTable$HandleList, name, initialize, &_ObjectInputStream$HandleTable$HandleList_ClassInfo_, allocate$ObjectInputStream$HandleTable$HandleList);
	return class$;
}

$Class* ObjectInputStream$HandleTable$HandleList::class$ = nullptr;

	} // io
} // java