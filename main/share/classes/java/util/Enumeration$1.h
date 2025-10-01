#ifndef _java_util_Enumeration$1_h_
#define _java_util_Enumeration$1_h_
//$ class java.util.Enumeration$1
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace java {
	namespace util {
		class Enumeration;
	}
}

namespace java {
	namespace util {

class Enumeration$1 : public ::java::util::Iterator {
	$class(Enumeration$1, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	Enumeration$1();
	void init$(::java::util::Enumeration* this$0);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	::java::util::Enumeration* this$0 = nullptr;
};

	} // util
} // java

#endif // _java_util_Enumeration$1_h_