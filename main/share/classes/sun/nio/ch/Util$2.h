#ifndef _sun_nio_ch_Util$2_h_
#define _sun_nio_ch_Util$2_h_
//$ class sun.nio.ch.Util$2
//$ extends java.util.Set

#include <java/lang/Array.h>
#include <java/util/Set.h>

namespace java {
	namespace util {
		class Collection;
		class Iterator;
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class Util$2 : public ::java::util::Set {
	$class(Util$2, $NO_CLASS_INIT, ::java::util::Set)
public:
	Util$2();
	void init$(::java::util::Set* val$s);
	virtual bool add(Object$* o) override;
	virtual bool addAll(::java::util::Collection* coll) override;
	virtual void clear() override;
	virtual bool contains(Object$* o) override;
	virtual bool containsAll(::java::util::Collection* coll) override;
	virtual bool equals(Object$* o) override;
	virtual int32_t hashCode() override;
	virtual bool isEmpty() override;
	virtual ::java::util::Iterator* iterator() override;
	virtual bool remove(Object$* o) override;
	virtual bool removeAll(::java::util::Collection* coll) override;
	virtual bool retainAll(::java::util::Collection* coll) override;
	virtual int32_t size() override;
	using ::java::util::Set::toArray;
	virtual $ObjectArray* toArray() override;
	virtual $ObjectArray* toArray($ObjectArray* a) override;
	virtual $String* toString() override;
	::java::util::Set* val$s = nullptr;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_Util$2_h_