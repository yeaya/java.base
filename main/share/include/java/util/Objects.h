#ifndef _java_util_Objects_h_
#define _java_util_Objects_h_
//$ class java.util.Objects
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Comparator;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Supplier;
		}
	}
}

namespace java {
	namespace util {

class $import Objects : public ::java::lang::Object {
	$class(Objects, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Objects();
	using ::java::lang::Object::hashCode;
	using ::java::lang::Object::equals;
	void init$();
	static int32_t checkFromIndexSize(int32_t fromIndex, int32_t size, int32_t length);
	static int64_t checkFromIndexSize(int64_t fromIndex, int64_t size, int64_t length);
	static int32_t checkFromToIndex(int32_t fromIndex, int32_t toIndex, int32_t length);
	static int64_t checkFromToIndex(int64_t fromIndex, int64_t toIndex, int64_t length);
	static int32_t checkIndex(int32_t index, int32_t length);
	static int64_t checkIndex(int64_t index, int64_t length);
	static int32_t compare(Object$* a, Object$* b, ::java::util::Comparator* c);
	static bool deepEquals(Object$* a, Object$* b);
	static bool equals(Object$* a, Object$* b);
	static int32_t hash($ObjectArray* values);
	static int32_t hashCode(Object$* o);
	static bool isNull(Object$* obj);
	static bool nonNull(Object$* obj);
	static $Object* requireNonNull(Object$* obj);
	static $Object* requireNonNull(Object$* obj, $String* message);
	static $Object* requireNonNull(Object$* obj, ::java::util::function::Supplier* messageSupplier);
	static $Object* requireNonNullElse(Object$* obj, Object$* defaultObj);
	static $Object* requireNonNullElseGet(Object$* obj, ::java::util::function::Supplier* supplier);
	using ::java::lang::Object::toString;
	static $String* toString(Object$* o);
	static $String* toString(Object$* o, $String* nullDefault);
};

	} // util
} // java

#endif // _java_util_Objects_h_