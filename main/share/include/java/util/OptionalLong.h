#ifndef _java_util_OptionalLong_h_
#define _java_util_OptionalLong_h_
//$ class java.util.OptionalLong
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
			class LongConsumer;
			class LongSupplier;
			class Supplier;
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class LongStream;
		}
	}
}

namespace java {
	namespace util {

class $import OptionalLong : public ::java::lang::Object {
	$class(OptionalLong, 0, ::java::lang::Object)
public:
	OptionalLong();
	void init$();
	void init$(int64_t value);
	static ::java::util::OptionalLong* empty();
	virtual bool equals(Object$* obj) override;
	int64_t getAsLong();
	virtual int32_t hashCode() override;
	void ifPresent(::java::util::function::LongConsumer* action);
	void ifPresentOrElse(::java::util::function::LongConsumer* action, ::java::lang::Runnable* emptyAction);
	bool isEmpty();
	bool isPresent();
	static ::java::util::OptionalLong* of(int64_t value);
	int64_t orElse(int64_t other);
	int64_t orElseGet(::java::util::function::LongSupplier* supplier);
	int64_t orElseThrow();
	int64_t orElseThrow(::java::util::function::Supplier* exceptionSupplier);
	::java::util::stream::LongStream* stream();
	virtual $String* toString() override;
	static ::java::util::OptionalLong* EMPTY;
	bool isPresent$ = false;
	int64_t value = 0;
};

	} // util
} // java

#pragma pop_macro("EMPTY")

#endif // _java_util_OptionalLong_h_