#include <java/lang/reflect/Array.h>

#include <jcpp.h>

#include <java/lang/Array.h>
#include <java/lang/Integer.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/invoke/TypeDescriptor$OfField.h>
#include <java/lang/Machine.h>

using namespace ::java::lang;

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace reflect {

$CompoundAttribute _Array_MethodAnnotations_getLength8[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Array_MethodAnnotations_newArray12[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$MethodInfo _Array_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Array::*)()>(&Array::init$))},
	{"get", "(Ljava/lang/Object;I)Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $NATIVE, $method(static_cast<$Object*(*)(Object$*,int32_t)>(&Array::get)), "java.lang.IllegalArgumentException,java.lang.ArrayIndexOutOfBoundsException"},
	{"getBoolean", "(Ljava/lang/Object;I)Z", nullptr, $PUBLIC | $STATIC | $NATIVE, $method(static_cast<bool(*)(Object$*,int32_t)>(&Array::getBoolean)), "java.lang.IllegalArgumentException,java.lang.ArrayIndexOutOfBoundsException"},
	{"getByte", "(Ljava/lang/Object;I)B", nullptr, $PUBLIC | $STATIC | $NATIVE, $method(static_cast<int8_t(*)(Object$*,int32_t)>(&Array::getByte)), "java.lang.IllegalArgumentException,java.lang.ArrayIndexOutOfBoundsException"},
	{"getChar", "(Ljava/lang/Object;I)C", nullptr, $PUBLIC | $STATIC | $NATIVE, $method(static_cast<char16_t(*)(Object$*,int32_t)>(&Array::getChar)), "java.lang.IllegalArgumentException,java.lang.ArrayIndexOutOfBoundsException"},
	{"getDouble", "(Ljava/lang/Object;I)D", nullptr, $PUBLIC | $STATIC | $NATIVE, $method(static_cast<double(*)(Object$*,int32_t)>(&Array::getDouble)), "java.lang.IllegalArgumentException,java.lang.ArrayIndexOutOfBoundsException"},
	{"getFloat", "(Ljava/lang/Object;I)F", nullptr, $PUBLIC | $STATIC | $NATIVE, $method(static_cast<float(*)(Object$*,int32_t)>(&Array::getFloat)), "java.lang.IllegalArgumentException,java.lang.ArrayIndexOutOfBoundsException"},
	{"getInt", "(Ljava/lang/Object;I)I", nullptr, $PUBLIC | $STATIC | $NATIVE, $method(static_cast<int32_t(*)(Object$*,int32_t)>(&Array::getInt)), "java.lang.IllegalArgumentException,java.lang.ArrayIndexOutOfBoundsException"},
	{"getLength", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $STATIC | $NATIVE, $method(static_cast<int32_t(*)(Object$*)>(&Array::getLength)), "java.lang.IllegalArgumentException", nullptr, _Array_MethodAnnotations_getLength8},
	{"getLong", "(Ljava/lang/Object;I)J", nullptr, $PUBLIC | $STATIC | $NATIVE, $method(static_cast<int64_t(*)(Object$*,int32_t)>(&Array::getLong)), "java.lang.IllegalArgumentException,java.lang.ArrayIndexOutOfBoundsException"},
	{"getShort", "(Ljava/lang/Object;I)S", nullptr, $PUBLIC | $STATIC | $NATIVE, $method(static_cast<int16_t(*)(Object$*,int32_t)>(&Array::getShort)), "java.lang.IllegalArgumentException,java.lang.ArrayIndexOutOfBoundsException"},
	{"multiNewArray", "(Ljava/lang/Class;[I)Ljava/lang/Object;", "(Ljava/lang/Class<*>;[I)Ljava/lang/Object;", $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$Object*(*)($Class*,$ints*)>(&Array::multiNewArray)), "java.lang.IllegalArgumentException,java.lang.NegativeArraySizeException"},
	{"newArray", "(Ljava/lang/Class;I)Ljava/lang/Object;", "(Ljava/lang/Class<*>;I)Ljava/lang/Object;", $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$Object*(*)($Class*,int32_t)>(&Array::newArray)), "java.lang.NegativeArraySizeException", nullptr, _Array_MethodAnnotations_newArray12},
	{"newInstance", "(Ljava/lang/Class;I)Ljava/lang/Object;", "(Ljava/lang/Class<*>;I)Ljava/lang/Object;", $PUBLIC | $STATIC, $method(static_cast<$Object*(*)($Class*,int32_t)>(&Array::newInstance)), "java.lang.NegativeArraySizeException"},
	{"newInstance", "(Ljava/lang/Class;[I)Ljava/lang/Object;", "(Ljava/lang/Class<*>;[I)Ljava/lang/Object;", $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<$Object*(*)($Class*,$ints*)>(&Array::newInstance)), "java.lang.IllegalArgumentException,java.lang.NegativeArraySizeException"},
	{"set", "(Ljava/lang/Object;ILjava/lang/Object;)V", nullptr, $PUBLIC | $STATIC | $NATIVE, $method(static_cast<void(*)(Object$*,int32_t,Object$*)>(&Array::set)), "java.lang.IllegalArgumentException,java.lang.ArrayIndexOutOfBoundsException"},
	{"setBoolean", "(Ljava/lang/Object;IZ)V", nullptr, $PUBLIC | $STATIC | $NATIVE, $method(static_cast<void(*)(Object$*,int32_t,bool)>(&Array::setBoolean)), "java.lang.IllegalArgumentException,java.lang.ArrayIndexOutOfBoundsException"},
	{"setByte", "(Ljava/lang/Object;IB)V", nullptr, $PUBLIC | $STATIC | $NATIVE, $method(static_cast<void(*)(Object$*,int32_t,int8_t)>(&Array::setByte)), "java.lang.IllegalArgumentException,java.lang.ArrayIndexOutOfBoundsException"},
	{"setChar", "(Ljava/lang/Object;IC)V", nullptr, $PUBLIC | $STATIC | $NATIVE, $method(static_cast<void(*)(Object$*,int32_t,char16_t)>(&Array::setChar)), "java.lang.IllegalArgumentException,java.lang.ArrayIndexOutOfBoundsException"},
	{"setDouble", "(Ljava/lang/Object;ID)V", nullptr, $PUBLIC | $STATIC | $NATIVE, $method(static_cast<void(*)(Object$*,int32_t,double)>(&Array::setDouble)), "java.lang.IllegalArgumentException,java.lang.ArrayIndexOutOfBoundsException"},
	{"setFloat", "(Ljava/lang/Object;IF)V", nullptr, $PUBLIC | $STATIC | $NATIVE, $method(static_cast<void(*)(Object$*,int32_t,float)>(&Array::setFloat)), "java.lang.IllegalArgumentException,java.lang.ArrayIndexOutOfBoundsException"},
	{"setInt", "(Ljava/lang/Object;II)V", nullptr, $PUBLIC | $STATIC | $NATIVE, $method(static_cast<void(*)(Object$*,int32_t,int32_t)>(&Array::setInt)), "java.lang.IllegalArgumentException,java.lang.ArrayIndexOutOfBoundsException"},
	{"setLong", "(Ljava/lang/Object;IJ)V", nullptr, $PUBLIC | $STATIC | $NATIVE, $method(static_cast<void(*)(Object$*,int32_t,int64_t)>(&Array::setLong)), "java.lang.IllegalArgumentException,java.lang.ArrayIndexOutOfBoundsException"},
	{"setShort", "(Ljava/lang/Object;IS)V", nullptr, $PUBLIC | $STATIC | $NATIVE, $method(static_cast<void(*)(Object$*,int32_t,int16_t)>(&Array::setShort)), "java.lang.IllegalArgumentException,java.lang.ArrayIndexOutOfBoundsException"},
	{}
};

#define _METHOD_INDEX_get 1
#define _METHOD_INDEX_getBoolean 2
#define _METHOD_INDEX_getByte 3
#define _METHOD_INDEX_getChar 4
#define _METHOD_INDEX_getDouble 5
#define _METHOD_INDEX_getFloat 6
#define _METHOD_INDEX_getInt 7
#define _METHOD_INDEX_getLength 8
#define _METHOD_INDEX_getLong 9
#define _METHOD_INDEX_getShort 10
#define _METHOD_INDEX_multiNewArray 11
#define _METHOD_INDEX_newArray 12
#define _METHOD_INDEX_set 15
#define _METHOD_INDEX_setBoolean 16
#define _METHOD_INDEX_setByte 17
#define _METHOD_INDEX_setChar 18
#define _METHOD_INDEX_setDouble 19
#define _METHOD_INDEX_setFloat 20
#define _METHOD_INDEX_setInt 21
#define _METHOD_INDEX_setLong 22
#define _METHOD_INDEX_setShort 23

$ClassInfo _Array_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.lang.reflect.Array",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Array_MethodInfo_
};

$Object* allocate$Array($Class* clazz) {
	return $of($alloc(Array));
}

void Array::init$() {
}

$Object* Array::newInstance($Class* componentType, int32_t length) {
	return $of(newArray(componentType, length));
}

$Object* Array::newInstance($Class* componentType, $ints* dimensions) {
	return $of(multiNewArray(componentType, dimensions));
}

int32_t Array::getLength(Object$* array) {
	BaseArray* ba = $fcast<BaseArray>($nullcheck(array));
	return ba->length;
}

$Object* Array::get(Object$* array, int32_t index) {
	return $fcast<ObjectArray>(array)->get(index);
}

bool Array::getBoolean(Object$* array, int32_t index) {
	return $fcast<BooleanArray>(array)->get(index);
}

int8_t Array::getByte(Object$* array, int32_t index) {
	return $fcast<ByteArray>(array)->get(index);
}

char16_t Array::getChar(Object$* array, int32_t index) {
	return $fcast<CharArray>(array)->get(index);
}

int16_t Array::getShort(Object$* array, int32_t index) {
	return $fcast<ShortArray>(array)->get(index);
}

int32_t Array::getInt(Object$* array, int32_t index) {
	return $fcast<IntArray>(array)->get(index);
}

int64_t Array::getLong(Object$* array, int32_t index) {
	return $fcast<LongArray>(array)->get(index);
}

float Array::getFloat(Object$* array, int32_t index) {
	return $fcast<FloatArray>(array)->get(index);
}

double Array::getDouble(Object$* array, int32_t index) {
	return $fcast<DoubleArray>(array)->get(index);
}

void Array::set(Object$* array, int32_t index, Object$* value) {
	$fcast<$ObjectArray>(array)->set(index, value);
}

void Array::setBoolean(Object$* array, int32_t index, bool z) {
	$fcast<BooleanArray>(array)->set(index, z);
}

void Array::setByte(Object$* array, int32_t index, int8_t b) {
	$fcast<ByteArray>(array)->set(index, b);
}

void Array::setChar(Object$* array, int32_t index, char16_t c) {
	$fcast<CharArray>(array)->set(index, c);
}

void Array::setShort(Object$* array, int32_t index, int16_t s) {
	$fcast<ShortArray>(array)->set(index, s);
}

void Array::setInt(Object$* array, int32_t index, int32_t i) {
	$fcast<IntArray>(array)->set(index, i);
}

void Array::setLong(Object$* array, int32_t index, int64_t l) {
	$fcast<LongArray>(array)->set(index, l);
}

void Array::setFloat(Object$* array, int32_t index, float f) {
	$fcast<FloatArray>(array)->set(index, f);
}

void Array::setDouble(Object$* array, int32_t index, double d) {
	$fcast<DoubleArray>(array)->set(index, d);
}

$Object* Array::newArray($Class* componentType, int32_t length) {
	return ObjectManager::newArray(componentType, length);
}

$Object* Array::multiNewArray($Class* componentType, $ints* dimensions) {
	return ObjectManager::newMultiArray(componentType, dimensions);
}

Array::Array() {
}

$Class* Array::load$($String* name, bool initialize) {
	$loadClass(Array, name, initialize, &_Array_ClassInfo_, allocate$Array);
	return class$;
}

$Class* Array::class$ = nullptr;

		} // reflect
	} // lang
} // java