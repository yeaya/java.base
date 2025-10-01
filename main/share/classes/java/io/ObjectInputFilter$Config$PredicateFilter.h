#ifndef _java_io_ObjectInputFilter$Config$PredicateFilter_h_
#define _java_io_ObjectInputFilter$Config$PredicateFilter_h_
//$ class java.io.ObjectInputFilter$Config$PredicateFilter
//$ extends java.io.ObjectInputFilter

#include <java/io/ObjectInputFilter.h>

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

class ObjectInputFilter$Config$PredicateFilter : public ::java::io::ObjectInputFilter {
	$class(ObjectInputFilter$Config$PredicateFilter, $NO_CLASS_INIT, ::java::io::ObjectInputFilter)
public:
	ObjectInputFilter$Config$PredicateFilter();
	void init$(::java::util::function::Predicate* predicate, ::java::io::ObjectInputFilter$Status* ifTrueStatus, ::java::io::ObjectInputFilter$Status* ifFalseStatus);
	virtual ::java::io::ObjectInputFilter$Status* checkInput(::java::io::ObjectInputFilter$FilterInfo* info) override;
	virtual $String* toString() override;
	::java::util::function::Predicate* predicate = nullptr;
	::java::io::ObjectInputFilter$Status* ifTrueStatus = nullptr;
	::java::io::ObjectInputFilter$Status* ifFalseStatus = nullptr;
};

	} // io
} // java

#endif // _java_io_ObjectInputFilter$Config$PredicateFilter_h_