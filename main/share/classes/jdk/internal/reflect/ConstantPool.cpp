#include <jdk/internal/reflect/ConstantPool.h>

#include <java/lang/reflect/Field.h>
#include <java/lang/reflect/Member.h>
#include <java/util/Set.h>
#include <jdk/internal/reflect/ConstantPool$Tag.h>
#include <jdk/internal/reflect/Reflection.h>
#include <jcpp.h>

#include <java/lang/IntArray.h>
#include <java/io/DataInputStream.h>
#include <java/util/ArrayList.h>
#include <java/util/HashMap.h>
#include <jdk/internal/reflect/ConstantBase.h>
#include <jdk/internal/reflect/ConstantClass.h>
#include <jdk/internal/reflect/ConstantDouble.h>
#include <jdk/internal/reflect/ConstantDynamic.h>
#include <jdk/internal/reflect/ConstantFieldRef.h>
#include <jdk/internal/reflect/ConstantFloat.h>
#include <jdk/internal/reflect/ConstantInt.h>
#include <jdk/internal/reflect/ConstantInterfaceMethodRef.h>
#include <jdk/internal/reflect/ConstantInvokeDynamic.h>
#include <jdk/internal/reflect/ConstantLong.h>
#include <jdk/internal/reflect/ConstantMethodHandle.h>
#include <jdk/internal/reflect/ConstantMethodRef.h>
#include <jdk/internal/reflect/ConstantMethodType.h>
#include <jdk/internal/reflect/ConstantModule.h>
#include <jdk/internal/reflect/ConstantNameAndType.h>
#include <jdk/internal/reflect/ConstantPackage.h>
#include <jdk/internal/reflect/ConstantString.h>
#include <jdk/internal/reflect/ConstantUTF8.h>
#include <java/lang/IllegalArgumentException.h>

enum ConstantPoolTag  {
	// Just a dummy value used in the constant pool for index 0 and after longs/doubles
	CONSTANT_Invalid = 0,
	CONSTANT_Utf8 = 1,
	CONSTANT_Integer = 3,
	CONSTANT_Float = 4,
	CONSTANT_Long = 5,
	CONSTANT_Double = 6,
	CONSTANT_Class = 7,
	CONSTANT_String = 8,
	CONSTANT_Fieldref = 9,
	CONSTANT_Methodref = 10,
	CONSTANT_InterfaceMethodref = 11,
	CONSTANT_NameAndType = 12,
	CONSTANT_MethodHandle = 15,
	CONSTANT_MethodType = 16,
	CONSTANT_Dynamic = 17,
	CONSTANT_InvokeDynamic = 18,
	CONSTANT_Module = 19,
	CONSTANT_Package = 20
};

using namespace ::java::lang;
using namespace ::java::io;
using namespace ::java::util;

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Field = ::java::lang::reflect::Field;
using $Member = ::java::lang::reflect::Member;
using $Set = ::java::util::Set;
using $ConstantPool$Tag = ::jdk::internal::reflect::ConstantPool$Tag;
using $Reflection = ::jdk::internal::reflect::Reflection;

namespace jdk {
	namespace internal {
		namespace reflect {

$FieldInfo _ConstantPool_FieldInfo_[] = {
	{"constantPoolOop", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(ConstantPool, constantPoolOop)},
	{"values", "Ljava/util/ArrayList;", nullptr, 2, $field(ConstantPool, values)},
	{"keysToPos", "Ljava/util/HashMap;", nullptr, 2, $field(ConstantPool, keysToPos)},
	{}
};

$MethodInfo _ConstantPool_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ConstantPool, init$, void)},
	{"getClassAt", "(I)Ljava/lang/Class;", "(I)Ljava/lang/Class<*>;", $PUBLIC, $virtualMethod(ConstantPool, getClassAt, $Class*, int32_t)},
	{"getClassAt0", "(Ljava/lang/Object;I)Ljava/lang/Class;", "(Ljava/lang/Object;I)Ljava/lang/Class<*>;", $PRIVATE | $NATIVE, $method(ConstantPool, getClassAt0, $Class*, Object$*, int32_t)},
	{"getClassAtIfLoaded", "(I)Ljava/lang/Class;", "(I)Ljava/lang/Class<*>;", $PUBLIC, $virtualMethod(ConstantPool, getClassAtIfLoaded, $Class*, int32_t)},
	{"getClassAtIfLoaded0", "(Ljava/lang/Object;I)Ljava/lang/Class;", "(Ljava/lang/Object;I)Ljava/lang/Class<*>;", $PRIVATE | $NATIVE, $method(ConstantPool, getClassAtIfLoaded0, $Class*, Object$*, int32_t)},
	{"getClassRefIndexAt", "(I)I", nullptr, $PUBLIC, $virtualMethod(ConstantPool, getClassRefIndexAt, int32_t, int32_t)},
	{"getClassRefIndexAt0", "(Ljava/lang/Object;I)I", nullptr, $PRIVATE | $NATIVE, $method(ConstantPool, getClassRefIndexAt0, int32_t, Object$*, int32_t)},
	{"getDoubleAt", "(I)D", nullptr, $PUBLIC, $virtualMethod(ConstantPool, getDoubleAt, double, int32_t)},
	{"getDoubleAt0", "(Ljava/lang/Object;I)D", nullptr, $PRIVATE | $NATIVE, $method(ConstantPool, getDoubleAt0, double, Object$*, int32_t)},
	{"getFieldAt", "(I)Ljava/lang/reflect/Field;", nullptr, $PUBLIC, $virtualMethod(ConstantPool, getFieldAt, $Field*, int32_t)},
	{"getFieldAt0", "(Ljava/lang/Object;I)Ljava/lang/reflect/Field;", nullptr, $PRIVATE | $NATIVE, $method(ConstantPool, getFieldAt0, $Field*, Object$*, int32_t)},
	{"getFieldAtIfLoaded", "(I)Ljava/lang/reflect/Field;", nullptr, $PUBLIC, $virtualMethod(ConstantPool, getFieldAtIfLoaded, $Field*, int32_t)},
	{"getFieldAtIfLoaded0", "(Ljava/lang/Object;I)Ljava/lang/reflect/Field;", nullptr, $PRIVATE | $NATIVE, $method(ConstantPool, getFieldAtIfLoaded0, $Field*, Object$*, int32_t)},
	{"getFloatAt", "(I)F", nullptr, $PUBLIC, $virtualMethod(ConstantPool, getFloatAt, float, int32_t)},
	{"getFloatAt0", "(Ljava/lang/Object;I)F", nullptr, $PRIVATE | $NATIVE, $method(ConstantPool, getFloatAt0, float, Object$*, int32_t)},
	{"getIntAt", "(I)I", nullptr, $PUBLIC, $virtualMethod(ConstantPool, getIntAt, int32_t, int32_t)},
	{"getIntAt0", "(Ljava/lang/Object;I)I", nullptr, $PRIVATE | $NATIVE, $method(ConstantPool, getIntAt0, int32_t, Object$*, int32_t)},
	{"getLongAt", "(I)J", nullptr, $PUBLIC, $virtualMethod(ConstantPool, getLongAt, int64_t, int32_t)},
	{"getLongAt0", "(Ljava/lang/Object;I)J", nullptr, $PRIVATE | $NATIVE, $method(ConstantPool, getLongAt0, int64_t, Object$*, int32_t)},
	{"getMemberRefInfoAt", "(I)[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ConstantPool, getMemberRefInfoAt, $StringArray*, int32_t)},
	{"getMemberRefInfoAt0", "(Ljava/lang/Object;I)[Ljava/lang/String;", nullptr, $PRIVATE | $NATIVE, $method(ConstantPool, getMemberRefInfoAt0, $StringArray*, Object$*, int32_t)},
	{"getMethodAt", "(I)Ljava/lang/reflect/Member;", nullptr, $PUBLIC, $virtualMethod(ConstantPool, getMethodAt, $Member*, int32_t)},
	{"getMethodAt0", "(Ljava/lang/Object;I)Ljava/lang/reflect/Member;", nullptr, $PRIVATE | $NATIVE, $method(ConstantPool, getMethodAt0, $Member*, Object$*, int32_t)},
	{"getMethodAtIfLoaded", "(I)Ljava/lang/reflect/Member;", nullptr, $PUBLIC, $virtualMethod(ConstantPool, getMethodAtIfLoaded, $Member*, int32_t)},
	{"getMethodAtIfLoaded0", "(Ljava/lang/Object;I)Ljava/lang/reflect/Member;", nullptr, $PRIVATE | $NATIVE, $method(ConstantPool, getMethodAtIfLoaded0, $Member*, Object$*, int32_t)},
	{"getNameAndTypeRefIndexAt", "(I)I", nullptr, $PUBLIC, $virtualMethod(ConstantPool, getNameAndTypeRefIndexAt, int32_t, int32_t)},
	{"getNameAndTypeRefIndexAt0", "(Ljava/lang/Object;I)I", nullptr, $PRIVATE | $NATIVE, $method(ConstantPool, getNameAndTypeRefIndexAt0, int32_t, Object$*, int32_t)},
	{"getNameAndTypeRefInfoAt", "(I)[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ConstantPool, getNameAndTypeRefInfoAt, $StringArray*, int32_t)},
	{"getNameAndTypeRefInfoAt0", "(Ljava/lang/Object;I)[Ljava/lang/String;", nullptr, $PRIVATE | $NATIVE, $method(ConstantPool, getNameAndTypeRefInfoAt0, $StringArray*, Object$*, int32_t)},
	{"getSize", "()I", nullptr, $PUBLIC, $virtualMethod(ConstantPool, getSize, int32_t)},
	{"getSize0", "(Ljava/lang/Object;)I", nullptr, $PRIVATE | $NATIVE, $method(ConstantPool, getSize0, int32_t, Object$*)},
	{"getStringAt", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ConstantPool, getStringAt, $String*, int32_t)},
	{"getStringAt0", "(Ljava/lang/Object;I)Ljava/lang/String;", nullptr, $PRIVATE | $NATIVE, $method(ConstantPool, getStringAt0, $String*, Object$*, int32_t)},
	{"getTagAt", "(I)Ljdk/internal/reflect/ConstantPool$Tag;", nullptr, $PUBLIC, $virtualMethod(ConstantPool, getTagAt, $ConstantPool$Tag*, int32_t)},
	{"getTagAt0", "(Ljava/lang/Object;I)B", nullptr, $PRIVATE | $NATIVE, $method(ConstantPool, getTagAt0, int8_t, Object$*, int32_t)},
	{"getUTF8At", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ConstantPool, getUTF8At, $String*, int32_t)},
	{"getUTF8At0", "(Ljava/lang/Object;I)Ljava/lang/String;", nullptr, $PRIVATE | $NATIVE, $method(ConstantPool, getUTF8At0, $String*, Object$*, int32_t)},
	{}
};

#define _METHOD_INDEX_getClassAt0 2
#define _METHOD_INDEX_getClassAtIfLoaded0 4
#define _METHOD_INDEX_getClassRefIndexAt0 6
#define _METHOD_INDEX_getDoubleAt0 8
#define _METHOD_INDEX_getFieldAt0 10
#define _METHOD_INDEX_getFieldAtIfLoaded0 12
#define _METHOD_INDEX_getFloatAt0 14
#define _METHOD_INDEX_getIntAt0 16
#define _METHOD_INDEX_getLongAt0 18
#define _METHOD_INDEX_getMemberRefInfoAt0 20
#define _METHOD_INDEX_getMethodAt0 22
#define _METHOD_INDEX_getMethodAtIfLoaded0 24
#define _METHOD_INDEX_getNameAndTypeRefIndexAt0 26
#define _METHOD_INDEX_getNameAndTypeRefInfoAt0 28
#define _METHOD_INDEX_getSize0 30
#define _METHOD_INDEX_getStringAt0 32
#define _METHOD_INDEX_getTagAt0 34
#define _METHOD_INDEX_getUTF8At0 36

$InnerClassInfo _ConstantPool_InnerClassesInfo_[] = {
	{"jdk.internal.reflect.ConstantPool$Tag", "jdk.internal.reflect.ConstantPool", "Tag", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _ConstantPool_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.reflect.ConstantPool",
	"java.lang.Object",
	nullptr,
	_ConstantPool_FieldInfo_,
	_ConstantPool_MethodInfo_,
	nullptr,
	nullptr,
	_ConstantPool_InnerClassesInfo_,
	nullptr,
	nullptr,
	"jdk.internal.reflect.ConstantPool$Tag"
};

$Object* allocate$ConstantPool($Class* clazz) {
	return $of($alloc(ConstantPool));
}

void ConstantPool::init$() {
	$set(this, values, $new<ArrayList>());
	values->add(nullptr); // since index start from 1
	$set(this, keysToPos, $new<HashMap>());
}

int32_t ConstantPool::getSize() {
	return getSize0(this->constantPoolOop);
}

$Class* ConstantPool::getClassAt(int32_t index) {
	return getClassAt0(this->constantPoolOop, index);
}

$Class* ConstantPool::getClassAtIfLoaded(int32_t index) {
	return getClassAtIfLoaded0(this->constantPoolOop, index);
}

int32_t ConstantPool::getClassRefIndexAt(int32_t index) {
	return getClassRefIndexAt0(this->constantPoolOop, index);
}

$Member* ConstantPool::getMethodAt(int32_t index) {
	return getMethodAt0(this->constantPoolOop, index);
}

$Member* ConstantPool::getMethodAtIfLoaded(int32_t index) {
	return getMethodAtIfLoaded0(this->constantPoolOop, index);
}

$Field* ConstantPool::getFieldAt(int32_t index) {
	return getFieldAt0(this->constantPoolOop, index);
}

$Field* ConstantPool::getFieldAtIfLoaded(int32_t index) {
	return getFieldAtIfLoaded0(this->constantPoolOop, index);
}

$StringArray* ConstantPool::getMemberRefInfoAt(int32_t index) {
	return getMemberRefInfoAt0(this->constantPoolOop, index);
}

int32_t ConstantPool::getNameAndTypeRefIndexAt(int32_t index) {
	return getNameAndTypeRefIndexAt0(this->constantPoolOop, index);
}

$StringArray* ConstantPool::getNameAndTypeRefInfoAt(int32_t index) {
	return getNameAndTypeRefInfoAt0(this->constantPoolOop, index);
}

int32_t ConstantPool::getIntAt(int32_t index) {
	return getIntAt0(this->constantPoolOop, index);
}

int64_t ConstantPool::getLongAt(int32_t index) {
	return getLongAt0(this->constantPoolOop, index);
}

float ConstantPool::getFloatAt(int32_t index) {
	return getFloatAt0(this->constantPoolOop, index);
}

double ConstantPool::getDoubleAt(int32_t index) {
	return getDoubleAt0(this->constantPoolOop, index);
}

$String* ConstantPool::getStringAt(int32_t index) {
	return getStringAt0(this->constantPoolOop, index);
}

$String* ConstantPool::getUTF8At(int32_t index) {
	return getUTF8At0(this->constantPoolOop, index);
}

$ConstantPool$Tag* ConstantPool::getTagAt(int32_t index) {
	return $ConstantPool$Tag::valueOf(getTagAt0(this->constantPoolOop, index));
}

int32_t ConstantPool::getSize0(Object$* constantPoolOop) {
	return values->size() - 1; // index 0 is nullptr
}

$Class* ConstantPool::getClassAt0(Object$* constantPoolOop, int32_t index) {
	// TODO
	return nullptr;
}

$Class* ConstantPool::getClassAtIfLoaded0(Object$* constantPoolOop, int32_t index) {
	// TODO
	return nullptr;
}

int32_t ConstantPool::getClassRefIndexAt0(Object$* constantPoolOop, int32_t index) {
	// TODO
	return 0;
}

$Member* ConstantPool::getMethodAt0(Object$* constantPoolOop, int32_t index) {
	// TODO
	return nullptr;
}

$Member* ConstantPool::getMethodAtIfLoaded0(Object$* constantPoolOop, int32_t index) {
	// TODO
	return nullptr;
}

$Field* ConstantPool::getFieldAt0(Object$* constantPoolOop, int32_t index) {
	// TODO
	return nullptr;
}

$Field* ConstantPool::getFieldAtIfLoaded0(Object$* constantPoolOop, int32_t index) {
	// TODO
	return nullptr;
}

$StringArray* ConstantPool::getMemberRefInfoAt0(Object$* constantPoolOop, int32_t index) {
	// TODO
	return nullptr;
}

int32_t ConstantPool::getNameAndTypeRefIndexAt0(Object$* constantPoolOop, int32_t index) {
	// TODO
	return 0;
}

$StringArray* ConstantPool::getNameAndTypeRefInfoAt0(Object$* constantPoolOop, int32_t index) {
	// TODO
	return nullptr;
}

int32_t ConstantPool::getIntAt0(Object$* constantPoolOop, int32_t index) {
	return getInt(index);
}

int64_t ConstantPool::getLongAt0(Object$* constantPoolOop, int32_t index) {
	return getLong(index);
}

float ConstantPool::getFloatAt0(Object$* constantPoolOop, int32_t index) {
	return getFloat(index);
}

double ConstantPool::getDoubleAt0(Object$* constantPoolOop, int32_t index) {
	return getDouble(index);
}

$String* ConstantPool::getStringAt0(Object$* constantPoolOop, int32_t index) {
	return getString(index)->utf8;
}

$String* ConstantPool::getUTF8At0(Object$* constantPoolOop, int32_t index) {
	return getUTF8(index);
}

int8_t ConstantPool::getTagAt0(Object$* constantPoolOop, int32_t index) {
	return getTag(index);
}

void clinit$ConstantPool($Class* class$) {
	{
		$Reflection::registerFieldsToFilter(ConstantPool::class$, $($Set::of($of("constantPoolOop"_s))));
	}
}

ConstantPool::ConstantPool() {
}


void ConstantPool::putUTF8(int32_t index, $String* v) {
	$var(ConstantUTF8, value, $new<ConstantUTF8>(index, v));
	if (index == values->size()) {
		values->add(value);
	} else if (index < values->size()) {
		values->set(index, value);
	} else {
		// TODO
	}
}

int32_t ConstantPool::putUTF8($String* v) {
	$var($String, key, $concat($cstr("utf8."), v));
	$var(ConstantBase, pos, getPos(key));
	if (pos != nullptr) {
		return pos->index;
	}
	int32_t index = values->size();
	putUTF8(index, v);
	$var(ConstantUTF8, value, $fcast<ConstantUTF8>(getBase(index)));
	putPos(key, value);
	return index;
}

$String* ConstantPool::getUTF8(int32_t index) {
	$var(ConstantUTF8, value, $fcast<ConstantUTF8>(getBase(index)));
	return $nullcheck(value)->utf8;
}

void ConstantPool::putInt(int32_t index, int32_t v) {
	$var(ConstantInt, value, $new<ConstantInt>(index, v));
	//value->value = v;
	if (index == values->size()) {
		values->add(value);
	} else if (index < values->size()) {
		values->set(index, value);
	} else {
		// TODO
	}
}

int32_t ConstantPool::putInt(int32_t v) {
	$var($String, key, $concat($cstr("int."), $$str(v)));
	$var(ConstantBase, pos, getPos(key));
	if (pos != nullptr) {
		return pos->index;
	}
	
	int32_t index = values->size();
	putInt(index, v);
	$var(ConstantInt, value, $fcast<ConstantInt>(getBase(index)));
	putPos(key, value);
	return index;
}

int32_t ConstantPool::getInt(int32_t index) {
	ConstantInt* value = $fcast<ConstantInt>(getBase(index));
	return $nullcheck(value)->value;
}

void ConstantPool::putFloat(int32_t index, float v) {
	$var(ConstantFloat, value, $new<ConstantFloat>(index, v));
	//value->value = v;
	if (index == values->size()) {
		values->add(value);
	} else if (index < values->size()) {
		values->set(index, value);
	} else {
		// TODO
	}
}

int32_t ConstantPool::putFloat(float v) {
	int32_t intBits = Float::floatToRawIntBits(v);
	$var($String, key, $concat($cstr("float."), $$str(intBits)));
	$var(ConstantBase, pos, getPos(key));
	if (pos != nullptr) {
		return pos->index;
	}
	
	int32_t index = values->size();
	putFloat(index, v);
	$var(ConstantFloat, value, $fcast<ConstantFloat>(getBase(index)));
	putPos(key, value);
	return index;
}

float ConstantPool::getFloat(int32_t index) {
	$var(ConstantFloat, value, $fcast<ConstantFloat>(getBase(index)));
	return $nullcheck(value)->value;
}

void ConstantPool::putLong(int32_t index, int64_t v) {
	$var(ConstantLong, value, $new<ConstantLong>(index, v));
	//value->value = v;
	if (index == values->size()) {
		values->add(value);
	} else if (index < values->size()) {
		values->set(index, value);
	} else {
		// TODO
	}
}

int32_t ConstantPool::putLong(int64_t v) {
	$var($String, key, $concat($cstr("long."), $$str(v)));
	$var(ConstantBase, pos, getPos(key));
	if (pos != nullptr) {
		return pos->index;
	}
	
	int32_t index = values->size();
	putLong(index, v);
	$var(ConstantLong, value, $fcast<ConstantLong>(getBase(index)));
	putPos(key, value);
	return index;
}

int64_t ConstantPool::getLong(int32_t index) {
	ConstantLong* value = $fcast<ConstantLong>(getBase(index));
	return $nullcheck(value)->value;
}

void ConstantPool::putDouble(int32_t index, double v) {
	$var(ConstantDouble, value, $new<ConstantDouble>(index, v));
	//value->value = v;
	if (index == values->size()) {
		values->add(value);
	} else if (index < values->size()) {
		values->set(index, value);
	} else {
		// TODO
	}
}

int32_t ConstantPool::putDouble(double v) {
	int64_t longBits = Double::doubleToRawLongBits(v);
	$var($String, key, $concat($cstr("float."), $$str(longBits)));
	$var(ConstantBase, pos, getPos(key));
	if (pos != nullptr) {
		return pos->index;
	}
	
	int32_t index = values->size();
	putDouble(index, v);
	$var(ConstantDouble, value, $fcast<ConstantDouble>(getBase(index)));
	putPos(key, value);
	return index;
}

double ConstantPool::getDouble(int32_t index) {
	ConstantDouble* value = $fcast<ConstantDouble>(getBase(index));
	return $nullcheck(value)->value;
}

void ConstantPool::putClass(int32_t index, int32_t utf8Index) {
	$var(ConstantClass, value, $new<ConstantClass>(index, utf8Index));
	if (index == values->size()) {
		values->add(value);
	} else if (index < values->size()) {
		values->set(index, value);
	} else {
		// TODO
	}
}

int32_t ConstantPool::putClass(int32_t utf8Index) {
	$var($String, key, $concat($cstr("class."), $$str(utf8Index)));
	$var(ConstantBase, pos, getPos(key));
	if (pos != nullptr) {
		return pos->index;
	}
	
	int32_t index = values->size();
	putClass(index, utf8Index);
	$var(ConstantClass, value, getClass(index));
	putPos(key, value);
	return index;
}

ConstantClass* ConstantPool::getClass(int32_t index) {
	return $fcast<ConstantClass>($nullcheck(getBase(index)));
}

void ConstantPool::putString(int32_t index, int32_t utf8Index) {
	$var(ConstantString, value, $new<ConstantString>(index, utf8Index));
	if (index == values->size()) {
		values->add(value);
	} else if (index < values->size()) {
		values->set(index, value);
	} else {
		// TODO
	}
}

int32_t ConstantPool::putString(int32_t utf8Index) {
	$var($String, key, $concat($cstr("String."), $$str(utf8Index)));
	$var(ConstantBase, pos, getPos(key));
	if (pos != nullptr) {
		return pos->index;
	}
	
	int32_t index = values->size();
	putString(index, utf8Index);
	$var(ConstantString, value, getString(index));
	putPos(key, value);
	return index;
}

ConstantString* ConstantPool::getString(int32_t index) {
	return $fcast<ConstantString>($nullcheck(getBase(index)));
}

void ConstantPool::putFieldRef(int32_t index, int32_t classIndex, int32_t nameAndTypeIndex) {
	$var(ConstantFieldRef, value, $new<ConstantFieldRef>(index, classIndex, nameAndTypeIndex));
	if (index == values->size()) {
		values->add(value);
	} else if (index < values->size()) {
		values->set(index, value);
	} else {
		// TODO
	}
}

int32_t ConstantPool::putFieldRef(int32_t classIndex, int32_t nameAndTypeIndex) {
	$var($String, key, $String::valueOf({$cstr("FieldRef."), $$str(classIndex), $cstr("."), $$str(nameAndTypeIndex)}));
	$var(ConstantBase, pos, getPos(key));
	if (pos != nullptr) {
		return pos->index;
	}
	
	int32_t index = values->size();
	putFieldRef(index, classIndex, nameAndTypeIndex);
	$var(ConstantFieldRef, value, getFieldRef(index));
	putPos(key, value);
	return index;
}

ConstantFieldRef* ConstantPool::getFieldRef(int32_t index) {
	if (index == 0) {
		return nullptr;
	}
	return $fcast<ConstantFieldRef>($nullcheck(getBase(index)));
}

void ConstantPool::putMethodRef(int32_t index, int32_t classIndex, int32_t nameAndTypeIndex) {
	$var(ConstantMethodRef, value, $new<ConstantMethodRef>(index, classIndex, nameAndTypeIndex));
	if (index == values->size()) {
		values->add(value);
	} else if (index < values->size()) {
		values->set(index, value);
	} else {
		// TODO
	}
}

int32_t ConstantPool::putMethodRef(int32_t classIndex, int32_t nameAndTypeIndex) {
	$var($String, key, $String::valueOf({$cstr("MethodRef."), $$str(classIndex), $cstr("."), $$str(nameAndTypeIndex)}));
	$var(ConstantBase, pos, getPos(key));
	if (pos != nullptr) {
		return pos->index;
	}
	
	int32_t index = values->size();
	putMethodRef(index, classIndex, nameAndTypeIndex);
	$var(ConstantMethodRef, value, getMethodRef(index));
	putPos(key, value);
	return index;
}

ConstantMethodRef* ConstantPool::getMethodRef(int32_t index) {
	return $fcast<ConstantMethodRef>($nullcheck(getBase(index)));
}

void ConstantPool::putInterfaceMethodRef(int32_t index, int32_t classIndex, int32_t nameAndTypeIndex) {
	$var(ConstantInterfaceMethodRef, value, $new<ConstantInterfaceMethodRef>(index, classIndex, nameAndTypeIndex));
	if (index == values->size()) {
		values->add(value);
	} else if (index < values->size()) {
		values->set(index, value);
	} else {
		// TODO
	}
}

int32_t ConstantPool::putInterfaceMethodRef(int32_t classIndex, int32_t nameAndTypeIndex) {
	$var($String, key, $String::valueOf({$cstr("InterfaceMethodRef."), $$str(classIndex), $cstr("."), $$str(nameAndTypeIndex)}));
	$var(ConstantBase, pos, getPos(key));
	if (pos != nullptr) {
		return pos->index;
	}
	
	int32_t index = values->size();
	putInterfaceMethodRef(index, classIndex, nameAndTypeIndex);
	$var(ConstantInterfaceMethodRef, value, getInterfaceMethodRef(index));
	putPos(key, value);
	return index;
}

ConstantInterfaceMethodRef* ConstantPool::getInterfaceMethodRef(int32_t index) {
	return $fcast<ConstantInterfaceMethodRef>($nullcheck(getBase(index)));
}

void ConstantPool::putNameAndType(int32_t index, int32_t nameIndex, int32_t descriptorIndex) {
	$var(ConstantNameAndType, value, $new<ConstantNameAndType>(index, nameIndex, descriptorIndex));
	if (index == values->size()) {
		values->add(value);
	} else if (index < values->size()) {
		values->set(index, value);
	} else {
		// TODO
	}
}

int32_t ConstantPool::putNameAndType(int32_t nameIndex, int32_t descriptorIndex) {
	$var($String, key, $String::valueOf({$cstr("NameAndType."), $$str(nameIndex), $cstr("."), $$str(descriptorIndex)}));
	$var(ConstantBase, pos, getPos(key));
	if (pos != nullptr) {
		return pos->index;
	}
	
	int32_t index = values->size();
	putNameAndType(index, nameIndex, descriptorIndex);
	$var(ConstantNameAndType, value, getNameAndType(index));
	putPos(key, value);
	return index;
}

ConstantNameAndType* ConstantPool::getNameAndType(int32_t index) {
	return $fcast<ConstantNameAndType>($nullcheck(getBase(index)));
}

void ConstantPool::putMethodHandle(int32_t index, int8_t kind, int32_t referenceIndex) {
	$var(ConstantMethodHandle, value, $new<ConstantMethodHandle>(index, kind, referenceIndex));
	if (index == values->size()) {
		values->add(value);
	} else if (index < values->size()) {
		values->set(index, value);
	} else {
		// TODO
	}
}

int32_t ConstantPool::putMethodHandle(int8_t kind, int32_t referenceIndex) {
	$var($String, key, $String::valueOf({$cstr("MethodHandle."), $$str(kind), $cstr("."), $$str(referenceIndex)}));
	$var(ConstantBase, pos, getPos(key));
	if (pos != nullptr) {
		return pos->index;
	}
	
	int32_t index = values->size();
	putMethodHandle(index, kind, referenceIndex);
	$var(ConstantMethodHandle, value, $fcast<ConstantMethodHandle>(getBase(index)));
	putPos(key, value);
	return index;
}

ConstantMethodHandle* ConstantPool::getMethodHandle(int32_t index) {
	return $fcast<ConstantMethodHandle>($nullcheck(getBase(index)));
}

void ConstantPool::putMethodType(int32_t index, int32_t descriptorIndex) {
	$var(ConstantMethodType, value, $new<ConstantMethodType>(index, descriptorIndex));
	if (index == values->size()) {
		values->add(value);
	} else if (index < values->size()) {
		values->set(index, value);
	} else {
		// TODO
	}
}

int32_t ConstantPool::putMethodType(int32_t descriptorIndex) {
	$var($String, key, $String::valueOf({$cstr("MethodType."), $$str(descriptorIndex)}));
	$var(ConstantBase, pos, getPos(key));
	if (pos != nullptr) {
		return pos->index;
	}
	
	int32_t index = values->size();
	putMethodType(index, descriptorIndex);
	$var(ConstantMethodType, value, getMethodType(index));
	putPos(key, value);
	return index;
}

ConstantMethodType* ConstantPool::getMethodType(int32_t index) {
	return $fcast<ConstantMethodType>($nullcheck(getBase(index)));
}

void ConstantPool::putDynamic(int32_t index, int32_t bootstrapMethodAttrIndex, int32_t nameAndTypeIndex) {
	$var(ConstantDynamic, value, $new<ConstantDynamic>(index, bootstrapMethodAttrIndex, nameAndTypeIndex));
	if (index == values->size()) {
		values->add(value);
	} else if (index < values->size()) {
		values->set(index, value);
	} else {
		// TODO
	}
}

int32_t ConstantPool::putDynamic(int32_t bootstrapMethodAttrIndex, int32_t nameAndTypeIndex) {
	$var($String, key, $String::valueOf({$cstr("InvokeDynamic."), $$str(bootstrapMethodAttrIndex), $cstr("."), $$str(nameAndTypeIndex)}));
	$var(ConstantBase, pos, getPos(key));
	if (pos != nullptr) {
		return pos->index;
	}
	
	int32_t index = values->size();
	putDynamic(index, bootstrapMethodAttrIndex, nameAndTypeIndex);
	$var(ConstantDynamic, value, getDynamic(index));
	putPos(key, value);
	return index;
}

ConstantDynamic* ConstantPool::getDynamic(int32_t index) {
	return $fcast<ConstantDynamic>($nullcheck(getBase(index)));
}

void ConstantPool::putInvokeDynamic(int32_t index, int32_t bootstrapMethodAttrIndex, int32_t nameAndTypeIndex) {
	$var(ConstantInvokeDynamic, value, $new<ConstantInvokeDynamic>(index, bootstrapMethodAttrIndex, nameAndTypeIndex));
	if (index == values->size()) {
		values->add(value);
	} else if (index < values->size()) {
		values->set(index, value);
	} else {
		// TODO
	}
}

int32_t ConstantPool::putInvokeDynamic(int32_t bootstrapMethodAttrIndex, int32_t nameAndTypeIndex) {
	$var($String, key, $String::valueOf({$cstr("InvokeDynamic."), $$str(bootstrapMethodAttrIndex), $cstr("."), $$str(nameAndTypeIndex)}));
	$var(ConstantBase, pos, getPos(key));
	if (pos != nullptr) {
		return pos->index;
	}
	
	int32_t index = values->size();
	putInvokeDynamic(index, bootstrapMethodAttrIndex, nameAndTypeIndex);
	$var(ConstantInvokeDynamic, value, getInvokeDynamic(index));
	putPos(key, value);
	return index;
}

ConstantInvokeDynamic* ConstantPool::getInvokeDynamic(int32_t index) {
	return $fcast<ConstantInvokeDynamic>($nullcheck(getBase(index)));
}

void ConstantPool::putModule(int32_t index, int32_t nameIndex) {
	$var(ConstantModule, value, $new<ConstantModule>(index, nameIndex));
	if (index == values->size()) {
		values->add(value);
	} else if (index < values->size()) {
		values->set(index, value);
	} else {
		// TODO
	}
}

int32_t ConstantPool::putModule(int32_t nameIndex) {
	$var($String, key, $String::valueOf({$cstr("Module."), $$str(nameIndex)}));
	$var(ConstantBase, pos, getPos(key));
	if (pos != nullptr) {
		return pos->index;
	}
	
	int32_t index = values->size();
	putModule(index, nameIndex);
	$var(ConstantModule, value, getModule(index));
	putPos(key, value);
	return index;
}

ConstantModule* ConstantPool::getModule(int32_t index) {
	return $fcast<ConstantModule>($nullcheck(getBase(index)));
}

void ConstantPool::putPackage(int32_t index, int32_t nameIndex) {
	$var(ConstantPackage, value, $new<ConstantPackage>(index, nameIndex));
	if (index == values->size()) {
		values->add(value);
	} else if (index < values->size()) {
		values->set(index, value);
	} else {
		// TODO
	}
}

int32_t ConstantPool::putPackage(int32_t nameIndex) {
	$var($String, key, $String::valueOf({$cstr("Package."), $$str(nameIndex)}));
	$var(ConstantBase, pos, getPos(key));
	if (pos != nullptr) {
		return pos->index;
	}
	
	int32_t index = values->size();
	putPackage(index, nameIndex);
	$var(ConstantPackage, value, getPackage(index));
	putPos(key, value);
	return index;
}

ConstantPackage* ConstantPool::getPackage(int32_t index) {
	return $fcast<ConstantPackage>($nullcheck(getBase(index)));
}

int8_t ConstantPool::getTag(int32_t index) {
	$var(ConstantBase, base, getBase(index));
	return base->tagCode;
}

ConstantBase* ConstantPool::getBase(int32_t index) {
	return $fcast<ConstantBase>(values->get(index));
}

ConstantBase* ConstantPool::getPos($String* key) {
	return $fcast<ConstantBase>(keysToPos->get(key));
}

void ConstantPool::putPos($String* key, ConstantBase* value) {
	keysToPos->put(key, value);
}

ConstantPool* ConstantPool::decode(::java::io::DataInputStream* is) {
	$var(ConstantPool, cp, $new<ConstantPool>());
	int16_t num = is->readShort();

	for (int32_t i = 1; i < num; i++) {
		int8_t tag = is->readByte();

		int16_t min_classfile_format = 45; // 45.3
		switch (tag) {
		case ConstantPoolTag::CONSTANT_Utf8: {
			int16_t length = is->readShort();
			$var($bytes, bytes, is->readNBytes(length));
			$var($String, v, $new($String, bytes, "UTF-8"_s));
			cp->putUTF8(i, v);
			break;
		}
		case ConstantPoolTag::CONSTANT_Integer: {
			int32_t v = is->readInt();
			cp->putInt(i, v);
			break;
		}
		case ConstantPoolTag::CONSTANT_Float: {
			float v = is->readFloat();
			cp->putFloat(i, v);
			break;
		}
		case ConstantPoolTag::CONSTANT_Long: {
			int64_t v = is->readLong();
			cp->putLong(i, v);
			i++; // long and double take up two entries in the constant pool
			cp->putLong(i, v);
			break;
		}
		case ConstantPoolTag::CONSTANT_Double: {
			double v = is->readDouble();
			cp->putDouble(i, v);
			i++; // long and double take up two entries in the constant pool
			cp->putDouble(i, v);
			break;
		}
		case ConstantPoolTag::CONSTANT_Class: {
			int16_t nameIndex = is->readShort();
			cp->putClass(i, nameIndex);
			break;
		}
		case ConstantPoolTag::CONSTANT_String: {
			int16_t stringIndex = is->readShort();
			cp->putString(i, stringIndex);
			break;
		}
		case ConstantPoolTag::CONSTANT_Fieldref: {
			int16_t classIndex = is->readShort();
			int16_t nameAndTypeIndex = is->readShort();
			cp->putFieldRef(i, classIndex, nameAndTypeIndex);
			break;
		}
		case ConstantPoolTag::CONSTANT_Methodref: {
			int16_t classIndex = is->readShort();
			int16_t nameAndTypeIndex = is->readShort();
			cp->putMethodRef(i, classIndex, nameAndTypeIndex);
			break;
		}
		case ConstantPoolTag::CONSTANT_InterfaceMethodref: {
			int16_t classIndex = is->readShort();
			int16_t nameAndTypeIndex = is->readShort();
			cp->putInterfaceMethodRef(i, classIndex, nameAndTypeIndex);
			break;
		}
		case ConstantPoolTag::CONSTANT_NameAndType: {
			int16_t nameIndex = is->readShort();
			int16_t descriptorIndex = is->readShort();
			cp->putNameAndType(i, nameIndex, descriptorIndex);
			break;
		}
		case ConstantPoolTag::CONSTANT_MethodHandle: {
			min_classfile_format = 51;

		//	CONSTANT_MethodHandle_info* info = new CONSTANT_MethodHandle_info();
		//	u1 kind = is->readByte();// eat_u1();
			int8_t kind = is->readByte();
		//	if (kind < 1 || kind > 9)
		//		throw ParseError("Invalid method handle kind: " + std::to_string(kind));
		//	info->reference_kind = static_cast<MethodHandleKind>(kind);
			int16_t referenceIndex = is->readShort();
			cp->putMethodHandle(i, kind, referenceIndex);
			break;
		}
		case ConstantPoolTag::CONSTANT_MethodType: {
			min_classfile_format = 51;
			int16_t descriptorIndex = is->readShort();
			cp->putMethodType(i, descriptorIndex);
			break;
		}
		case ConstantPoolTag::CONSTANT_Dynamic: {
			min_classfile_format = 55;

			int16_t bootstrapMethodAttrIndex = is->readShort();// eat_u2();
			//if (constantPool->highest_parsed_bootstrap_method_attr_index < info->bootstrap_method_attr_index) {
			//	constantPool->highest_parsed_bootstrap_method_attr_index = info->bootstrap_method_attr_index;
			//}
			//highest_parsed_bootstrap_method_attr_index = ::max(highest_parsed_bootstrap_method_attr_index,
			//	(int)info->bootstrap_method_attr_index);
			int16_t nameAndTypeIndex = is->readShort(); //eat_cp_index();
			cp->putDynamic(i, bootstrapMethodAttrIndex, nameAndTypeIndex);
			break;
		}
		case ConstantPoolTag::CONSTANT_InvokeDynamic: {
			min_classfile_format = 55;

			int16_t bootstrapMethodAttrIndex = is->readShort();// eat_u2();
			//if (constantPool->highest_parsed_bootstrap_method_attr_index < info->bootstrap_method_attr_index) {
			//	constantPool->highest_parsed_bootstrap_method_attr_index = info->bootstrap_method_attr_index;
			//}
			//highest_parsed_bootstrap_method_attr_index = ::max(highest_parsed_bootstrap_method_attr_index,
			//	(int)info->bootstrap_method_attr_index);
			int16_t nameAndTypeIndex = is->readShort(); //eat_cp_index();
			cp->putInvokeDynamic(i, bootstrapMethodAttrIndex, nameAndTypeIndex);
			break;
		}
		case ConstantPoolTag::CONSTANT_Module: {
			min_classfile_format = 53;

			int16_t nameIndex = is->readShort();
			cp->putModule(i, nameIndex);
			break;
		}
		case ConstantPoolTag::CONSTANT_Package: {
			min_classfile_format = 53;
			int16_t nameIndex = is->readShort();
			cp->putPackage(i, nameIndex);
			break;
		}
		default:
			$throwNew(IllegalArgumentException, "Unexpected constant pool tag"_s);
		}
		//if (min_classfile_format > major_version) {
		//	throw ParseError("Constant pool entry did not exist in this classfile version");
		//}
	//	result.table.emplace_back(cpi);
	}

	cp->init();

	return cp;
}

void ConstantPool::init() {
	for (int32_t i = 1; i < values->size(); i++) {
		$var(ConstantBase, value, getBase(i));
		$nullcheck(value)->init(this);
	}
}

$Class* ConstantPool::load$($String* name, bool initialize) {
	$loadClass(ConstantPool, name, initialize, &_ConstantPool_ClassInfo_, clinit$ConstantPool, allocate$ConstantPool);
	return class$;
}

$Class* ConstantPool::class$ = nullptr;

		} // reflect
	} // internal
} // jdk