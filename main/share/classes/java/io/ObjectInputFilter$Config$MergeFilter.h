#ifndef _java_io_ObjectInputFilter$Config$MergeFilter_h_
#define _java_io_ObjectInputFilter$Config$MergeFilter_h_
//$ class java.io.ObjectInputFilter$Config$MergeFilter
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

class ObjectInputFilter$Config$MergeFilter : public ::java::io::ObjectInputFilter {
	$class(ObjectInputFilter$Config$MergeFilter, $NO_CLASS_INIT, ::java::io::ObjectInputFilter)
public:
	ObjectInputFilter$Config$MergeFilter();
	void init$(::java::io::ObjectInputFilter* first, ::java::io::ObjectInputFilter* second);
	virtual ::java::io::ObjectInputFilter$Status* checkInput(::java::io::ObjectInputFilter$FilterInfo* info) override;
	virtual $String* toString() override;
	::java::io::ObjectInputFilter* first = nullptr;
	::java::io::ObjectInputFilter* second = nullptr;
};

	} // io
} // java

#endif // _java_io_ObjectInputFilter$Config$MergeFilter_h_