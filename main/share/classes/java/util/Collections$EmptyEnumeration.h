#ifndef _java_util_Collections$EmptyEnumeration_h_
#define _java_util_Collections$EmptyEnumeration_h_
//$ class java.util.Collections$EmptyEnumeration
//$ extends java.util.Enumeration

#include <java/util/Enumeration.h>

#pragma push_macro("EMPTY_ENUMERATION")
#undef EMPTY_ENUMERATION

namespace java {
	namespace util {
		class Iterator;
	}
}

namespace java {
	namespace util {

class Collections$EmptyEnumeration : public ::java::util::Enumeration {
	$class(Collections$EmptyEnumeration, 0, ::java::util::Enumeration)
public:
	Collections$EmptyEnumeration();
	void init$();
	virtual ::java::util::Iterator* asIterator() override;
	virtual bool hasMoreElements() override;
	virtual $Object* nextElement() override;
	static ::java::util::Collections$EmptyEnumeration* EMPTY_ENUMERATION;
};

	} // util
} // java

#pragma pop_macro("EMPTY_ENUMERATION")

#endif // _java_util_Collections$EmptyEnumeration_h_