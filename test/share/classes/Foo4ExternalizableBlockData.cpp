#include <Foo4ExternalizableBlockData.h>

#include <java/io/ObjectInput.h>
#include <java/io/ObjectOutput.h>
#include <jcpp.h>

using $DataInput = ::java::io::DataInput;
using $DataOutput = ::java::io::DataOutput;
using $Externalizable = ::java::io::Externalizable;
using $ObjectInput = ::java::io::ObjectInput;
using $ObjectOutput = ::java::io::ObjectOutput;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _Foo4ExternalizableBlockData_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Foo4ExternalizableBlockData, serialVersionUID)},
	{"x", "I", nullptr, 0, $field(Foo4ExternalizableBlockData, x)},
	{"y", "I", nullptr, 0, $field(Foo4ExternalizableBlockData, y)},
	{"obj", "Ljava/lang/Object;", nullptr, 0, $field(Foo4ExternalizableBlockData, obj)},
	{}
};

$MethodInfo _Foo4ExternalizableBlockData_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Foo4ExternalizableBlockData::*)()>(&Foo4ExternalizableBlockData::init$))},
	{"<init>", "(IILjava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(Foo4ExternalizableBlockData::*)(int32_t,int32_t,Object$*)>(&Foo4ExternalizableBlockData::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"readExternal", "(Ljava/io/ObjectInput;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException,java.lang.ClassNotFoundException"},
	{"writeExternal", "(Ljava/io/ObjectOutput;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _Foo4ExternalizableBlockData_ClassInfo_ = {
	$ACC_SUPER,
	"Foo4ExternalizableBlockData",
	"java.lang.Object",
	"java.io.Externalizable",
	_Foo4ExternalizableBlockData_FieldInfo_,
	_Foo4ExternalizableBlockData_MethodInfo_
};

$Object* allocate$Foo4ExternalizableBlockData($Class* clazz) {
	return $of($alloc(Foo4ExternalizableBlockData));
}

void Foo4ExternalizableBlockData::init$() {
}

void Foo4ExternalizableBlockData::init$(int32_t x, int32_t y, Object$* obj) {
	this->x = x;
	this->y = y;
	$set(this, obj, obj);
}

void Foo4ExternalizableBlockData::writeExternal($ObjectOutput* out) {
	$nc(out)->writeInt(this->x);
	out->writeInt(this->y);
	out->writeObject(this->obj);
}

void Foo4ExternalizableBlockData::readExternal($ObjectInput* in) {
	this->x = $nc(in)->readInt();
	this->y = in->readInt();
	$set(this, obj, in->readObject());
}

bool Foo4ExternalizableBlockData::equals(Object$* other) {
	if ($instanceOf(Foo4ExternalizableBlockData, other)) {
		$var(Foo4ExternalizableBlockData, f, $cast(Foo4ExternalizableBlockData, other));
		return ((this->x == $nc(f)->x) && (this->y == f->y) && ((this->obj != nullptr) ? $nc($of(this->obj))->equals(f->obj) : (f->obj == nullptr)));
	}
	return false;
}

Foo4ExternalizableBlockData::Foo4ExternalizableBlockData() {
}

$Class* Foo4ExternalizableBlockData::load$($String* name, bool initialize) {
	$loadClass(Foo4ExternalizableBlockData, name, initialize, &_Foo4ExternalizableBlockData_ClassInfo_, allocate$Foo4ExternalizableBlockData);
	return class$;
}

$Class* Foo4ExternalizableBlockData::class$ = nullptr;