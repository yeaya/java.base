#ifndef _sun_util_resources_ParallelListResourceBundle$KeySet_h_
#define _sun_util_resources_ParallelListResourceBundle$KeySet_h_
//$ class sun.util.resources.ParallelListResourceBundle$KeySet
//$ extends java.util.AbstractSet

#include <java/util/AbstractSet.h>

namespace java {
	namespace util {
		class Iterator;
		class ResourceBundle;
		class Set;
	}
}

namespace sun {
	namespace util {
		namespace resources {

class ParallelListResourceBundle$KeySet : public ::java::util::AbstractSet {
	$class(ParallelListResourceBundle$KeySet, $NO_CLASS_INIT, ::java::util::AbstractSet)
public:
	ParallelListResourceBundle$KeySet();
	void init$(::java::util::Set* set, ::java::util::ResourceBundle* parent);
	virtual bool contains(Object$* o) override;
	virtual ::java::util::Iterator* iterator() override;
	virtual int32_t size() override;
	using ::java::util::AbstractSet::toArray;
	::java::util::Set* set = nullptr;
	::java::util::ResourceBundle* parent = nullptr;
};

		} // resources
	} // util
} // sun

#endif // _sun_util_resources_ParallelListResourceBundle$KeySet_h_