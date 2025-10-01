#ifndef _java_util_Collections$3_h_
#define _java_util_Collections$3_h_
//$ class java.util.Collections$3
//$ extends java.util.Enumeration

#include <java/util/Enumeration.h>

namespace java {
	namespace util {
		class Collection;
		class Iterator;
	}
}

namespace java {
	namespace util {

class Collections$3 : public ::java::util::Enumeration {
	$class(Collections$3, $NO_CLASS_INIT, ::java::util::Enumeration)
public:
	Collections$3();
	void init$(::java::util::Collection* val$c);
	virtual bool hasMoreElements() override;
	virtual $Object* nextElement() override;
	::java::util::Collection* val$c = nullptr;
	::java::util::Iterator* i = nullptr;
};

	} // util
} // java

#endif // _java_util_Collections$3_h_