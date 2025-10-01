#ifndef _java_io_ObjectInputFilter$Config$RejectUndecidedFilter_h_
#define _java_io_ObjectInputFilter$Config$RejectUndecidedFilter_h_
//$ class java.io.ObjectInputFilter$Config$RejectUndecidedFilter
//$ extends java.io.ObjectInputFilter

#include <java/io/ObjectInputFilter.h>

namespace java {
	namespace io {
		class ObjectInputFilter$FilterInfo;
		class ObjectInputFilter$Status;
	}
}

namespace java {
	namespace io {

class ObjectInputFilter$Config$RejectUndecidedFilter : public ::java::io::ObjectInputFilter {
	$class(ObjectInputFilter$Config$RejectUndecidedFilter, $NO_CLASS_INIT, ::java::io::ObjectInputFilter)
public:
	ObjectInputFilter$Config$RejectUndecidedFilter();
	void init$(::java::io::ObjectInputFilter* filter);
	virtual ::java::io::ObjectInputFilter$Status* checkInput(::java::io::ObjectInputFilter$FilterInfo* info) override;
	virtual $String* toString() override;
	::java::io::ObjectInputFilter* filter = nullptr;
};

	} // io
} // java

#endif // _java_io_ObjectInputFilter$Config$RejectUndecidedFilter_h_