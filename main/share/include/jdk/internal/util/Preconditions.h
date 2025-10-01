#ifndef _jdk_internal_util_Preconditions_h_
#define _jdk_internal_util_Preconditions_h_
//$ class jdk.internal.util.Preconditions
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class Number;
		class RuntimeException;
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace java {
	namespace util {
		namespace function {
			class BiFunction;
			class Function;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace util {

class $import Preconditions : public ::java::lang::Object {
	$class(Preconditions, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Preconditions();
	void init$();
	static int32_t checkFromIndexSize(int32_t fromIndex, int32_t size, int32_t length, ::java::util::function::BiFunction* oobef);
	static int64_t checkFromIndexSize(int64_t fromIndex, int64_t size, int64_t length, ::java::util::function::BiFunction* oobef);
	static int32_t checkFromToIndex(int32_t fromIndex, int32_t toIndex, int32_t length, ::java::util::function::BiFunction* oobef);
	static int64_t checkFromToIndex(int64_t fromIndex, int64_t toIndex, int64_t length, ::java::util::function::BiFunction* oobef);
	static int32_t checkIndex(int32_t index, int32_t length, ::java::util::function::BiFunction* oobef);
	static int64_t checkIndex(int64_t index, int64_t length, ::java::util::function::BiFunction* oobef);
	static ::java::lang::RuntimeException* outOfBounds(::java::util::function::BiFunction* oobef, $String* checkKind, $Array<::java::lang::Number>* args);
	static ::java::lang::RuntimeException* outOfBoundsCheckFromIndexSize(::java::util::function::BiFunction* oobe, int32_t fromIndex, int32_t size, int32_t length);
	static ::java::lang::RuntimeException* outOfBoundsCheckFromIndexSize(::java::util::function::BiFunction* oobe, int64_t fromIndex, int64_t size, int64_t length);
	static ::java::lang::RuntimeException* outOfBoundsCheckFromToIndex(::java::util::function::BiFunction* oobe, int32_t fromIndex, int32_t toIndex, int32_t length);
	static ::java::lang::RuntimeException* outOfBoundsCheckFromToIndex(::java::util::function::BiFunction* oobe, int64_t fromIndex, int64_t toIndex, int64_t length);
	static ::java::lang::RuntimeException* outOfBoundsCheckIndex(::java::util::function::BiFunction* oobe, int32_t index, int32_t length);
	static ::java::lang::RuntimeException* outOfBoundsCheckIndex(::java::util::function::BiFunction* oobe, int64_t index, int64_t length);
	static ::java::util::function::BiFunction* outOfBoundsExceptionFormatter(::java::util::function::Function* f);
	static $String* outOfBoundsMessage($String* checkKind, ::java::util::List* args);
};

		} // util
	} // internal
} // jdk

#endif // _jdk_internal_util_Preconditions_h_