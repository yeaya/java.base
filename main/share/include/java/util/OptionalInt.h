#ifndef _java_util_OptionalInt_h_
#define _java_util_OptionalInt_h_
//$ class java.util.OptionalInt
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("EMPTY")
#undef EMPTY

namespace java {
	namespace lang {
		class Runnable;
	}
}
namespace java {
	namespace util {
		namespace function {
			class IntConsumer;
			class IntSupplier;
			class Supplier;
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class IntStream;
		}
	}
}

namespace java {
	namespace util {

class $import OptionalInt : public ::java::lang::Object {
	$class(OptionalInt, 0, ::java::lang::Object)
public:
	OptionalInt();
	void init$();
	void init$(int32_t value);
	static ::java::util::OptionalInt* empty();
	virtual bool equals(Object$* obj) override;
	int32_t getAsInt();
	virtual int32_t hashCode() override;
	void ifPresent(::java::util::function::IntConsumer* action);
	void ifPresentOrElse(::java::util::function::IntConsumer* action, ::java::lang::Runnable* emptyAction);
	bool isEmpty();
	bool isPresent();
	static ::java::util::OptionalInt* of(int32_t value);
	int32_t orElse(int32_t other);
	int32_t orElseGet(::java::util::function::IntSupplier* supplier);
	int32_t orElseThrow();
	int32_t orElseThrow(::java::util::function::Supplier* exceptionSupplier);
	::java::util::stream::IntStream* stream();
	virtual $String* toString() override;
	static ::java::util::OptionalInt* EMPTY;
	bool isPresent$ = false;
	int32_t value = 0;
};

	} // util
} // java

#pragma pop_macro("EMPTY")

#endif // _java_util_OptionalInt_h_