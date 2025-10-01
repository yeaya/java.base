#ifndef _java_util_Optional_h_
#define _java_util_Optional_h_
//$ class java.util.Optional
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
			class Consumer;
			class Function;
			class Predicate;
			class Supplier;
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class Stream;
		}
	}
}

namespace java {
	namespace util {

class $import Optional : public ::java::lang::Object {
	$class(Optional, $PRELOAD, ::java::lang::Object)
public:
	Optional();
	void init$(Object$* value);
	static ::java::util::Optional* empty();
	virtual bool equals(Object$* obj) override;
	::java::util::Optional* filter(::java::util::function::Predicate* predicate);
	::java::util::Optional* flatMap(::java::util::function::Function* mapper);
	$Object* get();
	virtual int32_t hashCode() override;
	void ifPresent(::java::util::function::Consumer* action);
	void ifPresentOrElse(::java::util::function::Consumer* action, ::java::lang::Runnable* emptyAction);
	bool isEmpty();
	bool isPresent();
	::java::util::Optional* map(::java::util::function::Function* mapper);
	static ::java::util::Optional* of(Object$* value);
	static ::java::util::Optional* ofNullable(Object$* value);
	::java::util::Optional* or$(::java::util::function::Supplier* supplier);
	$Object* orElse(Object$* other);
	$Object* orElseGet(::java::util::function::Supplier* supplier);
	$Object* orElseThrow();
	$Object* orElseThrow(::java::util::function::Supplier* exceptionSupplier);
	::java::util::stream::Stream* stream();
	virtual $String* toString() override;
	static ::java::util::Optional* EMPTY;
	$Object* value = nullptr;
};

	} // util
} // java

#pragma pop_macro("EMPTY")

#endif // _java_util_Optional_h_