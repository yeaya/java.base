#ifndef _java_io_ObjectInputFilter_h_
#define _java_io_ObjectInputFilter_h_
//$ interface java.io.ObjectInputFilter
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class ObjectInputFilter$FilterInfo;
		class ObjectInputFilter$Status;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Predicate;
		}
	}
}

namespace java {
	namespace io {

class $export ObjectInputFilter : public ::java::lang::Object {
	$interface(ObjectInputFilter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	static ::java::io::ObjectInputFilter* allowFilter(::java::util::function::Predicate* predicate, ::java::io::ObjectInputFilter$Status* otherStatus);
	virtual ::java::io::ObjectInputFilter$Status* checkInput(::java::io::ObjectInputFilter$FilterInfo* filterInfo) {return nullptr;}
	static ::java::io::ObjectInputFilter* merge(::java::io::ObjectInputFilter* filter, ::java::io::ObjectInputFilter* anotherFilter);
	static ::java::io::ObjectInputFilter* rejectFilter(::java::util::function::Predicate* predicate, ::java::io::ObjectInputFilter$Status* otherStatus);
	static ::java::io::ObjectInputFilter* rejectUndecidedClass(::java::io::ObjectInputFilter* filter);
};

	} // io
} // java

#endif // _java_io_ObjectInputFilter_h_