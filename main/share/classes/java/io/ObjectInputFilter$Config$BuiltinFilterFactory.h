#ifndef _java_io_ObjectInputFilter$Config$BuiltinFilterFactory_h_
#define _java_io_ObjectInputFilter$Config$BuiltinFilterFactory_h_
//$ class java.io.ObjectInputFilter$Config$BuiltinFilterFactory
//$ extends java.util.function.BinaryOperator

#include <java/util/function/BinaryOperator.h>

namespace java {
	namespace io {
		class ObjectInputFilter;
	}
}

namespace java {
	namespace io {

class ObjectInputFilter$Config$BuiltinFilterFactory : public ::java::util::function::BinaryOperator {
	$class(ObjectInputFilter$Config$BuiltinFilterFactory, $NO_CLASS_INIT, ::java::util::function::BinaryOperator)
public:
	ObjectInputFilter$Config$BuiltinFilterFactory();
	void init$();
	::java::io::ObjectInputFilter* apply(::java::io::ObjectInputFilter* oldFilter, ::java::io::ObjectInputFilter* newFilter);
	virtual $Object* apply(Object$* oldFilter, Object$* newFilter) override;
	virtual $String* toString() override;
};

	} // io
} // java

#endif // _java_io_ObjectInputFilter$Config$BuiltinFilterFactory_h_