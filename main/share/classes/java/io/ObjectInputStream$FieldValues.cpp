#include <java/io/ObjectInputStream$FieldValues.h>

#include <java/io/Bits.h>
#include <java/io/ObjectInputStream$BlockDataInputStream.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream$HandleTable.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectStreamClass.h>
#include <java/io/ObjectStreamField.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/reflect/Field.h>
#include <jcpp.h>

#undef TYPE

using $ObjectStreamFieldArray = $Array<::java::io::ObjectStreamField>;
using $Bits = ::java::io::Bits;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$BlockDataInputStream = ::java::io::ObjectInputStream$BlockDataInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectInputStream$HandleTable = ::java::io::ObjectInputStream$HandleTable;
using $ObjectStreamClass = ::java::io::ObjectStreamClass;
using $ObjectStreamField = ::java::io::ObjectStreamField;
using $Boolean = ::java::lang::Boolean;
using $Byte = ::java::lang::Byte;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $Field = ::java::lang::reflect::Field;

namespace java {
	namespace io {

$FieldInfo _ObjectInputStream$FieldValues_FieldInfo_[] = {
	{"this$0", "Ljava/io/ObjectInputStream;", nullptr, $FINAL | $SYNTHETIC, $field(ObjectInputStream$FieldValues, this$0)},
	{"desc", "Ljava/io/ObjectStreamClass;", nullptr, $PRIVATE | $FINAL, $field(ObjectInputStream$FieldValues, desc)},
	{"primValues", "[B", nullptr, $FINAL, $field(ObjectInputStream$FieldValues, primValues)},
	{"objValues", "[Ljava/lang/Object;", nullptr, $FINAL, $field(ObjectInputStream$FieldValues, objValues)},
	{"objHandles", "[I", nullptr, $PRIVATE | $FINAL, $field(ObjectInputStream$FieldValues, objHandles)},
	{}
};

$MethodInfo _ObjectInputStream$FieldValues_MethodInfo_[] = {
	{"<init>", "(Ljava/io/ObjectInputStream;Ljava/io/ObjectStreamClass;Z)V", nullptr, 0, $method(static_cast<void(ObjectInputStream$FieldValues::*)($ObjectInputStream*,$ObjectStreamClass*,bool)>(&ObjectInputStream$FieldValues::init$)), "java.io.IOException"},
	{"defaultCheckFieldValues", "(Ljava/lang/Object;)V", nullptr, 0, $method(static_cast<void(ObjectInputStream$FieldValues::*)(Object$*)>(&ObjectInputStream$FieldValues::defaultCheckFieldValues))},
	{"defaultSetFieldValues", "(Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(static_cast<void(ObjectInputStream$FieldValues::*)(Object$*)>(&ObjectInputStream$FieldValues::defaultSetFieldValues))},
	{"defaulted", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"get", "(Ljava/lang/String;Z)Z", nullptr, $PUBLIC},
	{"get", "(Ljava/lang/String;B)B", nullptr, $PUBLIC},
	{"get", "(Ljava/lang/String;C)C", nullptr, $PUBLIC},
	{"get", "(Ljava/lang/String;S)S", nullptr, $PUBLIC},
	{"get", "(Ljava/lang/String;I)I", nullptr, $PUBLIC},
	{"get", "(Ljava/lang/String;F)F", nullptr, $PUBLIC},
	{"get", "(Ljava/lang/String;J)J", nullptr, $PUBLIC},
	{"get", "(Ljava/lang/String;D)D", nullptr, $PUBLIC},
	{"get", "(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getFieldOffset", "(Ljava/lang/String;Ljava/lang/Class;)I", "(Ljava/lang/String;Ljava/lang/Class<*>;)I", $PRIVATE, $method(static_cast<int32_t(ObjectInputStream$FieldValues::*)($String*,$Class*)>(&ObjectInputStream$FieldValues::getFieldOffset))},
	{"getObjectStreamClass", "()Ljava/io/ObjectStreamClass;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ObjectInputStream$FieldValues_InnerClassesInfo_[] = {
	{"java.io.ObjectInputStream$FieldValues", "java.io.ObjectInputStream", "FieldValues", $PRIVATE | $FINAL},
	{"java.io.ObjectInputStream$GetField", "java.io.ObjectInputStream", "GetField", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ObjectInputStream$FieldValues_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.io.ObjectInputStream$FieldValues",
	"java.io.ObjectInputStream$GetField",
	nullptr,
	_ObjectInputStream$FieldValues_FieldInfo_,
	_ObjectInputStream$FieldValues_MethodInfo_,
	nullptr,
	nullptr,
	_ObjectInputStream$FieldValues_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.io.ObjectInputStream"
};

$Object* allocate$ObjectInputStream$FieldValues($Class* clazz) {
	return $of($alloc(ObjectInputStream$FieldValues));
}

void ObjectInputStream$FieldValues::init$($ObjectInputStream* this$0, $ObjectStreamClass* desc, bool recordDependencies) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$ObjectInputStream$GetField::init$();
	$set(this, desc, desc);
	int32_t primDataSize = $nc(desc)->getPrimDataSize();
	$set(this, primValues, (primDataSize > 0) ? $new($bytes, primDataSize) : ($bytes*)nullptr);
	if (primDataSize > 0) {
		$nc(this$0->bin)->readFully(this->primValues, 0, primDataSize, false);
	}
	int32_t numObjFields = desc->getNumObjFields();
	$set(this, objValues, (numObjFields > 0) ? $new($ObjectArray, numObjFields) : ($ObjectArray*)nullptr);
	$set(this, objHandles, (numObjFields > 0) ? $new($ints, numObjFields) : ($ints*)nullptr);
	if (numObjFields > 0) {
		int32_t objHandle = this$0->passHandle;
		$var($ObjectStreamFieldArray, fields, desc->getFields(false));
		int32_t numPrimFields = $nc(fields)->length - $nc(this->objValues)->length;
		for (int32_t i = 0; i < $nc(this->objValues)->length; ++i) {
			$var($ObjectStreamField, f, fields->get(numPrimFields + i));
			$nc(this->objValues)->set(i, $(this$0->readObject0($Object::class$, $nc(f)->isUnshared())));
			$nc(this->objHandles)->set(i, this$0->passHandle);
			if (recordDependencies && $nc(f)->getField() != nullptr) {
				$nc(this$0->handles)->markDependency(objHandle, this$0->passHandle);
			}
		}
		this$0->passHandle = objHandle;
	}
}

$ObjectStreamClass* ObjectInputStream$FieldValues::getObjectStreamClass() {
	return this->desc;
}

bool ObjectInputStream$FieldValues::defaulted($String* name) {
	return (getFieldOffset(name, nullptr) < 0);
}

bool ObjectInputStream$FieldValues::get($String* name, bool val) {
	$init($Boolean);
	int32_t off = getFieldOffset(name, $Boolean::TYPE);
	return (off >= 0) ? $Bits::getBoolean(this->primValues, off) : val;
}

int8_t ObjectInputStream$FieldValues::get($String* name, int8_t val) {
	$init($Byte);
	int32_t off = getFieldOffset(name, $Byte::TYPE);
	return (off >= 0) ? $nc(this->primValues)->get(off) : val;
}

char16_t ObjectInputStream$FieldValues::get($String* name, char16_t val) {
	$init($Character);
	int32_t off = getFieldOffset(name, $Character::TYPE);
	return (off >= 0) ? $Bits::getChar(this->primValues, off) : val;
}

int16_t ObjectInputStream$FieldValues::get($String* name, int16_t val) {
	$init($Short);
	int32_t off = getFieldOffset(name, $Short::TYPE);
	return (off >= 0) ? $Bits::getShort(this->primValues, off) : val;
}

int32_t ObjectInputStream$FieldValues::get($String* name, int32_t val) {
	$init($Integer);
	int32_t off = getFieldOffset(name, $Integer::TYPE);
	return (off >= 0) ? $Bits::getInt(this->primValues, off) : val;
}

float ObjectInputStream$FieldValues::get($String* name, float val) {
	$init($Float);
	int32_t off = getFieldOffset(name, $Float::TYPE);
	return (off >= 0) ? $Bits::getFloat(this->primValues, off) : val;
}

int64_t ObjectInputStream$FieldValues::get($String* name, int64_t val) {
	$init($Long);
	int32_t off = getFieldOffset(name, $Long::TYPE);
	return (off >= 0) ? $Bits::getLong(this->primValues, off) : val;
}

double ObjectInputStream$FieldValues::get($String* name, double val) {
	$init($Double);
	int32_t off = getFieldOffset(name, $Double::TYPE);
	return (off >= 0) ? $Bits::getDouble(this->primValues, off) : val;
}

$Object* ObjectInputStream$FieldValues::get($String* name, Object$* val) {
	int32_t off = getFieldOffset(name, $Object::class$);
	if (off >= 0) {
		int32_t objHandle = $nc(this->objHandles)->get(off);
		$nc(this->this$0->handles)->markDependency(this->this$0->passHandle, objHandle);
		return $of(($nc(this->this$0->handles)->lookupException(objHandle) == nullptr) ? $nc(this->objValues)->get(off) : ($Object*)nullptr);
	} else {
		return $of(val);
	}
}

void ObjectInputStream$FieldValues::defaultCheckFieldValues(Object$* obj) {
	if (this->objValues != nullptr) {
		$nc(this->desc)->checkObjFieldValueTypes(obj, this->objValues);
	}
}

void ObjectInputStream$FieldValues::defaultSetFieldValues(Object$* obj) {
	if (this->primValues != nullptr) {
		$nc(this->desc)->setPrimFieldValues(obj, this->primValues);
	}
	if (this->objValues != nullptr) {
		$nc(this->desc)->setObjFieldValues(obj, this->objValues);
	}
}

int32_t ObjectInputStream$FieldValues::getFieldOffset($String* name, $Class* type) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectStreamField, field, $nc(this->desc)->getField(name, type));
	if (field != nullptr) {
		return field->getOffset();
	} else if ($nc($($nc(this->desc)->getLocalDesc()))->getField(name, type) != nullptr) {
		return -1;
	} else {
		$throwNew($IllegalArgumentException, $$str({"no such field "_s, name, " with type "_s, type}));
	}
}

ObjectInputStream$FieldValues::ObjectInputStream$FieldValues() {
}

$Class* ObjectInputStream$FieldValues::load$($String* name, bool initialize) {
	$loadClass(ObjectInputStream$FieldValues, name, initialize, &_ObjectInputStream$FieldValues_ClassInfo_, allocate$ObjectInputStream$FieldValues);
	return class$;
}

$Class* ObjectInputStream$FieldValues::class$ = nullptr;

	} // io
} // java