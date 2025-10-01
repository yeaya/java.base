#ifndef _java_util_OptionalDouble_h_
#define _java_util_OptionalDouble_h_
//$ class java.util.OptionalDouble
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
			class DoubleConsumer;
			class DoubleSupplier;
			class Supplier;
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class DoubleStream;
		}
	}
}

namespace java {
	namespace util {

class $import OptionalDouble : public ::java::lang::Object {
	$class(OptionalDouble, 0, ::java::lang::Object)
public:
	OptionalDouble();
	void init$();
	void init$(double value);
	static ::java::util::OptionalDouble* empty();
	virtual bool equals(Object$* obj) override;
	double getAsDouble();
	virtual int32_t hashCode() override;
	void ifPresent(::java::util::function::DoubleConsumer* action);
	void ifPresentOrElse(::java::util::function::DoubleConsumer* action, ::java::lang::Runnable* emptyAction);
	bool isEmpty();
	bool isPresent();
	static ::java::util::OptionalDouble* of(double value);
	double orElse(double other);
	double orElseGet(::java::util::function::DoubleSupplier* supplier);
	double orElseThrow();
	double orElseThrow(::java::util::function::Supplier* exceptionSupplier);
	::java::util::stream::DoubleStream* stream();
	virtual $String* toString() override;
	static ::java::util::OptionalDouble* EMPTY;
	bool isPresent$ = false;
	double value = 0.0;
};

	} // util
} // java

#pragma pop_macro("EMPTY")

#endif // _java_util_OptionalDouble_h_