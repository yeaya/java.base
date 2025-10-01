#ifndef _sun_util_PreHashedMap$2_h_
#define _sun_util_PreHashedMap$2_h_
//$ class sun.util.PreHashedMap$2
//$ extends java.util.AbstractSet

#include <java/util/AbstractSet.h>

namespace java {
	namespace util {
		class Iterator;
	}
}
namespace sun {
	namespace util {
		class PreHashedMap;
	}
}

namespace sun {
	namespace util {

class PreHashedMap$2 : public ::java::util::AbstractSet {
	$class(PreHashedMap$2, $NO_CLASS_INIT, ::java::util::AbstractSet)
public:
	PreHashedMap$2();
	void init$(::sun::util::PreHashedMap* this$0);
	virtual ::java::util::Iterator* iterator() override;
	virtual int32_t size() override;
	using ::java::util::AbstractSet::toArray;
	::sun::util::PreHashedMap* this$0 = nullptr;
};

	} // util
} // sun

#endif // _sun_util_PreHashedMap$2_h_