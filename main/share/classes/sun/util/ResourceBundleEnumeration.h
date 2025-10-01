#ifndef _sun_util_ResourceBundleEnumeration_h_
#define _sun_util_ResourceBundleEnumeration_h_
//$ class sun.util.ResourceBundleEnumeration
//$ extends java.util.Enumeration

#include <java/util/Enumeration.h>

namespace java {
	namespace util {
		class Iterator;
		class Set;
	}
}

namespace sun {
	namespace util {

class ResourceBundleEnumeration : public ::java::util::Enumeration {
	$class(ResourceBundleEnumeration, $NO_CLASS_INIT, ::java::util::Enumeration)
public:
	ResourceBundleEnumeration();
	void init$(::java::util::Set* set, ::java::util::Enumeration* enumeration);
	virtual bool hasMoreElements() override;
	virtual $Object* nextElement() override;
	::java::util::Set* set = nullptr;
	::java::util::Iterator* iterator = nullptr;
	::java::util::Enumeration* enumeration = nullptr;
	$String* next = nullptr;
};

	} // util
} // sun

#endif // _sun_util_ResourceBundleEnumeration_h_