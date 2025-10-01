#ifndef _sun_util_PreHashedMap_h_
#define _sun_util_PreHashedMap_h_
//$ class sun.util.PreHashedMap
//$ extends java.util.AbstractMap

#include <java/lang/Array.h>
#include <java/util/AbstractMap.h>

namespace java {
	namespace util {
		class Set;
	}
}

namespace sun {
	namespace util {

class PreHashedMap : public ::java::util::AbstractMap {
	$class(PreHashedMap, $NO_CLASS_INIT, ::java::util::AbstractMap)
public:
	PreHashedMap();
	void init$(int32_t rows, int32_t size, int32_t shift, int32_t mask);
	virtual ::java::util::Set* entrySet() override;
	virtual $Object* get(Object$* k) override;
	virtual void init($ObjectArray* ht) {}
	virtual ::java::util::Set* keySet() override;
	virtual $Object* put($String* k, Object$* v);
	virtual $Object* put(Object$* k, Object$* v) override;
	using ::java::util::AbstractMap::remove;
	$Object* toV(Object$* x);
	int32_t rows = 0;
	int32_t size$ = 0;
	int32_t shift = 0;
	int32_t mask = 0;
	$ObjectArray* ht = nullptr;
};

	} // util
} // sun

#endif // _sun_util_PreHashedMap_h_