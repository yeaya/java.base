#include <jdk/internal/reflect/FieldAccessor.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace reflect {

$MethodInfo _FieldAccessor_MethodInfo_[] = {
	{"get", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FieldAccessor, get, $Object*, Object$*), "java.lang.IllegalArgumentException"},
	{"getBoolean", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FieldAccessor, getBoolean, bool, Object$*), "java.lang.IllegalArgumentException"},
	{"getByte", "(Ljava/lang/Object;)B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FieldAccessor, getByte, int8_t, Object$*), "java.lang.IllegalArgumentException"},
	{"getChar", "(Ljava/lang/Object;)C", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FieldAccessor, getChar, char16_t, Object$*), "java.lang.IllegalArgumentException"},
	{"getDouble", "(Ljava/lang/Object;)D", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FieldAccessor, getDouble, double, Object$*), "java.lang.IllegalArgumentException"},
	{"getFloat", "(Ljava/lang/Object;)F", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FieldAccessor, getFloat, float, Object$*), "java.lang.IllegalArgumentException"},
	{"getInt", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FieldAccessor, getInt, int32_t, Object$*), "java.lang.IllegalArgumentException"},
	{"getLong", "(Ljava/lang/Object;)J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FieldAccessor, getLong, int64_t, Object$*), "java.lang.IllegalArgumentException"},
	{"getShort", "(Ljava/lang/Object;)S", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FieldAccessor, getShort, int16_t, Object$*), "java.lang.IllegalArgumentException"},
	{"set", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FieldAccessor, set, void, Object$*, Object$*), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setBoolean", "(Ljava/lang/Object;Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FieldAccessor, setBoolean, void, Object$*, bool), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setByte", "(Ljava/lang/Object;B)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FieldAccessor, setByte, void, Object$*, int8_t), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setChar", "(Ljava/lang/Object;C)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FieldAccessor, setChar, void, Object$*, char16_t), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setDouble", "(Ljava/lang/Object;D)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FieldAccessor, setDouble, void, Object$*, double), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setFloat", "(Ljava/lang/Object;F)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FieldAccessor, setFloat, void, Object$*, float), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setInt", "(Ljava/lang/Object;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FieldAccessor, setInt, void, Object$*, int32_t), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setLong", "(Ljava/lang/Object;J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FieldAccessor, setLong, void, Object$*, int64_t), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{"setShort", "(Ljava/lang/Object;S)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FieldAccessor, setShort, void, Object$*, int16_t), "java.lang.IllegalArgumentException,java.lang.IllegalAccessException"},
	{}
};

$ClassInfo _FieldAccessor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.reflect.FieldAccessor",
	nullptr,
	nullptr,
	nullptr,
	_FieldAccessor_MethodInfo_
};

$Object* allocate$FieldAccessor($Class* clazz) {
	return $of($alloc(FieldAccessor));
}

$Class* FieldAccessor::load$($String* name, bool initialize) {
	$loadClass(FieldAccessor, name, initialize, &_FieldAccessor_ClassInfo_, allocate$FieldAccessor);
	return class$;
}

$Class* FieldAccessor::class$ = nullptr;

		} // reflect
	} // internal
} // jdk