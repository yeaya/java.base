#include <DefinesWriteObject.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/ObjectInput.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutput.h>
#include <java/io/ObjectOutputStream.h>
#include <java/lang/Error.h>
#include <jcpp.h>

using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $ObjectInput = ::java::io::ObjectInput;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutput = ::java::io::ObjectOutput;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void DefinesWriteObject::init$() {
	this->intData = 4;
	$set(this, objData, $new($String, "hello"_s));
}

void DefinesWriteObject::init$(int32_t i, Object$* o) {
	this->intData = 4;
	$set(this, objData, $new($String, "hello"_s));
	this->intData = i;
	$set(this, objData, o);
}

void DefinesWriteObject::writeObject($ObjectOutputStream* out) {
}

void DefinesWriteObject::writeExternal($ObjectOutput* out) {
	$nc(out)->writeInt(this->intData);
	out->writeObject(this->objData);
}

void DefinesWriteObject::readExternal($ObjectInput* in) {
	this->intData = $nc(in)->readInt();
	$set(this, objData, in->readObject());
}

void DefinesWriteObject::main($StringArray* args) {
	$init(DefinesWriteObject);
	$useLocalObjectStack();
	$var(DefinesWriteObject, obj1, $new(DefinesWriteObject, 5, "GoodBye"_s));
	$var(DefinesWriteObject, obj2, $new(DefinesWriteObject, 6, "AuRevoir"_s));
	$var($ByteArrayOutputStream, baos, $new($ByteArrayOutputStream));
	$var($ObjectOutputStream, oos, $new($ObjectOutputStream, baos));
	oos->writeObject(obj1);
	oos->writeObject(obj2);
	oos->close();
	$var($ByteArrayInputStream, bais, $new($ByteArrayInputStream, $(baos->toByteArray())));
	$var($ObjectInputStream, ois, $new($ObjectInputStream, bais));
	$var(DefinesWriteObject, readObject1, $cast(DefinesWriteObject, ois->readObject()));
	$var(DefinesWriteObject, readObject2, $cast(DefinesWriteObject, ois->readObject()));
	ois->close();
	if (obj1->intData != $nc(readObject1)->intData || obj2->intData != $nc(readObject2)->intData) {
		$throwNew($Error, "Unexpected mismatch between integer data written and read."_s);
	}
	bool var$0 = !$nc($cast($String, obj1->objData))->equals($cast($String, readObject1->objData));
	if (var$0 || !$nc($cast($String, obj2->objData))->equals($cast($String, $nc(readObject2)->objData))) {
		$throwNew($Error, "Unexpected mismatch between String data written and read."_s);
	}
}

DefinesWriteObject::DefinesWriteObject() {
}

$Class* DefinesWriteObject::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"intData", "I", nullptr, $PRIVATE, $field(DefinesWriteObject, intData)},
		{"objData", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(DefinesWriteObject, objData)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DefinesWriteObject, init$, void)},
		{"<init>", "(ILjava/lang/Object;)V", nullptr, $PUBLIC, $method(DefinesWriteObject, init$, void, int32_t, Object$*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(DefinesWriteObject, main, void, $StringArray*), "java.io.IOException,java.lang.ClassNotFoundException"},
		{"readExternal", "(Ljava/io/ObjectInput;)V", nullptr, $PUBLIC, $virtualMethod(DefinesWriteObject, readExternal, void, $ObjectInput*), "java.io.IOException,java.lang.ClassNotFoundException"},
		{"writeExternal", "(Ljava/io/ObjectOutput;)V", nullptr, $PUBLIC, $virtualMethod(DefinesWriteObject, writeExternal, void, $ObjectOutput*), "java.io.IOException"},
		{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(DefinesWriteObject, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"DefinesWriteObject",
		"java.lang.Object",
		"java.io.Externalizable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DefinesWriteObject, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefinesWriteObject);
	});
	return class$;
}

$Class* DefinesWriteObject::class$ = nullptr;